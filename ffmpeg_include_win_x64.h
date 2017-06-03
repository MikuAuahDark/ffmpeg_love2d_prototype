
unsigned avutil_version(void);
const char *av_version_info(void);
const char *avutil_configuration(void);
const char *avutil_license(void);
enum AVMediaType {
    AVMEDIA_TYPE_UNKNOWN = -1,  
    AVMEDIA_TYPE_VIDEO,
    AVMEDIA_TYPE_AUDIO,
    AVMEDIA_TYPE_DATA,          
    AVMEDIA_TYPE_SUBTITLE,
    AVMEDIA_TYPE_ATTACHMENT,    
    AVMEDIA_TYPE_NB
};
const char *av_get_media_type_string(enum AVMediaType media_type);
enum AVPictureType {
    AV_PICTURE_TYPE_NONE = 0, 
    AV_PICTURE_TYPE_I,     
    AV_PICTURE_TYPE_P,     
    AV_PICTURE_TYPE_B,     
    AV_PICTURE_TYPE_S,     
    AV_PICTURE_TYPE_SI,    
    AV_PICTURE_TYPE_SP,    
    AV_PICTURE_TYPE_BI,    
};
char av_get_picture_type_char(enum AVPictureType pict_type);
#pragma pack(push,8)
#pragma pack(push,8)
typedef unsigned __int64    uintptr_t;
typedef char *  va_list;
extern void __cdecl __va_start(va_list *, ...);
#pragma pack(pop)
typedef unsigned __int64    size_t;
typedef size_t rsize_t;
typedef __int64             intptr_t;
typedef __int64             ptrdiff_t;
typedef unsigned short wchar_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int errno_t;
typedef  long __time32_t;   
typedef __int64 __time64_t;     
typedef __time64_t time_t;      
  void __cdecl _invalid_parameter_noinfo(void);
  __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);
 __declspec(noreturn)
void __cdecl _invoke_watson(  const wchar_t *,   const wchar_t *,   const wchar_t *, unsigned int, uintptr_t);
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;
typedef struct localerefcount {
        char *locale;
        wchar_t *wlocale;
        int *refcount;
        int *wrefcount;
} locrefcount;
typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned int lc_time_cp;
        locrefcount lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
        wchar_t * locale_name[6];
} threadlocinfo;
#pragma pack(pop)
 extern int * __cdecl _errno(void);
errno_t __cdecl _set_errno(  int _Value);
errno_t __cdecl _get_errno(  int * _Value);
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long long          intmax_t;
typedef unsigned long long uintmax_t;
typedef struct {
   intmax_t quot;
   intmax_t rem;
} imaxdiv_t;
imaxdiv_t __cdecl imaxdiv(intmax_t numer, intmax_t denom)
{
   imaxdiv_t result;
   result.quot = numer / denom;
   result.rem = numer % denom;
   if (numer < 0 && result.rem > 0) {
      
      ++result.quot;
      result.rem -= denom;
   }
   return result;
}
#pragma pack(push,8)
struct _exception {
        int type;       
        char *name;     
        double arg1;    
        double arg2;    
        double retval;  
        } ;
struct _complex {
        double x,y; 
        } ;
 extern double _HUGE;
        int     __cdecl abs(  int _X);
        long    __cdecl labs(  long _X);
        long long __cdecl llabs(  long long _X);
        double  __cdecl acos(  double _X);
        double  __cdecl asin(  double _X);
        double  __cdecl atan(  double _X);
        double  __cdecl atan2(  double _Y,   double _X);
   double __cdecl _copysign (  double _Number,   double _Sign);
   double __cdecl _chgsign (  double _X);
        double  __cdecl cos(  double _X);
        double  __cdecl cosh(  double _X);
        double  __cdecl exp(  double _X);
 double  __cdecl fabs(  double _X);
        double  __cdecl fmod(  double _X,   double _Y);
        double  __cdecl log(  double _X);
        double  __cdecl log10(  double _X);
        double  __cdecl pow(  double _X,   double _Y);
        double  __cdecl sin(  double _X);
        double  __cdecl sinh(  double _X);
        double  __cdecl tan(  double _X);
        double  __cdecl tanh(  double _X);
  double  __cdecl sqrt(  double _X);
   double  __cdecl atof(  const char *_String);
   double  __cdecl _atof_l(  const char *_String,   _locale_t _Locale);
 double  __cdecl _cabs(  struct _complex _Complex_value);
 double  __cdecl ceil(  double _X);
 double  __cdecl floor(  double _X);
 double  __cdecl frexp(  double _X,   int * _Y);
 double  __cdecl _hypot(  double _X,   double _Y);
 float   __cdecl _hypotf(  float _X,   float _Y);
 double  __cdecl _j0(  double _X );
 double  __cdecl _j1(  double _X );
 double  __cdecl _jn(int _X,   double _Y);
 double  __cdecl ldexp(  double _X,   int _Y);
        int     __cdecl _matherr(  struct _exception * _Except);
 double  __cdecl modf(  double _X,   double * _Y);
 double  __cdecl _y0(  double _X);
 double  __cdecl _y1(  double _X);
 double  __cdecl _yn(  int _X,   double _Y);
static __inline double __cdecl hypot(  double _X,   double _Y)
{
    return _hypot(_X, _Y);
}
static __inline float __cdecl hypotf(  float _X,   float _Y)
{
    return _hypotf(_X, _Y);
}
 float  __cdecl acosf(   float _X);
 float  __cdecl asinf(   float _X);
 float  __cdecl atanf(   float _X);
 float  __cdecl atan2f(   float  _Y,   float  _X);
 float  __cdecl cosf(   float _X);
 float  __cdecl sinf(   float _X);
 float  __cdecl tanf(   float _X);
 float  __cdecl coshf(   float _X);
 float  __cdecl sinhf(   float _X);
 float  __cdecl tanhf(   float _X);
 float  __cdecl expf(   float  _X);
 float  __cdecl logf(   float  _X);
 float  __cdecl log10f(   float  _X);
 float  __cdecl modff(   float  _X,   float*  _Y);
 float  __cdecl powf(   float _X,   float _Y);
 float  __cdecl sqrtf(   float  _X);
 float  __cdecl ceilf(   float  _X);
 float  __cdecl floorf(   float  _X);
 float  __cdecl fmodf(   float  _X,   float _Y);
 float __cdecl _copysignf (  float _Number,   float _Sign);
 float __cdecl _chgsignf (  float _X);
 float __cdecl _logbf(  float _X);
 float __cdecl _nextafterf(  float _X,   float _Y);
 int    __cdecl _finitef(  float _X);
 int    __cdecl _isnanf(  float _X);
 int    __cdecl _fpclassf(  float _X);
 extern double HUGE;
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_cabs" ". See online help for details."))  double  __cdecl cabs(  struct _complex _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_j0" ". See online help for details."))  double  __cdecl j0(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_j1" ". See online help for details."))  double  __cdecl j1(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_jn" ". See online help for details."))  double  __cdecl jn(  int _X,   double _Y);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_y0" ". See online help for details."))  double  __cdecl y0(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_y1" ". See online help for details."))  double  __cdecl y1(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_yn" ". See online help for details."))  double  __cdecl yn(  int _X,   double _Y);
#pragma pack(pop)
#pragma pack(push,8)
struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
        };
typedef struct _iobuf FILE;
 FILE * __cdecl __iob_func(void);
