

# File abort\_exit.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**abort\_exit.h**](abort__exit_8h.md)

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


