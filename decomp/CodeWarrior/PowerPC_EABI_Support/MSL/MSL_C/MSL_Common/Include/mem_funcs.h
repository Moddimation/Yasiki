/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 19:33:58 $
 * $Revision: 1.15 $
 */

#ifndef _MSL_MEM_FUNCS
#define _MSL_MEM_FUNCS

#include <ansi_parms.h>              /*- mm 970905 -*/

#define __min_bytes_for_long_copy 32 /* NEVER let this be < 16 */

_MSL_BEGIN_EXTERN_C                  /*- cc 010409 -*/

    void
     __copy_mem (void* dst, const void* src, unsigned long n);
void __move_mem (void* dst, const void* src, unsigned long n);
void __copy_longs_aligned (void* dst, const void* src, unsigned long n);
void __copy_longs_rev_aligned (void* dst, const void* src, unsigned long n);
void __copy_longs_unaligned (void* dst, const void* src, unsigned long n);
void __copy_longs_rev_unaligned (void* dst, const void* src, unsigned long n);
void __fill_mem (void* dst, int val, unsigned long n);

_MSL_END_EXTERN_C                    /*- cc 010409 -*/

#endif                               /* _MSL_MEM_FUNCS */

                                     /* Change record:
                                      * mm  970905 added include of ansi_parms.h to avoid need for prefix file
                                      * cc  010405 removed pragma options align native and reset
                                      * cc  010409 updated defines to JWW new namespace macros
                                      */
