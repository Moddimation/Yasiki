/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/26 00:42:21 $
 * $Revision: 1.18.2.2 $
 */

#include <ctype.h>
#include <errno.h>
#include <extras.h>
#include <file_io.h>
#include <stat.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>

#include "ansi_files.h"

char *
strdup(const char *str)  /*- 010725 -*/
{
    return __msl_strdup(str);
}

char *
_strdup(const char *str) /*- 010725 -*/
{
    return __msl_strdup(str);
}

char *
strlwr(char *string)
{
    char *s = string;

    while (*s)
    {
        *s = tolower(*s);
        s++;
    }

    return string;
}

char *
_strlwr(char *string)
{
    return strlwr(string);
}

/* Convert unsigned integer to a string */

char *
ultoa(unsigned long val, char *str, int radix)
{
    unsigned long theNum = val;
    int           StrIndex = 0;

    do
    {
        int CurDigit = theNum % radix;
        if (CurDigit > 9)
        {
            str[StrIndex++] = CurDigit + 'A' - 10;
        }
        else
        {
            str[StrIndex++] = CurDigit + '0';
        }

        theNum /= radix;
    } while (theNum);

    str[StrIndex++] = 0;

    /* Now reverse the string.*/
    _strrev(str);

    return str;
}

char *
_ultoa(unsigned long val, char *str, int radix)
{
    return ultoa(val, str, radix);
}

/* Convert a value as a g format */
#ifndef _No_Floating_Point

char *
gcvt(double value, int digits, char *buffer)
{
    sprintf(buffer, "%.*g", digits, value);
    return buffer;
}

char *
_gcvt(double value, int digits, char *buffer)
{
    return gcvt(value, digits, buffer);
}

#endif

/* return unused heap memory */
int
heapmin(void)
{
    errno = ENOSYS;
    return -1;
}

int
_heapmin(void)
{
    return heapmin();
}

/* Compare lexigraphically two strings */

int
stricmp(const char *s1, const char *s2) /*- cc 010713 -*/
{
    char c1, c2;
    while (1)
    {
        c1 = tolower(*s1++);
        c2 = tolower(*s2++);
        if (c1 < c2)
        {
            return -1;
        }
        if (c1 > c2)
        {
            return 1;
        }
        if (c1 == 0)
        {
            return 0;
        }
    }
}

int
_stricmp(const char *s1, const char *s2)
{
    return stricmp(s1, s2);
}

/* Compare lexigraphically two strings up to a max length */

int
strnicmp(const char *s1, const char *s2, size_t n) /*- cc 010713 -*/
{
    return __msl_strnicmp(s1, s2, n);
}

int
_strnicmp(const char *s1, const char *s2, size_t n)
{
    return __msl_strnicmp(s1, s2, n);              /*- cc 010605 -*/
}

/* Uppercase a string */
char *
strupr(char *str)
{
    char *temp = str;           /*- mm 010116 -*/
    while (*temp)               /*- mm 010116 -*/
    {
        *temp = toupper(*temp); /*- mm 010116 -*/
        temp++;                 /*- mm 010116 -*/
    }
    return str;
}

char *
_strupr(char *str)
{
    return strupr(str);
}

/* Get the date in a string */

char *
strdate(char *str)
{
    time_t timer;
    time(&timer);
    strftime(str, 10, "%m/%d/%y", localtime(&timer));
    return str;
}

char *
_strdate(char *str)
{
    return strdate(str);
}

/* Set characters of string to character */
char *
strset(char *str, int c)
{
    char *save = str;

    while (*str)
    {
        *str++ = c;
    }

    return save;
}

char *
_strset(char *str, int c)
{
    return strset(str, c);
}

/* Set first n characters of string to character */

char *
strnset(char *str, int c, size_t n)
{
    char *save = str;

    while (n && *str)
    {
        *(str++) = c;
        n--;
    }

    return save;
}

char *
_strnset(char *str, int c, size_t n)
{
    return strnset(str, c, n);
}

/* return pointer to first character in s1 that isn't in s2 */

