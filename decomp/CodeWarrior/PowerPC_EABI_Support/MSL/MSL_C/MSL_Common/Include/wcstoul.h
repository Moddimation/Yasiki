/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:29 $
 * $Revision: 1.20 $
 */

#ifndef _MSL_WCSTOUL_H
#define _MSL_WCSTOUL_H

#ifndef __NO_WIDE_CHAR

#include <ansi_parms.h>
#include <wchar_t.h>

_MSL_BEGIN_EXTERN_C                                       /*- cc 010409 -*/

    _MSL_IMP_EXP_C int
                    watoi(const wchar_t*);
_MSL_IMP_EXP_C long watol(const wchar_t*);

extern unsigned long __wcstoul(int base, int max_width,
                               __std(wint_t) (*ReadProc)(void*, __std(wint_t), int),
                               /*- mm 990326 -*/          /*- hh 990507 -*/
                               void*         ReadProcArg, /*- mm 990326 -*/
                               int* chars_scanned, int* negative, int* overflow);

#ifdef __MSL_LONGLONG_SUPPORT__                           /*- mm 970110 -*/
extern unsigned long long __wcstoull(
    int base, int max_width, __std(wint_t) (*ReadProc)(void*, __std(wint_t), int),
    /*- mm 990326 -*/                                     /*- hh 990507 -*/
    void* ReadProcArg,                                    /*- mm 990326 -*/
    int* chars_scanned, int* negative, int* overflow);
#endif /*__MSL_LONGLONG_SUPPORT__*/                       /*- mm 970110 -*/

_MSL_END_EXTERN_C                                         /*- cc 010409 -*/

    _MSL_BEGIN_NAMESPACE_STD                              /*- cc 010409 -*/
        _MSL_BEGIN_EXTERN_C                               /*- cc 010409 -*/

            _MSL_IMP_EXP_C unsigned long
            wcstoul(const wchar_t*, wchar_t**, int);

#ifdef __MSL_LONGLONG_SUPPORT__                           /*- mm 981023 -*/
_MSL_IMP_EXP_C unsigned long long wcstoull(const wchar_t*, wchar_t**, int);
_MSL_IMP_EXP_C long long          wcstoll(const wchar_t*, wchar_t**, int);
#endif /* #ifdef __MSL_LONGLONG_SUPPORT__	*/            /*- mm 981023 -*/

_MSL_IMP_EXP_C long wcstol(const wchar_t*, wchar_t**, int);

_MSL_END_EXTERN_C                                         /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD                                /*- cc 010409 -*/

#endif                                                    /* __NO_WIDE_CHAR  */
#endif /* #ifndef _MSL_WCSTOUL_H */

    /* Change record:
     * mm  970110 Changed wrappers for long long support
     * hh  971206 namespace support added
     * blc 980324 fixed prototypes for C9X conformance
     * mm  981023 added wrappers round long long support
     * hh  990121 Fixed __std 2 places
     * mm  990326 Prototype changes to allow splitting of string functions from file
     * i/o hh  990507 Wrapped wint_t up in __std(), 4 places cc  000511 moved watoi &
     * watol out of namespace hh  000518 included wchar_t.h cc  010405 removed pragma
     * options align native and reset cc  010409 updated defines to JWW new namespace
     * macros
     */
