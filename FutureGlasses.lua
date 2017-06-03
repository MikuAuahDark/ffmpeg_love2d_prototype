-- Proof of concept of using FFmpeg with LOVE2D

local love = require("love")
local ffi = require("ffi")
local avcodec = ffi.load("avcodec-57")
local avformat = ffi.load("avformat-57")
local avutil = ffi.load("avutil-55")
local swscale = ffi.load("swscale-4")
local FutureGlasses = {_mt = {}, _playing = {}}

local declaration = love.filesystem.read("ffmpeg_include_win_"..jit.arch..".h")
ffi.cdef(declaration)
ffi.cdef[[
int av_image_fill_arrays(uint8_t *dst_data[4], int dst_linesize[4],
                         const uint8_t *src,
                         enum AVPixelFormat pix_fmt, int width, int height, int align);
]]
avformat.av_register_all()
avcodec.avcodec_register_all()

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

function FutureGlasses.OpenVideo(path)
	local temp = {
		Playing = false,
		CurrentTimer = 0
	}
	local video_stream_index
	local codec
	local codeccontext
	local fmtcontext
	local frame, frame_rgb
	local sws_ctx
	
	local function cleanup()
		if frame ~= nil then
			avutil.free(frame)
			frame = nil
		end
		
		if frame_rgb ~= nil then
			avutil.free(frame_rgb)
			frame_rgb = nil
		end
		
		if codeccontext ~= nil then
			avcodec.avcodec_close(codeccontext)
			codeccontext = nil
		end
		
		if codec ~= nil then
			avcodec.avcodec_close(codec)
			codec = nil
		end
		
		if fmtcontext ~= nil then
			avformat.avformat_close_input(fmtcontext)
			fmtcontext = nil
		end
	end
	
	local function null_assert(expr, msg)
		if not(expr) then
			cleanup()
			assert(false, msg)
		end
	end
	
	-- Load video
	fmtcontext = ffi.new("AVFormatContext*[1]")
	assert(avformat.avformat_open_input(fmtcontext, path, nil, nil) == 0, "Cannot open file")
	null_assert(avformat.avformat_find_stream_info(fmtcontext[0], nil) == 0)
	
	for i = 1, fmtcontext[0].nb_streams do
		if fmtcontext[0].streams[i - 1].codec.codec_type == "AVMEDIA_TYPE_VIDEO" then
			video_stream_index = i - 1
			break
		end
	end
	null_assert(video_stream_index, "Video stream not found")
	
	-- Find decoder
	codec = avcodec.avcodec_find_decoder(fmtcontext[0].streams[video_stream_index].codec.codec_id)
	null_assert(codec ~= nil, "Can't find codec")
	
	avformat.av_dump_format(fmtcontext[0], video_stream_index, "nil", 0)
	
	-- Get FPS
	do
		local videofpsrat = fmtcontext[0].streams[video_stream_index].avg_frame_rate
		print(videofpsrat.num, videofpsrat.den)
		
		if videofpsrat.den == 0 then
			videofpstrat = fmtcontext[0].streams[video_stream_index].r_frame_rate
		end
		
		print(videofpsrat.num, videofpsrat.den)
		temp.MsPerFrame = 1 / (videofpsrat.num / videofpsrat.den)
	end
	
	-- Alloc codec context
	codeccontext = avcodec.avcodec_alloc_context3(codec)
	null_assert(avcodec.avcodec_copy_context(codeccontext, fmtcontext[0].streams[video_stream_index].codec) == 0, "Failed to copy context")
	null_assert(avcodec.avcodec_open2(codeccontext, codec, nil) >= 0, "Cannot open codec")
	
	-- Init frame
	frame = avutil.av_frame_alloc()
	null_assert(frame ~= nil, "Failed to initialize frame")
	frame_rgb = avutil.av_frame_alloc()
	null_assert(frame_rgb ~= nil, "Failed to initialize frame")
	
	-- Create ImageData
	temp.ImageData = love.image.newImageData(codeccontext.width, codeccontext.height)
	temp.Image = love.graphics.newImage(temp.ImageData)
	temp.ImageDataPtr = ffi.cast("uint8_t*", temp.ImageData:getPointer())
	
	avutil.av_image_fill_arrays(
		frame_rgb.data, frame_rgb.linesize, temp.ImageDataPtr,
		"AV_PIX_FMT_RGBA", codeccontext.width, codeccontext.height, 1
	)
	
	sws_ctx = swscale.sws_getContext(
		codeccontext.width,
		codeccontext.height,
		codeccontext.pix_fmt,
		codeccontext.width,
		codeccontext.height,
		"AV_PIX_FMT_RGBA",
		2, -- SWS_BILINEAR
		nil, nil, nil
	)
	
	temp.FmtContext = fmtcontext
	temp.VideoStreamIndex = video_stream_index
	temp.Codec = codec
	temp.CodecContext = codeccontext
	temp.Frame = frame
	temp.FrameRGB = frame_rgb
	temp.SwsCtx = sws_ctx
	temp.TimeBase = fmtcontext[0].streams[video_stream_index].time_base
	
	return setmetatable(temp, {__index = FutureGlasses._mt})
end

local packet = ffi.new("AVPacket[1]")
local framefinished = ffi.new("int[1]")
function FutureGlasses.Update(deltaT)
	-- deltaT in seconds
	for i = 1, #FutureGlasses._playing do
		local obj = FutureGlasses._playing[i]
		obj.CurrentTimer = obj.CurrentTimer + deltaT
		
		while obj.CurrentTimer >= obj.MsPerFrame do
			-- Step
			framefinished[0] = 0
			
			local readframe = avformat.av_read_frame(obj.FmtContext[0], packet)
			while readframe >= 0 do
				if packet[0].stream_index == obj.VideoStreamIndex then
					local effortts = avutil.av_frame_get_best_effort_timestamp(obj.Frame)
					if effortts ~= -9223372036854775808LL then
						print(effortts, tonumber(effortts) / obj.TimeBase.den * obj.TimeBase.num)
					else
						io.write("Unknown PTS\n")
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
				obj.Playing = false
				table.remove(FutureGlasses._playing, i)
			end
			
			obj.CurrentTimer = obj.CurrentTimer - obj.MsPerFrame
		end
	end
end

return FutureGlasses
