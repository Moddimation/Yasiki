/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:31 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_WSTDIO_H
#    define _MSL_WSTDIO_H

#    include <ansi_parms.h>
#    include <file_struc.h>
#    include <va_list.h>

_MSL_BEGIN_NAMESPACE_STD                                 /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                                  /*- cc 010409 -*/

        _MSL_IMP_EXP_C wchar_t
                        putwc(wchar_t, FILE *);          /*- mf 990715 -*/
_MSL_IMP_EXP_C wchar_t  fputwc(wchar_t, FILE *);         /*- mf 990715 -*/
_MSL_IMP_EXP_C wchar_t  getwc(FILE *);                   /*- mf 990715 -*/
_MSL_IMP_EXP_C wchar_t  fgetwc(FILE *);                  /*- mf 990715 -*/
_MSL_IMP_EXP_C int      fputws(const wchar_t *, FILE *); /*- mf 990715 -*/
_MSL_IMP_EXP_C wchar_t *fgetws(wchar_t *, int, FILE *);  /*- mf 990715 -*/
_MSL_IMP_EXP_C wchar_t  putwchar(wchar_t);
_MSL_IMP_EXP_C wchar_t  getwchar(void);

_MSL_END_EXTERN_C                                        /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD                               /*- cc 010409 -*/

#endif                                                   /* ifndef _MSL_WSTDIO_H */

                                                         /* Change record:
                                                          * JCM 980121 First code release.
                                                          * mf  990715 Remove arg names in prototype
                                                          * mm  990806 Replaced includes of cstdio and cstddef by includes of
                                                          *            file_struc.h and va_list.h
                                                          * cc  010405 removed pragma options align native and reset
                                                          * cc  010409 updated defines to JWW new namespace macros
                                                          */
