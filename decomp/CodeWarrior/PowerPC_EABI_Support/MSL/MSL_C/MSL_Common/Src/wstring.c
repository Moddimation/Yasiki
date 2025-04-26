/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/22 15:45:55 $
 * $Revision: 1.21 $
 */

/*
 *	Routines
 *	--------
 *		wcslen
 *
 *		wcscpy
 *		wcscat
 *		wcscmp
 *
 *		wcsncpy
 *		wcsncat
 *		wcsncmp
 *
 *		wcscoll
 *		wcsxfrm
 *
 *		wcschr
 *		wcsrchr
 *		wcsstr
 *
 *		wcsspn
 *		wcscspn
 *		wcspbrk
 *
 *
 */

#pragma ANSI_strict off /*- vss 990729 -*/

#include <ansi_parms.h>

#ifndef __NO_WIDE_CHAR  /*- mm 980204 -*/

#pragma ANSI_strict reset

#include <errno.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

#pragma warn_possunwant off
/*
    This routine returns the length of the wide character string str

*/
size_t(wcslen)(const wchar_t* str)
{
    size_t len = -1;

#if !__POWERPC__

    do {
        len++;
    }
    while (*str++);

#else

    wchar_t* p = (wchar_t*)str - 1;

    do {
        len++;
    }
    while (*++p);

#endif

    return (len);
}
wchar_t*(wcscpy)(wchar_t* dst, const wchar_t* src)
{
#if !__POWERPC__

    const wchar_t* p = src;
    wchar_t*       q = dst;

    while (*q++ = *p++);

#else

    const wchar_t* p = (wchar_t*)src - 1;
    wchar_t*       q = (wchar_t*)dst - 1;

    while (*++q = *++p);

#endif

    return (dst);
}
wchar_t*
wcsncpy(wchar_t* dst, const wchar_t* src, size_t n)
{
#if !__POWERPC__

    const wchar_t* p = src;
    wchar_t*       q = dst;

    n++;

    while (--n)
    {
        if (!(*q++ = *p++))
        {
            while (--n)
            {
                *q++ = 0;
            }
            break;
        }
    }

#else

    const wchar_t* p = (const wchar_t*)src - 1;
    wchar_t*       q = (wchar_t*)dst - 1;
    wchar_t        zero = 0;

    n++;

    while (--n)
    {
        if (!(*++q = *++p))
        {
            while (--n)
            {
                *++q = 0;
            }
            break;
        }
    }

#endif

    return (dst);
}
wchar_t*
wcscat(wchar_t* dst, const wchar_t* src)
{
#if !__POWERPC__

    const wchar_t* p = src;
    wchar_t*       q = dst;

    while (*q++);

    q--;

    while (*q++ = *p++);

#else

    const wchar_t* p = (wchar_t*)src - 1;
    wchar_t*       q = (wchar_t*)dst - 1;

    while (*++q);

    q--;

    while (*++q = *++p);

#endif

    return (dst);
}
wchar_t*
wcsncat(wchar_t* dst, const wchar_t* src, size_t n)
{
#if !__POWERPC__

    const wchar_t* p = src;
    wchar_t*       q = dst;

    while (*q++);

    q--;
    n++;

    while (--n)
    {
        if (!(*q++ = *p++))
        {
            q--;
            break;
        }
    }

    *q = 0;

#else

    const wchar_t* p = (wchar_t*)src - 1;
    wchar_t*       q = (wchar_t*)dst - 1;

    while (*++q);

    q--;
    n++;

    while (--n)
    {
        if (!(*++q = *++p))
        {
            q--;
            break;
        }
    }

    *++q = 0;

#endif

    return (dst);
}
int
wcscmp(const wchar_t* str1, const wchar_t* str2)
{
#if !__POWERPC__

    const wchar_t* p1 = (wchar_t*)str1;
    const wchar_t* p2 = (wchar_t*)str2;
    wchar_t        c1, c2;

    while ((c1 = *p1++) == (c2 = *p2++))
    {
        if (!c1)
        {
            return (0);
        }
    }

#else

    const wchar_t* p1 = (wchar_t*)str1 - 1;
    const wchar_t* p2 = (wchar_t*)str2 - 1;
    wchar_t        c1, c2;

    while ((c1 = *++p1) == (c2 = *++p2))
    {
        if (!c1)
        {
            return (0);
        }
    }

#endif

    return (c1 - c2);
}
int
wcsncmp(const wchar_t* str1, const wchar_t* str2, size_t n)
{
#if !__POWERPC__

    const wchar_t* p1 = (wchar_t*)str1;
    const wchar_t* p2 = (wchar_t*)str2;
    wchar_t        c1, c2;

    n++;

    while (--n)
    {
        if ((c1 = *p1++) != (c2 = *p2++))
        {
            return (c1 - c2);
        }
        else if (!c1)
        {
            break;
        }
    }

#else

    const wchar_t* p1 = (wchar_t*)str1 - 1;
    const wchar_t* p2 = (wchar_t*)str2 - 1;
    wchar_t        c1, c2;

    n++;

    while (--n)
    {
        if ((c1 = *++p1) != (c2 = *++p2))
        {
            return (c1 - c2);
        }
        else if (!c1)
        {
            break;
        }
    }

#endif

    return (0);
}
wchar_t*
wcschr(const wchar_t* str, const wchar_t chr)
{
#if !__POWERPC__

    const wchar_t* p = str;
    wchar_t        c = chr;
    wchar_t        ch;

    while (ch = *p++)
    {
        if (ch == c)
        {
            return ((wchar_t*)(p - 1));
        }
    }

    return (c ? 0 : (wchar_t*)(p - 1));

#else

    const wchar_t* p = (wchar_t*)str - 1;
    wchar_t        c = (chr & 0xffff); /*- mm 970327 -*/
    wchar_t        ch;

    while (ch = (*++p & 0xffff))       /*- mm 970327 -*/
    {
        if (ch == c)
        {
            return ((wchar_t*)p);
        }
    }

    return (c ? 0 : (wchar_t*)p);

#endif
}
int
wcscoll(const wchar_t* str1, const wchar_t* str2)
{
    return (wcscmp(str1, str2));
}
size_t
wcsxfrm(wchar_t* str1, const wchar_t* str2, size_t n)
{
    size_t len = wcslen(str2);      /*- mm 990630 -*/
    if (n > 0)                      /*- mm 990630 -*/
    {                               /*- mm 990630 -*/
        wcsncpy(str1, str2, n - 1); /*- mm 990630 -*/
        if (n < len)                /*- mm 990630 -*/
        {
            str1[n - 1] = L'\0';    /*- mm 990630 -*/
        }
    } /*- mm 990630 -*/
    return (len);
}
wchar_t*
wcsrchr(const wchar_t* str, wchar_t chr)
{
#if !__POWERPC__

    const wchar_t* p = str;
    const wchar_t* q = 0;
    wchar_t        c = chr;
    wchar_t        ch;

    while (ch = *p++)
    {
        if (ch == c)
        {
            q = p - 1;
        }
    }

    if (q)
    {
        return ((wchar_t*)q);
    }

    return (c ? 0 : (wchar_t*)(p - 1));

#else

    const wchar_t* p = (wchar_t*)str - 1;
    const wchar_t* q = 0;
    wchar_t        c = (chr & 0xff);   /*- bb 970530 -*/
    wchar_t        ch;

    while (ch = (*++p & 0xff))         /*- bb 970530 -*/
    {
        if (ch == c)
        {
            q = p;
        }
    }

    if (q)
    {
        return ((wchar_t*)q);
    }

    return (c ? 0 : (wchar_t*)p);

#endif
}
typedef char char_map[8192];                                /*- mm 990914 -*/
#define set_char_map(map, ch) map[ch >> 3] |= (1 << (ch & 7))
#define tst_char_map(map, ch) (map[ch >> 3] & (1 << (ch & 7)))
wchar_t*
wcspbrk(const wchar_t* str, const wchar_t* set)
{
    const wchar_t* p;
    wchar_t        c;
    char_map       map;                                     /*- mm 000419 -*/
    memset(&map, 0, sizeof(char_map)); /* initialize map */ /*- mm 000419 -*/

#if !__POWERPC__

    p = (wchar_t*)set;

    while (c = *p++)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str;

    while (c = *p++)
    {
        if (tst_char_map(map, c))
        {
            return ((wchar_t*)(p - 1));
        }
    }

    return (NULL);

#else

    p = (wchar_t*)set - 1;

    while (c = *++p)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str - 1;

    while (c = *++p)
    {
        if (tst_char_map(map, c))
        {
            return ((wchar_t*)p);
        }
    }

    return (NULL);

#endif
}
size_t
wcsspn(const wchar_t* str, const wchar_t* set)
{
    const wchar_t* p;
    wchar_t        c;
    char_map       map;                                     /*- mm 000419 -*/
    memset(&map, 0, sizeof(char_map)); /* initialize map */ /*- mm 000419 -*/

#if !__POWERPC__

    p = (wchar_t*)set;

    while (c = *p++)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str;

    while (c = *p++)
    {
        if (!tst_char_map(map, c))
        {
            break;
        }
    }

    return (p - (wchar_t*)str - 1);

#else

    p = (wchar_t*)set - 1;

    while (c = *++p)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str - 1;

    while (c = *++p)
    {
        if (!tst_char_map(map, c))
        {
            break;
        }
    }

    return (p - (wchar_t*)str);

#endif
}
size_t
wcscspn(const wchar_t* str, const wchar_t* set)
{
    const wchar_t* p;
    wchar_t        c;
    char_map       map;                                     /*- mm 000419 -*/
    memset(&map, 0, sizeof(char_map)); /* initialize map */ /*- mm 000419 -*/

#if !__POWERPC__

    p = (wchar_t*)set;

    while (c = *p++)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str;

    while (c = *p++)
    {
        if (tst_char_map(map, c))
        {
            break;
        }
    }

    return (p - (wchar_t*)str - 1);

#else

    p = (wchar_t*)set - 1;

    while (c = *++p)
    {
        set_char_map(map, c);
    }

    p = (wchar_t*)str - 1;

    while (c = *++p)
    {
        if (tst_char_map(map, c))
        {
            break;
        }
    }

    return (p - (wchar_t*)str);

#endif
}
/* Code deleted here mm 010316  The version of wcstok for Windows made use of the
   thread-local data belonging to strtok, which breaks the requirement that strtok
   behave as if no other library function calls it.  Further, the Standards committe
   learnt from its experience with strtok that requiring a state that the library had
   to look after was a bad thing and so they gave wcstok an extra parameter so that
   thread-local storage is no longer needed for it.                         */