typedef __int64 fpos_t;
   int __cdecl _filbuf(  FILE * _File );
  int __cdecl _flsbuf(  int _Ch,   FILE * _File);
   FILE * __cdecl _fsopen(  const char * _Filename,   const char * _Mode,   int _ShFlag);
 void __cdecl clearerr(  FILE * _File);
  errno_t __cdecl clearerr_s(  FILE * _File );
  int __cdecl fclose(  FILE * _File);
  int __cdecl _fcloseall(void);
   FILE * __cdecl _fdopen(  int _FileHandle,   const char * _Mode);
   int __cdecl feof(  FILE * _File);
   int __cdecl ferror(  FILE * _File);
  int __cdecl fflush(  FILE * _File);
  int __cdecl fgetc(  FILE * _File);
  int __cdecl _fgetchar(void);
  int __cdecl fgetpos(  FILE * _File ,   fpos_t * _Pos);
  char * __cdecl fgets(  char * _Buf,   int _MaxCount,   FILE * _File);
   int __cdecl _fileno(  FILE * _File);
   char * __cdecl _tempnam(  const char * _DirName,   const char * _FilePrefix);
  int __cdecl _flushall(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl fopen(  const char * _Filename,   const char * _Mode);
  errno_t __cdecl fopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode);
  int __cdecl fprintf(  FILE * _File,     const char * _Format, ...);
  int __cdecl fprintf_s(  FILE * _File,     const char * _Format, ...);
  int __cdecl fputc(  int _Ch,   FILE * _File);
  int __cdecl _fputchar(  int _Ch);
  int __cdecl fputs(  const char * _Str,   FILE * _File);
  size_t __cdecl fread(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  size_t __cdecl fread_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "freopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl freopen(  const char * _Filename,   const char * _Mode,   FILE * _File);
  errno_t __cdecl freopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode,   FILE * _OldFile);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl fscanf(  FILE * _File,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _fscanf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl fscanf_s(  FILE * _File,     const char * _Format, ...);
  int __cdecl _fscanf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl fsetpos(  FILE * _File,   const fpos_t * _Pos);
  int __cdecl fseek(  FILE * _File,   long _Offset,   int _Origin);
   long __cdecl ftell(  FILE * _File);
  int __cdecl _fseeki64(  FILE * _File,   __int64 _Offset,   int _Origin);
   __int64 __cdecl _ftelli64(  FILE * _File);
  size_t __cdecl fwrite(  const void * _Str,   size_t _Size,   size_t _Count,   FILE * _File);
   int __cdecl getc(  FILE * _File);
   int __cdecl getchar(void);
   int __cdecl _getmaxstdio(void);
 char * __cdecl gets_s(  char * _Buf,   rsize_t _Size);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "gets_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl gets(  char *_Buffer);
  int __cdecl _getw(  FILE * _File);
 void __cdecl perror(  const char * _ErrMsg);
  int __cdecl _pclose(  FILE * _File);
   FILE * __cdecl _popen(  const char * _Command,   const char * _Mode);
  int __cdecl printf(    const char * _Format, ...);
  int __cdecl printf_s(    const char * _Format, ...);
  int __cdecl putc(  int _Ch,   FILE * _File);
  int __cdecl putchar(  int _Ch);
  int __cdecl puts(  const char * _Str);
  int __cdecl _putw(  int _Word,   FILE * _File);
 int __cdecl remove(  const char * _Filename);
   int __cdecl rename(  const char * _OldFilename,   const char * _NewFilename);
 int __cdecl _unlink(  const char * _Filename);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_unlink" ". See online help for details."))  int __cdecl unlink(  const char * _Filename);
 void __cdecl rewind(  FILE * _File);
  int __cdecl _rmtmp(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "scanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl scanf(    const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_scanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _scanf_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl scanf_s(    const char * _Format, ...);
  int __cdecl _scanf_s_l(    const char * _Format,   _locale_t _Locale, ...);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "setvbuf" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl setbuf(  FILE * _File,     char * _Buffer);
  int __cdecl _setmaxstdio(  int _Max);
  unsigned int __cdecl _set_output_format(  unsigned int _Format);
  unsigned int __cdecl _get_output_format(void);
  int __cdecl setvbuf(  FILE * _File,   char * _Buf,   int _Mode,   size_t _Size);
  int __cdecl _snprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl sprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, ...);
   int __cdecl _scprintf(    const char * _Format, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "sscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl sscanf(  const char * _Src,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _sscanf_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl sscanf_s(  const char * _Src,     const char * _Format, ...);
  int __cdecl _sscanf_s_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snscanf(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snscanf_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snscanf_s(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _snscanf_s_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpfile_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl tmpfile(void);
  errno_t __cdecl tmpfile_s(    FILE ** _File);
  errno_t __cdecl tmpnam_s(  char * _Buf,   rsize_t _Size);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl tmpnam(  char *_Buffer);
  int __cdecl ungetc(  int _Ch,   FILE * _File);
  int __cdecl vfprintf(  FILE * _File,     const char * _Format, va_list _ArgList);
  int __cdecl vfprintf_s(  FILE * _File,     const char * _Format, va_list _ArgList);
  int __cdecl vprintf(    const char * _Format, va_list _ArgList);
  int __cdecl vprintf_s(    const char * _Format, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl vsnprintf(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
  int __cdecl vsnprintf_s(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
  int __cdecl _vsnprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snprintf(    char *_Dest,   size_t _Count,     const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnprintf(    char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
 int __cdecl vsprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "sprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl sprintf(  char *_Dest,  const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
   int __cdecl _vscprintf(    const char * _Format, va_list _ArgList);
  int __cdecl _snprintf_c(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _vsnprintf_c(  char *_DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
  int __cdecl _fprintf_p(  FILE * _File,     const char * _Format, ...);
  int __cdecl _printf_p(    const char * _Format, ...);
  int __cdecl _sprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _vfprintf_p(  FILE * _File,     const char * _Format, va_list _ArgList);
  int __cdecl _vprintf_p(    const char * _Format, va_list _ArgList);
  int __cdecl _vsprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
   int __cdecl _scprintf_p(    const char * _Format, ...);
   int __cdecl _vscprintf_p(    const char * _Format, va_list _ArgList);
 int __cdecl _set_printf_count_output(  int _Value);
 int __cdecl _get_printf_count_output(void);
  int __cdecl _printf_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _printf_p_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _printf_s_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vprintf_s_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _fprintf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _fprintf_p_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _fprintf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vfprintf_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfprintf_p_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfprintf_s_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _sprintf_l(    char * _DstBuf,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _sprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _sprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsprintf_l(    char * _DstBuf,   const char * _Format,   _locale_t, va_list _ArgList);
  int __cdecl _vsprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char* _Format,   _locale_t _Locale,  va_list _ArgList);
  int __cdecl _vsprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _scprintf_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _scprintf_p_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vscprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vscprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snprintf_c_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnprintf_c_l(  char * _DstBuf,   size_t _MaxCount, const char *,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char* _Format,  _locale_t _Locale, va_list _ArgList);
   FILE * __cdecl _wfsopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   int _ShFlag);
  wint_t __cdecl fgetwc(  FILE * _File);
  wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl _fputwchar(  wchar_t _Ch);
   wint_t __cdecl getwc(  FILE * _File);
   wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl putwchar(  wchar_t _Ch);
  wint_t __cdecl ungetwc(  wint_t _Ch,   FILE * _File);
  wchar_t * __cdecl fgetws(  wchar_t * _Dst,   int _SizeInWords,   FILE * _File);
  int __cdecl fputws(  const wchar_t * _Str,   FILE * _File);
  wchar_t * __cdecl _getws_s(  wchar_t * _Str,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_getws_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _getws(  wchar_t *_String);
  int __cdecl _putws(  const wchar_t * _Str);
  int __cdecl fwprintf(  FILE * _File,     const wchar_t * _Format, ...);
  int __cdecl fwprintf_s(  FILE * _File,     const wchar_t * _Format, ...);
  int __cdecl wprintf(    const wchar_t * _Format, ...);
  int __cdecl wprintf_s(    const wchar_t * _Format, ...);
   int __cdecl _scwprintf(    const wchar_t * _Format, ...);
  int __cdecl vfwprintf(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl vfwprintf_s(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl vwprintf(    const wchar_t * _Format, va_list _ArgList);
  int __cdecl vwprintf_s(    const wchar_t * _Format, va_list _ArgList);
 int __cdecl swprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, ...);
 int __cdecl vswprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl _swprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, ...);
  int __cdecl _vswprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl _snwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, ...);
  int __cdecl _vsnwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
  int __cdecl _fwprintf_p(  FILE * _File,     const wchar_t * _Format, ...);
  int __cdecl _wprintf_p(    const wchar_t * _Format, ...);
  int __cdecl _vfwprintf_p(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl _vwprintf_p(    const wchar_t * _Format, va_list _ArgList);
  int __cdecl _swprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, ...);
  int __cdecl _vswprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
   int __cdecl _scwprintf_p(    const wchar_t * _Format, ...);
   int __cdecl _vscwprintf_p(    const wchar_t * _Format, va_list _ArgList);
  int __cdecl _wprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _wprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _wprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _fwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _fwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _fwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vfwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _swprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _swprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _swprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vswprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vswprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vswprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
   int __cdecl _scwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
   int __cdecl _scwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
   int __cdecl _vscwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _snwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _swprintf(    wchar_t *_Dest,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _vswprintf(    wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "__swprintf_l_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __swprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __vswprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
static __inline int swprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, ...)
{
    va_list _Arglist;
    int _Ret;
    ( __va_start(&_Arglist, _Format) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
static __inline int __cdecl vswprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, ((void *)0), _Ap);
}
static __inline int _swprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    int _Ret;
    ( __va_start(&_Arglist, _Plocinfo) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
static __inline int __cdecl _vswprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap);
}
   wchar_t * __cdecl _wtempnam(  const wchar_t * _Directory,   const wchar_t * _FilePrefix);
   int __cdecl _vscwprintf(    const wchar_t * _Format, va_list _ArgList);
   int __cdecl _vscwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl fwscanf(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _fwscanf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl fwscanf_s(  FILE * _File,     const wchar_t * _Format, ...);
  int __cdecl _fwscanf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "swscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl swscanf(  const wchar_t * _Src,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _swscanf_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl swscanf_s(  const wchar_t *_Src,     const wchar_t * _Format, ...);
  int __cdecl _swscanf_s_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwscanf(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwscanf_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _snwscanf_s(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
  int __cdecl _snwscanf_s_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl wscanf(    const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _wscanf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl wscanf_s(    const wchar_t * _Format, ...);
  int __cdecl _wscanf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
   FILE * __cdecl _wfdopen(  int _FileHandle ,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl _wfopen(  const wchar_t * _Filename,   const wchar_t * _Mode);
  errno_t __cdecl _wfopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfreopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl _wfreopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
  errno_t __cdecl _wfreopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
 void __cdecl _wperror(  const wchar_t * _ErrMsg);
   FILE * __cdecl _wpopen(  const wchar_t *_Command,   const wchar_t * _Mode);
 int __cdecl _wremove(  const wchar_t * _Filename);
  errno_t __cdecl _wtmpnam_s(  wchar_t * _DstBuf,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wtmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wtmpnam(  wchar_t *_Buffer);
  wint_t __cdecl _fgetwc_nolock(  FILE * _File);
  wint_t __cdecl _fputwc_nolock(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl _ungetwc_nolock(  wint_t _Ch,   FILE * _File);
 void __cdecl _lock_file(  FILE * _File);
 void __cdecl _unlock_file(  FILE * _File);
  int __cdecl _fclose_nolock(  FILE * _File);
  int __cdecl _fflush_nolock(  FILE * _File);
  size_t __cdecl _fread_nolock(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  size_t __cdecl _fread_nolock_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  int __cdecl _fseek_nolock(  FILE * _File,   long _Offset,   int _Origin);
   long __cdecl _ftell_nolock(  FILE * _File);
  int __cdecl _fseeki64_nolock(  FILE * _File,   __int64 _Offset,   int _Origin);
   __int64 __cdecl _ftelli64_nolock(  FILE * _File);
  size_t __cdecl _fwrite_nolock(  const void * _DstBuf,   size_t _Size,   size_t _Count,   FILE * _File);
  int __cdecl _ungetc_nolock(  int _Ch,   FILE * _File);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tempnam" ". See online help for details."))  char * __cdecl tempnam(  const char * _Directory,   const char * _FilePrefix);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcloseall" ". See online help for details."))  int __cdecl fcloseall(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fdopen" ". See online help for details."))  FILE * __cdecl fdopen(  int _FileHandle,   const char * _Format);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fgetchar" ". See online help for details."))  int __cdecl fgetchar(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fileno" ". See online help for details."))  int __cdecl fileno(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_flushall" ". See online help for details."))  int __cdecl flushall(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fputchar" ". See online help for details."))  int __cdecl fputchar(  int _Ch);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_getw" ". See online help for details."))  int __cdecl getw(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putw" ". See online help for details."))  int __cdecl putw(  int _Ch,   FILE * _File);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_rmtmp" ". See online help for details."))  int __cdecl rmtmp(void);
#pragma pack(pop)
#pragma pack(push,8)
typedef int (__cdecl * _onexit_t)(void);
typedef struct _div_t {
        int quot;
        int rem;
} div_t;
typedef struct _ldiv_t {
        long quot;
        long rem;
} ldiv_t;
typedef struct _lldiv_t {
        long long quot;
        long long rem;
} lldiv_t;
#pragma pack(4)
typedef struct {
    unsigned char ld[10];
} _LDOUBLE;
#pragma pack()
typedef struct {
        double x;
} _CRT_DOUBLE;
typedef struct {
    float f;
} _CRT_FLOAT;
typedef struct {
        
        long double x;
} _LONGDOUBLE;
#pragma pack(4)
typedef struct {
    unsigned char ld12[12];
} _LDBL12;
#pragma pack()
 extern int __mb_cur_max;
 int __cdecl ___mb_cur_max_func(void);
 int __cdecl ___mb_cur_max_l_func(_locale_t);
typedef void (__cdecl *_purecall_handler)(void); 
 _purecall_handler __cdecl _set_purecall_handler(  _purecall_handler _Handler);
 _purecall_handler __cdecl _get_purecall_handler(void);
typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t); 
 _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(  _invalid_parameter_handler _Handler);
 _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);
 unsigned long * __cdecl __doserrno(void);
errno_t __cdecl _set_doserrno(  unsigned long _Value);
errno_t __cdecl _get_doserrno(  unsigned long * _Value);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char ** __cdecl __sys_errlist(void);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int * __cdecl __sys_nerr(void);
 extern int __argc;          
 extern char ** __argv;      
 extern wchar_t ** __wargv;  
 extern char ** _environ;    
 extern wchar_t ** _wenviron;    
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_pgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern char * _pgmptr;      
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_wpgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern wchar_t * _wpgmptr;  
errno_t __cdecl _get_pgmptr(  char ** _Value);
errno_t __cdecl _get_wpgmptr(  wchar_t ** _Value);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_fmode" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern int _fmode;          
 errno_t __cdecl _set_fmode(  int _Mode);
 errno_t __cdecl _get_fmode(  int * _PMode);
 __declspec(noreturn) void __cdecl exit(  int _Code);
 __declspec(noreturn) void __cdecl _exit(  int _Code);
 __declspec(noreturn) void __cdecl abort(void);
 unsigned int __cdecl _set_abort_behavior(  unsigned int _Flags,   unsigned int _Mask);
        __int64    __cdecl _abs64(__int64);
        int    __cdecl atexit(void (__cdecl *)(void));
    int    __cdecl atoi(  const char *_Str);
   int    __cdecl _atoi_l(  const char *_Str,   _locale_t _Locale);
   long   __cdecl atol(  const char *_Str);
   long   __cdecl _atol_l(  const char *_Str,   _locale_t _Locale);
   void * __cdecl bsearch_s(  const void * _Key,   const void * _Base, 
          rsize_t _NumOfElements,   rsize_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
   void * __cdecl bsearch(  const void * _Key,   const void * _Base, 
          size_t _NumOfElements,   size_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(const void *, const void *));
 void __cdecl qsort_s(  void * _Base, 
          rsize_t _NumOfElements,   rsize_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
 void __cdecl qsort(  void * _Base, 
	  size_t _NumOfElements,   size_t _SizeOfElements, 
          int (__cdecl * _PtFuncCompare)(const void *, const void *));
          unsigned short __cdecl _byteswap_ushort(  unsigned short _Short);
          unsigned long  __cdecl _byteswap_ulong (  unsigned long _Long);
          unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64 _Int64);
   div_t  __cdecl div(  int _Numerator,   int _Denominator);
   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_dupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl getenv(  const char * _VarName);
  errno_t __cdecl getenv_s(  size_t * _ReturnSize,   char * _DstBuf,   rsize_t _DstSize,   const char * _VarName);
  errno_t __cdecl _dupenv_s(    char **_PBuffer,   size_t * _PBufferSizeInBytes,   const char * _VarName);
  errno_t __cdecl _itoa_s(  int _Value,   char * _DstBuf,   size_t _Size,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _itoa( int _Value,   char *_Dest,  int _Radix);
  errno_t __cdecl _i64toa_s(  __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _i64toa(  __int64 _Val,     char * _DstBuf,   int _Radix);
  errno_t __cdecl _ui64toa_s(  unsigned __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _ui64toa(  unsigned __int64 _Val,     char * _DstBuf,   int _Radix);
   __int64 __cdecl _atoi64(  const char * _String);
   __int64 __cdecl _atoi64_l(  const char * _String,   _locale_t _Locale);
   __int64 __cdecl _strtoi64(  const char * _String,     char ** _EndPtr,   int _Radix);
   __int64 __cdecl _strtoi64_l(  const char * _String,     char ** _EndPtr,   int _Radix,   _locale_t _Locale);
   unsigned __int64 __cdecl _strtoui64(  const char * _String,     char ** _EndPtr,   int _Radix);
   unsigned __int64 __cdecl _strtoui64_l(  const char * _String,     char ** _EndPtr,   int  _Radix,   _locale_t _Locale);
   ldiv_t __cdecl ldiv(  long _Numerator,   long _Denominator);
   lldiv_t __cdecl lldiv(  long long _Numerator,   long long _Denominator);
  errno_t __cdecl _ltoa_s(  long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _ltoa( long _Value,   char *_Dest,  int _Radix);
   int    __cdecl mblen(    const char * _Ch,   size_t _MaxCount);
   int    __cdecl _mblen_l(    const char * _Ch,   size_t _MaxCount,   _locale_t _Locale);
   size_t __cdecl _mbstrlen(  const char * _Str);
   size_t __cdecl _mbstrlen_l(  const char *_Str,   _locale_t _Locale);
   size_t __cdecl _mbstrnlen(  const char *_Str,   size_t _MaxCount);
   size_t __cdecl _mbstrnlen_l(  const char *_Str,   size_t _MaxCount,   _locale_t _Locale);
 int    __cdecl mbtowc(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes);
 int    __cdecl _mbtowc_l(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes,   _locale_t _Locale);
  errno_t __cdecl mbstowcs_s(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount );
__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbstowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  size_t __cdecl mbstowcs( wchar_t *_Dest,  const char * _Source,  size_t _MaxCount);
  errno_t __cdecl _mbstowcs_s_l(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount,   _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_mbstowcs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  size_t __cdecl _mbstowcs_l(  wchar_t *_Dest,   const char * _Source,   size_t _MaxCount,   _locale_t _Locale);
   int    __cdecl rand(void);
  int    __cdecl _set_error_mode(  int _Mode);
 void   __cdecl srand(  unsigned int _Seed);
   double __cdecl strtod(  const char * _Str,     char ** _EndPtr);
   double __cdecl _strtod_l(  const char * _Str,     char ** _EndPtr,   _locale_t _Locale);
   long   __cdecl strtol(  const char * _Str,     char ** _EndPtr,   int _Radix );
   long   __cdecl _strtol_l(  const char *_Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
   unsigned long __cdecl strtoul(  const char * _Str,     char ** _EndPtr,   int _Radix);
   unsigned long __cdecl _strtoul_l(const char * _Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
 int __cdecl system(  const char * _Command);
  errno_t __cdecl _ultoa_s(  unsigned long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _ultoa( unsigned long _Value,   char *_Dest,  int _Radix);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "wctomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int    __cdecl wctomb(  char * _MbCh,   wchar_t _WCh);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctomb_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int    __cdecl _wctomb_l(    char * _MbCh,   wchar_t _WCh,   _locale_t _Locale);
  errno_t __cdecl wctomb_s(  int * _SizeConverted,   char * _MbCh,   rsize_t _SizeInBytes,   wchar_t _WCh);
  errno_t __cdecl _wctomb_s_l(  int * _SizeConverted,   char * _MbCh,   size_t _SizeInBytes,   wchar_t _WCh,   _locale_t _Locale);
  errno_t __cdecl wcstombs_s(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  size_t __cdecl wcstombs( char *_Dest,  const wchar_t * _Source,  size_t _MaxCount);
  errno_t __cdecl _wcstombs_s_l(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes,   _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcstombs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  size_t __cdecl _wcstombs_l(  char *_Dest,   const wchar_t * _Source,   size_t _MaxCount,   _locale_t _Locale);
        __declspec(noalias)    void * __cdecl calloc(  size_t _Count,   size_t _Size);
                     __declspec(noalias)                                                                             void   __cdecl free(    void * _Memory);
        __declspec(noalias)                              void * __cdecl malloc(  size_t _Size);
 
       __declspec(noalias)                           void * __cdecl realloc(    void * _Memory,   size_t _NewSize);
 
       __declspec(noalias)                       void * __cdecl _recalloc(    void * _Memory,   size_t _Count,   size_t _Size);
                     __declspec(noalias)                                                                             void   __cdecl _aligned_free(    void * _Memory);
       __declspec(noalias)                              void * __cdecl _aligned_malloc(  size_t _Size,   size_t _Alignment);
       __declspec(noalias)                              void * __cdecl _aligned_offset_malloc(  size_t _Size,   size_t _Alignment,   size_t _Offset);
 
       __declspec(noalias)                              void * __cdecl _aligned_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment);
 
       __declspec(noalias)                       void * __cdecl _aligned_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment);
 
       __declspec(noalias)                              void * __cdecl _aligned_offset_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment,   size_t _Offset);
 
       __declspec(noalias)                       void * __cdecl _aligned_offset_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment,   size_t _Offset);
                                                    size_t __cdecl _aligned_msize(  void * _Memory,   size_t _Alignment,   size_t _Offset);
  errno_t __cdecl _itow_s (  int _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _itow( int _Value,   wchar_t *_Dest,  int _Radix);
  errno_t __cdecl _ltow_s (  long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _ltow( long _Value,   wchar_t *_Dest,  int _Radix);
  errno_t __cdecl _ultow_s (  unsigned long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _ultow( unsigned long _Value,   wchar_t *_Dest,  int _Radix);
   double __cdecl wcstod(  const wchar_t * _Str,     wchar_t ** _EndPtr);
   double __cdecl _wcstod_l(  const wchar_t *_Str,     wchar_t ** _EndPtr,   _locale_t _Locale);
   long   __cdecl wcstol(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
   long   __cdecl _wcstol_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
   unsigned long __cdecl wcstoul(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
   unsigned long __cdecl _wcstoul_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wdupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _wgetenv(  const wchar_t * _VarName);
  errno_t __cdecl _wgetenv_s(  size_t * _ReturnSize,   wchar_t * _DstBuf,   size_t _DstSizeInWords,   const wchar_t * _VarName);
  errno_t __cdecl _wdupenv_s(    wchar_t **_Buffer,   size_t *_BufferSizeInWords,   const wchar_t *_VarName);
 int __cdecl _wsystem(  const wchar_t * _Command);
   double __cdecl _wtof(  const wchar_t *_Str);
   double __cdecl _wtof_l(  const wchar_t *_Str,   _locale_t _Locale);
   int __cdecl _wtoi(  const wchar_t *_Str);
   int __cdecl _wtoi_l(  const wchar_t *_Str,   _locale_t _Locale);
   long __cdecl _wtol(  const wchar_t *_Str);
   long __cdecl _wtol_l(  const wchar_t *_Str,   _locale_t _Locale);
  errno_t __cdecl _i64tow_s(  __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _i64tow(  __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
  errno_t __cdecl _ui64tow_s(  unsigned __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _ui64tow(  unsigned __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
   __int64   __cdecl _wtoi64(  const wchar_t *_Str);
   __int64   __cdecl _wtoi64_l(  const wchar_t *_Str,   _locale_t _Locale);
   __int64   __cdecl _wcstoi64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
   __int64   __cdecl _wcstoi64_l(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
   unsigned __int64  __cdecl _wcstoui64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
   unsigned __int64  __cdecl _wcstoui64_l(  const wchar_t *_Str ,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
   char * __cdecl _fullpath(  char * _FullPath,   const char * _Path,   size_t _SizeInBytes);
  errno_t __cdecl _ecvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDights,   int * _PtDec,   int * _PtSign);
   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
  errno_t __cdecl _fcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
 errno_t __cdecl _gcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDigits);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_gcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
   int __cdecl _atodbl(  _CRT_DOUBLE * _Result,   char * _Str);
   int __cdecl _atoldbl(  _LDOUBLE * _Result,   char * _Str);
   int __cdecl _atoflt(  _CRT_FLOAT * _Result,   char * _Str);
   int __cdecl _atodbl_l(  _CRT_DOUBLE * _Result,   char * _Str,   _locale_t _Locale);
   int __cdecl _atoldbl_l(  _LDOUBLE * _Result,   char * _Str,   _locale_t _Locale);
   int __cdecl _atoflt_l(  _CRT_FLOAT * _Result,   char * _Str,   _locale_t _Locale);
          unsigned long __cdecl _lrotl(  unsigned long _Val,   int _Shift);
          unsigned long __cdecl _lrotr(  unsigned long _Val,   int _Shift);
  errno_t   __cdecl _makepath_s(  char * _PathResult,   size_t _SizeInWords,   const char * _Drive,   const char * _Dir,   const char * _Filename,
          const char * _Ext);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_makepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl _makepath(  char *_Path,  const char * _Drive,  const char * _Dir,  const char * _Filename,  const char * _Ext);
        _onexit_t __cdecl _onexit(  _onexit_t _Func);
   int    __cdecl _putenv(  const char * _EnvString);
  errno_t __cdecl _putenv_s(  const char * _Name,   const char * _Value);
        unsigned int __cdecl _rotl(  unsigned int _Val,   int _Shift);
        unsigned __int64 __cdecl _rotl64(  unsigned __int64 _Val,   int _Shift);
        unsigned int __cdecl _rotr(  unsigned int _Val,   int _Shift);
        unsigned __int64 __cdecl _rotr64(  unsigned __int64 _Val,   int _Shift);
 errno_t __cdecl _searchenv_s(  const char * _Filename,   const char * _EnvVar,   char * _ResultPath,   size_t _SizeInBytes);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_searchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl _searchenv( const char * _Filename,  const char * _EnvVar,   char *_ResultPath);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_splitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void   __cdecl _splitpath(  const char * _FullPath,     char * _Drive,     char * _Dir,     char * _Filename,     char * _Ext);
  errno_t  __cdecl _splitpath_s(  const char * _FullPath, 
		  char * _Drive,   size_t _DriveSize, 
		  char * _Dir,   size_t _DirSize, 
		  char * _Filename,   size_t _FilenameSize, 
		  char * _Ext,   size_t _ExtSize);
 void   __cdecl _swab(    char * _Buf1,     char * _Buf2, int _SizeInBytes);
   wchar_t * __cdecl _wfullpath(  wchar_t * _FullPath,   const wchar_t * _Path,   size_t _SizeInWords);
  errno_t __cdecl _wmakepath_s(  wchar_t * _PathResult,   size_t _SIZE,   const wchar_t * _Drive,   const wchar_t * _Dir,   const wchar_t * _Filename,
          const wchar_t * _Ext);        
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmakepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl _wmakepath(  wchar_t *_ResultPath,  const wchar_t * _Drive,  const wchar_t * _Dir,  const wchar_t * _Filename,  const wchar_t * _Ext);
   int    __cdecl _wputenv(  const wchar_t * _EnvString);
  errno_t __cdecl _wputenv_s(  const wchar_t * _Name,   const wchar_t * _Value);
 errno_t __cdecl _wsearchenv_s(  const wchar_t * _Filename,   const wchar_t * _EnvVar,   wchar_t * _ResultPath,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsearchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl _wsearchenv( const wchar_t * _Filename,  const wchar_t * _EnvVar,   wchar_t *_ResultPath);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsplitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void   __cdecl _wsplitpath(  const wchar_t * _FullPath,     wchar_t * _Drive,     wchar_t * _Dir,     wchar_t * _Filename,     wchar_t * _Ext);
 errno_t __cdecl _wsplitpath_s(  const wchar_t * _FullPath, 
		  wchar_t * _Drive,   size_t _DriveSize, 
		  wchar_t * _Dir,   size_t _DirSize, 
		  wchar_t * _Filename,   size_t _FilenameSize, 
		  wchar_t * _Ext,   size_t _ExtSize);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "SetErrorMode" " instead. See online help for details."))  void __cdecl _seterrormode(  int _Mode);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Beep" " instead. See online help for details."))  void __cdecl _beep(  unsigned _Frequency,   unsigned _Duration);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Sleep" " instead. See online help for details."))  void __cdecl _sleep(  unsigned long _Duration);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ecvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_gcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))		 char * __cdecl gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_itoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))		 char * __cdecl itoa(  int _Val,     char * _DstBuf,   int _Radix);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ltoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))		 char * __cdecl ltoa(  long _Val,     char * _DstBuf,   int _Radix);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putenv" ". See online help for details."))  int    __cdecl putenv(  const char * _EnvString);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_swab" ". See online help for details."))										 void   __cdecl swab(  char * _Buf1,  char * _Buf2,   int _SizeInBytes);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ultoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))	 char * __cdecl ultoa(  unsigned long _Val,     char * _Dstbuf,   int _Radix);
_onexit_t __cdecl onexit(  _onexit_t _Func);
#pragma pack(pop)
 void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
    void *  __cdecl memchr(   const void * _Buf ,   int _Val,   size_t _MaxCount);
   int     __cdecl _memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
   int     __cdecl _memicmp_l(  const void * _Buf1,   const void * _Buf2,   size_t _Size,   _locale_t _Locale);
  int     __cdecl memcmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _Size);
 errno_t  __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
        void *  __cdecl memset(  void * _Dst,   int _Val,   size_t _Size);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memccpy" ". See online help for details."))  void * __cdecl memccpy(  void * _Dst,   const void * _Src,   int _Val,   size_t _Size);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memicmp" ". See online help for details."))  int __cdecl memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
  errno_t __cdecl _strset_s(  char * _Dst,   size_t _DstSize,   int _Value);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strset( char *_Dest,  int _Value);
  errno_t __cdecl strcpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcpy( char *_Dest,  const char * _Source);
  errno_t __cdecl strcat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcat( char *_Dest,  const char * _Source);
          int     __cdecl strcmp(  const char * _Str1,   const char * _Str2);
          size_t  __cdecl strlen(  const char * _Str);
  
size_t  __cdecl strnlen(  const char * _Str,   size_t _MaxCount);
  static __inline
size_t  __cdecl strnlen_s(  const char * _Str,   size_t _MaxCount)
{
    return (_Str==0) ? 0 : strnlen(_Str, _MaxCount);
}
  errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
  void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);
   char *  __cdecl _strdup(  const char * _Src);
    char *  __cdecl strchr(  const char * _Str,   int _Val);
   int     __cdecl _stricmp(   const char * _Str1,    const char * _Str2);
   int     __cdecl _strcmpi(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricmp_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl strcoll(   const char * _Str1,    const  char * _Str2);
   int     __cdecl _strcoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _stricoll(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _strncoll  (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strncoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int     __cdecl _strnicoll (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   size_t  __cdecl strcspn(   const char * _Str,    const char * _Control);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl _strerror(  const char * _ErrMsg);
  errno_t __cdecl _strerror_s(  char * _Buf,   size_t _SizeInBytes,   const char * _ErrMsg);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl strerror(  int);
  errno_t __cdecl strerror_s(  char * _Buf,   size_t _SizeInBytes,   int _ErrNum);
  errno_t __cdecl _strlwr_s(  char * _Str,   size_t _Size);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strlwr( char *_String);
  errno_t __cdecl _strlwr_s_l(  char * _Str,   size_t _Size,   _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);
  errno_t __cdecl strncat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strncat(  char *_Dest,   const char * _Source,   size_t _Count);
   int     __cdecl strncmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicmp_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  errno_t __cdecl strncpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strncpy(    char *_Dest,   const char * _Source,   size_t _Count);
  errno_t __cdecl _strnset_s(  char * _Str,   size_t _SizeInBytes,   int _Val,   size_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strnset(  char *_Dest,   int _Val,   size_t _Count);
    char *  __cdecl strpbrk(  const char * _Str,   const char * _Control);
    char *  __cdecl strrchr(  const char * _Str,   int _Ch);
 char *  __cdecl _strrev(  char * _Str);
   size_t  __cdecl strspn(  const char * _Str,   const char * _Control);
      char *  __cdecl strstr(  const char * _Str,   const char * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl strtok(  char * _Str,   const char * _Delim);
   char *  __cdecl strtok_s(  char * _Str,   const char * _Delim,     char ** _Context);
  errno_t __cdecl _strupr_s(  char * _Str,   size_t _Size);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strupr( char *_String);
  errno_t __cdecl _strupr_s_l(  char * _Str,   size_t _Size, _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strupr_l(  char *_String,   _locale_t _Locale);
  size_t  __cdecl strxfrm (    char * _Dst,   const char * _Src,   size_t _MaxCount);
  size_t  __cdecl _strxfrm_l(    char * _Dst,   const char * _Src,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strdup" ". See online help for details."))  char * __cdecl strdup(  const char * _Src);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strcmpi" ". See online help for details."))  int __cdecl strcmpi(  const char * _Str1,   const char * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_stricmp" ". See online help for details."))  int __cdecl stricmp(  const char * _Str1,   const char * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strlwr" ". See online help for details."))  char * __cdecl strlwr(  char * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnicmp" ". See online help for details."))  int __cdecl strnicmp(  const char * _Str1,   const char * _Str,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnset" ". See online help for details."))  char * __cdecl strnset(  char * _Str,   int _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strrev" ". See online help for details."))  char * __cdecl strrev(  char * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strset" ". See online help for details."))         char * __cdecl strset(  char * _Str,   int _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strupr" ". See online help for details."))  char * __cdecl strupr(  char * _Str);
   wchar_t * __cdecl _wcsdup(  const wchar_t * _Str);
  errno_t __cdecl wcscat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcscat( wchar_t *_Dest,  const wchar_t * _Source);
 
  wchar_t * __cdecl wcschr(  const wchar_t * _Str, wchar_t _Ch);
   int __cdecl wcscmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
  errno_t __cdecl wcscpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcscpy( wchar_t *_Dest,  const wchar_t * _Source);
   size_t __cdecl wcscspn(  const wchar_t * _Str,   const wchar_t * _Control);
   size_t __cdecl wcslen(  const wchar_t * _Str);
  
size_t __cdecl wcsnlen(  const wchar_t * _Src,   size_t _MaxCount);
  static __inline
size_t __cdecl wcsnlen_s(  const wchar_t * _Src,   size_t _MaxCount)
{
    return (_Src == ((void *)0)) ? 0 : wcsnlen(_Src, _MaxCount);
}
  errno_t __cdecl wcsncat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcsncat(  wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
   int __cdecl wcsncmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
  errno_t __cdecl wcsncpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcsncpy(    wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
    wchar_t * __cdecl wcspbrk(  const wchar_t * _Str,   const wchar_t * _Control);
    wchar_t * __cdecl wcsrchr(  const wchar_t * _Str,   wchar_t _Ch);
   size_t __cdecl wcsspn(  const wchar_t * _Str,   const wchar_t * _Control);
   
  wchar_t * __cdecl wcsstr(  const wchar_t * _Str,   const wchar_t * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcstok(  wchar_t * _Str,   const wchar_t * _Delim);
   wchar_t * __cdecl wcstok_s(  wchar_t * _Str,   const wchar_t * _Delim,     wchar_t ** _Context);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcserror(  int _ErrNum);
  errno_t __cdecl _wcserror_s(  wchar_t * _Buf,   size_t _SizeInWords,   int _ErrNum);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl __wcserror(  const wchar_t * _Str);
  errno_t __cdecl __wcserror_s(  wchar_t * _Buffer,   size_t _SizeInWords,   const wchar_t * _ErrMsg);
   int __cdecl _wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  errno_t __cdecl _wcsnset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Val,   size_t _MaxCount);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsnset(  wchar_t *_Str, wchar_t _Val,   size_t _MaxCount);
 wchar_t * __cdecl _wcsrev(  wchar_t * _Str);
  errno_t __cdecl _wcsset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Value);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsset(  wchar_t *_Str, wchar_t _Val);
  errno_t __cdecl _wcslwr_s(  wchar_t * _Str,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcslwr( wchar_t *_String);
  errno_t __cdecl _wcslwr_s_l(  wchar_t * _Str,   size_t _SizeInWords,   _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
  errno_t __cdecl _wcsupr_s(  wchar_t * _Str,   size_t _Size);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsupr( wchar_t *_String);
  errno_t __cdecl _wcsupr_s_l(  wchar_t * _Str,   size_t _Size,   _locale_t _Locale);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
  size_t __cdecl wcsxfrm(    wchar_t * _Dst,   const wchar_t * _Src,   size_t _MaxCount);
  size_t __cdecl _wcsxfrm_l(    wchar_t * _Dst,   const wchar_t *_Src,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl wcscoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcscoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicoll_l(  const wchar_t * _Str1,   const wchar_t *_Str2,   _locale_t _Locale);
   int __cdecl _wcsncoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsncoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl _wcsnicoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsdup" ". See online help for details."))  wchar_t * __cdecl wcsdup(  const wchar_t * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicmp" ". See online help for details."))  int __cdecl wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnicmp" ". See online help for details."))  int __cdecl wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnset" ". See online help for details."))  wchar_t * __cdecl wcsnset(  wchar_t * _Str,   wchar_t _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsrev" ". See online help for details."))  wchar_t * __cdecl wcsrev(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsset" ". See online help for details."))  wchar_t * __cdecl wcsset(  wchar_t * _Str, wchar_t _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcslwr" ". See online help for details."))  wchar_t * __cdecl wcslwr(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsupr" ". See online help for details."))  wchar_t * __cdecl wcsupr(  wchar_t * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicoll" ". See online help for details."))  int __cdecl wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
 int av_log2(unsigned v);
 int av_log2_16bit(unsigned v);
 extern unsigned long  __cdecl __threadid(void);
 extern uintptr_t __cdecl __threadhandle(void);
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
static inline char *av_make_error_string(char *errbuf, size_t errbuf_size, int errnum)
{
    av_strerror(errnum, errbuf, errbuf_size);
    return errbuf;
}
void *av_malloc(size_t size)  ;
void *av_mallocz(size_t size)  ;
 static inline void *av_malloc_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_malloc(nmemb * size);
}
 static inline void *av_mallocz_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 2147483647 / size)
        return ((void *)0);
    return av_mallocz(nmemb * size);
}
void *av_calloc(size_t nmemb, size_t size) ;
void *av_realloc(void *ptr, size_t size) ;
int av_reallocp(void *ptr, size_t size);
void *av_realloc_f(void *ptr, size_t nelem, size_t elsize);
 void *av_realloc_array(void *ptr, size_t nmemb, size_t size);
 int av_reallocp_array(void *ptr, size_t nmemb, size_t size);
void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_mallocz(void *ptr, unsigned int *size, size_t min_size);
void av_free(void *ptr);
void av_freep(void *ptr);
char *av_strdup(const char *s) ;
char *av_strndup(const char *s, size_t len) ;
void *av_memdup(const void *p, size_t size);
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);
void av_dynarray_add(void *tab_ptr, int *nb_ptr, void *elem);
int av_dynarray_add_nofree(void *tab_ptr, int *nb_ptr, void *elem);
void *av_dynarray2_add(void **tab_ptr, int *nb_ptr, size_t elem_size,
                       const uint8_t *elem_data);
static inline int av_size_mult(size_t a, size_t b, size_t *r)
{
    size_t t = a * b;
    
    if ((a | b) >= ((size_t)1 << (sizeof(size_t) * 4)) && a && t / a != b)
        return (-(22));
    *r = t;
    return 0;
}
void av_max_alloc(size_t max);
typedef struct AVRational{
    int num; 
    int den; 
} AVRational;
static inline AVRational av_make_q(int num, int den)
{
    AVRational r = { num, den };
    return r;
}
static inline int av_cmp_q(AVRational a, AVRational b){
    const int64_t tmp= a.num * (int64_t)b.den - b.num * (int64_t)a.den;
    if(tmp) return (int)((tmp ^ a.den ^ b.den)>>63)|1;
    else if(b.den && a.den) return 0;
    else if(a.num && b.num) return (a.num>>31) - (b.num>>31);
    else                    return (-2147483647 - 1);
}
static inline double av_q2d(AVRational a){
    return a.num / (double) a.den;
}
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);
AVRational av_mul_q(AVRational b, AVRational c) ;
AVRational av_div_q(AVRational b, AVRational c) ;
AVRational av_add_q(AVRational b, AVRational c) ;
AVRational av_sub_q(AVRational b, AVRational c) ;
AVRational av_d2q(double d, int max) ;
int av_nearer_q(AVRational q, AVRational q1, AVRational q2);
int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
uint32_t av_q2intfloat(AVRational q);
union av_intfloat32 {
    uint32_t i;
    float    f;
};
union av_intfloat64 {
    uint64_t i;
    double   f;
};
enum AVRounding {
    AV_ROUND_ZERO     = 0, 
    AV_ROUND_INF      = 1, 
    AV_ROUND_DOWN     = 2, 
    AV_ROUND_UP       = 3, 
    AV_ROUND_NEAR_INF = 5, 
    
    AV_ROUND_PASS_MINMAX = 8192,
};
int64_t  av_gcd(int64_t a, int64_t b);
int64_t av_rescale(int64_t a, int64_t b, int64_t c) ;
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding rnd) ;
int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) ;
int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
                         enum AVRounding rnd) ;
int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod);
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts,  AVRational fs_tb, int duration, int64_t *last, AVRational out_tb);
int64_t av_add_stable(AVRational ts_tb, int64_t ts, AVRational inc_tb, int64_t inc);
typedef enum {
    AV_CLASS_CATEGORY_NA = 0,
    AV_CLASS_CATEGORY_INPUT,
    AV_CLASS_CATEGORY_OUTPUT,
    AV_CLASS_CATEGORY_MUXER,
    AV_CLASS_CATEGORY_DEMUXER,
    AV_CLASS_CATEGORY_ENCODER,
    AV_CLASS_CATEGORY_DECODER,
    AV_CLASS_CATEGORY_FILTER,
    AV_CLASS_CATEGORY_BITSTREAM_FILTER,
    AV_CLASS_CATEGORY_SWSCALER,
    AV_CLASS_CATEGORY_SWRESAMPLER,
    AV_CLASS_CATEGORY_DEVICE_VIDEO_OUTPUT = 40,
    AV_CLASS_CATEGORY_DEVICE_VIDEO_INPUT,
    AV_CLASS_CATEGORY_DEVICE_AUDIO_OUTPUT,
    AV_CLASS_CATEGORY_DEVICE_AUDIO_INPUT,
    AV_CLASS_CATEGORY_DEVICE_OUTPUT,
    AV_CLASS_CATEGORY_DEVICE_INPUT,
    AV_CLASS_CATEGORY_NB  
}AVClassCategory;
struct AVOptionRanges;
typedef struct AVClass {
    
    const char* class_name;
    const char* (*item_name)(void* ctx);
    const struct AVOption *option;
    int version;
    int log_level_offset_offset;
    int parent_log_context_offset;
    void* (*child_next)(void *obj, void *prev);
    const struct AVClass* (*child_class_next)(const struct AVClass *prev);
    AVClassCategory category;
    AVClassCategory (*get_category)(void* ctx);
    int (*query_ranges)(struct AVOptionRanges **, void *obj, const char *key, int flags);
} AVClass;
void av_log(void *avcl, int level, const char *fmt, ...) ;
void av_vlog(void *avcl, int level, const char *fmt, va_list vl);
int av_log_get_level(void);
void av_log_set_level(int level);
void av_log_set_callback(void (*callback)(void*, int, const char*, va_list));
void av_log_default_callback(void *avcl, int level, const char *fmt,
                             va_list vl);
const char* av_default_item_name(void* ctx);
AVClassCategory av_default_get_category(void *ptr);
void av_log_format_line(void *ptr, int level, const char *fmt, va_list vl,
                        char *line, int line_size, int *print_prefix);
int av_log_format_line2(void *ptr, int level, const char *fmt, va_list vl,
                        char *line, int line_size, int *print_prefix);
void av_log_set_flags(int arg);
int av_log_get_flags(void);
enum AVPixelFormat {
    AV_PIX_FMT_NONE = -1,
    AV_PIX_FMT_YUV420P,   
    AV_PIX_FMT_YUYV422,   
    AV_PIX_FMT_RGB24,     
    AV_PIX_FMT_BGR24,     
    AV_PIX_FMT_YUV422P,   
    AV_PIX_FMT_YUV444P,   
    AV_PIX_FMT_YUV410P,   
    AV_PIX_FMT_YUV411P,   
    AV_PIX_FMT_GRAY8,     
    AV_PIX_FMT_MONOWHITE, 
    AV_PIX_FMT_MONOBLACK, 
    AV_PIX_FMT_PAL8,      
    AV_PIX_FMT_YUVJ420P,  
    AV_PIX_FMT_YUVJ422P,  
    AV_PIX_FMT_YUVJ444P,  
    AV_PIX_FMT_XVMC_MPEG2_MC,
    AV_PIX_FMT_XVMC_MPEG2_IDCT,
    AV_PIX_FMT_XVMC = AV_PIX_FMT_XVMC_MPEG2_IDCT,
    AV_PIX_FMT_UYVY422,   
    AV_PIX_FMT_UYYVYY411, 
    AV_PIX_FMT_BGR8,      
    AV_PIX_FMT_BGR4,      
    AV_PIX_FMT_BGR4_BYTE, 
    AV_PIX_FMT_RGB8,      
    AV_PIX_FMT_RGB4,      
    AV_PIX_FMT_RGB4_BYTE, 
    AV_PIX_FMT_NV12,      
    AV_PIX_FMT_NV21,      
    AV_PIX_FMT_ARGB,      
    AV_PIX_FMT_RGBA,      
    AV_PIX_FMT_ABGR,      
    AV_PIX_FMT_BGRA,      
    AV_PIX_FMT_GRAY16BE,  
    AV_PIX_FMT_GRAY16LE,  
    AV_PIX_FMT_YUV440P,   
    AV_PIX_FMT_YUVJ440P,  
    AV_PIX_FMT_YUVA420P,  
    AV_PIX_FMT_VDPAU_H264,
    AV_PIX_FMT_VDPAU_MPEG1,
    AV_PIX_FMT_VDPAU_MPEG2,
    AV_PIX_FMT_VDPAU_WMV3,
    AV_PIX_FMT_VDPAU_VC1, 
    AV_PIX_FMT_RGB48BE,   
    AV_PIX_FMT_RGB48LE,   
    AV_PIX_FMT_RGB565BE,  
    AV_PIX_FMT_RGB565LE,  
    AV_PIX_FMT_RGB555BE,  
    AV_PIX_FMT_RGB555LE,  
    AV_PIX_FMT_BGR565BE,  
    AV_PIX_FMT_BGR565LE,  
    AV_PIX_FMT_BGR555BE,  
    AV_PIX_FMT_BGR555LE,  
    AV_PIX_FMT_VAAPI_MOCO, 
    AV_PIX_FMT_VAAPI_IDCT, 
    AV_PIX_FMT_VAAPI_VLD,  
    
    AV_PIX_FMT_VAAPI = AV_PIX_FMT_VAAPI_VLD,
    AV_PIX_FMT_YUV420P16LE,  
    AV_PIX_FMT_YUV420P16BE,  
    AV_PIX_FMT_YUV422P16LE,  
    AV_PIX_FMT_YUV422P16BE,  
    AV_PIX_FMT_YUV444P16LE,  
    AV_PIX_FMT_YUV444P16BE,  
    AV_PIX_FMT_VDPAU_MPEG4,  
    AV_PIX_FMT_DXVA2_VLD,    
    AV_PIX_FMT_RGB444LE,  
    AV_PIX_FMT_RGB444BE,  
    AV_PIX_FMT_BGR444LE,  
    AV_PIX_FMT_BGR444BE,  
    AV_PIX_FMT_YA8,       
    AV_PIX_FMT_Y400A = AV_PIX_FMT_YA8, 
    AV_PIX_FMT_GRAY8A= AV_PIX_FMT_YA8, 
    AV_PIX_FMT_BGR48BE,   
    AV_PIX_FMT_BGR48LE,   
    AV_PIX_FMT_YUV420P9BE, 
    AV_PIX_FMT_YUV420P9LE, 
    AV_PIX_FMT_YUV420P10BE,
    AV_PIX_FMT_YUV420P10LE,
    AV_PIX_FMT_YUV422P10BE,
    AV_PIX_FMT_YUV422P10LE,
    AV_PIX_FMT_YUV444P9BE, 
    AV_PIX_FMT_YUV444P9LE, 
    AV_PIX_FMT_YUV444P10BE,
    AV_PIX_FMT_YUV444P10LE,
    AV_PIX_FMT_YUV422P9BE, 
    AV_PIX_FMT_YUV422P9LE, 
    AV_PIX_FMT_VDA_VLD,    
    AV_PIX_FMT_GBRP,      
    AV_PIX_FMT_GBR24P = AV_PIX_FMT_GBRP, 
    AV_PIX_FMT_GBRP9BE,   
    AV_PIX_FMT_GBRP9LE,   
    AV_PIX_FMT_GBRP10BE,  
    AV_PIX_FMT_GBRP10LE,  
    AV_PIX_FMT_GBRP16BE,  
    AV_PIX_FMT_GBRP16LE,  
    AV_PIX_FMT_YUVA422P,  
    AV_PIX_FMT_YUVA444P,  
    AV_PIX_FMT_YUVA420P9BE,  
    AV_PIX_FMT_YUVA420P9LE,  
    AV_PIX_FMT_YUVA422P9BE,  
    AV_PIX_FMT_YUVA422P9LE,  
    AV_PIX_FMT_YUVA444P9BE,  
    AV_PIX_FMT_YUVA444P9LE,  
    AV_PIX_FMT_YUVA420P10BE, 
    AV_PIX_FMT_YUVA420P10LE, 
    AV_PIX_FMT_YUVA422P10BE, 
    AV_PIX_FMT_YUVA422P10LE, 
    AV_PIX_FMT_YUVA444P10BE, 
    AV_PIX_FMT_YUVA444P10LE, 
    AV_PIX_FMT_YUVA420P16BE, 
    AV_PIX_FMT_YUVA420P16LE, 
    AV_PIX_FMT_YUVA422P16BE, 
    AV_PIX_FMT_YUVA422P16LE, 
    AV_PIX_FMT_YUVA444P16BE, 
    AV_PIX_FMT_YUVA444P16LE, 
    AV_PIX_FMT_VDPAU,     
    AV_PIX_FMT_XYZ12LE,      
    AV_PIX_FMT_XYZ12BE,      
    AV_PIX_FMT_NV16,         
    AV_PIX_FMT_NV20LE,       
    AV_PIX_FMT_NV20BE,       
    AV_PIX_FMT_RGBA64BE,     
    AV_PIX_FMT_RGBA64LE,     
    AV_PIX_FMT_BGRA64BE,     
    AV_PIX_FMT_BGRA64LE,     
    AV_PIX_FMT_YVYU422,   
    AV_PIX_FMT_VDA,          
    AV_PIX_FMT_YA16BE,       
    AV_PIX_FMT_YA16LE,       
    AV_PIX_FMT_GBRAP,        
    AV_PIX_FMT_GBRAP16BE,    
    AV_PIX_FMT_GBRAP16LE,    
    
    AV_PIX_FMT_QSV,
    
    AV_PIX_FMT_MMAL,
    AV_PIX_FMT_D3D11VA_VLD,  
    AV_PIX_FMT_CUDA,
    AV_PIX_FMT_0RGB=0x123+4,
    AV_PIX_FMT_RGB0,        
    AV_PIX_FMT_0BGR,        
    AV_PIX_FMT_BGR0,        
    AV_PIX_FMT_YUV420P12BE, 
    AV_PIX_FMT_YUV420P12LE, 
    AV_PIX_FMT_YUV420P14BE, 
    AV_PIX_FMT_YUV420P14LE, 
    AV_PIX_FMT_YUV422P12BE, 
    AV_PIX_FMT_YUV422P12LE, 
    AV_PIX_FMT_YUV422P14BE, 
    AV_PIX_FMT_YUV422P14LE, 
    AV_PIX_FMT_YUV444P12BE, 
    AV_PIX_FMT_YUV444P12LE, 
    AV_PIX_FMT_YUV444P14BE, 
    AV_PIX_FMT_YUV444P14LE, 
    AV_PIX_FMT_GBRP12BE,    
    AV_PIX_FMT_GBRP12LE,    
    AV_PIX_FMT_GBRP14BE,    
    AV_PIX_FMT_GBRP14LE,    
    AV_PIX_FMT_YUVJ411P,    
    AV_PIX_FMT_BAYER_BGGR8,    
    AV_PIX_FMT_BAYER_RGGB8,    
    AV_PIX_FMT_BAYER_GBRG8,    
    AV_PIX_FMT_BAYER_GRBG8,    
    AV_PIX_FMT_BAYER_BGGR16LE, 
    AV_PIX_FMT_BAYER_BGGR16BE, 
    AV_PIX_FMT_BAYER_RGGB16LE, 
    AV_PIX_FMT_BAYER_RGGB16BE, 
    AV_PIX_FMT_BAYER_GBRG16LE, 
    AV_PIX_FMT_BAYER_GBRG16BE, 
    AV_PIX_FMT_BAYER_GRBG16LE, 
    AV_PIX_FMT_BAYER_GRBG16BE, 
    AV_PIX_FMT_YUV440P10LE, 
    AV_PIX_FMT_YUV440P10BE, 
    AV_PIX_FMT_YUV440P12LE, 
    AV_PIX_FMT_YUV440P12BE, 
    AV_PIX_FMT_AYUV64LE,    
    AV_PIX_FMT_AYUV64BE,    
    AV_PIX_FMT_VIDEOTOOLBOX, 
    AV_PIX_FMT_P010LE, 
    AV_PIX_FMT_P010BE, 
    AV_PIX_FMT_GBRAP12BE,  
    AV_PIX_FMT_GBRAP12LE,  
    AV_PIX_FMT_GBRAP10BE,  
    AV_PIX_FMT_GBRAP10LE,  
    AV_PIX_FMT_MEDIACODEC, 
    AV_PIX_FMT_NB         
};
enum AVColorPrimaries {
    AVCOL_PRI_RESERVED0   = 0,
    AVCOL_PRI_BT709       = 1,  
    AVCOL_PRI_UNSPECIFIED = 2,
    AVCOL_PRI_RESERVED    = 3,
    AVCOL_PRI_BT470M      = 4,  
    AVCOL_PRI_BT470BG     = 5,  
    AVCOL_PRI_SMPTE170M   = 6,  
    AVCOL_PRI_SMPTE240M   = 7,  
    AVCOL_PRI_FILM        = 8,  
    AVCOL_PRI_BT2020      = 9,  
    AVCOL_PRI_SMPTEST428_1 = 10, 
    AVCOL_PRI_SMPTE431    = 11, 
    AVCOL_PRI_SMPTE432    = 12, 
    AVCOL_PRI_NB                
};
enum AVColorTransferCharacteristic {
    AVCOL_TRC_RESERVED0    = 0,
    AVCOL_TRC_BT709        = 1,  
    AVCOL_TRC_UNSPECIFIED  = 2,
    AVCOL_TRC_RESERVED     = 3,
    AVCOL_TRC_GAMMA22      = 4,  
    AVCOL_TRC_GAMMA28      = 5,  
    AVCOL_TRC_SMPTE170M    = 6,  
    AVCOL_TRC_SMPTE240M    = 7,
    AVCOL_TRC_LINEAR       = 8,  
    AVCOL_TRC_LOG          = 9,  
    AVCOL_TRC_LOG_SQRT     = 10, 
    AVCOL_TRC_IEC61966_2_4 = 11, 
    AVCOL_TRC_BT1361_ECG   = 12, 
    AVCOL_TRC_IEC61966_2_1 = 13, 
    AVCOL_TRC_BT2020_10    = 14, 
    AVCOL_TRC_BT2020_12    = 15, 
    AVCOL_TRC_SMPTEST2084  = 16, 
    AVCOL_TRC_SMPTEST428_1 = 17, 
    AVCOL_TRC_ARIB_STD_B67 = 18, 
    AVCOL_TRC_NB                 
};
enum AVColorSpace {
    AVCOL_SPC_RGB         = 0,  
    AVCOL_SPC_BT709       = 1,  
    AVCOL_SPC_UNSPECIFIED = 2,
    AVCOL_SPC_RESERVED    = 3,
    AVCOL_SPC_FCC         = 4,  
    AVCOL_SPC_BT470BG     = 5,  
    AVCOL_SPC_SMPTE170M   = 6,  
    AVCOL_SPC_SMPTE240M   = 7,  
    AVCOL_SPC_YCOCG       = 8,  
    AVCOL_SPC_BT2020_NCL  = 9,  
    AVCOL_SPC_BT2020_CL   = 10, 
    AVCOL_SPC_SMPTE2085   = 11, 
    AVCOL_SPC_NB                
};
enum AVColorRange {
    AVCOL_RANGE_UNSPECIFIED = 0,
    AVCOL_RANGE_MPEG        = 1, 
    AVCOL_RANGE_JPEG        = 2, 
    AVCOL_RANGE_NB               
};
enum AVChromaLocation {
    AVCHROMA_LOC_UNSPECIFIED = 0,
    AVCHROMA_LOC_LEFT        = 1, 
    AVCHROMA_LOC_CENTER      = 2, 
    AVCHROMA_LOC_TOPLEFT     = 3, 
    AVCHROMA_LOC_TOP         = 4,
    AVCHROMA_LOC_BOTTOMLEFT  = 5,
    AVCHROMA_LOC_BOTTOM      = 6,
    AVCHROMA_LOC_NB               
};
static inline void *av_x_if_null(const void *p, const void *x)
{
    return (void *)(intptr_t)(p ? p : x);
}
unsigned av_int_list_length_for_size(unsigned elsize,
                                     const void *list, uint64_t term) ;
FILE *av_fopen_utf8(const char *path, const char *mode);
AVRational av_get_time_base_q(void);
#pragma pack(push,8)
typedef long clock_t;
struct tm {
        int tm_sec;     
        int tm_min;     
        int tm_hour;    
        int tm_mday;    
        int tm_mon;     
        int tm_year;    
        int tm_wday;    
        int tm_yday;    
        int tm_isdst;   
        };
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_daylight" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int* __cdecl __daylight(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_dstbias" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  long* __cdecl __dstbias(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_timezone" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  long* __cdecl __timezone(void);
    __declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_tzname" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char ** __cdecl __tzname(void);
 errno_t __cdecl _get_daylight(  int * _Daylight);
 errno_t __cdecl _get_dstbias(  long * _Daylight_savings_bias);
 errno_t __cdecl _get_timezone(  long * _Timezone);
 errno_t __cdecl _get_tzname(  size_t *_ReturnValue,   char *_Buffer,   size_t _SizeInBytes,   int _Index);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "asctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl asctime(  const struct tm * _Tm);
  errno_t __cdecl asctime_s(    char *_Buf,   size_t _SizeInBytes,   const struct tm * _Tm);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ctime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _ctime32(  const __time32_t * _Time);
 errno_t __cdecl _ctime32_s(    char *_Buf,   size_t _SizeInBytes,   const __time32_t *_Time);
   clock_t __cdecl clock(void);
 double __cdecl _difftime32(  __time32_t _Time1,   __time32_t _Time2);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_gmtime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  struct tm * __cdecl _gmtime32(  const __time32_t * _Time);
  errno_t __cdecl _gmtime32_s(  struct tm *_Tm,   const __time32_t * _Time);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_localtime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  struct tm * __cdecl _localtime32(  const __time32_t * _Time);
 errno_t __cdecl _localtime32_s(  struct tm *_Tm,   const __time32_t * _Time);
 size_t __cdecl strftime(  char * _Buf,   size_t _SizeInBytes,     const char * _Format,   const struct tm * _Tm);
 size_t __cdecl _strftime_l(    char *_Buf,   size_t _Max_size,     const char * _Format,   const struct tm *_Tm,   _locale_t _Locale);
  errno_t __cdecl _strdate_s(    char *_Buf,   size_t _SizeInBytes);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strdate_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strdate( char *_Buffer);
  errno_t __cdecl _strtime_s(    char *_Buf ,   size_t _SizeInBytes);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strtime( char *_Buffer);
 __time32_t __cdecl _time32(  __time32_t * _Time);
 __time32_t __cdecl _mktime32(  struct tm * _Tm);
 __time32_t __cdecl _mkgmtime32(  struct tm * _Tm);
 void __cdecl _tzset(void);
   double __cdecl _difftime64(  __time64_t _Time1,   __time64_t _Time2);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ctime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _ctime64(  const __time64_t * _Time);
 errno_t __cdecl _ctime64_s(  char *_Buf,   size_t _SizeInBytes,   const __time64_t * _Time);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_gmtime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  struct tm * __cdecl _gmtime64(  const __time64_t * _Time);
 errno_t __cdecl _gmtime64_s(  struct tm *_Tm,   const __time64_t *_Time);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_localtime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  struct tm * __cdecl _localtime64(  const __time64_t * _Time);
 errno_t __cdecl _localtime64_s(  struct tm *_Tm,   const __time64_t *_Time);
 __time64_t __cdecl _mktime64(  struct tm * _Tm);
 __time64_t __cdecl _mkgmtime64(  struct tm * _Tm);
 __time64_t __cdecl _time64(  __time64_t * _Time);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "GetLocalTime" " instead. See online help for details.")) unsigned __cdecl _getsystime(  struct tm * _Tm);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "SetLocalTime" " instead. See online help for details.")) unsigned __cdecl _setsystime(  struct tm * _Tm, unsigned _MilliSec);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wasctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wasctime(  const struct tm * _Tm);
 errno_t __cdecl _wasctime_s(    wchar_t *_Buf,   size_t _SizeInWords,   const struct tm * _Tm);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wctime32(  const __time32_t *_Time);
 errno_t __cdecl _wctime32_s(    wchar_t* _Buf,   size_t _SizeInWords,   const __time32_t * _Time);
 size_t __cdecl wcsftime(  wchar_t * _Buf,   size_t _SizeInWords,     const wchar_t * _Format,    const struct tm * _Tm);
 size_t __cdecl _wcsftime_l(  wchar_t * _Buf,   size_t _SizeInWords,     const wchar_t *_Format,   const struct tm *_Tm,   _locale_t _Locale);
 errno_t __cdecl _wstrdate_s(    wchar_t * _Buf,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrdate_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wstrdate( wchar_t *_Buffer);
 errno_t __cdecl _wstrtime_s(    wchar_t * _Buf,   size_t _SizeInWords);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wstrtime( wchar_t *_Buffer);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wctime64(  const __time64_t * _Time);
 errno_t __cdecl _wctime64_s(    wchar_t* _Buf,   size_t _SizeInWords,   const __time64_t *_Time);
static __inline wchar_t * __cdecl _wctime(const time_t * _Time)
{
    return _wctime64(_Time);
}
static __inline errno_t __cdecl _wctime_s(wchar_t *_Buffer, size_t _SizeInWords, const time_t * _Time)
{
    return _wctime64_s(_Buffer, _SizeInWords, _Time);
}
static __inline double __cdecl difftime(time_t _Time1, time_t _Time2)
{
    return _difftime64(_Time1,_Time2);
}
__declspec(deprecated("This function or variable may be unsafe. Consider using " "ctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) static __inline char * __cdecl ctime(const time_t * _Time)
{
    return _ctime64(_Time);
}
static __inline errno_t __cdecl ctime_s(char *_Buffer, size_t _SizeInBytes, const time_t * _Time)
{
    return _ctime64_s(_Buffer, _SizeInBytes, _Time);
}
__declspec(deprecated("This function or variable may be unsafe. Consider using " "gmtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) static __inline struct tm * __cdecl gmtime(const time_t * _Time)
{
    return _gmtime64(_Time);
}
static __inline errno_t __cdecl gmtime_s(struct tm * _Tm, const time_t * _Time)
{
    return _gmtime64_s(_Tm, _Time);
}
__declspec(deprecated("This function or variable may be unsafe. Consider using " "localtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) static __inline struct tm * __cdecl localtime(const time_t * _Time)
{
    return _localtime64(_Time);
}
static __inline errno_t __cdecl localtime_s(struct tm * _Tm, const time_t * _Time)
{
    return _localtime64_s(_Tm, _Time);
}
static __inline time_t __cdecl mktime(struct tm * _Tm)
{
    return _mktime64(_Tm);
}
static __inline time_t __cdecl _mkgmtime(struct tm * _Tm)
{
    return _mkgmtime64(_Tm);
}
static __inline time_t __cdecl time(time_t * _Time)
{
    return _time64(_Time);
}
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_daylight" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern int daylight;
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_timezone" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern long timezone;
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_tzname" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  extern char * tzname[2];
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tzset" ". See online help for details."))  void __cdecl tzset(void);
#pragma pack(pop)
enum AVSampleFormat {
    AV_SAMPLE_FMT_NONE = -1,
    AV_SAMPLE_FMT_U8,          
    AV_SAMPLE_FMT_S16,         
    AV_SAMPLE_FMT_S32,         
    AV_SAMPLE_FMT_FLT,         
    AV_SAMPLE_FMT_DBL,         
    AV_SAMPLE_FMT_U8P,         
    AV_SAMPLE_FMT_S16P,        
    AV_SAMPLE_FMT_S32P,        
    AV_SAMPLE_FMT_FLTP,        
    AV_SAMPLE_FMT_DBLP,        
    AV_SAMPLE_FMT_S64,         
    AV_SAMPLE_FMT_S64P,        
    AV_SAMPLE_FMT_NB           
};
const char *av_get_sample_fmt_name(enum AVSampleFormat sample_fmt);
enum AVSampleFormat av_get_sample_fmt(const char *name);
enum AVSampleFormat av_get_alt_sample_fmt(enum AVSampleFormat sample_fmt, int planar);
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);
int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
                               enum AVSampleFormat sample_fmt, int align);
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
                           const uint8_t *buf,
                           int nb_channels, int nb_samples,
                           enum AVSampleFormat sample_fmt, int align);
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
                     int nb_samples, enum AVSampleFormat sample_fmt, int align);
int av_samples_alloc_array_and_samples(uint8_t ***audio_data, int *linesize, int nb_channels,
                                       int nb_samples, enum AVSampleFormat sample_fmt, int align);
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
                    int src_offset, int nb_samples, int nb_channels,
                    enum AVSampleFormat sample_fmt);
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
                           int nb_channels, enum AVSampleFormat sample_fmt);
typedef struct AVBuffer AVBuffer;
typedef struct AVBufferRef {
    AVBuffer *buffer;
    uint8_t *data;
    
    int      size;
} AVBufferRef;
AVBufferRef *av_buffer_alloc(int size);
AVBufferRef *av_buffer_allocz(int size);
AVBufferRef *av_buffer_create(uint8_t *data, int size,
                              void (*free)(void *opaque, uint8_t *data),
                              void *opaque, int flags);
void av_buffer_default_free(void *opaque, uint8_t *data);
AVBufferRef *av_buffer_ref(AVBufferRef *buf);
void av_buffer_unref(AVBufferRef **buf);
int av_buffer_is_writable(const AVBufferRef *buf);
void *av_buffer_get_opaque(const AVBufferRef *buf);
int av_buffer_get_ref_count(const AVBufferRef *buf);
int av_buffer_make_writable(AVBufferRef **buf);
int av_buffer_realloc(AVBufferRef **buf, int size);
typedef struct AVBufferPool AVBufferPool;
AVBufferPool *av_buffer_pool_init(int size, AVBufferRef* (*alloc)(int size));
AVBufferPool *av_buffer_pool_init2(int size, void *opaque,
                                   AVBufferRef* (*alloc)(void *opaque, int size),
                                   void (*pool_free)(void *opaque));
void av_buffer_pool_uninit(AVBufferPool **pool);
AVBufferRef *av_buffer_pool_get(AVBufferPool *pool);
int av_get_cpu_flags(void);
void av_force_cpu_flags(int flags);
__declspec(deprecated) void av_set_cpu_flags_mask(int mask);
__declspec(deprecated)
int av_parse_cpu_flags(const char *s);
int av_parse_cpu_caps(unsigned *flags, const char *s);
int av_cpu_count(void);
enum AVMatrixEncoding {
    AV_MATRIX_ENCODING_NONE,
    AV_MATRIX_ENCODING_DOLBY,
    AV_MATRIX_ENCODING_DPLII,
    AV_MATRIX_ENCODING_DPLIIX,
    AV_MATRIX_ENCODING_DPLIIZ,
    AV_MATRIX_ENCODING_DOLBYEX,
    AV_MATRIX_ENCODING_DOLBYHEADPHONE,
    AV_MATRIX_ENCODING_NB
};
uint64_t av_get_channel_layout(const char *name);
void av_get_channel_layout_string(char *buf, int buf_size, int nb_channels, uint64_t channel_layout);
struct AVBPrint;
void av_bprint_channel_layout(struct AVBPrint *bp, int nb_channels, uint64_t channel_layout);
int av_get_channel_layout_nb_channels(uint64_t channel_layout);
int64_t av_get_default_channel_layout(int nb_channels);
int av_get_channel_layout_channel_index(uint64_t channel_layout,
                                        uint64_t channel);
uint64_t av_channel_layout_extract_channel(uint64_t channel_layout, int index);
const char *av_get_channel_name(uint64_t channel);
const char *av_get_channel_description(uint64_t channel);
int av_get_standard_channel_layout(unsigned index, uint64_t *layout,
                                   const char **name);
typedef struct AVDictionaryEntry {
    char *key;
    char *value;
} AVDictionaryEntry;
typedef struct AVDictionary AVDictionary;
AVDictionaryEntry *av_dict_get(const AVDictionary *m, const char *key,
                               const AVDictionaryEntry *prev, int flags);
int av_dict_count(const AVDictionary *m);
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags);
int av_dict_set_int(AVDictionary **pm, const char *key, int64_t value, int flags);
int av_dict_parse_string(AVDictionary **pm, const char *str,
                         const char *key_val_sep, const char *pairs_sep,
                         int flags);
