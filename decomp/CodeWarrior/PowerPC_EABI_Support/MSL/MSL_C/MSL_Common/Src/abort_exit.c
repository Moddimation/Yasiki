/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/16 13:55:36 $
 * $Revision: 1.34 $
 */

/*
 *	Routines
 *	--------
 *		abort
 *
 *		atexit
 *		exit
 *
 *		__atexit
 *		__exit
 *
 *		__setup_exit
 *
 *
 */

#include "abort_exit.h"

#include <pool_alloc.h>                                            /*- mf 980825 -*/
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

#include "critical_regions.h"
#include "misc_io.h"

#if macintosh && !defined(__dest_os)                               /*- mm 960927 -*/
#define __dest_os __mac_os                                         /*- mm 960927 -*/
#endif                                                             /*- mm 960927 -*/

#if __dest_os == __undef_os
#error __dest_os undefined
#endif

#if __dest_os == __mac_os
#include <console.h>
#include <Processes.h>
#include <SegLoad.h>
#endif

#if __dest_os == __win32_os || __dest_os == __wince_os
#include <stdarg.h>
#include <wchar.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#define max_funcs 64

extern void __destroy_global_chain(void);

int __aborting = 0;                                                /*- hh 971206 -*/

#if !(__dest_os == __win32_os)
static void (*__atexit_funcs[max_funcs])(void);
static long __atexit_curr_func = 0;
#endif

void (*__stdio_exit)(void) = 0;
void (*__console_exit)(void) = 0;

#if (__dest_os == __win32_os) && (STOP_PROGRAM_BEFORE_EXIT == 1)   /*- mm 981227 -*/
static void __StopProgramBeforeExit();                             /*- mm 981227 -*/
#endif                                                             /*- mm 981227 -*/
void
abort(void)
{
#if (__dest_os == __win32_os) && (_WINSIOUX == 1)                  /*- mm 981227 -*/
    WinSIOUXAbort();                                               /*- mm 981227 -*/
#elif (__dest_os == __win32_os) && (STOP_PROGRAM_BEFORE_EXIT == 1) /*- mm 981227    \
                                                                      -*/
    __StopProgramBeforeExit(); /*- mm 981227 -*/
#endif                                                             /*- mm 981227 -*/
    raise(SIGABRT);

    __aborting = 1;

    exit(EXIT_FAILURE);
}
int __register_atexit(void (*func)(void));
int
atexit(void (*func)(void))
{
    int result;
    __begin_critical_region(atexit_funcs_access);
    __setup_exit();
    result = __register_atexit(func);
    __end_critical_region(atexit_funcs_access);
    return (result);
}
#if !(__dest_os == __win32_os)
int
__atexit(void (*func)(void))
{
    if (__atexit_curr_func == max_funcs)
    {
        return (-1);
    }

    __begin_critical_region(atexit_funcs_access);                  /*- KO 961218 -*/

    __setup_exit();

    __atexit_funcs[__atexit_curr_func++] = func;

    __end_critical_region(atexit_funcs_access);

    return (0);
}
#endif /* #if !(__dest_os == __win32_os) */                        /*- mdf 971021 -*/

#if (__dest_os == __win32_os) && (STOP_PROGRAM_BEFORE_EXIT == 1)
static void
__StopProgramBeforeExit()
{
    DWORD               read;
    HANDLE              h;
    SECURITY_ATTRIBUTES sa = { sizeof(SECURITY_ATTRIBUTES), NULL, TRUE };
    char*               buf = "\n";

    if (GetFileType(GetStdHandle(STD_OUTPUT_HANDLE)) == FILE_TYPE_CHAR)
    {
        printf("\n \n Press Enter to continue \n");
        /*  fflush(stdin);           */                            /*- mdf 971119 -*/
        /*- mdf 971019 -*/
        h = CreateFile("CONIN$", GENERIC_READ | GENERIC_WRITE,
                       FILE_SHARE_READ | FILE_SHARE_WRITE, &sa, OPEN_EXISTING, NULL,
                       NULL);

        if (!ReadFile(h, &buf, 1, &read, 0))
        {
            read = GetLastError();
            printf("exit routine error GetLastError=%i \n", read);
        }
    }
    return;
}
#endif
/*- mdf 971019 -*/

#if defined(__m56800__)

