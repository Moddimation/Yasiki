

# File errno.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**errno.c**](errno_8c.md)

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


