

# File abort\_exit.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**abort\_exit.h**](abort__exit_8h.md)

[Go to the documentation of this file](abort__exit_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 2000/10/30 22:23:52 $ 
 *  $Revision: 1.7.12.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  abort_exit.h
 */

#ifndef __abort_exit__
#define __abort_exit__

#include <ansi_parms.h>

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus        /*hh 971206  expanded __extern macro*/
    extern "C" {
#endif

extern void (* __stdio_exit)  (void);
extern void (* __console_exit)(void);

extern int  __aborting;

int     __atexit(void (* func)(void));
void    __exit(int status);

#if __dest_os == __be_os
    void    __setup_exit(void);
#else
    #define __setup_exit()
#endif

#if (__dest_os == __win32_os || __dest_os == __wince_os )
void _CleanUpMSL();
#endif

#if __dest_os == __ppc_eabi || __dest_os == __mips_bare || __dest_os ==__dolphin_os
void _ExitProcess(void);                                                    
#endif

#ifdef __cplusplus        /*hh 971206  expanded __extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif
/*     Change record
hh 971206  expanded __extern macro
mf 980515  wince changes
*/
```


