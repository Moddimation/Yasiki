

# File ansi\_fp.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**ansi\_fp.h**](ansi__fp_8h.md)

[Go to the documentation of this file](ansi__fp_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/29 23:45:40 $ 
 *  $Revision: 1.8.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
 
/*
 *  ansi_fp.h
 *  
 */

#ifndef __ansi_fp__
#define __ansi_fp__
#include <ansi_parms.h>      /*hh 971206  moved include above OS query */

#if macintosh && !defined(__dest_os)               /*MW-mm 960927a*/
  #define __dest_os __mac_os                       /*MW-mm 960927a*/
#endif                                             /*MW-mm 960927a*/

#ifndef __dest_os                                  /*MW-mm 961114 */
#error __dest_os undefined
#endif

#if __dest_os == __mac_os
#define __num2dec   num2dec
#define __dec2num   dec2num
#endif /* dest_os */

#define _MSL_C9X__ 1

#ifdef _Using_FDLIBM
    #include <fdlibm.h>
#else
    #include <cmath>    /* mf 090997 */ /*hh 971206 all headers must use non.h versions*/
#endif

#pragma options align=native

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus       /*hh 971206  moved extern wrapper here*/
    extern "C" {
#endif

#if __POWERPC__
#define SIGDIGLEN   36
#elif __m56800__                                    /* mm 981013 */ /* mm 981028 */
#define SIGDIGLEN   20                              /* mm 981013 */
#else
#define SIGDIGLEN   32
#endif

#define FLOATDECIMAL    ((char)(0))
#define FIXEDDECIMAL    ((char)(1))

typedef struct decimal 
{
     char       sgn;
     char       unused;
     short  exp;
     struct 
     {
            unsigned char   length;
            unsigned char   text[SIGDIGLEN];
            unsigned char   unused;
     } sig;
} decimal;

typedef struct decform 
{
    char    style;
    char    unused;
    short   digits;
} decform;

#if __INTEL__
#pragma k63d_calls off
#endif

#ifndef _No_Floating_Point
void        __num2dec(const decform *f, double_t x, decimal *d);
double_t    __dec2num(const decimal *d);
#endif /* ndef _No_Floating_Point */

#if __INTEL__
#pragma k63d_calls reset
#endif

#ifdef __cplusplus     /*hh 971206  expanded __extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif

#pragma options align=reset

#endif

/*     Change record
MW-mm 960927a  Inserted setting of __dest_os to __mac_os when not otherwise set.
KO 961110      Changed include fdlibm.h to math.h since we are no longer using
               the fdlibm math library.
MW-mm 961114   Corrected test for __dest_os not being set
bk 961202      remove huge val
SCM 970723     Wrapped floating point code in #ifndef _No_Floating_Point
mf  970909     use math.h on all platforms  
hh 971206      Minor maintenance to get namespaces going.
mf 980720      wrapped prototypes to turn off K63d mode
mm 981013      Incorporated DSP568 change
mm 981028      Change __DSP568 to __m56800__ 
*/
```


