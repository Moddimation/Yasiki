

# File os\_enum.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**os\_enum.h**](os__enum_8h.md)

[Go to the documentation of this file](os__enum_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 2000/10/30 22:24:02 $ 
 *  $Revision: 1.7.4.1.2.1.2.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  os_enum.h
*/

#ifndef os_enum_h
#define os_enum_h

#define __undef_os       0
#define __mac_os         1
#define __be_os          2
#define __win32_os       3
/* #define __powertv_os  4 */       /* vss 990121 */
#define __wince_os       5
#define __ppc_eabi       6
#define __nec_eabi_bare  7
#define __nec_eabi_os    8
#define __mips_bare      9
#define __m56800_os     10          /* mm 981023 */
#define __n64_os        11          /* ad 1.28.99 */
#define __mcore_bare    12          /* vss 990624  */
#define __eppc_vxworks  13          /* mea 990810  */
#define __dolphin_os    14          /* sw 08.21.00 */

#endif

/* Change Records
 * mm  981023  Added entry for __m56800_os
 * vss 990121 Removed powerTV
 * ad 1.28.99 added nintendo support
 * mea 990810 Added entry for __eppc_vxworks
 */
```


