

# File string\_io.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**string\_io.h**](string__io_8h.md)

[Go to the documentation of this file](string__io_8h.md)


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
 *  string_io.h
 */

#ifndef __string_io__
#define __string_io__

#include <ansi_parms.h>          /*hh 971206  this header should be first*/
#include <cstdio>                /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    extern "C" {
#endif

/*hh 990121 Fixed __std 9 places*/
int __open_string_file  (__std(FILE) * file, char * str, __std(size_t) n, int io_state);
int __read_string       (__std(__file_handle) handle, unsigned char * buffer, __std(size_t) * count, __std(__idle_proc) idle_proc);
int __write_string      (__std(__file_handle) handle, unsigned char * buffer, __std(size_t) * count, __std(__idle_proc) idle_proc);
int __close_string      (__std(__file_handle) handle);

#ifdef __cplusplus          /*hh 971206  namespace support*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif

/*     Change record
 *hh 971206  namespace support
 *hh 990121 Fixed __std 9 places
*/
```