int av_dict_copy(AVDictionary **dst, const AVDictionary *src, int flags);
void av_dict_free(AVDictionary **m);
int av_dict_get_string(const AVDictionary *m, char **buffer,
                       const char key_val_sep, const char pairs_sep);
enum AVFrameSideDataType {
    
    AV_FRAME_DATA_PANSCAN,
    
    AV_FRAME_DATA_A53_CC,
    
    AV_FRAME_DATA_STEREO3D,
    
    AV_FRAME_DATA_MATRIXENCODING,
    
    AV_FRAME_DATA_DOWNMIX_INFO,
    
    AV_FRAME_DATA_REPLAYGAIN,
    
    AV_FRAME_DATA_DISPLAYMATRIX,
    
    AV_FRAME_DATA_AFD,
    
    AV_FRAME_DATA_MOTION_VECTORS,
    
    AV_FRAME_DATA_SKIP_SAMPLES,
    
    AV_FRAME_DATA_AUDIO_SERVICE_TYPE,
    
    AV_FRAME_DATA_MASTERING_DISPLAY_METADATA,
    
    AV_FRAME_DATA_GOP_TIMECODE
};
enum AVActiveFormatDescription {
    AV_AFD_SAME         = 8,
    AV_AFD_4_3          = 9,
    AV_AFD_16_9         = 10,
    AV_AFD_14_9         = 11,
    AV_AFD_4_3_SP_14_9  = 13,
    AV_AFD_16_9_SP_14_9 = 14,
    AV_AFD_SP_4_3       = 15,
};
typedef struct AVFrameSideData {
    enum AVFrameSideDataType type;
    uint8_t *data;
    int      size;
    AVDictionary *metadata;
    AVBufferRef *buf;
} AVFrameSideData;
typedef struct AVFrame {
    uint8_t *data[8];
    int linesize[8];
    uint8_t **extended_data;
    int width, height;
    int nb_samples;
    int format;
    int key_frame;
    enum AVPictureType pict_type;
    AVRational sample_aspect_ratio;
    int64_t pts;
    __declspec(deprecated)
    int64_t pkt_pts;
    int64_t pkt_dts;
    int coded_picture_number;
    
    int display_picture_number;
    int quality;
    void *opaque;
    __declspec(deprecated)
    uint64_t error[8];
    int repeat_pict;
    int interlaced_frame;
    int top_field_first;
    int palette_has_changed;
    int64_t reordered_opaque;
    int sample_rate;
    uint64_t channel_layout;
    AVBufferRef *buf[8];
    AVBufferRef **extended_buf;
    
    int        nb_extended_buf;
    AVFrameSideData **side_data;
    int            nb_side_data;
    int flags;
    enum AVColorRange color_range;
    enum AVColorPrimaries color_primaries;
    enum AVColorTransferCharacteristic color_trc;
    enum AVColorSpace colorspace;
    enum AVChromaLocation chroma_location;
    int64_t best_effort_timestamp;
    int64_t pkt_pos;
    int64_t pkt_duration;
    AVDictionary *metadata;
    int decode_error_flags;
    int channels;
    int pkt_size;
    __declspec(deprecated)
    int8_t *qscale_table;
    
    __declspec(deprecated)
    int qstride;
    __declspec(deprecated)
    int qscale_type;
    AVBufferRef *qp_table_buf;
    AVBufferRef *hw_frames_ctx;
} AVFrame;
int64_t av_frame_get_best_effort_timestamp(const AVFrame *frame);
void    av_frame_set_best_effort_timestamp(AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_duration         (const AVFrame *frame);
void    av_frame_set_pkt_duration         (AVFrame *frame, int64_t val);
int64_t av_frame_get_pkt_pos              (const AVFrame *frame);
void    av_frame_set_pkt_pos              (AVFrame *frame, int64_t val);
int64_t av_frame_get_channel_layout       (const AVFrame *frame);
void    av_frame_set_channel_layout       (AVFrame *frame, int64_t val);
int     av_frame_get_channels             (const AVFrame *frame);
void    av_frame_set_channels             (AVFrame *frame, int     val);
int     av_frame_get_sample_rate          (const AVFrame *frame);
void    av_frame_set_sample_rate          (AVFrame *frame, int     val);
AVDictionary *av_frame_get_metadata       (const AVFrame *frame);
void          av_frame_set_metadata       (AVFrame *frame, AVDictionary *val);
int     av_frame_get_decode_error_flags   (const AVFrame *frame);
void    av_frame_set_decode_error_flags   (AVFrame *frame, int     val);
int     av_frame_get_pkt_size(const AVFrame *frame);
void    av_frame_set_pkt_size(AVFrame *frame, int val);
AVDictionary **avpriv_frame_get_metadatap(AVFrame *frame);
int8_t *av_frame_get_qp_table(AVFrame *f, int *stride, int *type);
int av_frame_set_qp_table(AVFrame *f, AVBufferRef *buf, int stride, int type);
enum AVColorSpace av_frame_get_colorspace(const AVFrame *frame);
void    av_frame_set_colorspace(AVFrame *frame, enum AVColorSpace val);
enum AVColorRange av_frame_get_color_range(const AVFrame *frame);
void    av_frame_set_color_range(AVFrame *frame, enum AVColorRange val);
const char *av_get_colorspace_name(enum AVColorSpace val);
AVFrame *av_frame_alloc(void);
void av_frame_free(AVFrame **frame);
int av_frame_ref(AVFrame *dst, const AVFrame *src);
AVFrame *av_frame_clone(const AVFrame *src);
void av_frame_unref(AVFrame *frame);
void av_frame_move_ref(AVFrame *dst, AVFrame *src);
int av_frame_get_buffer(AVFrame *frame, int align);
int av_frame_is_writable(AVFrame *frame);
int av_frame_make_writable(AVFrame *frame);
int av_frame_copy(AVFrame *dst, const AVFrame *src);
int av_frame_copy_props(AVFrame *dst, const AVFrame *src);
AVBufferRef *av_frame_get_plane_buffer(AVFrame *frame, int plane);
AVFrameSideData *av_frame_new_side_data(AVFrame *frame,
                                        enum AVFrameSideDataType type,
                                        int size);
AVFrameSideData *av_frame_get_side_data(const AVFrame *frame,
                                        enum AVFrameSideDataType type);
void av_frame_remove_side_data(AVFrame *frame, enum AVFrameSideDataType type);
const char *av_frame_side_data_name(enum AVFrameSideDataType type);
enum AVCodecID {
    AV_CODEC_ID_NONE,
    AV_CODEC_ID_MPEG1VIDEO,
    AV_CODEC_ID_MPEG2VIDEO, 
    AV_CODEC_ID_MPEG2VIDEO_XVMC,
    AV_CODEC_ID_H261,
    AV_CODEC_ID_H263,
    AV_CODEC_ID_RV10,
    AV_CODEC_ID_RV20,
    AV_CODEC_ID_MJPEG,
    AV_CODEC_ID_MJPEGB,
    AV_CODEC_ID_LJPEG,
    AV_CODEC_ID_SP5X,
    AV_CODEC_ID_JPEGLS,
    AV_CODEC_ID_MPEG4,
    AV_CODEC_ID_RAWVIDEO,
    AV_CODEC_ID_MSMPEG4V1,
    AV_CODEC_ID_MSMPEG4V2,
    AV_CODEC_ID_MSMPEG4V3,
    AV_CODEC_ID_WMV1,
    AV_CODEC_ID_WMV2,
    AV_CODEC_ID_H263P,
    AV_CODEC_ID_H263I,
    AV_CODEC_ID_FLV1,
    AV_CODEC_ID_SVQ1,
    AV_CODEC_ID_SVQ3,
    AV_CODEC_ID_DVVIDEO,
    AV_CODEC_ID_HUFFYUV,
    AV_CODEC_ID_CYUV,
    AV_CODEC_ID_H264,
    AV_CODEC_ID_INDEO3,
    AV_CODEC_ID_VP3,
    AV_CODEC_ID_THEORA,
    AV_CODEC_ID_ASV1,
    AV_CODEC_ID_ASV2,
    AV_CODEC_ID_FFV1,
    AV_CODEC_ID_4XM,
    AV_CODEC_ID_VCR1,
    AV_CODEC_ID_CLJR,
    AV_CODEC_ID_MDEC,
    AV_CODEC_ID_ROQ,
    AV_CODEC_ID_INTERPLAY_VIDEO,
    AV_CODEC_ID_XAN_WC3,
    AV_CODEC_ID_XAN_WC4,
    AV_CODEC_ID_RPZA,
    AV_CODEC_ID_CINEPAK,
    AV_CODEC_ID_WS_VQA,
    AV_CODEC_ID_MSRLE,
    AV_CODEC_ID_MSVIDEO1,
    AV_CODEC_ID_IDCIN,
    AV_CODEC_ID_8BPS,
    AV_CODEC_ID_SMC,
    AV_CODEC_ID_FLIC,
    AV_CODEC_ID_TRUEMOTION1,
    AV_CODEC_ID_VMDVIDEO,
    AV_CODEC_ID_MSZH,
    AV_CODEC_ID_ZLIB,
    AV_CODEC_ID_QTRLE,
    AV_CODEC_ID_TSCC,
    AV_CODEC_ID_ULTI,
    AV_CODEC_ID_QDRAW,
    AV_CODEC_ID_VIXL,
    AV_CODEC_ID_QPEG,
    AV_CODEC_ID_PNG,
    AV_CODEC_ID_PPM,
    AV_CODEC_ID_PBM,
    AV_CODEC_ID_PGM,
    AV_CODEC_ID_PGMYUV,
    AV_CODEC_ID_PAM,
    AV_CODEC_ID_FFVHUFF,
    AV_CODEC_ID_RV30,
    AV_CODEC_ID_RV40,
    AV_CODEC_ID_VC1,
    AV_CODEC_ID_WMV3,
    AV_CODEC_ID_LOCO,
    AV_CODEC_ID_WNV1,
    AV_CODEC_ID_AASC,
    AV_CODEC_ID_INDEO2,
    AV_CODEC_ID_FRAPS,
    AV_CODEC_ID_TRUEMOTION2,
    AV_CODEC_ID_BMP,
    AV_CODEC_ID_CSCD,
    AV_CODEC_ID_MMVIDEO,
    AV_CODEC_ID_ZMBV,
    AV_CODEC_ID_AVS,
    AV_CODEC_ID_SMACKVIDEO,
    AV_CODEC_ID_NUV,
    AV_CODEC_ID_KMVC,
    AV_CODEC_ID_FLASHSV,
    AV_CODEC_ID_CAVS,
    AV_CODEC_ID_JPEG2000,
    AV_CODEC_ID_VMNC,
    AV_CODEC_ID_VP5,
    AV_CODEC_ID_VP6,
    AV_CODEC_ID_VP6F,
    AV_CODEC_ID_TARGA,
    AV_CODEC_ID_DSICINVIDEO,
    AV_CODEC_ID_TIERTEXSEQVIDEO,
    AV_CODEC_ID_TIFF,
    AV_CODEC_ID_GIF,
    AV_CODEC_ID_DXA,
    AV_CODEC_ID_DNXHD,
    AV_CODEC_ID_THP,
    AV_CODEC_ID_SGI,
    AV_CODEC_ID_C93,
    AV_CODEC_ID_BETHSOFTVID,
    AV_CODEC_ID_PTX,
    AV_CODEC_ID_TXD,
    AV_CODEC_ID_VP6A,
    AV_CODEC_ID_AMV,
    AV_CODEC_ID_VB,
    AV_CODEC_ID_PCX,
    AV_CODEC_ID_SUNRAST,
    AV_CODEC_ID_INDEO4,
    AV_CODEC_ID_INDEO5,
    AV_CODEC_ID_MIMIC,
    AV_CODEC_ID_RL2,
    AV_CODEC_ID_ESCAPE124,
    AV_CODEC_ID_DIRAC,
    AV_CODEC_ID_BFI,
    AV_CODEC_ID_CMV,
    AV_CODEC_ID_MOTIONPIXELS,
    AV_CODEC_ID_TGV,
    AV_CODEC_ID_TGQ,
    AV_CODEC_ID_TQI,
    AV_CODEC_ID_AURA,
    AV_CODEC_ID_AURA2,
    AV_CODEC_ID_V210X,
    AV_CODEC_ID_TMV,
    AV_CODEC_ID_V210,
    AV_CODEC_ID_DPX,
    AV_CODEC_ID_MAD,
    AV_CODEC_ID_FRWU,
    AV_CODEC_ID_FLASHSV2,
    AV_CODEC_ID_CDGRAPHICS,
    AV_CODEC_ID_R210,
    AV_CODEC_ID_ANM,
    AV_CODEC_ID_BINKVIDEO,
    AV_CODEC_ID_IFF_ILBM,
    AV_CODEC_ID_KGV1,
    AV_CODEC_ID_YOP,
    AV_CODEC_ID_VP8,
    AV_CODEC_ID_PICTOR,
    AV_CODEC_ID_ANSI,
    AV_CODEC_ID_A64_MULTI,
    AV_CODEC_ID_A64_MULTI5,
    AV_CODEC_ID_R10K,
    AV_CODEC_ID_MXPEG,
    AV_CODEC_ID_LAGARITH,
    AV_CODEC_ID_PRORES,
    AV_CODEC_ID_JV,
    AV_CODEC_ID_DFA,
    AV_CODEC_ID_WMV3IMAGE,
    AV_CODEC_ID_VC1IMAGE,
    AV_CODEC_ID_UTVIDEO,
    AV_CODEC_ID_BMV_VIDEO,
    AV_CODEC_ID_VBLE,
    AV_CODEC_ID_DXTORY,
    AV_CODEC_ID_V410,
    AV_CODEC_ID_XWD,
    AV_CODEC_ID_CDXL,
    AV_CODEC_ID_XBM,
    AV_CODEC_ID_ZEROCODEC,
    AV_CODEC_ID_MSS1,
    AV_CODEC_ID_MSA1,
    AV_CODEC_ID_TSCC2,
    AV_CODEC_ID_MTS2,
    AV_CODEC_ID_CLLC,
    AV_CODEC_ID_MSS2,
    AV_CODEC_ID_VP9,
    AV_CODEC_ID_AIC,
    AV_CODEC_ID_ESCAPE130,
    AV_CODEC_ID_G2M,
    AV_CODEC_ID_WEBP,
    AV_CODEC_ID_HNM4_VIDEO,
    AV_CODEC_ID_HEVC,
    AV_CODEC_ID_FIC,
    AV_CODEC_ID_ALIAS_PIX,
    AV_CODEC_ID_BRENDER_PIX,
    AV_CODEC_ID_PAF_VIDEO,
    AV_CODEC_ID_EXR,
    AV_CODEC_ID_VP7,
    AV_CODEC_ID_SANM,
    AV_CODEC_ID_SGIRLE,
    AV_CODEC_ID_MVC1,
    AV_CODEC_ID_MVC2,
    AV_CODEC_ID_HQX,
    AV_CODEC_ID_TDSC,
    AV_CODEC_ID_HQ_HQA,
    AV_CODEC_ID_HAP,
    AV_CODEC_ID_DDS,
    AV_CODEC_ID_DXV,
    AV_CODEC_ID_SCREENPRESSO,
    AV_CODEC_ID_RSCC,
    AV_CODEC_ID_Y41P = 0x8000,
    AV_CODEC_ID_AVRP,
    AV_CODEC_ID_012V,
    AV_CODEC_ID_AVUI,
    AV_CODEC_ID_AYUV,
    AV_CODEC_ID_TARGA_Y216,
    AV_CODEC_ID_V308,
    AV_CODEC_ID_V408,
    AV_CODEC_ID_YUV4,
    AV_CODEC_ID_AVRN,
    AV_CODEC_ID_CPIA,
    AV_CODEC_ID_XFACE,
    AV_CODEC_ID_SNOW,
    AV_CODEC_ID_SMVJPEG,
    AV_CODEC_ID_APNG,
    AV_CODEC_ID_DAALA,
    AV_CODEC_ID_CFHD,
    AV_CODEC_ID_TRUEMOTION2RT,
    AV_CODEC_ID_M101,
    AV_CODEC_ID_MAGICYUV,
    AV_CODEC_ID_SHEERVIDEO,
    AV_CODEC_ID_YLC,
    AV_CODEC_ID_FIRST_AUDIO = 0x10000,     
    AV_CODEC_ID_PCM_S16LE = 0x10000,
    AV_CODEC_ID_PCM_S16BE,
    AV_CODEC_ID_PCM_U16LE,
    AV_CODEC_ID_PCM_U16BE,
    AV_CODEC_ID_PCM_S8,
    AV_CODEC_ID_PCM_U8,
    AV_CODEC_ID_PCM_MULAW,
    AV_CODEC_ID_PCM_ALAW,
    AV_CODEC_ID_PCM_S32LE,
    AV_CODEC_ID_PCM_S32BE,
    AV_CODEC_ID_PCM_U32LE,
    AV_CODEC_ID_PCM_U32BE,
    AV_CODEC_ID_PCM_S24LE,
    AV_CODEC_ID_PCM_S24BE,
    AV_CODEC_ID_PCM_U24LE,
    AV_CODEC_ID_PCM_U24BE,
    AV_CODEC_ID_PCM_S24DAUD,
    AV_CODEC_ID_PCM_ZORK,
    AV_CODEC_ID_PCM_S16LE_PLANAR,
    AV_CODEC_ID_PCM_DVD,
    AV_CODEC_ID_PCM_F32BE,
    AV_CODEC_ID_PCM_F32LE,
    AV_CODEC_ID_PCM_F64BE,
    AV_CODEC_ID_PCM_F64LE,
    AV_CODEC_ID_PCM_BLURAY,
    AV_CODEC_ID_PCM_LXF,
    AV_CODEC_ID_S302M,
    AV_CODEC_ID_PCM_S8_PLANAR,
    AV_CODEC_ID_PCM_S24LE_PLANAR,
    AV_CODEC_ID_PCM_S32LE_PLANAR,
    AV_CODEC_ID_PCM_S16BE_PLANAR,
    AV_CODEC_ID_PCM_S64LE = 0x10800,
    AV_CODEC_ID_PCM_S64BE,
    AV_CODEC_ID_ADPCM_IMA_QT = 0x11000,
    AV_CODEC_ID_ADPCM_IMA_WAV,
    AV_CODEC_ID_ADPCM_IMA_DK3,
    AV_CODEC_ID_ADPCM_IMA_DK4,
    AV_CODEC_ID_ADPCM_IMA_WS,
    AV_CODEC_ID_ADPCM_IMA_SMJPEG,
    AV_CODEC_ID_ADPCM_MS,
    AV_CODEC_ID_ADPCM_4XM,
    AV_CODEC_ID_ADPCM_XA,
    AV_CODEC_ID_ADPCM_ADX,
    AV_CODEC_ID_ADPCM_EA,
    AV_CODEC_ID_ADPCM_G726,
    AV_CODEC_ID_ADPCM_CT,
    AV_CODEC_ID_ADPCM_SWF,
    AV_CODEC_ID_ADPCM_YAMAHA,
    AV_CODEC_ID_ADPCM_SBPRO_4,
    AV_CODEC_ID_ADPCM_SBPRO_3,
    AV_CODEC_ID_ADPCM_SBPRO_2,
    AV_CODEC_ID_ADPCM_THP,
    AV_CODEC_ID_ADPCM_IMA_AMV,
    AV_CODEC_ID_ADPCM_EA_R1,
    AV_CODEC_ID_ADPCM_EA_R3,
    AV_CODEC_ID_ADPCM_EA_R2,
    AV_CODEC_ID_ADPCM_IMA_EA_SEAD,
    AV_CODEC_ID_ADPCM_IMA_EA_EACS,
    AV_CODEC_ID_ADPCM_EA_XAS,
    AV_CODEC_ID_ADPCM_EA_MAXIS_XA,
    AV_CODEC_ID_ADPCM_IMA_ISS,
    AV_CODEC_ID_ADPCM_G722,
    AV_CODEC_ID_ADPCM_IMA_APC,
    AV_CODEC_ID_ADPCM_VIMA,
    AV_CODEC_ID_VIMA = AV_CODEC_ID_ADPCM_VIMA,
    AV_CODEC_ID_ADPCM_AFC = 0x11800,
    AV_CODEC_ID_ADPCM_IMA_OKI,
    AV_CODEC_ID_ADPCM_DTK,
    AV_CODEC_ID_ADPCM_IMA_RAD,
    AV_CODEC_ID_ADPCM_G726LE,
    AV_CODEC_ID_ADPCM_THP_LE,
    AV_CODEC_ID_ADPCM_PSX,
    AV_CODEC_ID_ADPCM_AICA,
    AV_CODEC_ID_ADPCM_IMA_DAT4,
    AV_CODEC_ID_ADPCM_MTAF,
    AV_CODEC_ID_AMR_NB = 0x12000,
    AV_CODEC_ID_AMR_WB,
    AV_CODEC_ID_RA_144 = 0x13000,
    AV_CODEC_ID_RA_288,
    AV_CODEC_ID_ROQ_DPCM = 0x14000,
    AV_CODEC_ID_INTERPLAY_DPCM,
    AV_CODEC_ID_XAN_DPCM,
    AV_CODEC_ID_SOL_DPCM,
    AV_CODEC_ID_SDX2_DPCM = 0x14800,
    AV_CODEC_ID_MP2 = 0x15000,
    AV_CODEC_ID_MP3, 
    AV_CODEC_ID_AAC,
    AV_CODEC_ID_AC3,
    AV_CODEC_ID_DTS,
    AV_CODEC_ID_VORBIS,
    AV_CODEC_ID_DVAUDIO,
    AV_CODEC_ID_WMAV1,
    AV_CODEC_ID_WMAV2,
    AV_CODEC_ID_MACE3,
    AV_CODEC_ID_MACE6,
    AV_CODEC_ID_VMDAUDIO,
    AV_CODEC_ID_FLAC,
    AV_CODEC_ID_MP3ADU,
    AV_CODEC_ID_MP3ON4,
    AV_CODEC_ID_SHORTEN,
    AV_CODEC_ID_ALAC,
    AV_CODEC_ID_WESTWOOD_SND1,
    AV_CODEC_ID_GSM, 
    AV_CODEC_ID_QDM2,
    AV_CODEC_ID_COOK,
    AV_CODEC_ID_TRUESPEECH,
    AV_CODEC_ID_TTA,
    AV_CODEC_ID_SMACKAUDIO,
    AV_CODEC_ID_QCELP,
    AV_CODEC_ID_WAVPACK,
    AV_CODEC_ID_DSICINAUDIO,
    AV_CODEC_ID_IMC,
    AV_CODEC_ID_MUSEPACK7,
    AV_CODEC_ID_MLP,
    AV_CODEC_ID_GSM_MS, 
    AV_CODEC_ID_ATRAC3,
    AV_CODEC_ID_VOXWARE,
    AV_CODEC_ID_APE,
    AV_CODEC_ID_NELLYMOSER,
    AV_CODEC_ID_MUSEPACK8,
    AV_CODEC_ID_SPEEX,
    AV_CODEC_ID_WMAVOICE,
    AV_CODEC_ID_WMAPRO,
    AV_CODEC_ID_WMALOSSLESS,
    AV_CODEC_ID_ATRAC3P,
    AV_CODEC_ID_EAC3,
    AV_CODEC_ID_SIPR,
    AV_CODEC_ID_MP1,
    AV_CODEC_ID_TWINVQ,
    AV_CODEC_ID_TRUEHD,
    AV_CODEC_ID_MP4ALS,
    AV_CODEC_ID_ATRAC1,
    AV_CODEC_ID_BINKAUDIO_RDFT,
    AV_CODEC_ID_BINKAUDIO_DCT,
    AV_CODEC_ID_AAC_LATM,
    AV_CODEC_ID_QDMC,
    AV_CODEC_ID_CELT,
    AV_CODEC_ID_G723_1,
    AV_CODEC_ID_G729,
    AV_CODEC_ID_8SVX_EXP,
    AV_CODEC_ID_8SVX_FIB,
    AV_CODEC_ID_BMV_AUDIO,
    AV_CODEC_ID_RALF,
    AV_CODEC_ID_IAC,
    AV_CODEC_ID_ILBC,
    AV_CODEC_ID_OPUS,
    AV_CODEC_ID_COMFORT_NOISE,
    AV_CODEC_ID_TAK,
    AV_CODEC_ID_METASOUND,
    AV_CODEC_ID_PAF_AUDIO,
    AV_CODEC_ID_ON2AVC,
    AV_CODEC_ID_DSS_SP,
    AV_CODEC_ID_FFWAVESYNTH = 0x15800,
    AV_CODEC_ID_SONIC,
    AV_CODEC_ID_SONIC_LS,
    AV_CODEC_ID_EVRC,
    AV_CODEC_ID_SMV,
    AV_CODEC_ID_DSD_LSBF,
    AV_CODEC_ID_DSD_MSBF,
    AV_CODEC_ID_DSD_LSBF_PLANAR,
    AV_CODEC_ID_DSD_MSBF_PLANAR,
    AV_CODEC_ID_4GV,
    AV_CODEC_ID_INTERPLAY_ACM,
    AV_CODEC_ID_XMA1,
    AV_CODEC_ID_XMA2,
    AV_CODEC_ID_DST,
    AV_CODEC_ID_FIRST_SUBTITLE = 0x17000,          
    AV_CODEC_ID_DVD_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVB_SUBTITLE,
    AV_CODEC_ID_TEXT,  
    AV_CODEC_ID_XSUB,
    AV_CODEC_ID_SSA,
    AV_CODEC_ID_MOV_TEXT,
    AV_CODEC_ID_HDMV_PGS_SUBTITLE,
    AV_CODEC_ID_DVB_TELETEXT,
    AV_CODEC_ID_SRT,
    AV_CODEC_ID_MICRODVD   = 0x17800,
    AV_CODEC_ID_EIA_608,
    AV_CODEC_ID_JACOSUB,
    AV_CODEC_ID_SAMI,
    AV_CODEC_ID_REALTEXT,
    AV_CODEC_ID_STL,
    AV_CODEC_ID_SUBVIEWER1,
    AV_CODEC_ID_SUBVIEWER,
    AV_CODEC_ID_SUBRIP,
    AV_CODEC_ID_WEBVTT,
    AV_CODEC_ID_MPL2,
    AV_CODEC_ID_VPLAYER,
    AV_CODEC_ID_PJS,
    AV_CODEC_ID_ASS,
    AV_CODEC_ID_HDMV_TEXT_SUBTITLE,
    AV_CODEC_ID_FIRST_UNKNOWN = 0x18000,           
    AV_CODEC_ID_TTF = 0x18000,
    AV_CODEC_ID_SCTE_35, 
    AV_CODEC_ID_BINTEXT    = 0x18800,
    AV_CODEC_ID_XBIN,
    AV_CODEC_ID_IDF,
    AV_CODEC_ID_OTF,
    AV_CODEC_ID_SMPTE_KLV,
    AV_CODEC_ID_DVD_NAV,
    AV_CODEC_ID_TIMED_ID3,
    AV_CODEC_ID_BIN_DATA,
    AV_CODEC_ID_PROBE = 0x19000, 
    AV_CODEC_ID_MPEG2TS = 0x20000, 
    AV_CODEC_ID_MPEG4SYSTEMS = 0x20001, 
    AV_CODEC_ID_FFMETADATA = 0x21000,   
    AV_CODEC_ID_WRAPPED_AVFRAME = 0x21001, 
};
typedef struct AVCodecDescriptor {
    enum AVCodecID     id;
    enum AVMediaType type;
    
    const char      *name;
    
    const char *long_name;
    
    int             props;
    
    const char *const *mime_types;
    
    const struct AVProfile *profiles;
} AVCodecDescriptor;
enum Motion_Est_ID {
    ME_ZERO = 1,    
    ME_FULL,
    ME_LOG,
    ME_PHODS,
    ME_EPZS,        
    ME_X1,          
    ME_HEX,         
    ME_UMH,         
    ME_TESA,        
    ME_ITER=50,     
};
enum AVDiscard{
    
    AVDISCARD_NONE    =-16, 
    AVDISCARD_DEFAULT =  0, 
    AVDISCARD_NONREF  =  8, 
    AVDISCARD_BIDIR   = 16, 
    AVDISCARD_NONINTRA= 24, 
    AVDISCARD_NONKEY  = 32, 
    AVDISCARD_ALL     = 48, 
};
enum AVAudioServiceType {
    AV_AUDIO_SERVICE_TYPE_MAIN              = 0,
    AV_AUDIO_SERVICE_TYPE_EFFECTS           = 1,
    AV_AUDIO_SERVICE_TYPE_VISUALLY_IMPAIRED = 2,
    AV_AUDIO_SERVICE_TYPE_HEARING_IMPAIRED  = 3,
    AV_AUDIO_SERVICE_TYPE_DIALOGUE          = 4,
    AV_AUDIO_SERVICE_TYPE_COMMENTARY        = 5,
    AV_AUDIO_SERVICE_TYPE_EMERGENCY         = 6,
    AV_AUDIO_SERVICE_TYPE_VOICE_OVER        = 7,
    AV_AUDIO_SERVICE_TYPE_KARAOKE           = 8,
    AV_AUDIO_SERVICE_TYPE_NB                   , 
};
typedef struct RcOverride{
    int start_frame;
    int end_frame;
    int qscale; 
    float quality_factor;
} RcOverride;
typedef struct AVPanScan{
    
    int id;
    int width;
    int height;
    int16_t position[3][2];
}AVPanScan;
typedef struct AVCPBProperties {
    
    int max_bitrate;
    
    int min_bitrate;
    
    int avg_bitrate;
    int buffer_size;
    uint64_t vbv_delay;
} AVCPBProperties;
enum AVPacketSideDataType {
    AV_PKT_DATA_PALETTE,
    AV_PKT_DATA_NEW_EXTRADATA,
    AV_PKT_DATA_PARAM_CHANGE,
    AV_PKT_DATA_H263_MB_INFO,
    AV_PKT_DATA_REPLAYGAIN,
    AV_PKT_DATA_DISPLAYMATRIX,
    AV_PKT_DATA_STEREO3D,
    AV_PKT_DATA_AUDIO_SERVICE_TYPE,
    AV_PKT_DATA_QUALITY_STATS,
    AV_PKT_DATA_FALLBACK_TRACK,
    AV_PKT_DATA_CPB_PROPERTIES,
    AV_PKT_DATA_SKIP_SAMPLES=70,
    AV_PKT_DATA_JP_DUALMONO,
    AV_PKT_DATA_STRINGS_METADATA,
    AV_PKT_DATA_SUBTITLE_POSITION,
    AV_PKT_DATA_MATROSKA_BLOCKADDITIONAL,
    AV_PKT_DATA_WEBVTT_IDENTIFIER,
    AV_PKT_DATA_WEBVTT_SETTINGS,
    AV_PKT_DATA_METADATA_UPDATE,
    AV_PKT_DATA_MPEGTS_STREAM_ID,
    AV_PKT_DATA_MASTERING_DISPLAY_METADATA
};
typedef struct AVPacketSideData {
    uint8_t *data;
    int      size;
    enum AVPacketSideDataType type;
} AVPacketSideData;
typedef struct AVPacket {
    
    AVBufferRef *buf;
    
    int64_t pts;
    
    int64_t dts;
    uint8_t *data;
    int   size;
    int   stream_index;
    
    int   flags;
    
    AVPacketSideData *side_data;
    int side_data_elems;
    int64_t duration;
    int64_t pos;                            
    __declspec(deprecated)
    int64_t convergence_duration;
} AVPacket;
enum AVSideDataParamChangeFlags {
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT  = 0x0001,
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT = 0x0002,
    AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE    = 0x0004,
    AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS     = 0x0008,
};
struct AVCodecInternal;
enum AVFieldOrder {
    AV_FIELD_UNKNOWN,
    AV_FIELD_PROGRESSIVE,
    AV_FIELD_TT,          
    AV_FIELD_BB,          
    AV_FIELD_TB,          
    AV_FIELD_BT,          
};
typedef struct AVCodecContext {
    
    const AVClass *av_class;
    int log_level_offset;
    enum AVMediaType codec_type; 
    const struct AVCodec  *codec;
    __declspec(deprecated)
    char             codec_name[32];
    enum AVCodecID     codec_id; 
    unsigned int codec_tag;
    __declspec(deprecated)
    unsigned int stream_codec_tag;
    void *priv_data;
    struct AVCodecInternal *internal;
    void *opaque;
    int64_t bit_rate;
    int bit_rate_tolerance;
    int global_quality;
    int compression_level;
    int flags;
    int flags2;
    uint8_t *extradata;
    int extradata_size;
    AVRational time_base;
    int ticks_per_frame;
    int delay;
    int width, height;
    int coded_width, coded_height;
    int gop_size;
    enum AVPixelFormat pix_fmt;
    __declspec(deprecated) int me_method;
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[8],
                            int y, int type, int height);
    enum AVPixelFormat (*get_format)(struct AVCodecContext *s, const enum AVPixelFormat * fmt);
    int max_b_frames;
    float b_quant_factor;
    __declspec(deprecated) int rc_strategy;
    __declspec(deprecated)
    int b_frame_strategy;
    float b_quant_offset;
    int has_b_frames;
    __declspec(deprecated)
    int mpeg_quant;
    float i_quant_factor;
    float i_quant_offset;
    float lumi_masking;
    float temporal_cplx_masking;
    float spatial_cplx_masking;
    float p_masking;
    float dark_masking;
    int slice_count;
    __declspec(deprecated)
     int prediction_method;
    int *slice_offset;
    AVRational sample_aspect_ratio;
    int me_cmp;
    
    int me_sub_cmp;
    
    int mb_cmp;
    
    int ildct_cmp;
    int dia_size;
    int last_predictor_count;
    __declspec(deprecated)
    int pre_me;
    int me_pre_cmp;
    int pre_dia_size;
    int me_subpel_quality;
    __declspec(deprecated) int dtg_active_format;
    int me_range;
    __declspec(deprecated) int intra_quant_bias;
    __declspec(deprecated) int inter_quant_bias;
    int slice_flags;
    __declspec(deprecated) int xvmc_acceleration;
    int mb_decision;
    uint16_t *intra_matrix;
    uint16_t *inter_matrix;
    __declspec(deprecated)
    int scenechange_threshold;
    __declspec(deprecated)
    int noise_reduction;
    __declspec(deprecated)
    int me_threshold;
    __declspec(deprecated)
    int mb_threshold;
    int intra_dc_precision;
    int skip_top;
    int skip_bottom;
    __declspec(deprecated)
    float border_masking;
    int mb_lmin;
    int mb_lmax;
    __declspec(deprecated)
    int me_penalty_compensation;
    int bidir_refine;
    __declspec(deprecated)
    int brd_scale;
    int keyint_min;
    int refs;
    __declspec(deprecated)
    int chromaoffset;
    __declspec(deprecated) int scenechange_factor;
    int mv0_threshold;
    __declspec(deprecated)
    int b_sensitivity;
    enum AVColorPrimaries color_primaries;
    enum AVColorTransferCharacteristic color_trc;
    enum AVColorSpace colorspace;
    enum AVColorRange color_range;
    enum AVChromaLocation chroma_sample_location;
    int slices;
    enum AVFieldOrder field_order;
    int sample_rate; 
    int channels;    
    enum AVSampleFormat sample_fmt;  
    int frame_size;
    int frame_number;
    int block_align;
    int cutoff;
    uint64_t channel_layout;
    uint64_t request_channel_layout;
    enum AVAudioServiceType audio_service_type;
    enum AVSampleFormat request_sample_fmt;
    int (*get_buffer2)(struct AVCodecContext *s, AVFrame *frame, int flags);
    int refcounted_frames;
    float qcompress;  
    float qblur;      
    int qmin;
    int qmax;
    int max_qdiff;
    __declspec(deprecated)
    float rc_qsquish;
    __declspec(deprecated)
    float rc_qmod_amp;
    __declspec(deprecated)
    int rc_qmod_freq;
    int rc_buffer_size;
    int rc_override_count;
    RcOverride *rc_override;
    __declspec(deprecated)
    const char *rc_eq;
    int64_t rc_max_rate;
    int64_t rc_min_rate;
    __declspec(deprecated)
    float rc_buffer_aggressivity;
    __declspec(deprecated)
    float rc_initial_cplx;
    float rc_max_available_vbv_use;
    float rc_min_vbv_overflow_use;
    int rc_initial_buffer_occupancy;
    __declspec(deprecated)
    int coder_type;
    __declspec(deprecated)
    int context_model;
    __declspec(deprecated)
    int lmin;
    __declspec(deprecated)
    int lmax;
    __declspec(deprecated)
    int frame_skip_threshold;
    __declspec(deprecated)
    int frame_skip_factor;
    __declspec(deprecated)
    int frame_skip_exp;
    __declspec(deprecated)
    int frame_skip_cmp;
    int trellis;
    __declspec(deprecated)
    int min_prediction_order;
    __declspec(deprecated)
    int max_prediction_order;
    __declspec(deprecated)
    int64_t timecode_frame_start;
    __declspec(deprecated)
    void (*rtp_callback)(struct AVCodecContext *avctx, void *data, int size, int mb_nb);
    __declspec(deprecated)
    int rtp_payload_size;   
                            
    __declspec(deprecated)
    int mv_bits;
    __declspec(deprecated)
    int header_bits;
    __declspec(deprecated)
    int i_tex_bits;
    __declspec(deprecated)
    int p_tex_bits;
    __declspec(deprecated)
    int i_count;
    __declspec(deprecated)
    int p_count;
    __declspec(deprecated)
    int skip_count;
    __declspec(deprecated)
    int misc_bits;
    __declspec(deprecated)
    int frame_bits;
    char *stats_out;
    char *stats_in;
    int workaround_bugs;
    int strict_std_compliance;
    int error_concealment;
    int debug;
    int debug_mv;
    int err_recognition;
    int64_t reordered_opaque;
    struct AVHWAccel *hwaccel;
    void *hwaccel_context;
    uint64_t error[8];
    int dct_algo;
    int idct_algo;
     int bits_per_coded_sample;
    int bits_per_raw_sample;
     int lowres;
    __declspec(deprecated) AVFrame *coded_frame;
    int thread_count;
    int thread_type;
    int active_thread_type;
    int thread_safe_callbacks;
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);
     int nsse_weight;
     int profile;
     int level;
    enum AVDiscard skip_loop_filter;
    enum AVDiscard skip_idct;
    enum AVDiscard skip_frame;
    uint8_t *subtitle_header;
    int subtitle_header_size;
    __declspec(deprecated)
    int error_rate;
    __declspec(deprecated)
    uint64_t vbv_delay;
    __declspec(deprecated)
    int side_data_only_packets;
    int initial_padding;
    AVRational framerate;
    enum AVPixelFormat sw_pix_fmt;
    AVRational pkt_timebase;
    const AVCodecDescriptor *codec_descriptor;
    int64_t pts_correction_num_faulty_pts; 
    int64_t pts_correction_num_faulty_dts; 
    int64_t pts_correction_last_pts;       
    int64_t pts_correction_last_dts;       
    char *sub_charenc;
    int sub_charenc_mode;
    int skip_alpha;
    int seek_preroll;
    uint16_t *chroma_intra_matrix;
    uint8_t *dump_separator;
    char *codec_whitelist;
    unsigned properties;
    AVPacketSideData *coded_side_data;
    int            nb_coded_side_data;
    AVBufferRef *hw_frames_ctx;
    int sub_text_format;
    int trailing_padding;
} AVCodecContext;
AVRational av_codec_get_pkt_timebase         (const AVCodecContext *avctx);
void       av_codec_set_pkt_timebase         (AVCodecContext *avctx, AVRational val);
const AVCodecDescriptor *av_codec_get_codec_descriptor(const AVCodecContext *avctx);
void                     av_codec_set_codec_descriptor(AVCodecContext *avctx, const AVCodecDescriptor *desc);
unsigned av_codec_get_codec_properties(const AVCodecContext *avctx);
int  av_codec_get_lowres(const AVCodecContext *avctx);
void av_codec_set_lowres(AVCodecContext *avctx, int val);
int  av_codec_get_seek_preroll(const AVCodecContext *avctx);
void av_codec_set_seek_preroll(AVCodecContext *avctx, int val);
uint16_t *av_codec_get_chroma_intra_matrix(const AVCodecContext *avctx);
void av_codec_set_chroma_intra_matrix(AVCodecContext *avctx, uint16_t *val);
typedef struct AVProfile {
    int profile;
    const char *name; 
} AVProfile;
typedef struct AVCodecDefault AVCodecDefault;
struct AVSubtitle;
typedef struct AVCodec {
    
    const char *name;
    
    const char *long_name;
    enum AVMediaType type;
    enum AVCodecID id;
    
    int capabilities;
    const AVRational *supported_framerates; 
    const enum AVPixelFormat *pix_fmts;     
    const int *supported_samplerates;       
    const enum AVSampleFormat *sample_fmts; 
    const uint64_t *channel_layouts;         
    uint8_t max_lowres;                     
    const AVClass *priv_class;              
    const AVProfile *profiles;              
    int priv_data_size;
    struct AVCodec *next;
    
    int (*init_thread_copy)(AVCodecContext *);
    
    int (*update_thread_context)(AVCodecContext *dst, const AVCodecContext *src);
    
    const AVCodecDefault *defaults;
    void (*init_static_data)(struct AVCodec *codec);
    int (*init)(AVCodecContext *);
    int (*encode_sub)(AVCodecContext *, uint8_t *buf, int buf_size,
                      const struct AVSubtitle *sub);
    
    int (*encode2)(AVCodecContext *avctx, AVPacket *avpkt, const AVFrame *frame,
                   int *got_packet_ptr);
    int (*decode)(AVCodecContext *, void *outdata, int *outdata_size, AVPacket *avpkt);
    int (*close)(AVCodecContext *);
    
    int (*send_frame)(AVCodecContext *avctx, const AVFrame *frame);
    int (*send_packet)(AVCodecContext *avctx, const AVPacket *avpkt);
    int (*receive_frame)(AVCodecContext *avctx, AVFrame *frame);
    int (*receive_packet)(AVCodecContext *avctx, AVPacket *avpkt);
    
    void (*flush)(AVCodecContext *);
    
    int caps_internal;
} AVCodec;
int av_codec_get_max_lowres(const AVCodec *codec);
struct MpegEncContext;
typedef struct AVHWAccel {
    
    const char *name;
    enum AVMediaType type;
    enum AVCodecID id;
    enum AVPixelFormat pix_fmt;
    int capabilities;
    struct AVHWAccel *next;
    int (*alloc_frame)(AVCodecContext *avctx, AVFrame *frame);
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
    int (*end_frame)(AVCodecContext *avctx);
    int frame_priv_data_size;
    void (*decode_mb)(struct MpegEncContext *s);
    int (*init)(AVCodecContext *avctx);
    int (*uninit)(AVCodecContext *avctx);
    int priv_data_size;
} AVHWAccel;
typedef struct AVPicture {
    __declspec(deprecated)
    uint8_t *data[8];    
    __declspec(deprecated)
    int linesize[8];     
} AVPicture;
enum AVSubtitleType {
    SUBTITLE_NONE,
    SUBTITLE_BITMAP,                
    SUBTITLE_TEXT,
    SUBTITLE_ASS,
};
typedef struct AVSubtitleRect {
    int x;         
    int y;         
    int w;         
    int h;         
    int nb_colors; 
    __declspec(deprecated)
    AVPicture pict;
    uint8_t *data[4];
    int linesize[4];
    enum AVSubtitleType type;
    char *text;                     
    char *ass;
    int flags;
} AVSubtitleRect;
typedef struct AVSubtitle {
    uint16_t format; 
    uint32_t start_display_time; 
    uint32_t end_display_time; 
    unsigned num_rects;
    AVSubtitleRect **rects;
    int64_t pts;    
} AVSubtitle;
typedef struct AVCodecParameters {
    
    enum AVMediaType codec_type;
    
    enum AVCodecID   codec_id;
    
    uint32_t         codec_tag;
    uint8_t *extradata;
    
    int      extradata_size;
    int format;
    int64_t bit_rate;
    int bits_per_coded_sample;
    int bits_per_raw_sample;
    int profile;
    int level;
    int width;
    int height;
    AVRational sample_aspect_ratio;
    enum AVFieldOrder                  field_order;
    enum AVColorRange                  color_range;
    enum AVColorPrimaries              color_primaries;
    enum AVColorTransferCharacteristic color_trc;
    enum AVColorSpace                  color_space;
    enum AVChromaLocation              chroma_location;
    int video_delay;
    uint64_t channel_layout;
    
    int      channels;
    
    int      sample_rate;
    
    int      block_align;
    
    int      frame_size;
    int initial_padding;
    
    int trailing_padding;
    
    int seek_preroll;
} AVCodecParameters;
AVCodec *av_codec_next(const AVCodec *c);
unsigned avcodec_version(void);
const char *avcodec_configuration(void);
const char *avcodec_license(void);
void avcodec_register(AVCodec *codec);
void avcodec_register_all(void);
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);
void avcodec_free_context(AVCodecContext **avctx);
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);
const AVClass *avcodec_get_class(void);
const AVClass *avcodec_get_frame_class(void);
const AVClass *avcodec_get_subtitle_rect_class(void);
__declspec(deprecated)
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);
AVCodecParameters *avcodec_parameters_alloc(void);
void avcodec_parameters_free(AVCodecParameters **par);
int avcodec_parameters_copy(AVCodecParameters *dst, const AVCodecParameters *src);
int avcodec_parameters_from_context(AVCodecParameters *par,
                                    const AVCodecContext *codec);
