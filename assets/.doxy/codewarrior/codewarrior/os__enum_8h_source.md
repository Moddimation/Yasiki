

# File os\_enum.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**os\_enum.h**](os__enum_8h.md)

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