char *
strspnp(char *s1, const char *s2)
{
    while (*s1)
    {
        const char *set = s2;
        while (*set)
        {
            if (*s1 != *(set++))
            {
                return s1;
            }
        }

        s1++;
    }

    return NULL;
}

char *
_strspnp(char *s1, const char *s2)
{
    return strspnp(s1, s2);
}

/* Case-insensitive string comparison */
int
strncasecmp(const char *s1, const char *s2, size_t n)
{
    return __msl_strnicmp(s1, s2, n);
}

int
_strncasecmp(const char *s1, const char *s2, size_t n)
{
    return __msl_strnicmp(s1, s2, n);
}

int
strcmpi(const char *s1, const char *s2)
{
    return stricmp(s1, s2);
}

int
_strcmpi(const char *s1, const char *s2)
{
    return stricmp(s1, s2);
}

int
strncmpi(const char *s1, const char *s2, size_t n)
{
    return __msl_strnicmp(s1, s2, n);
}

int
_strncmpi(const char *s1, const char *s2, size_t n)
{
    return __msl_strnicmp(s1, s2, n);
}

int
strcasecmp(const char *s1, const char *s2)
{
    return stricmp(s1, s2);
}

int
_strcasecmp(const char *s1, const char *s2)
{
    return stricmp(s1, s2);
}

char *
itoa(int val, char *str, int radix)
{
    return __msl_itoa(val, str, radix); /*- cc 010605 -*/
}

char *
_itoa(int val, char *str, int radix)
{
    return __msl_itoa(val, str, radix); /*- cc 010605 -*/
}

/* reverse a string in place */
char *
strrev(char *str)
{
    return __msl_strrev(str); /*- cc 010713 -*/
}

char *
_strrev(char *str)
{
    return __msl_strrev(str); /*- cc 010605 -*/
}

int
filelength(int fileno)
{
    struct stat st;
    if (fstat(fileno, &st))
    {
        return -1;
    }
    return st.st_size;
}

int
_filelength(int fileno)
{
    return filelength(fileno);
}

#ifndef __NO_WIDE_CHAR

/* lowercase all characters in str */
int
wtoi(const wchar_t *_a)
{
    return wcstol(_a, NULL, 10);
}

int
_wtoi(const wchar_t *_a)
{
    return wcstol(_a, NULL, 10);
}

wchar_t *
wcslwr(wchar_t *str)
{
    wchar_t *saved = str;

    while (*str)
    {
        *str = towlower(*str);
        str++;
    }

    return saved;
}

wchar_t *
_wcslwr(wchar_t *str)
{
    return wcslwr(str);
}

/*
 * uppercase all characters in str
 */

wchar_t *
wcsupr(wchar_t *str)
{
    wchar_t *saved = str;

    while (*str)
    {
        *str = towupper(*str);
        str++;
    }

    return saved;
}

wchar_t *
_wcsupr(wchar_t *str)
{
    return wcsupr(str);
}

int
wcsicmp(const wchar_t *s1, const wchar_t *s2)
{
    wchar_t c1, c2;
    while (1)
    {
        c1 = towlower(*s1++);
        c2 = towlower(*s2++);
        if (c1 < c2)
        {
            return -1;
        }
        if (c1 > c2)
        {
            return 1;
        }
        if (c1 == 0)
        {
            return 0;
        }
    }
}

int
_wcsicmp(const wchar_t *s1, const wchar_t *s2)
{
    return wcsicmp(s1, s2);
}

/*
 * case-insensitive compare of s1, s2, stopping after n characters
 */

