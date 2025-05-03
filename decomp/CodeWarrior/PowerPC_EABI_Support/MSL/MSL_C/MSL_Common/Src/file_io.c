/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/26 00:42:45 $
 * $Revision: 1.32.4.1 $
 */

/*
 *	Routines
 *	--------
 *		remove
 *		rename
 *		tmpnam
 *		tmpfile
 *		fclose
 *		fflush
 *		fopen
 *		freopen
 *
 *		__handle_reopen
 *
 */

#include "file_io.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ansi_files.h"
#include "buffer_io.h"
#include "critical_regions.h"
#include "misc_io.h"

#if (__dest_os == __win32_os || __dest_os == __wince_os)
#if (_MWMT)       /*- mm 010518 -*/
#include <ThreadLocalData.h>
#endif            /*- mm 010518 -*/
#include <crtl.h> /*- mm 990609 -*/
#endif

#ifndef _No_Disk_File_OS_Support

/*- hh 971206 -*/
__file_modes __temp_file_mode =
#ifndef __NO_WIDE_CHAR          /*- mm 980707 -*/
    { __create_or_truncate, __read_write, _IOFBF, __disk_file, __unoriented, 1 };
#else
    { __create_or_truncate, __read_write, _IOFBF, __disk_file, 1 };
#endif /* not __NO_WIDE_CHAR */ /*- mm 980707 -*/
int
remove (const char* name)
{
    return ((__delete_file (name) == __no_io_error) ? 0 : -1);
}
int
rename (const char* old_name, const char* new_name)
{
    return ((__rename_file (old_name, new_name) == __no_io_error) ? 0 : -1);
}
char*
tmpnam (char* name)
{
    /*- BLC 991210 -*/
#if !(_MWMT && (__dest_os == __win32_os || __dest_os == __wince_os))
    static char temp_name[L_tmpnam];
#endif

    if (name)
    {
        __temp_file_name (name, NULL);
        return (name);
    }
    else
    {
        /*- KO 961219 -*/
#if _MWMT && (__dest_os == __win32_os || __dest_os == __wince_os)
        __temp_file_name (_GetThreadLocalData (_MSL_TRUE)->tmpnam_temp_name,
                          NULL);                                    /*- cc 010531 -*/
        return (_GetThreadLocalData (_MSL_TRUE)->tmpnam_temp_name); /*- cc 010531 -*/
#else
        __temp_file_name (temp_name, NULL);
        return (temp_name);
#endif
    }
}
FILE*
tmpfile (void)
{
    FILE* file;

    __stdio_atexit();

    __begin_critical_region (files_access);

    if ((file = __find_unopened_file()) != 0)
    {
        __init_file (file, __temp_file_mode, 0, BUFSIZ);

        if (__open_temp_file (&file->handle))
        {
            file->mode.file_kind = __closed_file;
            file = NULL;
        }
    }

    __end_critical_region (files_access);

    return (file);
}
#endif                                    /* ndef _No_Disk_File_OS_Support */
int
fclose (FILE* file)
{
    int flush_result, close_result;

    if (file == NULL)                     /*- MM 960625 -*/
    {
        return (EOF);                     /*- MM 960625 -*/
    }
    if (file->mode.file_kind == __closed_file)
    {
        return (0);
    }

    flush_result = fflush (file);

    close_result = (*file->close_proc) (file->handle);

    file->mode.file_kind = __closed_file;
    file->handle = 0;

    if (file->state.free_buffer)
#ifndef _No_Disk_File_OS_Support
        free (file->buffer);
#else
        return (-1);
#endif

    return ((flush_result || close_result) ? EOF : 0);
}
#if !defined(_Old_DSP_IO_Interface)
int
fflush (FILE* file)
{
    fpos_t position;                      /*- mm 970708 -*/

    if (!file)
    {
        return (__flush_all());
    }

    if (file->state.error || file->mode.file_kind == __closed_file)
    {
        return (EOF);
    }

    if (file->mode.io_mode == __read)     /*- mm 980430 -*/
    {
        return 0;                         /*- mm 980430 -*/
    }

    if (file->state.io_state >= __rereading)
    {
        file->state.io_state = __reading;
    }

    if (file->state.io_state == __reading)
    {
        file->buffer_len = 0;
    }

    if (file->state.io_state != __writing)
    {
        file->state.io_state = __neutral; /*- mm 970905 -*/
        return (0);
    }

#ifndef _No_Disk_File_OS_Support
    if (file->mode.file_kind != __disk_file || (position = ftell (file)) < 0)
    {
        position = 0;
    }
#else
    position = 0;
#endif

    if (__flush_buffer (file, NULL))
    {
        set_error (file);
        return (EOF);
    }

    file->state.io_state = __neutral;
    file->position = position;
    file->buffer_len = 0;

    return (0);
}
#endif                                    /* fflush conditionals */

