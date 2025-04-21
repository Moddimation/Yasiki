/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:48 $
 * $Revision: 1.21 $
 */

#ifndef _MSL_WCTRANS_H
#    define _MSL_WCTRANS_H

#    ifndef __NO_WIDE_CHAR      /*- vss 990624 -*/

#        include <ansi_parms.h> /*- mm 970905 -*/
#        include <cwchar>

_MSL_BEGIN_NAMESPACE_STD        /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C         /*- cc 010409 -*/

    typedef wchar_t wctrans_t;

_MSL_IMP_EXP_C wint_t    towctrans(wint_t, wctrans_t);
_MSL_IMP_EXP_C wctrans_t wctrans(const char *);

_MSL_END_EXTERN_C               /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD      /*- cc 010409 -*/

#    endif                      /*  NO_WIDE_CHAR  */

#endif                          /* #ifndef _MSL_WCTRANS_H */

                                /* Change record:
                                 * mm  970905 added include of ansi_parms.h to avoid need for prefix file
                                 * mm  990807 Deleted some superfluous includes
                                 * cc  010405 removed pragma options align native and reset
                                 * cc  010409 updated defines to JWW new namespace macros
                                 * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                 */
