

# File utsname.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**utsname.h**](utsname_8h.md)

[Go to the documentation of this file](utsname_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/23 00:45:45 $ 
 *  $Revision: 1.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  File:       utsname.h
 *
 *  Content:    Interface file to standard UNIX-style entry points ...
 *
 *  NB:         This file implements some UNIX low level support.  These functions
 *              are not guaranteed to be 100% conformant.
 */

#ifndef _UTSNAME
#define _UTSNAME

#include <ansi_parms.h>                 /* mm 970905*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif
/* #pragma direct_destruction off */  /* 980807 vss */

#ifdef __cplusplus        /* hh 971207 moved this higher in the file */
    extern "C" {
#endif

#define _UTSNAME_FIELD_LENGTH    32             /* mm 990104 */ 
/* struct for uname */
struct utsname {
    char    sysname[_UTSNAME_FIELD_LENGTH];     /* mm 990104 */
    char    nodename[_UTSNAME_FIELD_LENGTH];    /* mm 990104 */
    char    release[_UTSNAME_FIELD_LENGTH];     /* mm 990104 */
    char    version[_UTSNAME_FIELD_LENGTH];     /* mm 990104 */
    char    machine[_UTSNAME_FIELD_LENGTH];     /* mm 990104 */
};

/*
 *  Get information about the current system.
 */
int uname(struct utsname *name);

#ifdef __cplusplus
    }
#endif

/* #pragma direct_destruction reset  */  /*  980807 vss */
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset


#endif
/*     Change record
 * mm 970905    added include of ansi_parms.h to avoid need for prefix file
 * hh 971207    moved this higher in the file
 * vss 980807   remove pragma  - no longer supported by compiler
 * mm 990104    Made field length into defined constant
 */
```