int avcodec_parameters_to_context(AVCodecContext *codec,
                                  const AVCodecParameters *par);
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
int avcodec_close(AVCodecContext *avctx);
void avsubtitle_free(AVSubtitle *sub);
AVPacket *av_packet_alloc(void);
AVPacket *av_packet_clone(AVPacket *src);
void av_packet_free(AVPacket **pkt);
void av_init_packet(AVPacket *pkt);
int av_new_packet(AVPacket *pkt, int size);
void av_shrink_packet(AVPacket *pkt, int size);
int av_grow_packet(AVPacket *pkt, int grow_by);
int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size);
__declspec(deprecated)
int av_dup_packet(AVPacket *pkt);
int av_copy_packet(AVPacket *dst, const AVPacket *src);
int av_copy_packet_side_data(AVPacket *dst, const AVPacket *src);
__declspec(deprecated)
void av_free_packet(AVPacket *pkt);
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int size);
int av_packet_add_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                            uint8_t *data, size_t size);
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                               int size);
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int *size);
int av_packet_merge_side_data(AVPacket *pkt);
int av_packet_split_side_data(AVPacket *pkt);
const char *av_packet_side_data_name(enum AVPacketSideDataType type);
uint8_t *av_packet_pack_dictionary(AVDictionary *dict, int *size);
int av_packet_unpack_dictionary(const uint8_t *data, int size, AVDictionary **dict);
void av_packet_free_side_data(AVPacket *pkt);
int av_packet_ref(AVPacket *dst, const AVPacket *src);
void av_packet_unref(AVPacket *pkt);
void av_packet_move_ref(AVPacket *dst, AVPacket *src);
int av_packet_copy_props(AVPacket *dst, const AVPacket *src);
void av_packet_rescale_ts(AVPacket *pkt, AVRational tb_src, AVRational tb_dst);
AVCodec *avcodec_find_decoder(enum AVCodecID id);
AVCodec *avcodec_find_decoder_by_name(const char *name);
int avcodec_default_get_buffer2(AVCodecContext *s, AVFrame *frame, int flags);
__declspec(deprecated)
unsigned avcodec_get_edge_width(void);
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[8]);
int avcodec_enum_to_chroma_pos(int *xpos, int *ypos, enum AVChromaLocation pos);
enum AVChromaLocation avcodec_chroma_pos_to_enum(int xpos, int ypos);
__declspec(deprecated)
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
                          int *got_frame_ptr, const AVPacket *avpkt);
