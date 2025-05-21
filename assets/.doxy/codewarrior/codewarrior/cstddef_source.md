

# File cstddef

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**cstddef**](cstddef.md)

[Go to the documentation of this file](cstddef.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/03/09 23:03:24 $ 
 *  $Revision: 1.9 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  cstddef         hh  971206  filename usded to be stddef.h
 */
 
#ifndef __cstddef__
#define __cstddef__

#include <ansi_parms.h>

#ifndef RC_INVOKED   /* hh 971230 */

#ifdef __cplusplus        /* hh  971206 */
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

typedef long    ptrdiff_t;


#ifdef __cplusplus       /* hh  971206 */
    }
    #ifdef _MSL_USING_NAMESPACE
        }
    #endif
#endif

#endif /* RC_INVOKED */

#include <size_t.h>
#include <wchar_t.h>        /* 990309 vss */
#include <null.h>
/* hh 980727 */
#define offsetof(type, member)  ((__std(size_t)) &(((type *) 0)->member))

#endif /* __cstddef__ */
/*     Change record
 * hh  971206 Changed filename from stddef.h to cstddef and added namespace support.
 * hh 971230 added RC_INVOKED wrapper
 * hh 980120 moved wchart_ typedef from wchar_t.h 
 * hh 980727 Added __std() into the offsetof definition
 * hh 990121 Fixed __std
 * mm 990217 Moved definition of wchar_t to wchar_t.h
 * vss 990309 wchar_t still has to be defined in stddef.h, however  
*/
```


