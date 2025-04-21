/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/17 18:40:32 $
 * $Revision: 1.29 $
 */

/*
 *		Notes
 *		-----
 *
 *			What we need in certain areas of the library is the ability to "lock"
 *			certain critical regions of code against reentrance by preemptive
 *			threads. For example, when fopen searches for an unused FILE struct, it
 *			would be unfortunate if another thread "found" the same struct before the
 *			first one could mark it as in-use.
 *
 *			Because the mechanisms used to manage critical regions will vary widely
 *			depending on the underlying hardware and/or system software, *all*
 *			details about how critical regions are locked and released are kept
 *			hidden. Instead, we define a finite number of critical regions that are
 *			of interest to us and leave the details of how they are managed invisible.
 */

#ifndef _MSL_CRITICAL_REGIONS_H
#    define _MSL_CRITICAL_REGIONS_H

#    include <ansi_parms.h>

_MSL_BEGIN_EXTERN_C /*- cc 010409 -*/

    enum critical_regions
{
    atexit_funcs_access = 0,
    malloc_pool_access = 1,
    files_access = 2,
    console_status_access = 3,
    signal_funcs_access = 4,
    thread_access = 5,
    num_critical_regions = 6
};

#    if _MWMT

#        if __dest_os == __win32_os
#            include <critical_regions.win32.h>
#        elif __dest_os == __mac_os
#            include <critical_regions.macos.h>
#        endif      /* __dest_os */

#    else

#        if __dest_os == __mac_os || __dest_os == __win32_os || __dest_os == __emb_68k || __dest_os == __dolphin_os
#            define __init_critical_regions()
#            define __kill_critical_regions()
#        endif

#        define __begin_critical_region(x)
#        define __end_critical_region(x)

#    endif          /*  _MWMT */

_MSL_END_EXTERN_C   /*- cc 010409 -*/

#endif              /* _MSL_CRITICAL_REGIONS_H */

    /* Change record:
     * hh  971206 expanded _extern macro
     * mf  980515 wince changes
     * mf  030199 single threaded lib changes
     * hh  990830 Made macros out of __init/__kill_critical_regions on Mac to uncouple
     *            MSL C and PPC runtime lib.
     * mf  000710 added critical region protection for global thread list
     * ah  010119 merged back missing previous code from v1.15
     * cc  010405 removed pragma options align native and reset
     * cc  010409 updated defines to JWW new namespace macros
     */
