/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/30 20:15:25 $
 * $Revision: 1.16 $
 */
 
/*
 *	Routines
 *	--------
 *		wmemcpy
 *		wmemmove
 *		wmemset
 *		wmemchr
 *		wmemcmp
 *	
 *
 */

#pragma ANSI_strict off  			/*- vss 990729 -*/
 
#include <ansi_parms.h> 
  
#ifndef __NO_WIDE_CHAR				/*- mm 980204 -*/

#pragma ANSI_strict reset

#include <string.h>
#include <wchar.h>

wchar_t * (wmemcpy)(wchar_t * dst, const wchar_t * src, size_t n)
{
	return memcpy(dst, src, n * 2);
}
	
wchar_t * (wmemmove)(wchar_t * dst, const wchar_t * src, size_t n)
{
	return memmove(dst, src, n * 2);
}

wchar_t * (wmemset)(wchar_t * dst, wchar_t val, size_t n)
{
	wchar_t *save = dst;
	
	while (n)
	{
		*dst++ = val;
		n--;
	}
	
	return(save);													/*- mm 990712 -*/
}

wchar_t * (wmemchr)(const wchar_t * src, wchar_t val, size_t n)
{
	while (n)
	{
		if (*src == val) return (wchar_t *) src;
		src++;
		n--;
	}
	
	return(NULL);
}

int (wmemcmp)(const wchar_t * src1, const wchar_t * src2, size_t n)	/*- mm 990629 -*/
{
	int diff = 0;													/*- mm 990629 -*/

	while (n)
	{
		diff = *src1 - *src2;
		if (diff) break;
		src1++;
		src2++;
		n--;
	}

	return(diff);
}

#endif /* #ifndef __NO_WIDE_CHAR */									/*- mm 981030 -*/

/* Change record:
 * jcm 980126 First code release.
 * mm  980909 Corrected prototypes to refer to wchar_t* instead of void*
 * mm  981030 Added #ifndef __NO_WIDE_CHAR wrappers
 * mm  981111 Corrected wmemchr() and wmemcmp() to return a meaningful result 
 *			  and wmemset to work correctly---IL9811-0490	
 * blc 990112 Fixed all the implementation so they actually worked
 * mm  990629 Corrected the signature and working of wmemcmp
 * mm  990712 Fixed wmemset to return correct value
 */
