/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/04 20:39:08 $
 * $Revision: 1.20 $
 */

/*
 *	Routines
 *	--------
 *		fgetwc
 *		getwc
 *		getwchar
 *
 *		fgetws
 *
 *		ungetwc
 *
 *		fputwc
 *		putwc
 *		putwchar
 *
 *		fputws
 *
 *		__get_wchar
 *		put_wchar
 *
 *		__ungotten
 *
 *		fwide
 */

#pragma ANSI_strict off       /*- vss 990729 -*/

#include <ansi_parms.h>

#ifndef __NO_WIDE_CHAR        /*- mm 980204 -*/

#pragma ANSI_strict reset

#include <stdio.h>

#include "ansi_files.h"
#include "critical_regions.h" /*- mm 001013 -*/
#include "wchar.h"
#include "wstdio.h"
/*
    This function writes the wide character c
    to the output stream file,
    and returns (wchar_t) c.
*/

/* threadsafety protection is in fwrite */
wchar_t
putwc (wchar_t c, FILE* file)
{
    if (fwide (file, 1) <= 0)                         /*- mm 980206 -*/
    {
        return (WEOF);                                /*- mm 980206 -*/
    }

    if (fwrite ((char*)&c, sizeof (c), 1, file) == 0) /*- mm 980130 -*/
    {
        return WEOF;
    }

    return (c);
}
/*
    putwchar is identical to putwc with the
    second argument stdout
*/

/* threadsafety is in fwrite */
wchar_t
putwchar (wchar_t c)
{
    if (fwide (stdout, 1) <= 0)                            /*- mm 980206 -*/
    {
        return (WEOF);                                     /*- mm 980206 -*/
    }
    if (fwrite ((char*)&c, sizeof (c), 1, stdout) == WEOF) /*- mm 980130 -*/
    {
        return WEOF;
    }

    return (c);
}
/*
    This function is the same at putwc.
*/

wchar_t
fputwc (wchar_t c, FILE* file)
{
    return (putwc (c, file));
}
/*
    This function gets the wide character c
    from the input stream file,
    and returns (wint_t) c.
*/

/*
    getwc

    Description

    If the next wide character is present from the input
    stream pointed to by file, then fgetwc function obtains
    that wide character and advances the associated file
    position indicator for the stream (if defined).


    Returns

    The fgetwc function returns the next wide character
    from the input stream pointed to by file. If the stream
    as at end-of-file, then ind-of-file indicator for the stream
    is set and fgetwc returns WEOF.
*/

wchar_t
getwc (FILE* file)            /*- jcm 971208 -*/
{
    wchar_t c;                /* wide char to hold the final result */

    if (fwide (file, 1) <= 0) /*- mm 980206 -*/
    {
        return (WEOF);        /*- mm 980206 -*/
    }
    /* threadsafety protection is in fread to add a critical region here would
     * deadlock */
    if (fread ((char*)&c, sizeof (c), 1, file) == 0) /*- mm 980130 -*/
    {
        return WEOF;
    }
    return (c);
}
wchar_t
getwchar (void)                                      /*- jcm 971208 -*/
{
    wchar_t c;                    /* wide char to hold the final result */

    if (fwide (stdin, 1) <= 0)    /*- mm 980206 -*/
    {
        return (WEOF);            /*- mm 980206 -*/
    }
    /* fread has threadsafety  */ /*- mm 001018 -*/
    if (fread ((char*)&c, sizeof (c), 1, stdin) == 0) /*- mm 980102 -*/
    {
        return WEOF;
    }

    return (c);
}
/*
    This function is the same at getwc.
*/

wchar_t
fgetwc (FILE* file) /*- jcm 971208 -*/
{
    wchar_t c;

    /* getwc calls fread, which has threadsafety, adding critical regions here would
       lead to deadlock 	*/				/*- mm 001013 -*/
    c = getwc (file);
    return (c);
}
wchar_t
ungetwc (wchar_t c, FILE* file)
{
    int state = file->state.io_state;
    if (fwide (file, 1) <= 0)               /*- mm 980206 -*/
    {
        return (WEOF);                      /*- mm 980206 -*/
    }

    if (state == __writing || state == __rereading + __ungetc_buffer_size - 1 ||
        c == WEOF)
    {
        return (WEOF);
    }
    __begin_critical_region (files_access); /*- mm 001013 -*/

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

    file->ungetwc_buffer[state - __rereading] = c;

    file->state.eof = 0;
    __end_critical_region (files_access);   /*- mm 001013 -*/
    return ((wchar_t)c);
}
/*
    fputws

    Description

    The fputws writes the wide string pointed to
    by s to the stream pointed to by file. The terminating
    mull wide character is not written.

    Returns

    The fputws function returns EOF if a write or encoding error
    occurs: otherwise, it returns a nonnegative value.

*/

