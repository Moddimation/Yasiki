

# File cstddef

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**cstddef**](cstddef.md)

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


