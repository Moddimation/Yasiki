/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/31 15:56:02 $
 * $Revision: 1.16 $
 */

/*
 *	Routines
 *	--------
 *		setlocale
 *		localeconv
 */

#include <locale.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>
#include "lconv.h"
#if (_MWMT && (__dest_os == __win32_os  || __dest_os == __wince_os))/*- mm 010521 -*/
	#include <ThreadLocalData.h>									/*- mm 010503 -*/
#endif																/*- mm 010503 -*/

/* begin revision to match with C99 */     /*- mm 010507 -*/
struct lconv  __lconv = 
{
	"."			 /* decimal_point		*/,
	""			 /* thousands_sep		*/,
	""			 /* grouping			*/,
	""			 /* mon_decimal_point	*/,
	""			 /* mon_thousands_sep	*/,
	""			 /* mon_grouping		*/,
	""			 /* positive_sign		*/,
	""			 /* negative_sign		*/,
	""			 /* currency_symbol		*/,
	CHAR_MAX	 /* frac_digits			*/,
	CHAR_MAX	 /* p_cs_precedes		*/,
	CHAR_MAX	 /* n_cs_precedes		*/,
	CHAR_MAX	 /* p_sep_by_space		*/,
	CHAR_MAX	 /* n_sep_by_space		*/,
	CHAR_MAX	 /* p_sign_posn			*/,
	CHAR_MAX	 /* n_sign_posn			*/,
	""			 /* int_curr_symbol		*/,
	CHAR_MAX	 /* int_frac_digits		*/,
	CHAR_MAX 	 /* int_p_cs_precedes	*/, 
	CHAR_MAX 	 /* int_n_cs_precedes	*/,
	CHAR_MAX 	 /* int_p_sep_by_space	*/,
	CHAR_MAX 	 /* int_n_sep_by_space	*/, 
	CHAR_MAX 	 /* int_p_sign_posn		*/,
	CHAR_MAX 	 /* int_n_sign_posn		*/,
};
/* end revision to match with C99 */     /*- mm 010507 -*/

#if !(_MWMT && (__dest_os == __win32_os  || __dest_os == __wince_os))/*- mm 010521 -*/
	__tls static struct lconv public_lconv;							/*- mm 010503 -*/
	__tls static char * locale_name = "C";							/*- mm 010503 -*/
#endif																/*- mm 010503 -*/

char * setlocale(int category, const char * locale)
{
	if (!locale || !strcmp(locale, "C") || !strcmp(locale, ""))
		if (category >= LC_FIRST && category <= LC_LAST)
#if (_MWMT && (__dest_os == __win32_os  || __dest_os == __wince_os))/*- mm 010521 -*/
			return(_GetThreadLocalData(_MSL_TRUE)->locale_name);	/*- mm 010503 -*/	/*- cc 010531 -*/
#else																/*- mm 010503 -*/
			return (locale_name);									/*- mm 010503 -*/
#endif																/*- mm 010503 -*/
	
	return(NULL);
}

struct lconv * localeconv(void)
{
#if (_MWMT && (__dest_os == __win32_os  || __dest_os == __wince_os))/*- mm 010521 -*/
	_GetThreadLocalData(_MSL_TRUE)->tls_lconv = &__lconv;			/*- mm 010503 -*/	/*- cc 010531 -*/
	return(_GetThreadLocalData(_MSL_TRUE)->tls_lconv);				/*- mm 010503 -*/	/*- cc 010531 -*/
#else																/*- mm 010503 -*/
	public_lconv = __lconv;											/*- mm 010503 -*/
	return(&public_lconv);											/*- mm 010503 -*/
#endif																/*- mm 010503 -*/
}

/* Change record:
 * JFH 950612 First code release.
 * mm  010503 Code for thread local data in localeconv.
 * mm  010507 Reorganized the structure lconv to match C99
 * mm  010521 Added _MWMT wrappers	
 * cc  010531 Added _GetThreadLocalData's flag	  
 */
