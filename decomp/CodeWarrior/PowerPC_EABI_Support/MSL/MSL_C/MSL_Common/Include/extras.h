/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/15 19:18:37 $
 * $Revision: 1.18 $
 */

#ifndef _MSL_EXTRAS_H
#define _MSL_EXTRAS_H
      					
#include <ansi_parms.h>
#include <size_t.h>
#include <unistd.h> 	
#include <null.h>									/*- cc 000515 -*/

#if (__dest_os == __win32_os || __dest_os == __wince_os)
	#include <extras.win32.h>
#endif
	
#ifndef __NO_WIDE_CHAR		
		#include <wchar_t.h>
#endif

_MSL_BEGIN_NAMESPACE_STD	/*- cc 010409 -*/
_MSL_BEGIN_EXTERN_C			/*- cc 010409 -*/
	
	_MSL_IMP_EXP_C void *			malloc(size_t);				/*- mf 990715 -*/
	
	#ifndef __NO_WIDE_CHAR				
		_MSL_IMP_EXP_C long 			wcstol  (const wchar_t * , wchar_t ** , int );
		_MSL_IMP_EXP_C size_t 			(wcslen)(const wchar_t * str);
		_MSL_IMP_EXP_C wchar_t * 		(wcscpy)(wchar_t * dst, const wchar_t * src);
	#endif

	#if _No_String_Inlines
		_MSL_IMP_EXP_C size_t strlen(const char * );
		_MSL_IMP_EXP_C char * strcpy(char * , const char * );
	#endif /* _No_String_Inlines */

_MSL_END_EXTERN_C	/*- cc 010409 -*/
_MSL_END_NAMESPACE_STD	/*- cc 010409 -*/

