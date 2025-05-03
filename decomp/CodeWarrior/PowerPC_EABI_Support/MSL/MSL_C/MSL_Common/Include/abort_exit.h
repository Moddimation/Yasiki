/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/17 16:16:16 $
 * $Revision: 1.21 $
 */

#ifndef _MSL_ABORT_EXIT_H
#define _MSL_ABORT_EXIT_H

#include <ansi_parms.h>

_MSL_BEGIN_EXTERN_C           /*- cc 010409 -*/

    extern void (*__stdio_exit) (void);
extern void     (*__console_exit) (void);
extern int      __aborting;
int             __atexit (void (*func) (void));
void            __exit (int status);

#define __setup_exit()

#if (__dest_os == __win32_os || __dest_os == __wince_os)
_MSL_IMP_EXP_C void _CleanUpMSL ();
#endif

#if __dest_os == __ppc_eabi || __dest_os == __mips_bare ||                          \
    __dest_os == __emb_68k || __dest_os == __mcore_bare ||                          \
    __dest_os == __dolphin_os /*- beb 990804 -*/
_MSL_IMP_EXP_C void _ExitProcess (void);
#endif

_MSL_END_EXTERN_C             /*- cc 010409 -*/

#endif                        /* _MSL_ABORT_EXIT_H */

    /* Change record:
     * hh  971206 expanded __extern macro
     * mf  980515 wince changes
     * beb 990804 add e68k guard
     * as  001028 added mcore guard
     * cc  000326 removed dest_os to be_os
     * cc  010405 removed pragma options align native and reset
     * cc  010409 updated to JWW new namespace macros
     */
