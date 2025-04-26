/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 17:34:39 $
 * $Revision: 1.24 $
 */

#ifndef _MSL_SIZE_T_H
#define _MSL_SIZE_T_H

#include <ansi_parms.h>           /*- mm 970905 -*/

_MSL_BEGIN_NAMESPACE_STD          /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C           /*- cc 010409 -*/

    typedef unsigned long size_t; /*- cc 010411 -*/

_MSL_END_EXTERN_C                 /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD        /*- cc 010409 -*/

#endif                            /* _MSL_SIZE_T_H */

    /* Change record:
     * mm  970905 added include of ansi_parms.h to avoid need for prefix file
     * hh  971206 added namespace support.
     * mf  980507 added typedef of size_t for wince
     * mm  981014 added typedef of size_t for __DSP568
     * mm  981029 Changed __DSP568 to __m56800__
     * bs  990121 Added BEOS changes
     * ad  990128 added __dest_os == __n64_os
     * vss 990224 MrC needs uint for size_t
     * cc  000326 removed dest_os to be_os
     * cc  010409 updated to JWW new namespace macros
     * cc  010411 updated hh cute definition of size_t
     */
