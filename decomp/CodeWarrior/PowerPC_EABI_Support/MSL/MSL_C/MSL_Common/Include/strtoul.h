/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:32 $
 * $Revision: 1.18 $
 */

#ifndef _MSL_STRTOUL_H
#define _MSL_STRTOUL_H

#include <ansi_parms.h>
#include <cstdio>

_MSL_BEGIN_EXTERN_C                                                        /*- cc 010409 -*/

    extern unsigned long
    __strtoul (int   base,
               int   max_width,
               int   (*ReadProc) (void*, int, int),                        /*- mm 990325 -*/
               void* ReadProcArg,                                          /*- mm 990325 -*/
               int*  chars_scanned,
               int*  negative,
               int*  overflow);

#ifdef __MSL_LONGLONG_SUPPORT__                                            /*- mm 970110 -*/
extern unsigned long long __strtoull (int   base,
                                      int   max_width,
                                      int   (*ReadProc) (void*, int, int), /*- mm 990325 -*/
                                      void* ReadProcArg,                   /*- mm 990325 -*/
                                      int*  chars_scanned,
                                      int*  negative,
                                      int*  overflow);
#endif /*__MSL_LONGLONG_SUPPORT__*/                                        /*- mm 970110 -*/

_MSL_END_EXTERN_C                                                          /*- cc 010409 -*/

#endif                                                                     /* _MSL_STRTOUL_H */

                                                                           /* Change record:
                                                                            * mm  970110 Changed wrappers for long long support
                                                                            * hh  971206 namespace support added
                                                                            * hh  990121 Fixed __std 2 places
                                                                            * mm  990325 Changes to prototypes to allow use of input functions passed by
                                                                            * pointer                                                            cc  010405
                                                                            * removed pragma options align native and reset                                                                        cc  010409                                                                        updated to JWW new                                                                        namespace macros
                                                                            * JWW 010618 Use cname headers exclusively                                                                        to prevent namespace                                                                        pollution in C++
                                                                            */
