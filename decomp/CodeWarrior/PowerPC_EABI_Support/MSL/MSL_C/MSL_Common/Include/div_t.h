/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 19:34:13 $
 * $Revision: 1.15 $
 */

#ifndef _MSL_DIV_T_H
#    define _MSL_DIV_T_H

#    include <ansi_parms.h>                        /*- mm 970905 -*/

#    pragma options align = native

_MSL_BEGIN_NAMESPACE_STD                           /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                            /*- cc 010409 -*/

    typedef struct
{
    int quot;
    int rem;
} div_t;

typedef struct
{
    long quot;
    long rem;
} ldiv_t;

#    ifdef __MSL_LONGLONG_SUPPORT__                /*- mm 981023 -*/
typedef struct
{
    long long quot;
    long long rem;
} lldiv_t;
#    endif /* #ifdef __MSL_LONGLONG_SUPPORT__	*/ /*- mm 981023 -*/

_MSL_END_EXTERN_C                                  /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD                         /*- cc 010409 -*/

#    pragma options align = reset

#endif                                             /* _MSL_DIV_T_H */

    /* Change record:
     * mm  970905 added include of ansi_parms.h to avoid need for prefix file
     * hh  971206 added extern "C" (think maintenance).
     * hh  980122 added long long support
     * mm  981023 added wrappers round long long support
     * mm  990217 added namespace support
     * cc  010409 updated to JWW new namespace macros
     */