#ifndef _No_Disk_File_OS_Support
FILE*
fopen (const char* name, const char* mode)
{
    FILE* file;

    __begin_critical_region (files_access);

    file = freopen (name, mode, __find_unopened_file());

    __end_critical_region (files_access);

    return (file);
}
FILE*
freopen (const char* name, const char* mode, FILE* file)
{
    __file_modes modes;

    __stdio_atexit();

    if (!file)
    {
        return (NULL);
    }

    fclose (file);
    clearerr (file);

    if (!__get_file_modes (mode, &modes))
    {
        return (NULL);
    }

    __init_file (file, modes, 0, BUFSIZ);

    if (__open_file (name, modes, &file->handle))
    {
        file->mode.file_kind = __closed_file;
        if (file->state.free_buffer)      /*- mm 960719 -*/
        {
            free (file->buffer);          /*- mm 960719 -*/
        }
        return (NULL);
    }
    if (modes.io_mode & __append)         /*- mm 990119 -*/
    {
        fseek (file, 0, SEEK_END);        /*- mm 990119 -*/
    }

    return (file);
}
/*- mm 990609 -*/
/* The function __reopen(FILE* file) is a non-standard function that will change the
   mode of one of the three standard files, stdin, stdout, stderr to binary mode from
   text mode.  The value of the parameter file may only be one of stdin, stdout or
   stderr otherwise the function will take no action and return the value NULL.
*/

FILE*
__reopen (FILE* file)
{
    if ((file == stdin) || (file == stdout) || (file == stderr))
    {
        file->mode.binary_io = 1;
#if (__dest_os == __win32_os || __dest_os == __wince_os)
        _HandleTable[file->handle]->translate = 0;
#endif
        return file;
    }
    else
    {
        return NULL;
    }
}
/*- mm 990609 -*/

FILE*
__handle_open (__file_handle handle, const char* mode)
{
    FILE* file;

    __begin_critical_region (files_access);

    file = __handle_reopen (handle, mode, __find_unopened_file());

    __end_critical_region (files_access);

    return (file);
}
FILE*
__handle_reopen (__file_handle handle, const char* mode, FILE* file)
{
    __file_modes modes;

    __stdio_atexit();

    if (!file)
    {
        return (NULL);
    }

    fclose (file);
    clearerr (file);

    if (!__get_file_modes (mode, &modes))
    {
        return (NULL);
    }

    __init_file (file, modes, 0, BUFSIZ);

    file->handle = handle;

    return (file);
}
int
__get_file_modes (const char* mode, __file_modes* modes)
{
    const char*   mode_ptr = mode;
    unsigned long mode_str;
    unsigned char open_mode, io_mode;

    modes->file_kind = __disk_file;
#ifndef __NO_WIDE_CHAR          /*- mm 980204 -*/
    modes->file_orientation = __unoriented;
#endif /* not __NO_WIDE_CHAR */ /*- mm 980204 -*/
    modes->binary_io = 0;

    mode_str = *mode_ptr++;

    /* next appears fixed now for 56800 R4/56700 R1 --   010129 arden
       commented out and left in for this commit; remove next round
    */
    /*	#if !defined(__m56800__) ||\   */
    /*	    !defined(__m56800E__)       */

    switch (mode_str)
    {
        case 'r':
            open_mode = __must_exist;
            break;

        case 'w':
            open_mode = __create_or_truncate;
            break;

        case 'a':
            open_mode = __create_if_necessary;
            break;

        default:
            return (0);
    }

    modes->open_mode = open_mode;

    switch (*mode_ptr++)
    {
        case 'b':
            modes->binary_io = 1;

            if (*mode_ptr == '+')
            {
                mode_str = (mode_str << 8) | '+';
            }

            break;

        case '+':
            mode_str = (mode_str << 8) | '+';

            if (*mode_ptr == 'b')
            {
                modes->binary_io = 1;
            }

            break;
    }

    switch (mode_str)
    {
        case 'r':
            io_mode = __read;
            break;

        case 'w':
            io_mode = __write;
            break;

        case 'a':
            io_mode = __write | __append;
            break;

        case 'r+':
            io_mode = __read_write;
            break;

        case 'w+':
            io_mode = __read_write;
            break;

        case 'a+':
            io_mode = __read_write | __append;
            break;
    }

    modes->io_mode = io_mode;

    return (1);
}
#endif /* ndef _No_Disk_File_OS_Support */
void
__set_idle_proc (FILE* file, __idle_proc idle_proc)
{
    file->idle_proc = idle_proc;
}
/* Compare lexigraphically two strings up to a max length */

