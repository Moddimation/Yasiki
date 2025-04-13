/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:30 $
 * $Revision: 1.20 $
 */

#ifndef _MSL_WSCANF_H 
#define _MSL_WSCANF_H

#include <ansi_parms.h>
#include <file_struc.h>		/*- mm 990806 -*/
#include <va_list.h>		/*- mm 990806 -*/

_MSL_BEGIN_NAMESPACE_STD	/*- cc 010409 -*/
_MSL_BEGIN_EXTERN_C			/*- cc 010409 -*/

	_MSL_IMP_EXP_C int 	fwscanf(FILE *  , const wchar_t * , ...);  				/*- mf 990715 -*/
	_MSL_IMP_EXP_C int 	wscanf(const wchar_t * , ...);
	_MSL_IMP_EXP_C int 	swscanf(const wchar_t * , const wchar_t * , ...);
	_MSL_IMP_EXP_C int 	vswscanf(const wchar_t * , const wchar_t * , va_list );	/*- mm 990921 -*/
	_MSL_IMP_EXP_C int 	vfwscanf(FILE *  , const wchar_t * , va_list ); 		/*- mf 990715 -*/ /*- mm 990921 -*/
	_MSL_IMP_EXP_C int 	vwscanf(const wchar_t * , va_list );

_MSL_END_EXTERN_C			/*- cc 010409 -*/
_MSL_END_NAMESPACE_STD		/*- cc 010409 -*/

#endif /* ifndef _MSL_WSCANF_H */

/* Change record:
 * JCM 980121 First code release.
 * mf  990715 Remove arg names in prorotypes
 * mm  990806 Replaced include <cstdio> by <file_struc.h> and <va_list.h>
 * mm  990921 Changed __vswscanf and __vfwscanf to vswscanf and vfwscanf now that they are in C9x
 * cc  010405 removed pragma options align native and reset
 * cc  010409 updated defines to JWW new namespace macros 		  
 */
 