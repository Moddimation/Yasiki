

# File buffer\_io.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**buffer\_io.h**](buffer__io_8h.md)

[Go to the documentation of this file](buffer__io_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:30 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  buffer_io.h
 */

#ifndef __buffer_io__
#define __buffer_io__

#include <ansi_parms.h>                  /*hh 971206  this header must come first*/
#include <cstdio>                        /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus                  /*hh 971206  namespace support*/
    extern "C" {
#endif

enum {
    __align_buffer,
    __dont_align_buffer
};

void __convert_from_newlines(unsigned char * p, __std(size_t) * n); /* hh 990121 Fixed __std 7 places */
void __convert_to_newlines  (unsigned char * p, __std(size_t) * n);

void __prep_buffer (__std(FILE) * file);    
int  __load_buffer (__std(FILE) * file, __std(size_t) * bytes_loaded, int alignment);
int  __flush_buffer(__std(FILE) * file, __std(size_t) * bytes_flushed);

#ifdef __cplusplus                  /*hh 971206  expanded _extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif
/*     Change record
 *hh 971206  namespace support
 *hh 990121 Fixed __std 7 places
*/
```


