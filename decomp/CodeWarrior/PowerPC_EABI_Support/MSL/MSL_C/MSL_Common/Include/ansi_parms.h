/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/30 16:59:27 $
 * $Revision: 1.36.4.1 $
 */

#ifndef _MSL_ANSI_PARMS_H
#define _MSL_ANSI_PARMS_H

#include <mslGlobals.h> /* hh 980120 added */

/* rjk 980313 added the _MSL_IMP_EXP macro
   This macro is set to NULL for targets that link to MSL statically
   and to __declspec(dllimport) for targets that link to MSL in a DLL
   Here is it defaulted to NULL if undefined.
*/

#ifndef _MSL_IMP_EXP
#define _MSL_IMP_EXP
#endif

#ifndef _MSL_IMP_EXP_C
#define _MSL_IMP_EXP_C _MSL_IMP_EXP
#endif

#ifndef _MSL_IMP_EXP_SIOUX
#define _MSL_IMP_EXP_SIOUX _MSL_IMP_EXP
#endif

#ifndef _MSL_IMP_EXP_RUNTIME
#define _MSL_IMP_EXP_RUNTIME _MSL_IMP_EXP
#endif

#define __MODENALIB__ /*soon to be obsolete...*/

/*  Even though the __MSL__ identifier is a hex value, it is tracking a
 *  more or less decimal identity - that is, for builds 10 - 16, we will
 *  use a decimal appearing number - e.g., 0x4010 means the major Pro
 *  release name as in Pro4, the second digit is the patch level, and
 *  the last two digits refer to the build number within that release.
 *  Hence, the last two digits of 10 mean build 10, and 20 means 20,
 *  and so on.  The identifier, although increasing, is not monatomical
 *  for each build.
 */

/* MSL Pro 7   */
#define __MSL__       0x7001 /*- cc 010730*/

/*	990811 vss
 *  The following define is supplied to update library functions and
 *  definitions to the C9X specification.  This does not guarantee
 *  the full functionality of C9X, but does guard around behavior
 *  that differs from defacto or the 1989 ANSI C Standard where the
 *  difference is signficant.
 */
#if __dest_os != __emb_68k
#define _MSL_C9X_
#endif

#ifdef __cplusplus /*- cc 010409 -*/
#define _MSL_BEGIN_EXTERN_C                                                         \
    extern "C"                                                                      \
    {
#define _MSL_END_EXTERN_C }

#ifdef _MSL_USING_NAMESPACE
#define _MSL_BEGIN_NAMESPACE_STD                                                    \
    namespace std                                                                   \
    {
#define _MSL_END_NAMESPACE_STD }

#define __std(ref)             ::std::ref
#define __global()             ::
#else
#define _MSL_BEGIN_NAMESPACE_STD
#define _MSL_END_NAMESPACE_STD

#define __std(ref) ref
#define __global()
#endif
#else
#define _MSL_BEGIN_EXTERN_C
#define _MSL_END_EXTERN_C

#define _MSL_BEGIN_NAMESPACE_STD
#define _MSL_END_NAMESPACE_STD

#define __std(ref) ref
#define __global()
#endif             /*- cc 010409 -*/

#if (__dest_os == __win32_os || __dest_os == __wince_os)
#define __tls      __declspec (thread)
#define _MSL_CDECL __cdecl
#else
#define __tls
#define _MSL_CDECL
#endif

#endif             /* ndef _MSL_ANSI_PARMS_H */

/* Change record:
 * MEA 972306 Added __dest_os __ppc_eabi_bare.  New symbol __no_os
 *			  is only defined for bare board embedded systems.
 *			  Do not define long long yet for PPC EABI.
 * SCM 971507 Added __nec_eabi_bare and __nec_eabi_os.
 * MEA 972007 Changed __ppc_eabi_bare to __ppc_eabi.
 * MEA 971109 Added support for long long.
 * vss 971015 New version 2.2
 * hh  971206 reworked macro magic for namespace support
 * hh  971206 Added "define OS" code
 * hh  980120 added <mslGlobals.h>
 * hh  980217 added __ANSI_OVERLOAD__
 * rjk 909313 ADDED _MSL_IMP_EXP macro
 * ah  010121 hawk dsp housekeeping
 * cc  010125 added _MSL_CDECL
 * ah  010131 removed hawk dsp housekeeping -- back to _Old_DSP_IO_Interface
 * cc  010409 updated defines to JWW new namespace macros
 */
