/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/07 16:28:36 $
 * $Revision: 1.20 $
 */

/*
 *	Routines
 *	--------
 *		mblen
 *		mbtowc
 *		wctomb
 *		mbstowcs
 *		wcstombs
 *
 *
 *
 */

#pragma ANSI_strict off

#include <ansi_parms.h>

#ifndef __NO_WIDE_CHAR

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
int
mblen (const char* s, size_t n)
{
    if (s && *s)
    {
        return (mbtowc (0, s, n));
    }
    else
    {
        return (0);
    }
}
static int is_utf8_complete (const char* s, size_t n);
static int
is_utf8_complete (const char* s, size_t n)
{
    if (n <= 0) /* 0 or fewer characters do not form a valid multibyte character */
    {
        return (-1);
    }

    if (*s == 0x00)
    {
        return (0);
    }

    if ((*s & 0x80) == 0x00)
    {
        return (1);
    }
    else if ((*s & 0xe0) == 0xc0) /* need 2 bytes */
    {
        if (n >= 2)
        {
            if (((*(s + 1) & 0x80) == 0x80))
            {
                return (2);
            }
            else
            {
                return (-1);
            }
        }
        else
        {
            return (-2);
        }
    }

    else if ((*s & 0xf0) == 0xe0)
    {
        if (n >= 3)
        {
            if (((*(s + 1) & 0x80) == 0x80) && ((*(s + 2) & 0x80) == 0x80))
            {
                return (3);
            }
            else
            {
                return (-1);
            }
        }
        else if (((n == 2) && ((*(s + 1) & 0x80) == 0x80)) || (n == 1))
        {
            return (-2);
        }
        else
        {
            return (-1);
        }
    }
    else
    {
        return (-1);
    }
}
static int utf8_to_unicode (wchar_t* pwc, const char* s, size_t n);
static int
utf8_to_unicode (wchar_t* pwc, const char* s, size_t n)
{
    int     number_of_bytes;
    int     check_byte_count;     /*- mm 010607 -*/
    char*   source;
    wchar_t result_chr = 0;

    if (!s)                       /* We are assuming UTF-8 encoding so return 0 */
    {
        return (0);
    }

    if (n <= 0) /* 0 or fewer characters do not form a valid multibyte character */
    {
        return (-1);
    }

    number_of_bytes = is_utf8_complete (s, n);
    if (number_of_bytes < 0)
    {
        return (-1);
    }

    /* if we get this far, we have a valid UTF-8 encoding */
    source = (char*)s;
    switch (number_of_bytes)          /* the cases are meant to drop through! */
    {
        case 3:
            result_chr |= (*source++ & 0x0f);
            result_chr <<= 6;
        case 2:
            result_chr |= (*source++ & 0x3f);
            result_chr <<= 6;
        case 1:
            result_chr |= (*source++ & 0x7f);
    }

    if (result_chr == 0x0000)         /*- mm 010607 -*/
    {
        check_byte_count = 0;         /*- mm 010607 -*/
    }
    else                              /*- mm 010607 -*/
        if (result_chr < 0x0080)      /*- mm 010607 -*/
        {
            check_byte_count = 1;     /*- mm 010607 -*/
        }
        else                          /*- mm 010607 -*/
            if (result_chr < 0x0800)  /*- mm 010607 -*/
            {
                check_byte_count = 2; /*- mm 010607 -*/
            }
            else                      /*- mm 010607 -*/
            {
                check_byte_count = 3; /*- mm 010607 -*/
            }
    if (check_byte_count != number_of_bytes) /*- mm 010607 -*/
    {
        return (-1);                         /*- mm 010607 -*/
    }
    if (pwc)
    {
        *pwc = result_chr;
    }

    return (number_of_bytes);
}
int
mbtowc (wchar_t* pwc, const char* s, size_t n)
{
    return (utf8_to_unicode (pwc, s, n));
}
static int unicode_to_UTF8 (char* s, wchar_t wchar);
static int
unicode_to_UTF8 (char* s, wchar_t wchar)
{
    int     number_of_bytes;
    wchar_t wide_char;
    char*   target_ptr;
    char    first_byte_mark[4] = { 0x00, 0x00, 0xc0, 0xe0 };

    if (!s)                /* We are assuming UTF-8 encoding so return 0 */
    {
        return (0);
    }

    wide_char = wchar;
    if (wide_char < 0x0080)
    {
        number_of_bytes = 1;
    }
    else if (wide_char < 0x0800)
    {
        number_of_bytes = 2;
    }
    else
    {
        number_of_bytes = 3;
    }

    target_ptr = s + number_of_bytes;

    switch (number_of_bytes)
    {                      /* Note: the cases are meant to fall through! */
        case 3:
            *--target_ptr = (wide_char & 0x003f) | 0x80;
            wide_char >>= 6;
        case 2:
            *--target_ptr = (wide_char & 0x003f) | 0x80;
            wide_char >>= 6;
        case 1:
            *--target_ptr = wide_char | first_byte_mark[number_of_bytes];
    }

    return (number_of_bytes);
}
int
wctomb (char* s, wchar_t wchar)
{
    return (unicode_to_UTF8 (s, wchar));
}
size_t
mbstowcs (wchar_t* pwcs, const char* s, size_t n)
{
    int    result;
    char*  source;
    int    count;
    size_t source_len;

    source_len = strlen (s);

    if (pwcs)
    {
        source = (char*)s;
        for (count = 0; count < n; count++)
        {
            if (*source)
            {
                result = mbtowc (pwcs++, source, source_len);
                if (result > 0)
                {
                    source += result;
                    source_len -= result;
                }
                else
                {
                    break;
                }
            }
            else
            {
                *pwcs = 0;
                break;
            }
        }
    }
    else
    {
        count = 0;
    }

    return (count);
}
size_t
wcstombs (char* s, const wchar_t* pwcs, size_t n)
{
    int      chars_written = 0;
    int      result;
    char     temp[3];
    wchar_t* source;

    if (!s || !pwcs)
    {
        return (0);
    }

    source = (wchar_t*)pwcs;
    while (chars_written <= n)
    {
        if (!*source)
        {
            *(s + chars_written) = '\0';
            break;
        }
        else
        {
            result = wctomb (temp, *source++);
            if ((chars_written + result) <= n)
            {
                strncpy (s + chars_written, temp, result);
                chars_written += result;
            }
            else
            {
                break;
            }
        }
    }

    return (chars_written);
}
size_t
mbrlen (const char* s, size_t n, mbstate_t* ps)
{
#pragma unused(ps)

    mbstate_t  internal;
    mbstate_t* mbs = ps;

    return (mbrtowc (NULL, s, n, mbs != NULL ? mbs : &internal));
}
size_t
mbrtowc (wchar_t* pwc, const char* s, size_t n, mbstate_t* ps)
{
#pragma unused(ps)
    size_t num_of_chars;

    if (s)
    {
        num_of_chars = is_utf8_complete (s, n);
        if ((num_of_chars != (size_t)(-1)) && (num_of_chars != (size_t)(-2)))
        {
            if (pwc)
            {
                num_of_chars = utf8_to_unicode (pwc, s, n);
            }
            else if (num_of_chars == (size_t)-1)
            {
                errno = EILSEQ;
            }
        }
        return (num_of_chars);
    }
    else                   /*- mm 010607 -*/
        if (pwc)           /*- mm 010607 -*/
        {
            *pwc = 0x0000; /*- mm 010607 -*/
        }
    return (0);
}
size_t
wcrtomb (char* s, wchar_t wc, mbstate_t* ps)
{
#pragma unused(ps)

    if (!s)
    {
        return (1);
    }

    return (unicode_to_UTF8 (s, wc));
}
size_t
mbsrtowcs (wchar_t* dst, const char** src, size_t len, mbstate_t* ps)
{
    int     result;
    char*   source;
    int     count;
    size_t  source_len;
    wchar_t local_target;

    source_len = strlen (*src);

    source = (char*)*src;
    for (count = 0; count < len; count++)
    {
        if (*source)
        {
            result = mbrtowc (
                (dst == NULL) ? &local_target : dst++, source, source_len, ps);
            if (result > 0)
            {
                source += result;
                source_len -= result;
            }
            else
            {
                break;
            }
        }
        else
        {
            *dst = 0;
            break;
        }
    }

    return (count);
}
size_t
wcsrtombs (char* dst, const wchar_t** src, size_t len, mbstate_t* ps)
{
    int      chars_written = 0;
    int      result;
    char     temp[3];
    wchar_t* source;

    if (!src)
    {
        return (0);
    }

    source = (wchar_t*)*src;
    while (chars_written <= len)
    {
        if (!*source)
        {
            *(dst + chars_written) = '\0';
            break;
        }
        else
        {
            result = wcrtomb (temp, *source++, ps);
            if ((chars_written + result) <= len)
            {
                strncpy (dst + chars_written, temp, result);
                chars_written += result;
            }
            else
            {
                break;
            }
        }
    }

    return (chars_written);
}
#endif                     /*  __NO_WIDE_CHAR  */

/* Change record:
 * JFH 950724 First code release.
 * vss 990624 protect for wide characters
 * mm  990702 correction to prevent sign extension when assigning char to wchar
 * mm  000204 Rewrote mbstowcs to make action if pwcs is NULL match that of MSDN's
 * implementation.  Thanks to E. Cloninger mm  010528 Complete rewrite to implement
 * UTF-8 as the encoding for multibyte. mm  010607 Fixes to UTF-8 conversion
 */
