

# File unistd.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**unistd.h**](unistd_8h.md)

[Go to the documentation of this file](unistd_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:31 $ 
 *  $Revision: 1.8 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

#include <ansi_parms.h>  /* m.f. 042898 */

#if !defined(__dest_os)               
    #error __dest_os undefined                                               /*MW-mm 960927a*/

#elif __dest_os == __mac_os
    #include <unistd.mac.h>

#elif ( __dest_os == __win32_os || __dest_os == __wince_os)
    #include <unistd.win32.h>

#endif

/*     Change record
 * MW-mm 960927a Inserted setting of __dest_os to __mac_os when not otherwise set.
 * mf 980428  included ansi_parms.h and use #error instead of mac_os by default
 * vss 990115 removed powerTV
*/
```