__declspec(deprecated)
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                         int *got_picture_ptr,
                         const AVPacket *avpkt);
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
                            int *got_sub_ptr,
                            AVPacket *avpkt);
int avcodec_send_packet(AVCodecContext *avctx, const AVPacket *avpkt);
int avcodec_receive_frame(AVCodecContext *avctx, AVFrame *frame);
int avcodec_send_frame(AVCodecContext *avctx, const AVFrame *frame);
int avcodec_receive_packet(AVCodecContext *avctx, AVPacket *avpkt);
enum AVPictureStructure {
    AV_PICTURE_STRUCTURE_UNKNOWN,      
    AV_PICTURE_STRUCTURE_TOP_FIELD,    
    AV_PICTURE_STRUCTURE_BOTTOM_FIELD, 
    AV_PICTURE_STRUCTURE_FRAME,        
};
typedef struct AVCodecParserContext {
    void *priv_data;
    struct AVCodecParser *parser;
    int64_t frame_offset; 
    int64_t cur_offset; 
    int64_t next_frame_offset; 
    
    int pict_type; 
    
    int repeat_pict; 
    int64_t pts;     
    int64_t dts;     
    int64_t last_pts;
    int64_t last_dts;
    int fetch_timestamp;
    int cur_frame_start_index;
    int64_t cur_frame_offset[4];
    int64_t cur_frame_pts[4];
    int64_t cur_frame_dts[4];
    int flags;
    int64_t offset;      
    int64_t cur_frame_end[4];
    int key_frame;
    __declspec(deprecated)
    int64_t convergence_duration;
    int dts_sync_point;
    int dts_ref_dts_delta;
    int pts_dts_delta;
    int64_t cur_frame_pos[4];
    int64_t pos;
    int64_t last_pos;
    int duration;
    enum AVFieldOrder field_order;
    enum AVPictureStructure picture_structure;
    int output_picture_number;
    int width;
    int height;
    int coded_width;
    int coded_height;
    int format;
} AVCodecParserContext;
typedef struct AVCodecParser {
    int codec_ids[5]; 
    int priv_data_size;
    int (*parser_init)(AVCodecParserContext *s);
    
    int (*parser_parse)(AVCodecParserContext *s,
                        AVCodecContext *avctx,
                        const uint8_t **poutbuf, int *poutbuf_size,
                        const uint8_t *buf, int buf_size);
    void (*parser_close)(AVCodecParserContext *s);
    int (*split)(AVCodecContext *avctx, const uint8_t *buf, int buf_size);
    struct AVCodecParser *next;
} AVCodecParser;
AVCodecParser *av_parser_next(const AVCodecParser *c);
void av_register_codec_parser(AVCodecParser *parser);
AVCodecParserContext *av_parser_init(int codec_id);
int av_parser_parse2(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size,
                     int64_t pts, int64_t dts,
                     int64_t pos);
