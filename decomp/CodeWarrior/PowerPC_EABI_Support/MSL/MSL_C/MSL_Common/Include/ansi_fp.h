/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:12:54 $
 * $Revision: 1.26 $
 */

#ifndef _MSL_ANSI_FP_H
#define _MSL_ANSI_FP_H

#include <ansi_parms.h>              /*- hh 971206 -*/

#if macintosh && !defined(__dest_os) /*- mm 960927 -*/
#define __dest_os __mac_os           /*- mm 960927 -*/
#endif                               /*- mm 960927 -*/

#ifndef __dest_os                    /*- mm 961114 -*/
#error __dest_os undefined
#endif

#if __dest_os == __mac_os
#define __num2dec num2dec
#define __dec2num dec2num
#endif                               /* dest_os */

#ifdef _Using_FDLIBM
#include <fdlibm.h>
#else
#include <cmath> /*- mf 090997 -*/   /*- hh 971206 -*/
#endif

#pragma options align = native

_MSL_BEGIN_EXTERN_C                  /*- cc 010409 -*/

#if __POWERPC__
#define SIGDIGLEN 36
#elif __m56800__ /*- mm 981013 -*/   /*- mm 981028 -*/
#define SIGDIGLEN 20                 /*- mm 981013 -*/
#elif __m56800E__ /*- mm 981013 -*/  /*- mm 981028 -*/
#define SIGDIGLEN 20
#else
#define SIGDIGLEN 32
#endif

#define FLOATDECIMAL ((char)(0))
#define FIXEDDECIMAL ((char)(1))

    typedef struct decimal
{
    char  sgn;
    char  unused;
    short exp;

    struct
    {
        unsigned char length;
        unsigned char text[SIGDIGLEN];
        unsigned char unused;
    } sig;
} decimal;

typedef struct decform
{
    char  style;
    char  unused;
    short digits;
} decform;
#ifndef _No_Floating_Point
void     __num2dec (const decform* f, double_t x, decimal* d);
double_t __dec2num (const decimal* d);
#endif                               /* ndef _No_Floating_Point */

_MSL_END_EXTERN_C                    /*- cc 010409 -*/

#pragma options align = reset

#endif                               /* _MSL_ANSI_FP_H */

                                     /* Change record:
                                      * mm  960927 Inserted setting of __dest_os to __mac_os when not otherwise set.
                                      * KO  961110 Changed include fdlibm.h to math.h since we are no longer using
                                      *			  the fdlibm math library.
                                      * mm  961114 Corrected test for __dest_os not being set
                                      * bk  961202 remove huge val
                                      * SCM 970723 Wrapped floating point code in #ifndef _No_Floating_Point
                                      * mf  970909 use math.h on all platforms
                                      * hh  971206 Minor maintenance to get namespaces going.
                                      * mf  980720 wrapped prototypes to turn off K63d mode
                                      * mm  981013 Incorporated DSP568 change
                                      * mm  981028 Change __DSP568 to __m56800__
                                      * mm  990921 Commented out #define _MSL_C9X__ 1 since it is also defined in
                                      *ansi_parms.h                                  cc  010409 updated to JWW new
                                      *namespace macros                                  JWW 010618 Use                                  cname headers                                  exclusively to
                                      *prevent namespace pollution in C++
                                      */
