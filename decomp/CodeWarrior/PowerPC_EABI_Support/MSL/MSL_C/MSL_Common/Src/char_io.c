/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/30 20:15:27 $
 * $Revision: 1.20 $
 */

/*
 *	Routines
 *	--------
 *		fgetc
 *		getc
 *		getchar
 *
 *		fgets
 *		gets
 *
 *		ungetc
 *
 *		fputc
 *		putc
 *		putchar
 *
 *		fputs
 *		puts
 *
 *		__get_char
 *		__put_char
 *
 *		__ungotten
 *
 *
 */

#include "char_io.h"

#include <stdio.h>

#include "ansi_files.h"
#include "buffer_io.h"
#include "critical_regions.h"                            /*- mm 001013 -*/
#include "misc_io.h"

#if !defined(_Old_DSP_IO_Interface)
int
__get_char(FILE *file)
{
    int state, ioresult;

    file->buffer_len = 0;

    if (file->state.error || file->mode.file_kind == __closed_file)
    {
        return (EOF);
    }

    state = file->state.io_state;

    if (state == __writing || !(file->mode.io_mode & __read))
    {
        set_error(file);
        return (EOF);
    }

    if (state >= __rereading)
    {
        file->state.io_state--;

        if (state == __rereading)
        {
            file->buffer_len = file->saved_buffer_len;
        }

        return (file->ungetc_buffer[state - __rereading]);
    }
    else
    {
        file->state.io_state = __reading;
    }

    ioresult = __load_buffer(file, NULL, __align_buffer);

    if (ioresult || !file->buffer_len)
    {
        if (ioresult == __io_error)
        {
            set_error(file);
        }
        else
        {
            set_eof(file);
        }

        return (EOF);
    }

    file->buffer_len--;

    return (*file->buffer_ptr++);
}
#endif                                                   /* __get_char conditionals */

int
fgetc(FILE *file)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = getc(file);                                 /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

int(getc)(FILE *file)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = getc(file);                                 /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

#if !defined(_Old_DSP_IO_Interface)
int(getchar)(void)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = getchar();                                  /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}
#endif                                                   /* getchar conditionals */

char *
fgets(char *s, int n, FILE *file)
{
    char *p = s;
    int   c;

    if (--n < 0)
    {
        return (NULL);
    }
    __begin_critical_region(files_access);               /*- mm 001013 -*/

    if (n)
    {
        do
        {
            c = getc(file);

            if (c == EOF)
            {
                if (file->state.eof && p != s)
                {
                    break;
                }
                else
                {
                    __end_critical_region(files_access); /*- mm 001013 -*/
                    return (NULL);
                }
            }

            *p++ = c;
        } while (c != '\n' && --n);
    }
    __end_critical_region(files_access);                 /*- mm 001013 -*/

    *p = 0;

    return (s);
}

char *
gets(char *s)
{
    char *p = s;
    int   c;
    FILE *file = stdin;
    __begin_critical_region(files_access);               /*- mm 001013 -*/

    for (;;)
    {
        c = getc(file);

        if (c == EOF)
        {
            if (file->state.eof && p != s)
            {
                break;
            }
            else
            {
                __end_critical_region(files_access);     /*- mm 001013 -*/
                return (NULL);
            }
        }

        if (c == '\n')
        {
            break;
        }

        *p++ = c;
    }
    __end_critical_region(files_access);                 /*- mm 001013 -*/

    *p = 0;

    return (s);
}

#if !defined(_Old_DSP_IO_Interface)
int
ungetc(int c, FILE *file)
{
    int state = file->state.io_state;

#    ifndef __NO_WIDE_CHAR                               /*- mm 980205 -*/
    if (fwide(file, -1) >= 0)
    {
        return (EOF);
    }
#    endif /* __NO_WIDE_CHAR */                          /*- mm 980205 -*/

    if (state == __writing || state == __rereading + __ungetc_buffer_size - 1 || c == EOF)
    {
        return (EOF);
    }
    __begin_critical_region(files_access);               /*- mm 001013 -*/

    if (state < __rereading)
    {
        file->saved_buffer_len = file->buffer_len;
        file->buffer_len = 0;

        state = file->state.io_state = __rereading;
    }
    else
    {
        state = ++file->state.io_state;
    }

    file->ungetc_buffer[state - __rereading] = c;

    file->state.eof = 0;
    __end_critical_region(files_access);                 /*- mm 001013 -*/

    return ((unsigned char)c);
}
#endif                                                   /* ungetc conditionals */

int
__ungotten(FILE *file)
{
    if (file->state.io_state < __rereading)
    {
        return (EOF);
    }

    return (file->ungetc_buffer[file->state.io_state - __rereading]);
}

