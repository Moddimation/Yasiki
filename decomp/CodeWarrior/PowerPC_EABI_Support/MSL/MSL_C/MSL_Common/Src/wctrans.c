/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/04 20:39:08 $
 * $Revision: 1.17 $
 */

/*
 *	Routines
 *	--------
 *
 *	towctrans
 *	wctrans
 *
 */

#pragma ANSI_strict off             /*- vss 990729 -*/

#include <ansi_parms.h>

#ifndef __NO_WIDE_CHAR              /*- mm 980204 -*/

#pragma ANSI_strict reset

#include <string.h>                 /*- mm 990806 -*/
#include <wctrans.h>
#include <wctype.h>                 /*- mm 990806 -*/
static const struct wctable
{
    const char* string;
    wctype_t    value;
}

wtable[] = {
    {      "tolower", 0 },
    {      "toupper", 1 },
    { (const char*)0, 0 }
};
wint_t
towctrans (wint_t c, wctrans_t value)
{
    return (value == 1 ? towupper (c) : towlower (c));
}
wctrans_t
wctrans (const char* name)
{
    int i;

    for (i = 0; wtable[i].string != 0; ++i)
    {
        if (strcmp (wtable[i].string, name) == 0)
        {
            return (wtable[i].value);
        }
    }

    return 0;
}
#endif /* #ifndef __NO_WIDE_CHAR */ /*- mm 981030 -*/

/* Change record:
 * JCM 980126 JCM  First code release.
 * mm  981030 Added #ifndef __NO_WIDE_CHAR wrappers
 * mm  990809 Changed includes
 */
