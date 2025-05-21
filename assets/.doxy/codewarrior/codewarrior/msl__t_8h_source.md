

# File msl\_t.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**msl\_t.h**](msl__t_8h.md)

[Go to the documentation of this file](msl__t_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/29 18:02:31 $ 
 *  $Revision: 1.1.2.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  msl_t.h
 */
 
#ifndef __msl_t__
#define __msl_t__

#include <ansi_parms.h>                 

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifndef _INT32
typedef int _INT32 ;
typedef unsigned int _UINT32 ;
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif

/*     Change record
 * vss 990729  New file to define new types introduced into MSL 
 */
```