int av_parser_change(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size, int keyframe);
void av_parser_close(AVCodecParserContext *s);
AVCodec *avcodec_find_encoder(enum AVCodecID id);
AVCodec *avcodec_find_encoder_by_name(const char *name);
__declspec(deprecated)
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
__declspec(deprecated)
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);
struct ReSampleContext;
struct AVResampleContext;
typedef struct ReSampleContext ReSampleContext;
__declspec(deprecated)
ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
                                        int output_rate, int input_rate,
                                        enum AVSampleFormat sample_fmt_out,
                                        enum AVSampleFormat sample_fmt_in,
                                        int filter_length, int log2_phase_count,
                                        int linear, double cutoff);
__declspec(deprecated)
int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples);
__declspec(deprecated)
void audio_resample_close(ReSampleContext *s);
__declspec(deprecated)
struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
__declspec(deprecated)
int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
__declspec(deprecated)
void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);
__declspec(deprecated)
void av_resample_close(struct AVResampleContext *c);
__declspec(deprecated)
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);
__declspec(deprecated)
void avpicture_free(AVPicture *picture);
__declspec(deprecated)
int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
                   enum AVPixelFormat pix_fmt, int width, int height);
__declspec(deprecated)
int avpicture_layout(const AVPicture *src, enum AVPixelFormat pix_fmt,
                     int width, int height,
                     unsigned char *dest, int dest_size);
