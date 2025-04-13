/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:11 $
 * $Revision: 1.18.4.1 $
 */

#ifndef _MSL_MATH_H
#define _MSL_MATH_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <cmath>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	#ifndef _No_Floating_Point

		/* Original 22 */

	#if !(__dest_os==__mac_os  && defined(__FP__))
		using std::acos;
		using std::asin;
		using std::atan;
		using std::atan2;
		using std::cos;
		using std::sin;
		using std::tan;
		using std::cosh;
		using std::sinh;
		using std::tanh;
		using std::exp;
		using std::frexp;
		using std::ldexp;
		using std::log;
		using std::log10;
		using std::modf;
		using std::pow;
		using std::sqrt;
		using std::ceil;
		using std::floor;
		using std::fmod;
	#endif  /* !(__dest_os==__mac_os  && defined(__FP__)) */
	#if !(__dest_os==__mac_os  && defined(__FP__) && defined(__MC68K__))
		using std::fabs;
	#endif

		/* C 99 */

	#if !(__dest_os==__mac_os  && defined(__FP__))
		using std::acosh;
		using std::asinh;
		using std::atanh;
		using std::exp2;
		using std::expm1;
		using std::log1p;
		using std::log2;
		using std::logb;
		using std::hypot;
	#ifndef __INTEL__
		using std::erf;
		using std::erfc;
		using std::lgamma;
	#endif
		using std::nearbyint;
		using std::rint;
		using std::round;
		using std::trunc;
		using std::remainder;
		using std::remquo;
		using std::copysign;
		using std::nan;
		using std::fdim;
		using std::fmax;
		using std::fmin;
	#endif  /* !(__dest_os==__mac_os  && defined(__FP__)) */
	#if !(__dest_os==__mac_os  && defined(__FP__) && defined(__MC68K__))
		using std::scalbn;
		using std::scalbln;
	#endif
		using std::lrint;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llrint;
	#endif
		using std::lround;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llround;
	#endif
	#if !(__dest_os==__mac_os  && defined(__FP__) && defined(__MC68K__))
	#ifndef __INTEL__
		using std::nextafter;
	#endif
	#endif
	#if 0
		using std::ilogb;
		using std::cbrt;
		using std::tgamma;
		using std::nexttoward;
		using std::fma;
	#endif

		/* foof Original 22 */

		using std::acosf;
		using std::asinf;
		using std::atanf;
		using std::atan2f;
		using std::cosf;
		using std::sinf;
		using std::tanf;
		using std::coshf;
		using std::sinhf;
		using std::tanhf;
		using std::expf;
		using std::frexpf;
		using std::ldexpf;
		using std::logf;
		using std::log10f;
	#if !(__dest_os==__mac_os  && defined(__FP__))
		using std::modff;
	#endif
		using std::fabsf;
		using std::powf;
		using std::sqrtf;
		using std::ceilf;
		using std::floorf;
		using std::fmodf;

		/* foof C 99 */

		using std::acoshf;
		using std::asinhf;
		using std::atanhf;
		using std::exp2f;
		using std::expm1f;
	#if 0
		using std::ilogbf;
	#endif
		using std::log1pf;
		using std::log2f;
		using std::logbf;
		using std::scalbnf;
		using std::scalblnf;
	#if 0
		using std::cbrtf;
	#endif
		using std::hypotf;
	#ifndef __INTEL__
		using std::erff;
		using std::erfcf;
		using std::lgammaf;
	#endif
	#if 0
		using std::tgammaf;
	#endif
		using std::nearbyintf;
		using std::rintf;
		using std::lrintf;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llrintf;
	#endif
		using std::roundf;
		using std::lroundf;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llroundf;
	#endif
		using std::truncf;
		using std::remainderf;
		using std::remquof;
		using std::copysignf;
	#if 0
		using std::nanf;
	#endif
	#ifndef __INTEL__
		using std::nextafterf;
	#endif
	#if 0
		using std::nexttowardf;
	#endif
		using std::fdimf;
		using std::fmaxf;
		using std::fminf;
	#if 0
		using std::fmaf;
	#endif

		/* fool Original 22 */

		using std::acosl;
		using std::asinl;
		using std::atanl;
		using std::atan2l;
		using std::cosl;
		using std::sinl;
		using std::tanl;
		using std::coshl;
		using std::sinhl;
		using std::tanhl;
		using std::expl;
		using std::frexpl;
		using std::ldexpl;
		using std::logl;
		using std::log10l;
		using std::modfl;
		using std::fabsl;
		using std::powl;
		using std::sqrtl;
		using std::ceill;
		using std::floorl;
		using std::fmodl;

		/* fool C 99 */

		using std::acoshl;
		using std::asinhl;
		using std::atanhl;
		using std::exp2l;
		using std::expm1l;
	#if 0
		using std::ilogbl;
	#endif
		using std::log1pl;
		using std::log2l;
		using std::logbl;
		using std::scalbnl;
		using std::scalblnl;
	#if 0
		using std::cbrtl;
	#endif
		using std::hypotl;
	#ifndef __INTEL__
		using std::erfl;
		using std::erfcl;
		using std::lgammal;
	#endif
	#if 0
		using std::tgammal;
	#endif
		using std::nearbyintl;
		using std::rintl;
		using std::lrintl;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llrintl;
	#endif
		using std::roundl;
		using std::lroundl;
	#ifdef __MSL_LONGLONG_SUPPORT__
		using std::llroundl;
	#endif
		using std::truncl;
		using std::remainderl;
		using std::remquol;
		using std::copysignl;
	#if 0
		using std::nanl;
	#endif
	#if !(__dest_os==__mac_os  && defined(__FP__) && defined(__MC68K__))
	#ifndef __INTEL__
		using std::nextafterl;
	#endif
	#endif
	#if 0
		using std::nexttowardl;
	#endif
		using std::fdiml;
		using std::fmaxl;
		using std::fminl;
	#if 0
		using std::fmal;
	#endif
	#endif
	#endif

#endif /* __MACH__ */

#endif /* _MSL_MATH_H */

/* Change record: 
 * hh  971206 Created.
 * hh  991112 Fixed using bug.
 * hh  000804 Protected againt <fp.h> being included first (on Mac)
 * hh  000925 Fixed up <fp.h> protection on 68K
 * JWW 001208 Added case for targeting Mach-O
 */