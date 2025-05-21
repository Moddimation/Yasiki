

# File sysenv.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**sysenv.c**](sysenv_8c.md)

[Go to the documentation of this file](sysenv_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/02/03 21:36:40 $ 
 *  $Revision: 1.11 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  sysenv.c
 *  
 *  Routines
 *  --------
 *      getenv
 *      system
 *
 *
 */

#include <ansi_parms.h>                 /* mm 970904 */
#if (__dest_os != __be_os) && !(__dest_os == __win32_os)                /* mm 970708 */                                 /* ELR */

#include <stdlib.h>

char * getenv(const char * name)
{
#pragma unused(name)

    return(NULL);
}

int system(const char* cmdLine)
{
    #pragma unused(cmdLine)

    return(NULL);

}

#endif /* __dest_os != __be_os  or win32 */     /* mm 970708 */

/*  Change Record
 *  24-Jul-95 JFH  First code release.
 * mm 970708  Inserted Be changes
 * mm 970904  Added include ansi_parms.h  to allow compilation without prefix
 * vss 990121 Add system call for win32 applications - contributed sources
 * vss 990203 Moved win32 code to sysenv.win32.c
 */
```


