/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 19:34:14 $
 * $Revision: 1.15 $
 */

#ifndef _MSL_LCONV_H
#define _MSL_LCONV_H

#include <ansi_parms.h>    /*- mm 970905 -*/

#pragma options align = native

_MSL_BEGIN_NAMESPACE_STD   /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C    /*- cc 010409 -*/

    extern struct lconv __lconv;

_MSL_END_EXTERN_C          /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD /*- cc 010409 -*/

#pragma options align = reset

#endif                     /* _MSL_LCONV_H */

    /* Change record:
     * mm  970905 added include of ansi_parms.h to avoid need for prefix file
     * hh  971206 namespace support
     * cc  010409 updated to JWW new namespace macros
     */
