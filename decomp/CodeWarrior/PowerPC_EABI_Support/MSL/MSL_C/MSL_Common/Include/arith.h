/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/22 15:05:45 $
 * $Revision: 1.23 $
 */

#ifndef _MSL_ARITH_H
#define _MSL_ARITH_H

#include <ansi_parms.h>
#include <div_t.h>

_MSL_BEGIN_EXTERN_C                             /*- cc 010409 -*/

    int
    __msl_add (int* x, int y);                  /*- cc 010510 -*/

int __msl_ladd (long* x, long y);               /*- cc 010510 -*/

#ifdef __MSL_LONGLONG_SUPPORT__                 /*- mm 981023 -*/
int __lladd (long long* x, long long y);
#endif /* #ifdef __MSL_LONGLONG_SUPPORT__	 */ /*- mm 981023 -*/

int __msl_mul (int* x, int y);                  /*- cc 010510 -*/
int __msl_lmul (long* x, long y);               /*- cc 010510 -*/

#ifdef __MSL_LONGLONG_SUPPORT__                 /*- mm 981023 -*/
int __llmul (long long* x, long long y);
#endif /* #ifdef __MSL_LONGLONG_SUPPORT__	*/  /*- mm 981023 -*/

#if defined(__m56800__) || defined(__m56800E__)
__std (div_t) __div__ (int x, int y);
#else
__std (div_t) __msl_div (int x, int y); /*- cc 010510 -*/
#endif

__std (ldiv_t) __msl_ldiv (long x, long y);     /*- cc 010510 -*/

#ifdef __MSL_LONGLONG_SUPPORT__                 /*- mm 981023 -*/
__std (lldiv_t) __lldiv (long long x, long long y);
#endif /* #ifdef __MSL_LONGLONG_SUPPORT__	*/  /*- mm 981023 -*/

#ifndef __MOTO__
int  __msl_mod (int x, int y);                  /*- cc 010510 -*/
long __msl_lmod (long x, long y);               /*- cc 010510 -*/
#ifdef __MSL_LONGLONG_SUPPORT__                 /*- mm 981023 -*/
long long __llmod (long long x, long long y);
#endif /* #ifdef __MSL_LONGLONG_SUPPORT__	*/  /*- mm 981023 -*/
#endif

_MSL_END_EXTERN_C                               /*- cc 010409 -*/

#endif                                          /* _MSL_ARITH_H */

                                                /* Change record:
                                                 * bkoz961221 Lien 30 added mmoss's change
                                                 * hh  971206 Expanded __extern macro
                                                 * mm  981023 Added wrappers round long long support
                                                 * hh  000518 Wrapped div_t and company in __std
                                                 * cc  010405 Removed pragma options align native and reset
                                                 * cc  010409 Updated defines to JWW new namespace macros
                                                 * cc  010510 Changed __add to __msl_add
                                                 * cc  010510 Changed __div to __msl_div
                                                 * cc  010510 Changed __ladd to __msl_ladd
                                                 * cc  010510 Chnaged __mul to __msl_mul
                                                 * cc  010510 Changed __lmul to __msl_lmul
                                                 * cc  010510 Changed __ldiv to __msl_ldiv
                                                 * cc  010510 Changed __mod to __msl_mod
                                                 * cc  010510 Changed __lmod to __msl_lmod
                                                 */