__declspec(deprecated)
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);
__declspec(deprecated)
void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum AVPixelFormat pix_fmt, int width, int height);
__declspec(deprecated)
int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum AVPixelFormat pix_fmt, int top_band, int left_band);
__declspec(deprecated)
int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
            int padtop, int padbottom, int padleft, int padright, int *color);
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);
unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
                             int has_alpha);
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(const enum AVPixelFormat *pix_fmt_list,
                                            enum AVPixelFormat src_pix_fmt,
                                            int has_alpha, int *loss_ptr);
enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
                                            enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);
__declspec(deprecated)
enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
                                            enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);
enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);
__declspec(deprecated)
void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);
void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
const char *av_get_profile_name(const AVCodec *codec, int profile);
const char *avcodec_profile_name(enum AVCodecID codec_id, int profile);
int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
                             enum AVSampleFormat sample_fmt, const uint8_t *buf,
                             int buf_size, int align);
void avcodec_flush_buffers(AVCodecContext *avctx);
int av_get_bits_per_sample(enum AVCodecID codec_id);
enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be);
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes);
int av_get_audio_frame_duration2(AVCodecParameters *par, int frame_bytes);
typedef struct AVBitStreamFilterContext {
    void *priv_data;
    struct AVBitStreamFilter *filter;
    AVCodecParserContext *parser;
    struct AVBitStreamFilterContext *next;
    
    char *args;
} AVBitStreamFilterContext;
typedef struct AVBSFInternal AVBSFInternal;
typedef struct AVBSFContext {
    
    const AVClass *av_class;
    const struct AVBitStreamFilter *filter;
    AVBSFInternal *internal;
    void *priv_data;
    AVCodecParameters *par_in;
    AVCodecParameters *par_out;
    AVRational time_base_in;
    AVRational time_base_out;
} AVBSFContext;
typedef struct AVBitStreamFilter {
    const char *name;
    const enum AVCodecID *codec_ids;
    const AVClass *priv_class;
    int priv_data_size;
    int (*init)(AVBSFContext *ctx);
    int (*filter)(AVBSFContext *ctx, AVPacket *pkt);
    void (*close)(AVBSFContext *ctx);
} AVBitStreamFilter;
__declspec(deprecated)
void av_register_bitstream_filter(AVBitStreamFilter *bsf);
__declspec(deprecated)
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name);
__declspec(deprecated)
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
                               AVCodecContext *avctx, const char *args,
                               uint8_t **poutbuf, int *poutbuf_size,
                               const uint8_t *buf, int buf_size, int keyframe);
__declspec(deprecated)
void av_bitstream_filter_close(AVBitStreamFilterContext *bsf);
__declspec(deprecated)
AVBitStreamFilter *av_bitstream_filter_next(const AVBitStreamFilter *f);
const AVBitStreamFilter *av_bsf_get_by_name(const char *name);
const AVBitStreamFilter *av_bsf_next(void **opaque);
int av_bsf_alloc(const AVBitStreamFilter *filter, AVBSFContext **ctx);
int av_bsf_init(AVBSFContext *ctx);
int av_bsf_send_packet(AVBSFContext *ctx, AVPacket *pkt);
int av_bsf_receive_packet(AVBSFContext *ctx, AVPacket *pkt);
void av_bsf_free(AVBSFContext **ctx);
const AVClass *av_bsf_get_class(void);
typedef struct AVBSFList AVBSFList;
AVBSFList *av_bsf_list_alloc(void);
void av_bsf_list_free(AVBSFList **lst);
int av_bsf_list_append(AVBSFList *lst, AVBSFContext *bsf);
int av_bsf_list_append2(AVBSFList *lst, const char * bsf_name, AVDictionary **options);
int av_bsf_list_finalize(AVBSFList **lst, AVBSFContext **bsf);
int av_bsf_list_parse_str(const char *str, AVBSFContext **bsf);
int av_bsf_get_null_filter(AVBSFContext **bsf);
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size);
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
__declspec(deprecated)
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
__declspec(deprecated)
void av_log_ask_for_sample(void *avc, const char *msg, ...) ;
void av_register_hwaccel(AVHWAccel *hwaccel);
AVHWAccel *av_hwaccel_next(const AVHWAccel *hwaccel);
enum AVLockOp {
  AV_LOCK_CREATE,  
  AV_LOCK_OBTAIN,  
  AV_LOCK_RELEASE, 
  AV_LOCK_DESTROY, 
};
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));
enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);
const char *avcodec_get_name(enum AVCodecID id);
int avcodec_is_open(AVCodecContext *s);
int av_codec_is_encoder(const AVCodec *codec);
int av_codec_is_decoder(const AVCodec *codec);
const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);
const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
AVCPBProperties *av_cpb_properties_alloc(size_t *size);
typedef struct AVIOInterruptCB {
    int (*callback)(void*);
    void *opaque;
} AVIOInterruptCB;
enum AVIODirEntryType {
    AVIO_ENTRY_UNKNOWN,
    AVIO_ENTRY_BLOCK_DEVICE,
    AVIO_ENTRY_CHARACTER_DEVICE,
    AVIO_ENTRY_DIRECTORY,
    AVIO_ENTRY_NAMED_PIPE,
    AVIO_ENTRY_SYMBOLIC_LINK,
    AVIO_ENTRY_SOCKET,
    AVIO_ENTRY_FILE,
    AVIO_ENTRY_SERVER,
    AVIO_ENTRY_SHARE,
    AVIO_ENTRY_WORKGROUP,
};
typedef struct AVIODirEntry {
    char *name;                           
    int type;                             
    int utf8;                             
    int64_t size;                         
    int64_t modification_timestamp;       
    int64_t access_timestamp;             
    int64_t status_change_timestamp;      
    int64_t user_id;                      
    int64_t group_id;                     
    int64_t filemode;                     
} AVIODirEntry;
typedef struct AVIODirContext {
    struct URLContext *url_context;
} AVIODirContext;
enum AVIODataMarkerType {
    
    AVIO_DATA_MARKER_HEADER,
    
    AVIO_DATA_MARKER_SYNC_POINT,
    
    AVIO_DATA_MARKER_BOUNDARY_POINT,
    
    AVIO_DATA_MARKER_UNKNOWN,
    
    AVIO_DATA_MARKER_TRAILER
};
typedef struct AVIOContext {
    
    const AVClass *av_class;
    unsigned char *buffer;  
    int buffer_size;        
    unsigned char *buf_ptr; 
    unsigned char *buf_end; 
    void *opaque;           
    int (*read_packet)(void *opaque, uint8_t *buf, int buf_size);
    int (*write_packet)(void *opaque, uint8_t *buf, int buf_size);
    int64_t (*seek)(void *opaque, int64_t offset, int whence);
    int64_t pos;            
    int must_flush;         
    int eof_reached;        
    int write_flag;         
    int max_packet_size;
    unsigned long checksum;
    unsigned char *checksum_ptr;
    unsigned long (*update_checksum)(unsigned long checksum, const uint8_t *buf, unsigned int size);
    int error;              
    
    int (*read_pause)(void *opaque, int pause);
    
    int64_t (*read_seek)(void *opaque, int stream_index,
                         int64_t timestamp, int flags);
    
    int seekable;
    int64_t maxsize;
    int direct;
    int64_t bytes_read;
    int seek_count;
    int writeout_count;
    int orig_buffer_size;
    int short_seek_threshold;
    const char *protocol_whitelist;
    const char *protocol_blacklist;
    int (*write_data_type)(void *opaque, uint8_t *buf, int buf_size,
                           enum AVIODataMarkerType type, int64_t time);
    
    int ignore_boundary_point;
    enum AVIODataMarkerType current_type;
    int64_t last_time;
} AVIOContext;
const char *avio_find_protocol_name(const char *url);
int avio_check(const char *url, int flags);
int avpriv_io_move(const char *url_src, const char *url_dst);
int avpriv_io_delete(const char *url);
int avio_open_dir(AVIODirContext **s, const char *url, AVDictionary **options);
int avio_read_dir(AVIODirContext *s, AVIODirEntry **next);
int avio_close_dir(AVIODirContext **s);
void avio_free_directory_entry(AVIODirEntry **entry);
AVIOContext *avio_alloc_context(
                  unsigned char *buffer,
                  int buffer_size,
                  int write_flag,
                  void *opaque,
                  int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int64_t (*seek)(void *opaque, int64_t offset, int whence));
void avio_w8(AVIOContext *s, int b);
void avio_write(AVIOContext *s, const unsigned char *buf, int size);
void avio_wl64(AVIOContext *s, uint64_t val);
void avio_wb64(AVIOContext *s, uint64_t val);
void avio_wl32(AVIOContext *s, unsigned int val);
void avio_wb32(AVIOContext *s, unsigned int val);
void avio_wl24(AVIOContext *s, unsigned int val);
void avio_wb24(AVIOContext *s, unsigned int val);
void avio_wl16(AVIOContext *s, unsigned int val);
void avio_wb16(AVIOContext *s, unsigned int val);
int avio_put_str(AVIOContext *s, const char *str);
int avio_put_str16le(AVIOContext *s, const char *str);
int avio_put_str16be(AVIOContext *s, const char *str);
void avio_write_marker(AVIOContext *s, int64_t time, enum AVIODataMarkerType type);
int64_t avio_seek(AVIOContext *s, int64_t offset, int whence);
int64_t avio_skip(AVIOContext *s, int64_t offset);
int64_t avio_size(AVIOContext *s);
int avio_feof(AVIOContext *s);
__declspec(deprecated)
int url_feof(AVIOContext *s);
int avio_printf(AVIOContext *s, const char *fmt, ...) ;
void avio_flush(AVIOContext *s);
int avio_read(AVIOContext *s, unsigned char *buf, int size);
int          avio_r8  (AVIOContext *s);
unsigned int avio_rl16(AVIOContext *s);
unsigned int avio_rl24(AVIOContext *s);
unsigned int avio_rl32(AVIOContext *s);
uint64_t     avio_rl64(AVIOContext *s);
unsigned int avio_rb16(AVIOContext *s);
unsigned int avio_rb24(AVIOContext *s);
unsigned int avio_rb32(AVIOContext *s);
uint64_t     avio_rb64(AVIOContext *s);
int avio_get_str(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16le(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16be(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_open(AVIOContext **s, const char *url, int flags);
int avio_open2(AVIOContext **s, const char *url, int flags,
               const AVIOInterruptCB *int_cb, AVDictionary **options);
int avio_close(AVIOContext *s);
int avio_closep(AVIOContext **s);
int avio_open_dyn_buf(AVIOContext **s);
int avio_close_dyn_buf(AVIOContext *s, uint8_t **pbuffer);
const char *avio_enum_protocols(void **opaque, int output);
int     avio_pause(AVIOContext *h, int pause);
int64_t avio_seek_time(AVIOContext *h, int stream_index,
                       int64_t timestamp, int flags);
struct AVBPrint;
int avio_read_to_bprint(AVIOContext *h, struct AVBPrint *pb, size_t max_size);
int avio_accept(AVIOContext *s, AVIOContext **c);
int avio_handshake(AVIOContext *c);
struct AVFormatContext;
struct AVDeviceInfoList;
struct AVDeviceCapabilitiesQuery;
int av_get_packet(AVIOContext *s, AVPacket *pkt, int size);
int av_append_packet(AVIOContext *s, AVPacket *pkt, int size);
typedef struct AVFrac {
    int64_t val, num, den;
} AVFrac;
struct AVCodecTag;
typedef struct AVProbeData {
    const char *filename;
    unsigned char *buf; 
    int buf_size;       
    const char *mime_type; 
} AVProbeData;
typedef struct AVOutputFormat {
    const char *name;
    
    const char *long_name;
    const char *mime_type;
    const char *extensions; 
    
    enum AVCodecID audio_codec;    
    enum AVCodecID video_codec;    
    enum AVCodecID subtitle_codec; 
    
    int flags;
    const struct AVCodecTag * const *codec_tag;
    const AVClass *priv_class; 
    struct AVOutputFormat *next;
    
    int priv_data_size;
    int (*write_header)(struct AVFormatContext *);
    
    int (*write_packet)(struct AVFormatContext *, AVPacket *pkt);
    int (*write_trailer)(struct AVFormatContext *);
    
    int (*interleave_packet)(struct AVFormatContext *, AVPacket *out,
                             AVPacket *in, int flush);
    
    int (*query_codec)(enum AVCodecID id, int std_compliance);
    void (*get_output_timestamp)(struct AVFormatContext *s, int stream,
                                 int64_t *dts, int64_t *wall);
    
    int (*control_message)(struct AVFormatContext *s, int type,
                           void *data, size_t data_size);
    int (*write_uncoded_frame)(struct AVFormatContext *, int stream_index,
                               AVFrame **frame, unsigned flags);
    
    int (*get_device_list)(struct AVFormatContext *s, struct AVDeviceInfoList *device_list);
    
    int (*create_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
    
    int (*free_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
    enum AVCodecID data_codec; 
    
    int (*init)(struct AVFormatContext *);
    
    void (*deinit)(struct AVFormatContext *);
    
    int (*check_bitstream)(struct AVFormatContext *, const AVPacket *pkt);
} AVOutputFormat;
typedef struct AVInputFormat {
    
    const char *name;
    const char *long_name;
    int flags;
    const char *extensions;
    const struct AVCodecTag * const *codec_tag;
    const AVClass *priv_class; 
    const char *mime_type;
    struct AVInputFormat *next;
    int raw_codec_id;
    int priv_data_size;
    int (*read_probe)(AVProbeData *);
    int (*read_header)(struct AVFormatContext *);
    int (*read_packet)(struct AVFormatContext *, AVPacket *pkt);
    int (*read_close)(struct AVFormatContext *);
    int (*read_seek)(struct AVFormatContext *,
                     int stream_index, int64_t timestamp, int flags);
    int64_t (*read_timestamp)(struct AVFormatContext *s, int stream_index,
                              int64_t *pos, int64_t pos_limit);
    int (*read_play)(struct AVFormatContext *);
    int (*read_pause)(struct AVFormatContext *);
    int (*read_seek2)(struct AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
    int (*get_device_list)(struct AVFormatContext *s, struct AVDeviceInfoList *device_list);
    int (*create_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
    int (*free_device_capabilities)(struct AVFormatContext *s, struct AVDeviceCapabilitiesQuery *caps);
} AVInputFormat;
enum AVStreamParseType {
    AVSTREAM_PARSE_NONE,
    AVSTREAM_PARSE_FULL,       
    AVSTREAM_PARSE_HEADERS,    
    AVSTREAM_PARSE_TIMESTAMPS, 
    AVSTREAM_PARSE_FULL_ONCE,  
    AVSTREAM_PARSE_FULL_RAW=((0) | (('R') << 8) | (('A') << 16) | ((unsigned)('W') << 24)),       
};
typedef struct AVIndexEntry {
    int64_t pos;
    int64_t timestamp;        
    int flags:2;
    int size:30; 
    int min_distance;         
} AVIndexEntry;
typedef struct AVStreamInternal AVStreamInternal;
typedef struct AVStream {
    int index;    
    
    int id;
    __declspec(deprecated)
    AVCodecContext *codec;
    void *priv_data;
    __declspec(deprecated)
    struct AVFrac pts;
    AVRational time_base;
    int64_t start_time;
    int64_t duration;
    int64_t nb_frames;                 
    int disposition; 
    enum AVDiscard discard; 
    AVRational sample_aspect_ratio;
    AVDictionary *metadata;
    AVRational avg_frame_rate;
    AVPacket attached_pic;
    AVPacketSideData *side_data;
    
    int            nb_side_data;
    int event_flags;
    struct {
        int64_t last_dts;
        int64_t duration_gcd;
        int duration_count;
        int64_t rfps_duration_sum;
        double (*duration_error)[2][(30*12+30+3+6)];
        int64_t codec_info_duration;
        int64_t codec_info_duration_fields;
        int found_decoder;
        int64_t last_duration;
        int64_t fps_first_dts;
        int     fps_first_dts_idx;
        int64_t fps_last_dts;
        int     fps_last_dts_idx;
    } *info;
    int pts_wrap_bits; 
    int64_t first_dts;
    int64_t cur_dts;
    int64_t last_IP_pts;
    int last_IP_duration;
    int probe_packets;
    int codec_info_nb_frames;
    enum AVStreamParseType need_parsing;
    struct AVCodecParserContext *parser;
    struct AVPacketList *last_in_packet_buffer;
    AVProbeData probe_data;
    int64_t pts_buffer[16+1];
    AVIndexEntry *index_entries; 
    int nb_index_entries;
    unsigned int index_entries_allocated_size;
    AVRational r_frame_rate;
    int stream_identifier;
    int64_t interleaver_chunk_size;
    int64_t interleaver_chunk_duration;
    int request_probe;
    
    int skip_to_keyframe;
    int skip_samples;
    int64_t start_skip_samples;
    int64_t first_discard_sample;
    int64_t last_discard_sample;
    int nb_decoded_frames;
    int64_t mux_ts_offset;
    int64_t pts_wrap_reference;
    int pts_wrap_behavior;
    int update_initial_durations_done;
    int64_t pts_reorder_error[16+1];
    uint8_t pts_reorder_error_count[16+1];
    int64_t last_dts_for_order_check;
    uint8_t dts_ordered;
    uint8_t dts_misordered;
    int inject_global_side_data;
    char *recommended_encoder_configuration;
    AVRational display_aspect_ratio;
    struct FFFrac *priv_pts;
    AVStreamInternal *internal;
    AVCodecParameters *codecpar;
} AVStream;
AVRational av_stream_get_r_frame_rate(const AVStream *s);
void       av_stream_set_r_frame_rate(AVStream *s, AVRational r);
struct AVCodecParserContext *av_stream_get_parser(const AVStream *s);
char* av_stream_get_recommended_encoder_configuration(const AVStream *s);
void  av_stream_set_recommended_encoder_configuration(AVStream *s, char *configuration);
int64_t    av_stream_get_end_pts(const AVStream *st);
typedef struct AVProgram {
    int            id;
    int            flags;
    enum AVDiscard discard;        
    unsigned int   *stream_index;
    unsigned int   nb_stream_indexes;
    AVDictionary *metadata;
    int program_num;
    int pmt_pid;
    int pcr_pid;
    int64_t start_time;
    int64_t end_time;
    int64_t pts_wrap_reference;    
    int pts_wrap_behavior;         
} AVProgram;
typedef struct AVChapter {
    int id;                 
    AVRational time_base;   
    int64_t start, end;     
    AVDictionary *metadata;
} AVChapter;
typedef int (*av_format_control_message)(struct AVFormatContext *s, int type,
                                         void *data, size_t data_size);
typedef int (*AVOpenCallback)(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
                              const AVIOInterruptCB *int_cb, AVDictionary **options);
enum AVDurationEstimationMethod {
    AVFMT_DURATION_FROM_PTS,    
    AVFMT_DURATION_FROM_STREAM, 
    AVFMT_DURATION_FROM_BITRATE 
};
typedef struct AVFormatInternal AVFormatInternal;
typedef struct AVFormatContext {
    
    const AVClass *av_class;
    struct AVInputFormat *iformat;
    struct AVOutputFormat *oformat;
    void *priv_data;
    AVIOContext *pb;
    int ctx_flags;
    unsigned int nb_streams;
    
    AVStream **streams;
    char filename[1024];
    int64_t start_time;
    int64_t duration;
    int64_t bit_rate;
    unsigned int packet_size;
    int max_delay;
    int flags;
    int64_t probesize;
    int64_t max_analyze_duration;
    const uint8_t *key;
    int keylen;
    unsigned int nb_programs;
    AVProgram **programs;
    enum AVCodecID video_codec_id;
    enum AVCodecID audio_codec_id;
    enum AVCodecID subtitle_codec_id;
    unsigned int max_index_size;
    unsigned int max_picture_buffer;
    unsigned int nb_chapters;
    AVChapter **chapters;
    AVDictionary *metadata;
    int64_t start_time_realtime;
    int fps_probe_size;
    int error_recognition;
    AVIOInterruptCB interrupt_callback;
    int debug;
    int64_t max_interleave_delta;
    int strict_std_compliance;
    int event_flags;
    int max_ts_probe;
    int avoid_negative_ts;
    int ts_id;
    int audio_preload;
    int max_chunk_duration;
    int max_chunk_size;
    int use_wallclock_as_timestamps;
    int avio_flags;
    enum AVDurationEstimationMethod duration_estimation_method;
    int64_t skip_initial_bytes;
    unsigned int correct_ts_overflow;
    int seek2any;
    int flush_packets;
    int probe_score;
    int format_probesize;
    char *codec_whitelist;
    char *format_whitelist;
    AVFormatInternal *internal;
    int io_repositioned;
    AVCodec *video_codec;
    AVCodec *audio_codec;
    AVCodec *subtitle_codec;
    AVCodec *data_codec;
    int metadata_header_padding;
    void *opaque;
    av_format_control_message control_message_cb;
    int64_t output_ts_offset;
    uint8_t *dump_separator;
    enum AVCodecID data_codec_id;
    __declspec(deprecated)
    int (*open_cb)(struct AVFormatContext *s, AVIOContext **p, const char *url, int flags, const AVIOInterruptCB *int_cb, AVDictionary **options);
    char *protocol_whitelist;
    int (*io_open)(struct AVFormatContext *s, AVIOContext **pb, const char *url,
                   int flags, AVDictionary **options);
    void (*io_close)(struct AVFormatContext *s, AVIOContext *pb);
    char *protocol_blacklist;
} AVFormatContext;
int av_format_get_probe_score(const AVFormatContext *s);
AVCodec * av_format_get_video_codec(const AVFormatContext *s);
void      av_format_set_video_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_audio_codec(const AVFormatContext *s);
void      av_format_set_audio_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_subtitle_codec(const AVFormatContext *s);
void      av_format_set_subtitle_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_data_codec(const AVFormatContext *s);
void      av_format_set_data_codec(AVFormatContext *s, AVCodec *c);
int       av_format_get_metadata_header_padding(const AVFormatContext *s);
void      av_format_set_metadata_header_padding(AVFormatContext *s, int c);
void *    av_format_get_opaque(const AVFormatContext *s);
void      av_format_set_opaque(AVFormatContext *s, void *opaque);
av_format_control_message av_format_get_control_message_cb(const AVFormatContext *s);
void      av_format_set_control_message_cb(AVFormatContext *s, av_format_control_message callback);
__declspec(deprecated) AVOpenCallback av_format_get_open_cb(const AVFormatContext *s);
__declspec(deprecated) void av_format_set_open_cb(AVFormatContext *s, AVOpenCallback callback);
void av_format_inject_global_side_data(AVFormatContext *s);
enum AVDurationEstimationMethod av_fmt_ctx_get_duration_estimation_method(const AVFormatContext* ctx);
typedef struct AVPacketList {
    AVPacket pkt;
    struct AVPacketList *next;
} AVPacketList;
unsigned avformat_version(void);
const char *avformat_configuration(void);
const char *avformat_license(void);
void av_register_all(void);
void av_register_input_format(AVInputFormat *format);
void av_register_output_format(AVOutputFormat *format);
int avformat_network_init(void);
int avformat_network_deinit(void);
AVInputFormat  *av_iformat_next(const AVInputFormat  *f);
AVOutputFormat *av_oformat_next(const AVOutputFormat *f);
AVFormatContext *avformat_alloc_context(void);
void avformat_free_context(AVFormatContext *s);
const AVClass *avformat_get_class(void);
AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c);
uint8_t *av_stream_new_side_data(AVStream *stream,
                                 enum AVPacketSideDataType type, int size);
uint8_t *av_stream_get_side_data(AVStream *stream,
                                 enum AVPacketSideDataType type, int *size);
AVProgram *av_new_program(AVFormatContext *s, int id);
int avformat_alloc_output_context2(AVFormatContext **ctx, AVOutputFormat *oformat,
                                   const char *format_name, const char *filename);
AVInputFormat *av_find_input_format(const char *short_name);
AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened);
AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max);
AVInputFormat *av_probe_input_format3(AVProbeData *pd, int is_opened, int *score_ret);
int av_probe_input_buffer2(AVIOContext *pb, AVInputFormat **fmt,
                           const char *url, void *logctx,
                           unsigned int offset, unsigned int max_probe_size);
int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
                          const char *url, void *logctx,
                          unsigned int offset, unsigned int max_probe_size);
int avformat_open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options);
__declspec(deprecated)
int av_demuxer_open(AVFormatContext *ic);
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options);
AVProgram *av_find_program_from_stream(AVFormatContext *ic, AVProgram *last, int s);
void av_program_add_stream_index(AVFormatContext *ac, int progid, unsigned int idx);
int av_find_best_stream(AVFormatContext *ic,
                        enum AVMediaType type,
                        int wanted_stream_nb,
                        int related_stream,
                        AVCodec **decoder_ret,
                        int flags);
int av_read_frame(AVFormatContext *s, AVPacket *pkt);
int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp,
                  int flags);
