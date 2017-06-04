-- Proof of concept of using FFmpeg with LOVE2D

local love = require("love")
local ffi = require("ffi")
local avcodec = ffi.load("avcodec-57")
local avformat = ffi.load("avformat-57")
local avutil = ffi.load("avutil-55")
local swscale = ffi.load("swscale-4")
local swresample = ffi.load("swresample-2")
local FutureGlasses = {_mt = {}, _playing = {}}

local decl = love.filesystem.read("ffmpeg_include_win_"..jit.arch..".h")
ffi.cdef(decl)
ffi.cdef[[
int av_image_fill_arrays(uint8_t *dst_data[4], int dst_linesize[4],
                         const uint8_t *src,
                         enum AVPixelFormat pix_fmt, int width, int height, int align);
int av_opt_set_int     (void *obj, const char *name, int64_t     val, int search_flags);
int av_opt_set_sample_fmt(void *obj, const char *name, enum AVSampleFormat fmt, int search_flags);

typedef struct SwrContext SwrContext;
struct SwrContext *swr_alloc(void);
int swr_init(struct SwrContext *s);
void swr_free(struct SwrContext **s);
]]
avformat.av_register_all()
avcodec.avcodec_register_all()

function file_get_contents(x)
	local a = assert(io.open(x, "rb"))
	local b = a:read("*a")
	a:close()
	
	return b
end

local function av_q2d(r)
	return r.num / r.den
end