int
fputws (const wchar_t* s, FILE* file)
{
    int     i;
    /*int		errno;*/                    /*- mm 010404 -*/
    int     retval = 1;
    wchar_t c;

    if (fwide (file, 1) <= 0)               /*- mm 980206 -*/
    {
        return (WEOF);                      /*- mm 980206 -*/
    }

    __begin_critical_region (files_access); /*- mm 001013 -*/
    for (i = 0; s[i] != L'\0'; i++) /* go through the string until reaching NULL */
    {
        /*errno = 0; 									/* initialize errno to zero
         */ /*- mm 010404 -*/
        c = s[i]; /* get the current character */

        if (__fwrite ((void*)&c, sizeof (c), 1, file) == 0) /*- mm 001018 -*/
        {
            retval = WEOF;                /* return wide EOF error */
        }
    }
    __end_critical_region (files_access); /*- mm 001013 -*/

    return (retval);
}
/*
    fgetws

    Description

    The fgetws function reads at most one less than the
    number of wide characters specified by n from the stream
    pointed to by file into the array pointed to by s. No
    additionaly wide characters are read after a new-line wide
    character (which is retained) or after end-of-file. A null
    wide character is written immediately after the last wide
    character read into the array.

    Returns

    The fgetws function returns s if successful. If end-
    of-file is encountered and no characters have been read into
    the array, the contents of the array remain unchanged and a
    null pointer is returned. If a read or encoding error occurs
    during the operatioin, the array contents are indeterminate
    and a null pointer is returned.
*/

wchar_t*
fgetws (wchar_t* s, int n, FILE* file)
{
    wchar_t* p = s;
    wchar_t* retval = s;
    wchar_t  c;

    if (fwide (file, 1) <= 0)                                  /*- mm 980206 -*/
    {
        return (NULL);                                         /*- mm 980206 -*/
    }

    if (--n < 0)
    {
        return (NULL);
    }

    __begin_critical_region (files_access);                    /*-mm 001013 -*/
    if (n)
    {
        do {
            if (__fread ((void*)&c, sizeof (c), 1, file) == 0) /*- mm 001018 -*/
            {
                if (file->state.eof && p == s)
                {
                    retval = NULL;
                }
                break;
            }
            *p++ = c;
        }
        while (c != L'\n' && --n);
    }

    if (retval != NULL)
    {
        *p = L'\0';
    }
    __end_critical_region (files_access);                      /*- mm 001013 -*/
    return (retval);                                           /*- mm 001013 -*/
}
int
fwide (FILE* stream, int mode)
{
    int orientation;
    int result;

    if ((stream == NULL) ||
        (stream->mode.file_kind == __closed_file))             /*- mm 990618 -*/
    {
        return 0; /* there is no associated stream therefore no orientation */
    }
    orientation = stream->mode.file_orientation;
    switch (orientation)
    {
        case __unoriented:
            if (mode > 0)
            {
                stream->mode.file_orientation = __wide_oriented;
            }
            else if (mode < 0)
            {
                stream->mode.file_orientation = __char_oriented;
            }
            result = mode;
            break;

        case __wide_oriented:
            result = 1;
            break;

        case __char_oriented:
            result = -1;
            break;
    }
    return result;
}
#endif /* ifndef __NO_WIDE_CHAR */ /*- mm 981020 -*/

                                   /* Change record:
                                    * JCM 980121 First code release.
                                    * mm  980206 Added cide to handle wide char unget properly and implementation of
                                    * fwide.                                    mm  981020 Added __NO_WIDE_CHAR
                                    * wrappers.                                    mm  990618 Added protection to                                    fwide
                                    * against a NULL file pointer                                    mm  001018 Added
                                    * threadsafety protection.                                    mm                                    010404 Delete local
                                    * instance of errno that is never really used.
                                    */
