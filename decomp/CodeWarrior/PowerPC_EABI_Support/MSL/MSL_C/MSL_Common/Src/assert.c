/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/30 20:15:28 $
 * $Revision: 1.17 $
 */

/*
 *	Routines
 *	--------
 *		__assertion_failed
 *
 *
 */

#include <ansi_parms.h>

#if (__dest_os == __win32_os || __dest_os == __wince_os)
#include <stdarg.h>
#include <wchar.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#if (defined(UNICODE))
void
__wchar_assertion_failed (TCHAR const * condition,
                          char const *  filename, /*- mm 990419 -*/
                          int           lineno)
{
#define BUFFSIZE 1024
    TCHAR        buf[2 * BUFFSIZE];
    /* need to convert filename into a L string literal */
    int          i = 0;
    wchar_t      tmpfile[BUFFSIZE];
    char const * p = filename; /*- mm 990419 -*/
    while (*p != 0x00 && i < (BUFFSIZE - 1))
    {
        tmpfile[i] = (wchar_t) * (p++);
        i++;
    }

    tmpfile[i] = 0;
    swprintf (buf,
              sizeof (buf) + 1,
              L"Assertion (%s) failed in \"%s\" on line %d\n",
              condition,
              tmpfile,
              lineno);
    MessageBox (NULL, buf, L"Assertion Failure", MB_OK);

    abort();
}
#else
#if (__dest_os == __wince_os)
#error "the macro UNICODE must be defined when compiling MSL C for Windows CE"
#endif
void
__assertion_failed (char const * condition,
                    char const * filename,
                    int          lineno) /*- mm 990419 -*/
{
#if (__dest_os == __win32_os)

    char buf[4096];
    sprintf (buf,
             "Assertion (%s) failed in \"%s\" on line %d\n",
             condition,
             filename,
             lineno);
    MessageBox (NULL, buf, "Assertion Failure", MB_OK);

#elif (__dest_os == __mcore_bare) || defined(_No_Disk_File_OS_Support)

    printf (
        "Assertion (%s) failed in \"%s\" on line %d\n", condition, filename, lineno);

#else

    fprintf (stderr,
             "Assertion (%s) failed in \"%s\" on line %d\n",
             condition,
             filename,
             lineno);

#endif

#if _WINSIOUX                  /*- mm 981109 -*/
    WinSIOUXAbort();            /*- mm 981109 -*/
#else                          /*- mm 981109 -*/
    abort();
#endif /* _WINSIOUX */         /*- mm 981109 -*/
}
#endif                         /*  UNICODE */

/* Change record:
 * JFH 950612 First code release.
 * MM  950616 Added include of signal.h and code to replace abort()
 * JFH 950918 Undid previous change. abort() should behave properly now.
 * JFH 960426 Merged Win32 changes in.
 *						CTV
 * hh  980122 Replaced <windows.h> with the following four includes because it is
 *seriously broken.  The following 4 includes must be carefully ordered as shown,
 *because they are broken too. mf  980428 added support for windows ce-- do not need
 *to explicitly include x86_prefix.h since it is included by ansi_parms.h mf  980510
 *added new function __whar_assertion_failed to support unicode.  This was due to
 *            microsoft's version of swprintf not being standard. the ms
 *implementation of tchar maps tsprintf into the ms implementation of swprintf if
 *UNICODE is defined. our implementation is different(takes an int arg to limit size
 *of string as specified in the standard. mf  980512 wince changes mf  980515 needed
 *windows headers before standard headers and therefore needed to also put include of
 *ansi_parms first so that WIN32 env. is defined before prototype of MessageBox mm
 *981109 Changed __assertion_failed so that when __WINSIOUX defined, responding to
 *     		  assertion failure box does not terminate WinSIOUX.
 * mm  990419 Changes to avoid messages when warnings when #pragma const_strings on
 *in force IL9903-1579 as  000823 added #if __dest_os == __mcore_bare to
 *__assertion_failed() MEA 001107 added ... || defined(_No_Disk_File_OS_Support)  to
 *__assertion_failed()
 */