int avformat_seek_file(AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
int avformat_flush(AVFormatContext *s);
int av_read_play(AVFormatContext *s);
int av_read_pause(AVFormatContext *s);
void avformat_close_input(AVFormatContext **s);
int avformat_write_header(AVFormatContext *s, AVDictionary **options);
int avformat_init_output(AVFormatContext *s, AVDictionary **options);
int av_write_frame(AVFormatContext *s, AVPacket *pkt);
int av_interleaved_write_frame(AVFormatContext *s, AVPacket *pkt);
int av_write_uncoded_frame(AVFormatContext *s, int stream_index,
                           AVFrame *frame);
int av_interleaved_write_uncoded_frame(AVFormatContext *s, int stream_index,
                                       AVFrame *frame);
int av_write_uncoded_frame_query(AVFormatContext *s, int stream_index);
int av_write_trailer(AVFormatContext *s);
AVOutputFormat *av_guess_format(const char *short_name,
                                const char *filename,
                                const char *mime_type);
enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
                            const char *filename, const char *mime_type,
                            enum AVMediaType type);
int av_get_output_timestamp(struct AVFormatContext *s, int stream,
                            int64_t *dts, int64_t *wall);
void av_hex_dump(FILE *f, const uint8_t *buf, int size);
void av_hex_dump_log(void *avcl, int level, const uint8_t *buf, int size);
void av_pkt_dump2(FILE *f, const AVPacket *pkt, int dump_payload, const AVStream *st);
void av_pkt_dump_log2(void *avcl, int level, const AVPacket *pkt, int dump_payload,
                      const AVStream *st);
enum AVCodecID av_codec_get_id(const struct AVCodecTag * const *tags, unsigned int tag);
unsigned int av_codec_get_tag(const struct AVCodecTag * const *tags, enum AVCodecID id);
int av_codec_get_tag2(const struct AVCodecTag * const *tags, enum AVCodecID id,
                      unsigned int *tag);
int av_find_default_stream_index(AVFormatContext *s);
int av_index_search_timestamp(AVStream *st, int64_t timestamp, int flags);
int av_add_index_entry(AVStream *st, int64_t pos, int64_t timestamp,
                       int size, int distance, int flags);
void av_url_split(char *proto,         int proto_size,
                  char *authorization, int authorization_size,
                  char *hostname,      int hostname_size,
                  int *port_ptr,
                  char *path,          int path_size,
                  const char *url);
void av_dump_format(AVFormatContext *ic,
                    int index,
                    const char *url,
                    int is_output);
int av_get_frame_filename2(char *buf, int buf_size,
                          const char *path, int number, int flags);
int av_get_frame_filename(char *buf, int buf_size,
                          const char *path, int number);
int av_filename_number_test(const char *filename);
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size);
int av_match_ext(const char *filename, const char *extensions);
int avformat_query_codec(const AVOutputFormat *ofmt, enum AVCodecID codec_id,
                         int std_compliance);
const struct AVCodecTag *avformat_get_riff_video_tags(void);
const struct AVCodecTag *avformat_get_riff_audio_tags(void);
const struct AVCodecTag *avformat_get_mov_video_tags(void);
const struct AVCodecTag *avformat_get_mov_audio_tags(void);
AVRational av_guess_sample_aspect_ratio(AVFormatContext *format, AVStream *stream, AVFrame *frame);
AVRational av_guess_frame_rate(AVFormatContext *ctx, AVStream *stream, AVFrame *frame);
int avformat_match_stream_specifier(AVFormatContext *s, AVStream *st,
                                    const char *spec);
int avformat_queue_attached_pictures(AVFormatContext *s);
__declspec(deprecated)
int av_apply_bitstream_filters(AVCodecContext *codec, AVPacket *pkt,
                               AVBitStreamFilterContext *bsfc);
enum AVTimebaseSource {
    AVFMT_TBCF_AUTO = -1,
    AVFMT_TBCF_DECODER,
    AVFMT_TBCF_DEMUXER,
    AVFMT_TBCF_R_FRAMERATE,
};
int avformat_transfer_internal_stream_timing_info(const AVOutputFormat *ofmt,
                                                  AVStream *ost, const AVStream *ist,
                                                  enum AVTimebaseSource copy_tb);
AVRational av_stream_get_codec_timebase(const AVStream *st);
unsigned swscale_version(void);
const char *swscale_configuration(void);
const char *swscale_license(void);
const int *sws_getCoefficients(int colorspace);
typedef struct SwsVector {
    double *coeff;              
    int length;                 
} SwsVector;
typedef struct SwsFilter {
    SwsVector *lumH;
    SwsVector *lumV;
    SwsVector *chrH;
    SwsVector *chrV;
} SwsFilter;
struct SwsContext;
int sws_isSupportedInput(enum AVPixelFormat pix_fmt);
int sws_isSupportedOutput(enum AVPixelFormat pix_fmt);
int sws_isSupportedEndiannessConversion(enum AVPixelFormat pix_fmt);
struct SwsContext *sws_alloc_context(void);
int sws_init_context(struct SwsContext *sws_context, SwsFilter *srcFilter, SwsFilter *dstFilter);
void sws_freeContext(struct SwsContext *swsContext);
struct SwsContext *sws_getContext(int srcW, int srcH, enum AVPixelFormat srcFormat,
                                  int dstW, int dstH, enum AVPixelFormat dstFormat,
                                  int flags, SwsFilter *srcFilter,
                                  SwsFilter *dstFilter, const double *param);
int sws_scale(struct SwsContext *c, const uint8_t *const srcSlice[],
              const int srcStride[], int srcSliceY, int srcSliceH,
              uint8_t *const dst[], const int dstStride[]);
int sws_setColorspaceDetails(struct SwsContext *c, const int inv_table[4],
                             int srcRange, const int table[4], int dstRange,
                             int brightness, int contrast, int saturation);
int sws_getColorspaceDetails(struct SwsContext *c, int **inv_table,
                             int *srcRange, int **table, int *dstRange,
                             int *brightness, int *contrast, int *saturation);
SwsVector *sws_allocVec(int length);
SwsVector *sws_getGaussianVec(double variance, double quality);
void sws_scaleVec(SwsVector *a, double scalar);
void sws_normalizeVec(SwsVector *a, double height);
__declspec(deprecated) SwsVector *sws_getConstVec(double c, int length);
__declspec(deprecated) SwsVector *sws_getIdentityVec(void);
__declspec(deprecated) void sws_convVec(SwsVector *a, SwsVector *b);
__declspec(deprecated) void sws_addVec(SwsVector *a, SwsVector *b);
__declspec(deprecated) void sws_subVec(SwsVector *a, SwsVector *b);
__declspec(deprecated) void sws_shiftVec(SwsVector *a, int shift);
__declspec(deprecated) SwsVector *sws_cloneVec(SwsVector *a);
__declspec(deprecated) void sws_printVec2(SwsVector *a, AVClass *log_ctx, int log_level);
void sws_freeVec(SwsVector *a);
SwsFilter *sws_getDefaultFilter(float lumaGBlur, float chromaGBlur,
                                float lumaSharpen, float chromaSharpen,
                                float chromaHShift, float chromaVShift,
                                int verbose);
void sws_freeFilter(SwsFilter *filter);
struct SwsContext *sws_getCachedContext(struct SwsContext *context,
                                        int srcW, int srcH, enum AVPixelFormat srcFormat,
                                        int dstW, int dstH, enum AVPixelFormat dstFormat,
                                        int flags, SwsFilter *srcFilter,
                                        SwsFilter *dstFilter, const double *param);
void sws_convertPalette8ToPacked32(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);
void sws_convertPalette8ToPacked24(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);
const AVClass *sws_get_class(void);
unsigned avfilter_version(void);
const char *avfilter_configuration(void);
const char *avfilter_license(void);
typedef struct AVFilterContext AVFilterContext;
typedef struct AVFilterLink    AVFilterLink;
typedef struct AVFilterPad     AVFilterPad;
typedef struct AVFilterFormats AVFilterFormats;
int avfilter_pad_count(const AVFilterPad *pads);
const char *avfilter_pad_get_name(const AVFilterPad *pads, int pad_idx);
enum AVMediaType avfilter_pad_get_type(const AVFilterPad *pads, int pad_idx);
typedef struct AVFilter {
    
    const char *name;
    const char *description;
    const AVFilterPad *inputs;
    
    const AVFilterPad *outputs;
    const AVClass *priv_class;
    int flags;
    int (*init)(AVFilterContext *ctx);
    int (*init_dict)(AVFilterContext *ctx, AVDictionary **options);
    void (*uninit)(AVFilterContext *ctx);
    int (*query_formats)(AVFilterContext *);
    int priv_size;      
    struct AVFilter *next;
    int (*process_command)(AVFilterContext *, const char *cmd, const char *arg, char *res, int res_len, int flags);
    int (*init_opaque)(AVFilterContext *ctx, void *opaque);
} AVFilter;
typedef struct AVFilterInternal AVFilterInternal;
struct AVFilterContext {
    const AVClass *av_class;        
    const AVFilter *filter;         
    char *name;                     
    AVFilterPad   *input_pads;      
    AVFilterLink **inputs;          
    unsigned    nb_inputs;          
    AVFilterPad   *output_pads;     
    AVFilterLink **outputs;         
    unsigned    nb_outputs;         
    void *priv;                     
    struct AVFilterGraph *graph;    
    int thread_type;
    AVFilterInternal *internal;
    struct AVFilterCommand *command_queue;
    char *enable_str;               
    void *enable;                   
    double *var_values;             
    int is_disabled;                
    AVBufferRef *hw_device_ctx;
    int nb_threads;
};
struct AVFilterLink {
    AVFilterContext *src;       
    AVFilterPad *srcpad;        
    AVFilterContext *dst;       
    AVFilterPad *dstpad;        
    enum AVMediaType type;      
    int w;                      
    int h;                      
    AVRational sample_aspect_ratio; 
    
    uint64_t channel_layout;    
    int sample_rate;            
    int format;                 
    AVRational time_base;
    AVFilterFormats *in_formats;
    AVFilterFormats *out_formats;
    AVFilterFormats  *in_samplerates;
    AVFilterFormats *out_samplerates;
    struct AVFilterChannelLayouts  *in_channel_layouts;
    struct AVFilterChannelLayouts *out_channel_layouts;
    int request_samples;
    enum {
        AVLINK_UNINIT = 0,      
        AVLINK_STARTINIT,       
        AVLINK_INIT             
    } init_state;
    struct AVFilterGraph *graph;
    int64_t current_pts;
    int64_t current_pts_us;
    int age_index;
    AVRational frame_rate;
    AVFrame *partial_buf;
    int partial_buf_size;
    int min_samples;
    int max_samples;
    int status;
    int channels;
    unsigned flags;
    int64_t frame_count;
    void *video_frame_pool;
    int frame_wanted_in;
    int frame_wanted_out;
    AVBufferRef *hw_frames_ctx;
};
int avfilter_link(AVFilterContext *src, unsigned srcpad,
                  AVFilterContext *dst, unsigned dstpad);
void avfilter_link_free(AVFilterLink **link);
int avfilter_link_get_channels(AVFilterLink *link);
__declspec(deprecated)
void avfilter_link_set_closed(AVFilterLink *link, int closed);
int avfilter_config_links(AVFilterContext *filter);
int avfilter_process_command(AVFilterContext *filter, const char *cmd, const char *arg, char *res, int res_len, int flags);
void avfilter_register_all(void);
__declspec(deprecated)
void avfilter_uninit(void);
int avfilter_register(AVFilter *filter);
AVFilter *avfilter_get_by_name(const char *name);
const AVFilter *avfilter_next(const AVFilter *prev);
__declspec(deprecated)
AVFilter **av_filter_next(AVFilter **filter);
__declspec(deprecated)
int avfilter_open(AVFilterContext **filter_ctx, AVFilter *filter, const char *inst_name);
__declspec(deprecated)
int avfilter_init_filter(AVFilterContext *filter, const char *args, void *opaque);
int avfilter_init_str(AVFilterContext *ctx, const char *args);
int avfilter_init_dict(AVFilterContext *ctx, AVDictionary **options);
void avfilter_free(AVFilterContext *filter);
int avfilter_insert_filter(AVFilterLink *link, AVFilterContext *filt,
                           unsigned filt_srcpad_idx, unsigned filt_dstpad_idx);
const AVClass *avfilter_get_class(void);
typedef struct AVFilterGraphInternal AVFilterGraphInternal;
typedef int (avfilter_action_func)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
typedef int (avfilter_execute_func)(AVFilterContext *ctx, avfilter_action_func *func,
                                    void *arg, int *ret, int nb_jobs);
typedef struct AVFilterGraph {
    const AVClass *av_class;
    AVFilterContext **filters;
    unsigned nb_filters;
    char *scale_sws_opts; 
    char *resample_lavr_opts;   
    int thread_type;
    int nb_threads;
    AVFilterGraphInternal *internal;
    void *opaque;
    avfilter_execute_func *execute;
    char *aresample_swr_opts; 
    AVFilterLink **sink_links;
    int sink_links_count;
    unsigned disable_auto_convert;
} AVFilterGraph;
AVFilterGraph *avfilter_graph_alloc(void);
AVFilterContext *avfilter_graph_alloc_filter(AVFilterGraph *graph,
                                             const AVFilter *filter,
                                             const char *name);
AVFilterContext *avfilter_graph_get_filter(AVFilterGraph *graph, const char *name);
__declspec(deprecated)
int avfilter_graph_add_filter(AVFilterGraph *graphctx, AVFilterContext *filter);
int avfilter_graph_create_filter(AVFilterContext **filt_ctx, const AVFilter *filt,
                                 const char *name, const char *args, void *opaque,
                                 AVFilterGraph *graph_ctx);
void avfilter_graph_set_auto_convert(AVFilterGraph *graph, unsigned flags);
enum {
    AVFILTER_AUTO_CONVERT_ALL  =  0, 
    AVFILTER_AUTO_CONVERT_NONE = -1, 
};
int avfilter_graph_config(AVFilterGraph *graphctx, void *log_ctx);
void avfilter_graph_free(AVFilterGraph **graph);
typedef struct AVFilterInOut {
    
    char *name;
    AVFilterContext *filter_ctx;
    int pad_idx;
    struct AVFilterInOut *next;
} AVFilterInOut;
AVFilterInOut *avfilter_inout_alloc(void);
void avfilter_inout_free(AVFilterInOut **inout);
int avfilter_graph_parse(AVFilterGraph *graph, const char *filters,
                         AVFilterInOut *inputs, AVFilterInOut *outputs,
                         void *log_ctx);
int avfilter_graph_parse_ptr(AVFilterGraph *graph, const char *filters,
                             AVFilterInOut **inputs, AVFilterInOut **outputs,
                             void *log_ctx);
int avfilter_graph_parse2(AVFilterGraph *graph, const char *filters,
                          AVFilterInOut **inputs,
                          AVFilterInOut **outputs);
int avfilter_graph_send_command(AVFilterGraph *graph, const char *target, const char *cmd, const char *arg, char *res, int res_len, int flags);
int avfilter_graph_queue_command(AVFilterGraph *graph, const char *target, const char *cmd, const char *arg, int flags, double ts);
char *avfilter_graph_dump(AVFilterGraph *graph, const char *options);
int avfilter_graph_request_oldest(AVFilterGraph *graph);