wchar_t*
wcstok(wchar_t* str, const wchar_t* set, wchar_t** ptr)     /*- mm 000422 -*/
{
    wchar_t *             p, *q;
    __tls static wchar_t* n = (wchar_t*)L"";
    __tls static wchar_t* s = (wchar_t*)L"";
    wchar_t               c;
    char_map              map;                              /*- mm 000419 -*/
    memset(&map, 0, sizeof(char_map)); /* initialize map */ /*- mm 000419 -*/

    if (str)
    {
        s = (wchar_t*)str;
    }
    else if (*ptr)                                          /*- mm 000422 -*/
    {
        s = (wchar_t*)*ptr;                                 /*- mm 000422 -*/
    }
    else                                                    /*- mm 000422 -*/
    {
        return (NULL);                                      /*- mm 000422 -*/
    }

#if !__POWERPC__

    p = (wchar_t*)set;

    while (c = *p++)
    {
        set_char_map(map, c);
    }

    p = s;

    while (c = *p++)
    {
        if (!tst_char_map(map, c))
        {
            break;
        }
    }

    if (!c)
    {
        s = n;
        *ptr = NULL;                                        /*- mm 000422 -*/
        return (NULL);
    }

    q = p - 1;

    while (c = *p++)
    {
        if (tst_char_map(map, c))
        {
            break;
        }
    }

    if (!c)
    {
        s = n;
    }
    else
    {
        s = p;
        *--p = 0;
    }

    if (q == NULL)                                          /*- mm 000422 -*/
    {
        *ptr = NULL;                                        /*- mm 000422 -*/
    }
    else                                                    /*- mm 000422 -*/
    {
        *ptr = s;                                           /*- mm 000422 -*/
    }
    return ((wchar_t*)q);

#else                                                       /* __POWERPC__ */

    p = (wchar_t*)set - 1;

    while (c = *++p)
    {
        set_char_map(map, c);
    }

    p = s - 1;

    while (c = *++p)
    {
        if (!tst_char_map(map, c))
        {
            break;
        }
    }

    if (!c)
    {
        s = n;
        *ptr = NULL;                   /*- mm 000422 -*/
        return (NULL);
    }

    q = p;

    while (c = *++p)
    {
        if (tst_char_map(map, c))
        {
            break;
        }
    }

    if (!c)
    {
        s = n;
    }
    else
    {
        s = p + 1;
        *p = L'\0';
    }

    if (q == NULL)                     /*- mm 000422 -*/
    {
        *ptr = NULL;                   /*- mm 000422 -*/
    }
    else                               /*- mm 000422 -*/
    {
        *ptr = s;                      /*- mm 000422 -*/
    }
    return ((wchar_t*)q);

#endif                                                      /* __POWERPC__ */
}
wchar_t*
wcsstr(const wchar_t* str, const wchar_t* pat)
{
#if !__POWERPC__

    wchar_t* s1 = (wchar_t*)str;
    wchar_t* p1 = (wchar_t*)pat;
    wchar_t  firstc, c1, c2;

    if (!(firstc = *p1++))          /* if pat is an empty string we return str */
    {
        return ((wchar_t*)str);
    }

    while (c1 = *s1++)
    {
        if (c1 == firstc)
        {
            const wchar_t* s2 = s1;
            const wchar_t* p2 = p1;

            while ((c1 = *s2++) == (c2 = *p2++) && c1);

            if (!c2)
            {
                return ((wchar_t*)s1 - 1);
            }
        }
    }

    return (NULL);

#else

    wchar_t* s1 = (wchar_t*)str - 1;
    wchar_t* p1 = (wchar_t*)pat - 1;
    wchar_t  firstc, c1, c2;

    if (!(firstc = *++p1))             /* if pat is an empty string we return str */
    {
        return ((wchar_t*)str);
    }

    while (c1 = *++s1)
    {
        if (c1 == firstc)
        {
            const wchar_t* s2 = s1 - 1;
            const wchar_t* p2 = p1 - 1;

            while ((c1 = *++s2) == (c2 = *++p2) && c1);

            if (!c2)
            {
                return ((wchar_t*)s1);
            }
        }
    }

    return (NULL);

#endif
}
#pragma warn_possunwant reset

#endif /* #ifndef __NO_WIDE_CHAR */ /*- mm 981030 -*/

/* Change record:
 * JCM 980121 First code release.
 * mf  980318 the header file string.win32.h does not implement
              wide versions of the string functions so these
              were not defined at all
 * mf  980512 wince changes
 * mm  981030 Added #ifndef __NO_WIDE_CHAR wrappers
 * mm  990630 Corrected wcsxfrm
 * mm  990914 Corrected size of char_map to allow for full wchar character set
 IR9909-0523
 * mm  000419 Initialized char_map objects without using a static object---thanks to
 Andreas
 * mm  000422 Make wcstok work according to C99
 * mm  000505 Correction to mm000422 for Windows
 * mm  010316 Deleted the Windows version of wcstok---see note in source.
 * mm  010521 Deleted #include of ThreadLocalData.h
*/