void exit_dsp568();
void
exit(int status)
{
    exit_dsp568();
}
#elif defined(__m56800E__)
void exit_halt();
void
exit(int status)
{
    exit_halt();
}
#else
void
exit(int status)         /*- cc 010326 -*/
{
    if (!__aborting)
    {
        __begin_critical_region(atexit_funcs_access);

#if (__dest_os == __win32_os) && (_WINSIOUX == 1)                  /*- mm 990122 -*/
        WinSIOUXAbort(); /*- mm 990122 -*/
#elif (__dest_os == __win32_os) && (STOP_PROGRAM_BEFORE_EXIT == 1) /*- mm 990122    \
                                                                      -*/
        __StopProgramBeforeExit(); /*- mm 981227 -*/
#endif                                                             /*- mm 981227 -*/
        __end_critical_region(atexit_funcs_access);

        /* 970218 bkoz need to move destroy global chain above __stdio_exit as
               some static objects may have destructors that flush streams	 */

#if __INTEL__ || __POWERPC__ || (__MC68K__ && __A5__)
        __destroy_global_chain();
#endif

#if __PPC_EABI__
        {
            typedef void (*voidfunctionptr)(
                void); /* ptr to function returning void */
            extern voidfunctionptr _dtors[];
            voidfunctionptr*       destructor;
            /*
             *	call other destructors
             */
            for (destructor = _dtors; *destructor; destructor++)
            {
                (*destructor)();
            }
        }
#endif

#if !(__dest_os == __win32_os)
        if (__stdio_exit)
        {
            (*__stdio_exit)();
            __stdio_exit = 0;
        }
#endif
    }

    __exit(status);
}
#endif /* defined(__m56800__) */ /*- mm 981015 -*/                 /*- mm 981029 -*/
void
__exit(int status)
{
#pragma unused(status)

    __begin_critical_region(atexit_funcs_access);

#if !(__dest_os == __win32_os)
    while (__atexit_curr_func > 0)
    {
        (*__atexit_funcs[--__atexit_curr_func])();
    }
#endif

    __end_critical_region(atexit_funcs_access);

#if __dest_os == __win32_os
    _CleanUpMSL();
#else
    __kill_critical_regions();
#endif

    if (__console_exit)
    {
        (*__console_exit)();
        __console_exit = 0;
    }

#if __dest_os == __mac_os
    ExitToShell();
#elif __dest_os == __win32_os
    ExitProcess(status);
#elif __dest_os == __wince_os
    TerminateProcess(GetCurrentProcess(), status); /*CE doesn't have ExitProcess */
#elif __dest_os == __ppc_eabi || __dest_os == __nec_eabi ||                         \
    __dest_os == __emb_68k || __dest_os == __mcore_bare ||                          \
    __dest_os == __dolphin_os                                      /*- beb 990727 -*/
    _ExitProcess();
#endif
}
/* Change record:
 * JFH 950914 First code release.
 * JFH 951012 Added #include of <SegLoad.h> for ExitToShell() (in case
 *			  MacHeaders not included).
 * JFH 951031 Fixed exit() to longjmp(__program_exit,1) instead of call _exit on PPC
 * JFH 951215 Reworked abort/exit handling to conform to new runtime architecture.
 * JFH 951220 Renamed _atexit/_exit to __atexit/__exit for ANSI naming conformance
 * JFH 951227 Pulled guts out of __setup_exit for new runtime. Tossed __program_exit
 *								 and added __aborting for PPC and CFM68K projects.
 * JFH 960212 Tossed __setup_exit, which had become a NOP.
 * JFH 960301 Merged Be code into source. For the moment that means: __setup_exit(),
 *								 it's baaack!
 * JFH 960426 Merged Win32 changes in.
 *						CTV
 * mm  960927 Made sure dest_os set for Macintosh
 * KO  961218 Moved the begin_critical_region call after the error check. Before, if
 *            there was an error, the critical section would be entered and never
 *left. KO  961219 Added CleanUpMSL. bkoz970218 line 154 moved call of
 *__destroy_global_chain() up to exit() before stdio closed MEA 970720 Changed
 *__ppc_eabi_bare to __ppc_eabi. mdf 970821 added printf/scanf to exit for win32 to
 *allow control of console apps mdf 970930 wrapped immediately above change in
 *GetFileType to prevent app from stopping when output is redirected to a file. Also
 *add fflush so getc will have an empty stream when called in the exit routine mdf
 *971021 fixed exiting for windows console apps in cases where the app explicitly
 *closes stdin before exit is reached. this can be done with fclose or freopen and
 *then close on the file associated with the stdin stream. mdf 971119 removed fflush
 *on stdin hh  980122 #include "critical_regions.h" doesn't belong here mf  980512
 *changes for wince mf  980810 ( & blc ) fix to x86 runtime dll crash(when > 1 dll is
 *attached to MSL) mf  980825 Deallocate memory pools allocated by system - this
 *fixes a problem with memory leaking when multiple dll's are loaded and unloaded. mm
 *981015 Added version of exit for __DSP568 mea 981022 added calls to destructors mm
 *981029 Changed __DSP568 to __m56800__ mm  981227 Avoided closing console windows
 *during abort. WB1-1897 mm  990122 Avoided closing console windows during exit. hh
 *990227 Interface to __pool_free_all changed beb 990727 added __emb_68k to the guard
 *around call to _ExitProcess. mf  000514 call to __kill_critical_regions() in __exit
 *was deleting data used by the dll upon unloading. This was crashing on windows. The
 *call to _CleanUpMSL() will simply tell the dll that the process is exiting and
 *            allow the dll to cleanup up it's own resources when it is sure all
 *processes are detached. mf  000731 reversed the order of calling
 *__destroy_global_chain, and (*__stdio_exit)().
 *            __destroy_global_chain must occur first since one of the destructors it
 *calls could rely on one of the standard handles (which __stdio_exit destroys). mf
 *000808 moved _CleanUpMSL() into extras.win32.c.  This must always be in the dll. it
 *can't be in the same source as abort_exit.c because of complications with the
 *shared library.  See additional notes in extras.win32.c.  Also, atexit will be
 *moved into atexit.c  for similar reasons. It is just preprocessed out for windows
 *until next release. as  000823 added mcore guard to __exit() so we call
 *_ExitProcess() hh  010307 Merged atexit chain with global destructor chain
 */
