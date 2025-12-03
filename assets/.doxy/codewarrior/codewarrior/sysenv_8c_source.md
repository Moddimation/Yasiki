

# File sysenv.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**sysenv.c**](sysenv_8c.md)

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


