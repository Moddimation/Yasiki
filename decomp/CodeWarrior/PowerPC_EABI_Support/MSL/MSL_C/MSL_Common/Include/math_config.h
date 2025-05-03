/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 19:33:58 $
 * $Revision: 1.10 $
 */

#ifndef _MSL_MATH_CONFIG_H
#define _MSL_MATH_CONFIG_H

/********************************************************************************
 *	Project...:	Standard C99 math library/ ANSI/ISO C Standard Lib
 *  Author..... Matthew D. Fassiotto
 *	Purpose...:	this header is meant to include platform specific
 *              implementations of standard math functions according to
 *              the target architecture as set by the metrowerks compiler.
 *
 *   NOTE: This header gets included automatically by math.h.  It is not a
 *         standalone header meant to be included directly by any application.
 *         We do not support any source file including this header directly.
 *         This header depends on macros and other types defined in math.h
 *         which must be defined before this header is inlcuded.  Therefore
 *         you are guaranteed this will NOT compile when included directly.
 *
 ********************************************************************************/
#include <msl_t.h>

extern float _inv_sqrtf (float x); /* implementation in sqrtf.c */

#if __MIPS__
#include <math_mips.h>
#elif __m56800__
#include <m56800_math.h>
#elif __m56800E__
#include <m56700_math.h>
#elif __POWERPC__
#include <math_ppc.h>
#elif __INTEL__
#include <math_x87.h>
#if __option(k63d)
#include <AMD_K63DNow_math.h>
#endif
#endif

#endif                             /* _MSL_MATH_CONFIG_H */

                                   /* Change record:
                                    * mf  000619 moved amd architecture header from cmath to this one.
                                    */
