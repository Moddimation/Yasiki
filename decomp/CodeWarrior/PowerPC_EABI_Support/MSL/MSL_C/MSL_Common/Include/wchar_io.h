/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:28 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_WCHAR_IO_H
#    define _MSL_WCHAR_IO_H

#    include <ansi_parms.h>
#    include <file_struc.h>                         /*- mm 990806 -*/
#    include <wchar_t.h>                            /*- mm 990807 -*/

_MSL_BEGIN_NAMESPACE_STD                            /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                             /*- cc 010409 -*/

        wchar_t
                       __put_wchar(wchar_t, FILE*); /*- mf 990715 -*/
wchar_t                __get_wchar(FILE*);          /*- mf 990715 -*/
_MSL_IMP_EXP_C         wchar_t(getwchar)(void);
_MSL_IMP_EXP_C wchar_t ungetwc(wchar_t, FILE*);     /*- mf 990715 -*/

_MSL_END_EXTERN_C                                   /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD                          /*- cc 010409 -*/

#endif                                              /* ifndef _MSL_WCHAR_IO_H */

                                                    /* Change record:
                                                     * JCM 980121 First code release.
                                                     * mf  990715 Remove arg names in prototypes
                                                     * mm  990806 Replaced includes of cstdio and cstddef by include of file_struc.h
                                                     * cc  010405 removed pragma options align native and reset
                                                     * cc  010409 updated to JWW new namespace macros
                                                     */
