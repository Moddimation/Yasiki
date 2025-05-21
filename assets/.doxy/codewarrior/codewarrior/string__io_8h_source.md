

# File string\_io.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**string\_io.h**](string__io_8h.md)

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