int
__msl_strnicmp (const char* s1, const char* s2, int n) /*- cc 010605 -*/
{
    int  i;
    char c1, c2;
    for (i = 0; i < n; i++)
    {
        c1 = tolower (*s1++);
        c2 = tolower (*s2++);
        if (c1 < c2)
        {
            return -1;
        }
        if (c1 > c2)
        {
            return 1;
        }
        if (!c1)
        {
            return 0;
        }
    }
    return 0;
}
/* reverse a string in place */

char*
__msl_strrev (char* str)  /*- cc 010605 -*/
{
    int SmallIndex = 0;
    int BigIndex = strlen (str) - 1;

    while (SmallIndex < BigIndex)
    {
        char Temp = str[SmallIndex];

        str[SmallIndex] = str[BigIndex];
        str[BigIndex] = Temp;

        SmallIndex++;
        BigIndex--;
    }

    return str;
}
char*
__msl_itoa (int val, char* str, int radix)
{
    char         IsNegative = 0;
    int          theNum = val;
    unsigned int theUNum; /*- mm 000209 -*/
    int          StrIndex = 0;

    if (val < 0)          /*- mm 000209 -*/
    {                     /*- mm 000209 -*/
        theUNum = -val;   /*- mm 000209 -*/
        IsNegative = 1;   /*- mm 000209 -*/
    } /*- mm 000209 -*/
    else                                /*- mm 000209 -*/
    {
        theUNum = val;                  /*- mm 000209 -*/
    }

    do {
        int CurDigit = theUNum % radix; /*- mm 000209 -*/
        if (CurDigit > 9)
        {
            str[StrIndex++] = CurDigit + 'A' - 10;
        }
        else
        {
            str[StrIndex++] = CurDigit + '0';
        }

        theUNum /= radix;               /*- mm 000209 -*/
    }
    while (theUNum); /*- mm 000209 -*/

    if (IsNegative)
    {
        str[StrIndex++] = '-';
    }
    str[StrIndex++] = 0;
    /* Now reverse the string.  */
    __msl_strrev (str);        /*- cc 010605 -*/

    return str;
}
char*
__msl_strdup (const char* str) /*- cc 010725 -*/
{
    char* rval = (char*)__std (malloc) (__std (strlen) (str) + 1);

    if (rval)
    {
        __std (strcpy) (rval, str);
    }
    return rval;
}
/* Change record:
 * JFH 950814 First code release.
 * JFH 951016 Modified fflush to flush read buffers for SIOUX
 * JFH 951213 Added idle_proc to FILE and __set_idle_proc(). Intended primarily for
 *Mac I/O (see file_io.mac.c). JFH 960219 Added closed-file check to fflush. JFH
 *960425 Modified fflush to account for multi-level 'ungetc'. JFH 960429 Merged Win32
 *changes in. CTV MM  960625 Added code to avoid bus error in fclose with null file
 *pointer MM  960719 Added code to prevent memory leak in freopen KO  961219 Added
 *some Win32 ifdefs to use my thread local data structure rather than static local
 *variables. bobk961228 line 135 added for clean exits on win32 SCM 970711 Wrapped
 *os-dependent functions in #ifndef __no_os. MEA 970720 Changed __no_os to
 *_No_Disk_File_OS_Support. mm  970708 Inserted Be changes mm  970905 Correction to
 *mark file as _neutral when flushed in other than _writing mode. mm  980204 Changes
 *to support wide characters mm  980430 The Standard does not define any action for
 *fflush on a file opened in read only mode so do nothing.  MW02733 mf  980512 wince
 *changes mm  980707 Corrected initialization of __temp_file_mode to allow for wide
 *characters mm  981029 Excluded fflush() for __m56800__ mm  990119 When a file is
 *opened in append mode, make sure that it is positioned to eof IL9901-1347 bds
 *990121 Added BEOS wrapper mf  990301 removed calls to _GetThreadLocalData for
 *single threaded lib ansix86st.lib mm  990609 Added code for __reopen, which changes
 *stdin, stdout, or stderr into binary mode. blc 991210 Fixed TLS leak into Win32
 *libraries through obsolete buffer declaration in tmpnam() cc  010326 removed
 *dest_os to be_os cc  010405 readded rename mm  010518 Add _MWMT wrapper to #include
 *<ThreadLocalData.h> cc  010531 Added _GetThreadLocalData's flag cc  010605 Made
 *__msl_itoa = to itoa, __msl_strnicmp = to strnicmp, __msl_strrev = to strrev for
 * 			  MSL C & added for #include <ctype.h> and <string.h>
 * cc  010725 Added __msl_strdup
 */
