

# File file\_io.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**file\_io.h**](file__io_8h.md)

[Go to the documentation of this file](file__io_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:31 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  file_io.h
 */

#ifndef __file_io__
#define __file_io__

#include <ansi_parms.h>             /*hh 971206  this header must come first*/
#include <cstdio>                   /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus                  /*hh 971206  namespace support*/
    extern "C" {
#endif

/*hh 990121 Fixed __std 15 places*/
extern _MSL_DLLDATA __std(__file_modes) __temp_file_mode;

int __open_file         (const char * name, __std(__file_modes) mode, __std(__file_handle) * handle);
int   __open_temp_file  (__std(__file_handle) * handle);
int  __read_file        (__std(__file_handle) handle, unsigned char * buffer, __std(size_t) * count, __std(__idle_proc) idle_proc);
int  __write_file       (__std(__file_handle) handle, unsigned char * buffer, __std(size_t) * count, __std(__idle_proc) idle_proc);
/*int    __position_file    (__file_handle handle, long * position, int mode, __idle_proc idle_proc);*/
int  __position_file    (__std(__file_handle) handle, __std(fpos_t) * position, int mode, __std(__idle_proc) idle_proc);
int  __close_file       (__std(__file_handle) handle);
void __temp_file_name   (char * name_str, void *);
int  __delete_file      (const char * name);
int  __rename_file      (const char * old_name, const char * new_name);

int  __get_file_modes   (const char * mode, __std(__file_modes) * modes);
int  __flush_line_buffered_output_files(void);              /*mm 970702*/

#ifdef __cplusplus                  /*hh 971206  expanded __extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif /* __file_io__ */
/*     Change record
 *   mm 970702   Synchronization with Be
 * hh 971206  namespace support
 * rjk 980313 added _MSL_DLLDATA for __temp_file_mode
 * hh 990121 Fixed __std 15 places
*/
```