function FutureGlasses._mt.Play(this)
	if this.Playing then return end
	
	this.Playing = true
	FutureGlasses._playing[#FutureGlasses._playing + 1] = this
end

function FutureGlasses._mt.Pause(this)
	if this.Playing == false then return end
	
	for i = 1, #FutureGlasses._playing do
		if FutureGlasses._playing[i] == this then
			this.Playing = false
			
			return
		end
	end
end

function FutureGlasses._mt.Cleanup(this)
	if this.SwrCtx ~= nil and this.SwrCtx[0] ~= nil then
		swresample.swr_free(this.SwrCtx)
		this.SwrCtx = nil
	end
	
	if this.SwsCtx ~= nil then
		swscale.sws_freeContext(this.SwsCtx)
		this.SwsCtx = nil
	end
	
	if this.Frame ~= nil then
		avutil.free(this.Frame)
		this.Frame = nil
	end
	
	if this.FrameRGB ~= nil then
		avutil.free(this.FrameRGB)
		this.FrameRGB = nil
	end
	
	if this.CodecContext ~= nil then
		avcodec.avcodec_close(this.CodecContext)
		this.CodecContext = nil
	end
	
	if this.Codec ~= nil then
		avcodec.avcodec_close(this.Codec)
		this.Codec = nil
	end
	
	if this.FmtContext ~= nil then
		avformat.avformat_close_input(this.FmtContext)
		this.FmtContext = nil
	end
end

function FutureGlasses.OpenVideo(path, loadaudio)
	local temp = {
		Playing = false,
		CurrentTimer = 0
	}
	local codec
	
	local function null_assert(expr, msg)
		if not(expr) then
			FutureGlasses._mt.Cleanup(temp)
			assert(false, msg)
		end
	end
	
	-- Load video
	temp.FmtContext = ffi.new("AVFormatContext*[1]")
	assert(avformat.avformat_open_input(temp.FmtContext, path, nil, nil) == 0, "Cannot open file")
	null_assert(avformat.avformat_find_stream_info(temp.FmtContext[0], nil) == 0)
	
	for i = 1, temp.FmtContext[0].nb_streams do
		local codec_type = temp.FmtContext[0].streams[i - 1].codec.codec_type
		
		if codec_type == "AVMEDIA_TYPE_VIDEO" and not(temp.VideoStreamIndex) then
			temp.VideoStreamIndex = i - 1
		elseif codec_type == "AVMEDIA_TYPE_AUDIO" and not(temp.AudioStreamIndex) then
			temp.AudioStreamIndex = i - 1
		end
	end
	null_assert(temp.VideoStreamIndex, "Video stream not found")
	temp.VideoStream = temp.FmtContext[0].streams[temp.VideoStreamIndex]
	
	if temp.AudioStreamIndex and loadaudio then
		-- Initialize audio stream
		temp.AudioStream = temp.FmtContext[0].streams[temp.AudioStreamIndex]
		local SampleCountLove2D = math.ceil((tonumber(temp.FmtContext[0].duration) / 1000000 + 1) * 44100)
		
		temp.SoundDataSampleCount = SampleCountLove2D
		temp.SoundData = love.sound.newSoundData(SampleCountLove2D, 44100, 16, 2)
		temp.SoundDataPointer = temp.SoundData:getPointer()
		temp.SwrCtx = ffi.new("SwrContext*[1]")
		temp.SwrCtx[0] = swresample.swr_alloc();
		
		avutil.av_opt_set_int(temp.SwrCtx[0], "in_channel_layout", temp.AudioStream.codec.channel_layout, 0);
		avutil.av_opt_set_int(temp.SwrCtx[0], "out_channel_layout", 3, 0);
		avutil.av_opt_set_int(temp.SwrCtx[0], "in_sample_rate", temp.AudioStream.codec.sample_rate, 0);
		avutil.av_opt_set_int(temp.SwrCtx[0], "out_sample_rate", 44100, 0);
		avutil.av_opt_set_sample_fmt(temp.SwrCtx[0], "in_sample_fmt", temp.AudioStream.codec.sample_fmt, 0);
		avutil.av_opt_set_sample_fmt(temp.SwrCtx[0], "out_sample_fmt", 2, 0);
		
		null_assert(swresample.swr_init(temp.SwrCtx[0]) >= 0, "Failed to initialize swresample")
	end
	
	-- Find decoder
	temp.Codec = avcodec.avcodec_find_decoder(temp.VideoStream.codec.codec_id)
	null_assert(temp.Codec ~= nil, "Can't find codec")
	
	--avformat.av_dump_format(temp.FmtContext[0], temp.VideoStreamIndex, "nil", 0)
	
	-- Alloc codec context
	temp.CodecContext = avcodec.avcodec_alloc_context3(temp.Codec)
	null_assert(avcodec.avcodec_copy_context(temp.CodecContext, temp.VideoStream.codec) == 0, "Failed to copy context")
	null_assert(avcodec.avcodec_open2(temp.CodecContext, temp.Codec, nil) >= 0, "Cannot open codec")
	
	-- Init frame
	temp.Frame = avutil.av_frame_alloc()
	null_assert(temp.Frame ~= nil, "Failed to initialize frame")
	temp.FrameRGB = avutil.av_frame_alloc()
	null_assert(temp.FrameRGB ~= nil, "Failed to initialize RGB frame")
	
	-- We don't need to calculate the memory size. RGBA is always w*h*4
	-- And ImageData will do the memory allocation automatically with just width and height information
	temp.ImageData = love.image.newImageData(temp.CodecContext.width, temp.CodecContext.height)
	temp.Image = love.graphics.newImage(temp.ImageData)
	
	-- Instead of creating new memory to store RGBA decoded pixels and do memcpy later
	-- Just pass the ImageData pointer directly to FFmpeg
	temp.ImageDataPtr = ffi.cast("uint8_t*", temp.ImageData:getPointer())
	avutil.av_image_fill_arrays(
		temp.FrameRGB.data, temp.FrameRGB.linesize, temp.ImageDataPtr,
		"AV_PIX_FMT_RGBA", temp.CodecContext.width, temp.CodecContext.height, 1
	)
	
	-- Then we create our sws context
	temp.SwsCtx = swscale.sws_getContext(
		temp.CodecContext.width,
		temp.CodecContext.height,
		temp.CodecContext.pix_fmt,
		temp.CodecContext.width,
		temp.CodecContext.height,
		"AV_PIX_FMT_RGBA",		-- Don't forget that ImageData expects RGBA values
		2, -- SWS_BILINEAR
		nil, nil, nil
	)
	
	temp.TimeBase = temp.VideoStream.time_base
	
	return setmetatable(temp, {__index = FutureGlasses._mt})
end

local packet = ffi.new("AVPacket[1]")
local framefinished = ffi.new("int[1]")
function FutureGlasses.Update(deltaT)
	-- deltaT in seconds
	for i = 1, #FutureGlasses._playing do
		local obj = FutureGlasses._playing[i]
		obj.CurrentTimer = obj.CurrentTimer + deltaT
		
		while obj.PresentationTS == nil or obj.CurrentTimer >= obj.PresentationTS do
			-- Step
			framefinished[0] = 0
			
			local readframe = avformat.av_read_frame(obj.FmtContext[0], packet)
			local stop_decode = false
			while readframe >= 0 do
				local stream_index = packet[0].stream_index
				if stream_index == obj.VideoStreamIndex then
					local effortts = avutil.av_frame_get_best_effort_timestamp(obj.Frame)
					
					if effortts ~= -9223372036854775808LL then
						obj.PresentationTS = tonumber(effortts - obj.FmtContext[0].start_time) / obj.TimeBase.den * obj.TimeBase.num
					end
					
					avcodec.avcodec_decode_video2(obj.CodecContext, obj.Frame, framefinished, packet)
					
				end
				
				avcodec.av_free_packet(packet)
				
				if framefinished[0] > 0 then
					swscale.sws_scale(obj.SwsCtx,
						ffi.cast("const uint8_t *const *", obj.Frame.data),
						obj.Frame.linesize, 0, obj.CodecContext.height,
						obj.FrameRGB.data, obj.FrameRGB.linesize
					)
					
					break
				end
				
				readframe = avformat.av_read_frame(obj.FmtContext[0], packet)
			end
			
			if readframe >= 0 then
				obj.Image:refresh()
			else
				print("Readframe returns less than 0", readframe)
				obj.Playing = false
				table.remove(FutureGlasses._playing, i)
			end
		end
	end
end

return FutureGlasses
