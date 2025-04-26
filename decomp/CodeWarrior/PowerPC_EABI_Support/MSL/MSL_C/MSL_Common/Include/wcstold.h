/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:46 $
 * $Revision: 1.21 $
 */

#ifndef _MSL_WCSTOLD_H
#define _MSL_WCSTOLD_H

#include <ansi_parms.h>
#include <cstdio> /*- mm 970905 -*/ /*- hh 971206 -*/

_MSL_BEGIN_EXTERN_C                 /*- cc 010409 -*/

    extern long double
    __wcstold(int max_width, __std(wint_t) (*ReadProc)(void*, __std(wint_t), int),
              /*- mm 990326 -*/     /*- hh 990507 -*/
              void* ReadProcArg,    /*- mm 990326 -*/
              int* chars_scanned, int* overflow);

_MSL_END_EXTERN_C                   /*- cc 010409 -*/

    _MSL_BEGIN_NAMESPACE_STD        /*- cc 010409 -*/
        _MSL_BEGIN_EXTERN_C         /*- cc 010409 -*/

            _MSL_IMP_EXP_C double
                      wcstod(const wchar_t*, wchar_t**);
_MSL_IMP_EXP_C double watof(const wchar_t*);

_MSL_END_EXTERN_C                   /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD          /*- cc 010409 -*/

#endif                              /* #ifndef _MSL_WCSTOLD_H */

                                    /* Change record:
                                     * mm  970905 added include of stdio.h to allow this header to be included first.
                                     * hh  971206 namespace support
                                     * blc 980324 fixed prototype for C9X conformance
                                     * hh  990121 Fixed __std
                                     * mm  990326 Changes to prototype to allow split of string functions from file
                                     * i/o                                 hh  990507 Wrapped wint_t up in __std(), 2
                                     * places                                 cc  010405 removed                                 pragma options align
                                     * native and reset                                 cc  010409 updated defines to
                                     * JWW new                                 namespace macros                                 JWW 010618 Use cname
                                     * headers exclusively to prevent namespace                                 pollution in C++
                                     */
