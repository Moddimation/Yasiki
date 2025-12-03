

# File errno.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**errno.c**](errno_8c.md)

[Go to the documentation of this file](errno_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/03/09 17:16:22 $ 
 *  $Revision: 1.9 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  errno.c
 */

#include <errno.h>

#if !(_MWMT && (__dest_os   == __win32_os  || __dest_os == __wince_os))
    __tls int errno;
#endif

/*  Change Record
 *  12-Jun-95 JFH  First code release.
 *  15-Apr-96   CTV  Add TLS support for Win32
 * mf  980512       wince changes
*/
```


