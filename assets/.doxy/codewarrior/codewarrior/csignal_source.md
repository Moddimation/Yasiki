

# File csignal

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**csignal**](csignal.md)

[Go to the documentation of this file](csignal.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:31 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  csignal            hh  971206 filename used to be signal.h
 */

#ifndef __csignal__
#define __csignal__

#include <ansi_parms.h>

#ifndef RC_INVOKED   /* hh 971230 */

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus            /* hh  971206 */
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

typedef int sig_atomic_t;

typedef void (* __signal_func_ptr)(int);

__signal_func_ptr   signal(int  signal, __signal_func_ptr signal_func);
int                             raise (int  signal);

#define SIG_DFL ((__std(__signal_func_ptr))  0)
#define SIG_IGN ((__std(__signal_func_ptr))  1)
#define SIG_ERR ((__std(__signal_func_ptr)) -1)

#ifdef __cplusplus           /* hh  971206 */
    }
    #ifdef _MSL_USING_NAMESPACE
        }
    #endif
#endif

#if __dest_os == __be_os
    #include <signal.be.h>
#else

    #define SIGABRT     1
    #define SIGFPE      2
    #define SIGILL      3
    #define SIGINT      4
    #define SIGSEGV     5
    #define SIGTERM     6
    
    #define __signal_max    6

#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif /* RC_INVOKED */

#endif /* __csignal__ */
/*     Change record
 * hh  971206 Changed filename from signal.h to csignal and added namespace support.
 * hh 971230 added RC_INVOKED wrapper
*/
```