int
wcsnicmp(const wchar_t *s1, const wchar_t *s2, size_t n)
{
    int     i;
    wchar_t c1, c2;
    for (i = 0; i < n; i++)
    {
        c1 = towlower(*s1++);
        c2 = towlower(*s2++);
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

int
_wcsnicmp(const wchar_t *s1, const wchar_t *s2, size_t n)
{
    return wcsnicmp(s1, s2, n);
}

/*
 * reverse order of characters in str
 */

wchar_t *
wcsrev(wchar_t *str)
{
    int SmallIndex = 0;
    int BigIndex = wcslen(str) - 1;

    while (SmallIndex < BigIndex)
    {
        wchar_t Temp = str[SmallIndex];

        str[SmallIndex] = str[BigIndex];
        str[BigIndex] = Temp;

        SmallIndex++;
        BigIndex--;
    }

    return str;
}

wchar_t *
_wcsrev(wchar_t *str)
{
    return wcsrev(str);
}

/*
 * set all characters of str to wc
 */

wchar_t *
wcsset(wchar_t *str, wchar_t wc)
{
    wchar_t *saved = str;

    while (*str)
    {
        *str++ = wc;
    }

    return saved;
}

wchar_t *
_wcsset(wchar_t *str, wchar_t wc)
{
    return wcsset(str, wc);
}

/*
 * set characters of str to wc, up to max of n characters
 */

wchar_t *
wcsnset(wchar_t *str, wchar_t wc, size_t n)
{
    wchar_t *saved = str;

    while (*str && n--)
    {
        *str = wc;
    }

    return saved;
}

wchar_t *
_wcsnset(wchar_t *str, wchar_t wc, size_t n)
{
    return wcsnset(str, wc, n);
}

/* return pointer to first character in s1 that isn't in s2 */

wchar_t *
wcsspnp(const wchar_t *s1, const wchar_t *s2)
{
    const wchar_t *set;
    while (*s1)
    {
        for (set = s2; *set; set++)
        {
            if (*s1 != *(set++))
            {
                return (wchar_t *)s1;
            }
        }

        s1++;
    }

    return NULL;
}

wchar_t *
_wcsspnp(const wchar_t *s1, const wchar_t *s2)
{
    return wcsspnp(s1, s2);
}

wchar_t *
wcsdup(const wchar_t *str)
{
    wchar_t *rval = (wchar_t *)__std(malloc)((__std(wcslen)(str) + 1) * sizeof(wchar_t));

    if (rval)
    {
        __std(wcscpy)(rval, str);
    }

    return rval;
}

wchar_t *
_wcsdup(const wchar_t *str)
{
    return wcsdup(str);
}

wchar_t *
wstrrev(wchar_t *str)
{
    int SmallIndex = 0;
    int BigIndex = wcslen(str) - 1;

    while (SmallIndex < BigIndex)
    {
        wchar_t Temp = str[SmallIndex];

        str[SmallIndex] = str[BigIndex];
        str[BigIndex] = Temp;

        SmallIndex++;
        BigIndex--;
    }

    return str;
}

wchar_t *
_wstrrev(wchar_t *str)
{
    return wstrrev(str);
}

wchar_t *
itow(int val, wchar_t *str, int radix)
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

    do
    {
        int CurDigit = theUNum % radix; /*- mm 000209 -*/
        if (CurDigit > 9)
        {
            str[StrIndex++] = CurDigit + L'A' - 10;
        }
        else
        {
            str[StrIndex++] = CurDigit + L'0';
        }

        theUNum /= radix;               /*- mm 000209 -*/
    } while (theUNum); /*- mm 000209 -*/
    if (IsNegative)
    {
        str[StrIndex++] = '-';
    }
    str[StrIndex++] = 0;

    /* Now reverse the string.*/
    _wstrrev(str);

    return str;
}

wchar_t *
_itow(int val, wchar_t *str, int radix)
{
    return itow(val, str, radix);
}

#endif

/* Change record:
 * cc  000510 made __myraise an inline in unix.h
 * cc  000511 moved common source from extras.win32.c
 * cc  000511 added <cwchar>, <cwctype>
 * as  000821 added guards for wide character support
 * mm  010116 Changes to make _strupr return pointer to beginning of string instead of end.  Josef's fix.
 * cc  010130 Changed _splitpath to support UNC pathnames
 * mm  010412 Avoided setting errno to negative value.
 * cc  010605 Made _itoa call __msl_itoa, _strrev call __msl_strrev, _itoa call __msl_itoa,and
 *			  _strnicmp call __msl_strnicmp
 * cc  010605 Added #include of file_io.h
 * cc  010713 Made all the functions _ and non_
 * cc  010714 Added strcmpi and strncmpi
 * cc  010715 Removed makepath & splitpath
 * cc  010725 Changed _strdup & strdup to call __msl_strdup
 */
