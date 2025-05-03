/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/27 15:07:52 $
 * $Revision: 1.13 $
 */

/*
 *	Routines
 *	--------
 *		clearerr
 *
 *		feof
 *		ferror
 *
 *		perror
 *
 *		__stdio_atexit
 */

#include "misc_io.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include "abort_exit.h"
#include "ansi_files.h"
#include "critical_regions.h"
#include "file_io.h"
void
clearerr (FILE* file)
{
    file->state.eof = 0;
    file->state.error = 0;
}
int (feof) (FILE* file)
{
    return (feof (file));
}
int (ferror) (FILE* file)
{
    return (ferror (file));
}
void
perror (const char* s)
{
    char errstr[__max_errstr];

#ifndef _No_Disk_File_OS_Support
    if (s)
    {
        fprintf (stderr, "%s: ", s);
    }

    fprintf (stderr, "%s\n", __strerror (errno, errstr));
#endif
}
void
__stdio_atexit (void)
{
#ifndef _No_Disk_File_OS_Support
    __stdio_exit = __close_all;
#endif
}
/* Change record:
 * JFH 950904 First code release.
 * JFH 951215 Changed stdio_atexit to new abort/exit handling architecture.
 * JFH 960122 Bracketed feof() and ferror() by #ifndef __cplusplus
 *								 (they are inlined in <stdio.h>).
 * JFH 960212 Tossed call to __setup_exit in __stdio_atexit.
 * JFH 960301 For Be only, __setup_exit was restored for the time being.
 *								 Their __stdio_atexit was cleaned up up a bit also.
 * SCM 970710 Disabled __stdio_atexit when __no_os is defined.
 * MEA 970720 Changed __no_os to _No_Disk_File_OS_Support.
 * cc  000326 removed dest_os to be_os
 */
