

# File char\_io.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**char\_io.h**](char__io_8h.md)

[Go to the documentation of this file](char__io_8h.md)


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
 *  char_io.h
 */

#ifndef __char_io__
#define __char_io__

#include <ansi_parms.h>                  /*hh 971206  this header must come first*/
#include <cstdio>                        /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus                  /*hh 971206  namespace support*/
    extern "C" {
#endif

int __ungotten(__std(FILE) * file);  /*hh 990121 fixed __std */

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
 *hh 990121 fixed __std
*/
```