_MSL_BEGIN_EXTERN_C			/*- cc 010409 -*/

	_MSL_IMP_EXP_C	int  stricmp(const char *, const char *);
	_MSL_IMP_EXP_C	int  strnicmp(const char *, const char *, __std(size_t));
	_MSL_IMP_EXP_C	int  strcmpi(const char *, const char *);
	_MSL_IMP_EXP_C	int  strncmpi(const char *, const char *, __std(size_t));
	_MSL_IMP_EXP_C 	int	 strcasecmp (const char *, const char *);
	_MSL_IMP_EXP_C 	int	 strncasecmp(const char *, const char *, __std(size_t));
	_MSL_IMP_EXP_C	char * strset(char *, int );
	_MSL_IMP_EXP_C	char * strnset(char *, int , __std(size_t));
	_MSL_IMP_EXP_C	char * strrev(char *);
	_MSL_IMP_EXP_C	char * strupr(char *);
	_MSL_IMP_EXP_C	char * strspnp(char *, const char *);
	_MSL_IMP_EXP_C  char * strlwr (char *); 
	_MSL_IMP_EXP_C  char * strdate(char *str);
	_MSL_IMP_EXP_C  char * strdup(const char *str);
	_MSL_IMP_EXP_C  int  heapmin(void);
	_MSL_IMP_EXP_C  char * itoa(int, char *, int);  
	_MSL_IMP_EXP_C  int  filelength(int fileno);
	_MSL_IMP_EXP_C  char * ultoa(unsigned long, char *, int); 
	
	_MSL_IMP_EXP_C	int _stricmp(const char *, const char *);
	_MSL_IMP_EXP_C	int _strnicmp(const char *, const char *, __std(size_t));
	_MSL_IMP_EXP_C	int _strcmpi(const char *, const char *);
	_MSL_IMP_EXP_C	int _strncmpi(const char *, const char *, __std(size_t));	
	_MSL_IMP_EXP_C 	int	_strcasecmp (const char *, const char *);
	_MSL_IMP_EXP_C 	int	_strncasecmp(const char *, const char *,  __std(size_t));
	_MSL_IMP_EXP_C	char *_strrev(char *);
	_MSL_IMP_EXP_C	char *_strupr(char *);
	_MSL_IMP_EXP_C	char *_strset(char *, int );
	_MSL_IMP_EXP_C	char *_strnset(char *, int , __std(size_t));
	_MSL_IMP_EXP_C	char *_strspnp(char *, const char *);
	_MSL_IMP_EXP_C 	char *_strdate(char *str);
	_MSL_IMP_EXP_C 	char *_strdup(const char *str);
	_MSL_IMP_EXP_C 	char *_strlwr (char *); 
	_MSL_IMP_EXP_C  int  _heapmin(void);
	_MSL_IMP_EXP_C 	char *_itoa(int, char *, int); 
	_MSL_IMP_EXP_C  int  _filelength(int fileno);
	_MSL_IMP_EXP_C 	char *_ultoa(unsigned long, char *, int); 
	
	__inline char* ltoa(int x, char *y, int z)	{ return (itoa(x, y, z)); }
	__inline long  tell(int fildes)				{ return (lseek(fildes, 0L, SEEK_CUR)); }
	
	__inline char* _ltoa(int x, char *y, int z)	{ return (itoa(x, y, z)); }
	__inline long  _tell(int fildes)			{ return (lseek(fildes, 0L, SEEK_CUR)); }
			
	#ifndef _No_Floating_Point
		_MSL_IMP_EXP_C char * gcvt(double, int, char *); 
		_MSL_IMP_EXP_C char * _gcvt(double, int, char *); 
	#endif
		
	#define _MAX_DRIVE  3   /* max. length of drive component */
	#define _MAX_DIR    256 /* max. length of path component */
	#define _MAX_EXT    256 /* max. length of extension component */
	#define _MAX_FNAME 256
	#define __max(a,b)  (((a) > (b)) ? (a) : (b))
	#define __min(a,b)  (((a) < (b)) ? (a) : (b))
	
	#ifndef __NO_WIDE_CHAR				
		
		_MSL_IMP_EXP_C wchar_t * itow(int, wchar_t *, int); 				
	    _MSL_IMP_EXP_C int wtoi(const wchar_t *_a); 
		_MSL_IMP_EXP_C int wcsicmp(const wchar_t *s1, const wchar_t *s2); 
		_MSL_IMP_EXP_C int wcsnicmp(const wchar_t *s1, const wchar_t *s2, __std(size_t) n); 
	    _MSL_IMP_EXP_C wchar_t * wstrrev(wchar_t * str); 
		_MSL_IMP_EXP_C wchar_t * wcsrev(wchar_t *str); 
		_MSL_IMP_EXP_C wchar_t * wcsupr(wchar_t *str);
		_MSL_IMP_EXP_C wchar_t * wcslwr(wchar_t *str); 
		_MSL_IMP_EXP_C wchar_t * wcsset(wchar_t *str, wchar_t wc); 
		_MSL_IMP_EXP_C wchar_t * wcsnset(wchar_t *str, wchar_t wc, __std(size_t) n); 
		_MSL_IMP_EXP_C wchar_t * wcsspnp(const wchar_t *s1, const wchar_t *s2); 
		_MSL_IMP_EXP_C wchar_t * wcsdup (const wchar_t *str);
		
		_MSL_IMP_EXP_C wchar_t * _itow(int, wchar_t *, int); 
		_MSL_IMP_EXP_C int _wtoi(const wchar_t *_a); 
		_MSL_IMP_EXP_C int _wcsicmp(const wchar_t *s1, const wchar_t *s2); 
		_MSL_IMP_EXP_C int _wcsnicmp(const wchar_t *s1, const wchar_t *s2, __std(size_t) n); 
	    _MSL_IMP_EXP_C wchar_t *_wstrrev(wchar_t * str); 
		_MSL_IMP_EXP_C wchar_t *_wcsrev(wchar_t *str); 
		_MSL_IMP_EXP_C wchar_t *_wcsupr(wchar_t *str);
		_MSL_IMP_EXP_C wchar_t *_wcslwr(wchar_t *str); 
		_MSL_IMP_EXP_C wchar_t *_wcsset(wchar_t *str, wchar_t wc); 
		_MSL_IMP_EXP_C wchar_t *_wcsnset(wchar_t *str, wchar_t wc, __std(size_t) n); 
		_MSL_IMP_EXP_C wchar_t *_wcsspnp(const wchar_t *s1, const wchar_t *s2); 
		_MSL_IMP_EXP_C wchar_t *_wcsdup (const wchar_t *str);
		
	#endif  /* #ifndef __NO_WIDE_CHAR	*/

_MSL_END_EXTERN_C	/*- cc 010409 -*/
	
#endif  /* _MSL_EXTRAS_H */

/* Change record:
 * cc  000428 moved _tell to extras.win32.h 
 * cc  000428 readded #include <unistd.h>
 * cc  000428 reremoved #include <unistd.h>
 * cc  000511 added  _heapmin to extras.h
 * cc  000516 moved __myraise to unix.h
 * cc  000828 removed raise from extras. and left it in csignal
 * cc  010306 added _tell
 * cc  010405 removed pragma options align native and reset	 
 * cc  010409 updated defines to JWW new namespace macros 
 * cc  010517 renamed _lseek to lseek 	
 * cc  010713 renamed all the _functions to non-underscored.
 * cc  010713 added strcasecmp and strncasecmp for Ed 
 * cc  010714 added strcmpi and strncmpi
 * cc  010715 added the underscore version of the functions
 */ 
