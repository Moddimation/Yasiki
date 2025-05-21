

# File misc\_io.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**misc\_io.c**](misc__io_8c.md)

[Go to the documentation of this file](misc__io_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/03 23:58:59 $ 
 *  $Revision: 1.7.14.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
 
/*
 *  misc_io.c
 *  
 *  Routines
 *  --------
 *      clearerr
 *
 *      feof
 *      ferror
 *
 *      perror
 *
 *      __stdio_atexit
 *
 *
 */

#include "ansi_files.h"
#include "critical_regions.h"
#include <errno.h>
#include "file_io.h"
#include "misc_io.h"
#include <stdlib.h>
#include <string.h>
#include "abort_exit.h"

void clearerr(FILE * file)
{
    file->state.eof   = 0;
    file->state.error = 0;
}

int (feof)(FILE * file)
{
    return(feof(file));
}

int (ferror)(FILE * file)
{
    return(ferror(file));
}

void perror(const char * s)
{
    char    errstr[__max_errstr];
    
    if (s)
        fprintf(stderr, "%s: ", s);
    
    fprintf(stderr, "%s\n", __strerror(errno, errstr));
}

void __stdio_atexit(void)
{
#ifndef _No_Disk_File_OS_Support
    __stdio_exit = __close_all;
    
#if __dest_os == __be_os

    __setup_exit();

#endif
#endif
}
/*  Change Record
 *  04-Sep-95 JFH  First code release.
 *  15-Dec-85 JFH  Changed stdio_atexit to new abort/exit handling architecture.
 *  22-Jan-96 JFH  Bracketed feof() and ferror() by #ifndef __cplusplus
 *                               (they are inlined in <stdio.h>).
 *  12-Feb-96 JFH  Tossed call to __setup_exit in __stdio_atexit.
 *   1-Mar-96 JFH  For Be only, __setup_exit was restored for the time being.
 *                               Their __stdio_atexit was cleaned up up a bit also.
 *  10-Jul-97 SCM  Disabled __stdio_atexit when __no_os is defined.
 *  20-Jul-97 MEA  Changed __no_os to _No_Disk_File_OS_Support.
*/
```