#if !defined(_Old_DSP_IO_Interface)

int
__put_char(int c, FILE *file)
{
    int kind = file->mode.file_kind;

    file->buffer_len = 0;

    if (file->state.error || kind == __closed_file)
    {
        return (EOF);
    }

    if (kind == __console_file)
    {
        __stdio_atexit();
    }

    if (file->state.io_state == __neutral)
    {
        if (file->mode.io_mode & __write)
        {
#    ifndef _No_Disk_File_OS_Support
            if (file->mode.io_mode & __append)
            {
                if (fseek(file, 0, SEEK_END))
                {
                    return (0);
                }
            }
#    endif

            file->state.io_state = __writing;

            __prep_buffer(file);
        }
    }

    if (file->state.io_state != __writing)
    {
        set_error(file);
        return (EOF);
    }

    if (file->mode.buffer_mode == _IOFBF || file->buffer_ptr - file->buffer == file->buffer_size)
    {
        if (__flush_buffer(file, NULL))
        {
            set_error(file);
            return (EOF);
        }
    }

    file->buffer_len--;
    *file->buffer_ptr++ = c;

    if (file->mode.buffer_mode != _IOFBF)
    {
        if ((file->mode.buffer_mode == _IONBF || c == '\n'))
        {
            if (__flush_buffer(file, NULL))
            {
                set_error(file);
                return (EOF);
            }
        }

        file->buffer_len = 0;
    }

    return ((unsigned char)c);
}

#endif                                                   /* __put_char conditionals */

int
fputc(int c, FILE *file)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = putc(c, file);                              /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

int(putc)(int c, FILE *file)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = putc(c, file);                              /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

#if !defined(_Old_DSP_IO_Interface)
int(putchar)(int c)
{
    int retval;                                          /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    retval = putchar(c);                                 /*- mm 001013 -*/
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}
#endif                                                   /* putchar conditionals */

int
fputs(const char *s, FILE *file)
{
    int c;
    int retval = 0;                                      /*- mm 001013 -*/
    __begin_critical_region(files_access);               /*- mm 001013 -*/
    while ((c = *s++) != 0)
    {
        if (putc(c, file) == EOF)
        {
            retval = EOF;                                /*- mm 001013 -*/
            break;                                       /*- mm 001013 -*/
        }
    }
    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

int
puts(const char *s)
{
    int   c;
    int   retval = 0;                                    /*- mm 001013 -*/
    FILE *file = stdout;

    __begin_critical_region(files_access);               /*- mm 001013 -*/
    while ((c = *s++) != 0)
    {
        if (putc(c, file) == EOF)
        {
            retval = EOF;                                /*- mm 001013 -*/
            break;                                       /*- mm 001013 -*/
        }
    }
    if (retval != EOF)                                   /*- mm 001013 -*/
    {
        retval = putc('\n', file);                       /*- mm 001013 -*/
    }

    __end_critical_region(files_access);                 /*- mm 001013 -*/
    return (retval);                                     /*- mm 001013 -*/
}

                                                         /* Change record:
                                                          * JFH 950908 First code release.
                                                          * JFH 951016 Added __ungotten for SIOUX PascalHook
                                                          * JFH 960108 At the behest of Be, I put in real output line buffering.
                                                          * JFH 960122 Bracketed getc(), getchar(), putc(), and putchar() by #ifndef __cplusplus
                                                          *			  (they are inlined in <stdio.h>).
                                                          * JFH 960212 Added call to __stdio_atexit in __put_char for console files (so they will
                                                          *			  get flushed and closed properly).
                                                          * JFH 960219 Added check for closed files to __get_char and __put_char.
                                                          * JFH 960304 Allowed ungetc to work when a file is in the __neutral io_state.
                                                          * JFH 960425 Modified __get_char, ungetc, and __ungotten to account for multi-level 'ungetc'.
                                                          * FS  970612 Added #if __dest_os == __ppc_eabi_bare for Motorola 821
                                                          * SCM 970710 Removed __ppc_eabi_bare conditions after implementing
                                                          *			  serial console IO for non-os systems.
                                                          * MEA 970720 Changed __no_os to _No_Disk_File_OS_Support.
                                                          * mm  980204 Changes to file structure to support wide characters
                                                          * mm  981029 Excluded certain functions for __m56800__
                                                          * US  000504 Added variation of puts() for __m56800__
                                                          * mm  001013 Added threadsafety to fputs, puts, putc, ungetc, gets, fgets, fgetc,
                                                          *			  getc, getchar
                                                          */
