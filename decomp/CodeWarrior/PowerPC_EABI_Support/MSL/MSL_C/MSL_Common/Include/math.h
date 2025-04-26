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

#if !(__dest_os == __mac_os && defined(__FP__))
using std::acos;
using std::asin;
using std::atan;
using std::atan2;
using std::ceil;
using std::cos;
using std::cosh;
using std::exp;
using std::floor;
using std::fmod;
using std::frexp;
using std::ldexp;
using std::log;
using std::log10;
using std::modf;
using std::pow;
using std::sin;
using std::sinh;
using std::sqrt;
using std::tan;
using std::tanh;
#endif /* !(__dest_os==__mac_os  && defined(__FP__)) */
#if !(__dest_os == __mac_os && defined(__FP__) && defined(__MC68K__))
using std::fabs;
#endif

/* C 99 */

#if !(__dest_os == __mac_os && defined(__FP__))
using std::acosh;
using std::asinh;
using std::atanh;
using std::exp2;
using std::expm1;
using std::hypot;
using std::log1p;
using std::log2;
using std::logb;
#ifndef __INTEL__
using std::erf;
using std::erfc;
using std::lgamma;
#endif
using std::copysign;
using std::fdim;
using std::fmax;
using std::fmin;
using std::nan;
using std::nearbyint;
using std::remainder;
using std::remquo;
using std::rint;
using std::round;
using std::trunc;
#endif /* !(__dest_os==__mac_os  && defined(__FP__)) */
#if !(__dest_os == __mac_os && defined(__FP__) && defined(__MC68K__))
using std::scalbln;
using std::scalbn;
#endif
using std::lrint;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llrint;
#endif
using std::lround;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llround;
#endif
#if !(__dest_os == __mac_os && defined(__FP__) && defined(__MC68K__))
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
using std::atan2f;
using std::atanf;
using std::cosf;
using std::coshf;
using std::expf;
using std::frexpf;
using std::ldexpf;
using std::log10f;
using std::logf;
using std::sinf;
using std::sinhf;
using std::tanf;
using std::tanhf;
#if !(__dest_os == __mac_os && defined(__FP__))
using std::modff;
#endif
using std::ceilf;
using std::fabsf;
using std::floorf;
using std::fmodf;
using std::powf;
using std::sqrtf;

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
using std::scalblnf;
using std::scalbnf;
#if 0
		using std::cbrtf;
#endif
using std::hypotf;
#ifndef __INTEL__
using std::erfcf;
using std::erff;
using std::lgammaf;
#endif
#if 0
		using std::tgammaf;
#endif
using std::lrintf;
using std::nearbyintf;
using std::rintf;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llrintf;
#endif
using std::lroundf;
using std::roundf;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llroundf;
#endif
using std::copysignf;
using std::remainderf;
using std::remquof;
using std::truncf;
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
using std::atan2l;
using std::atanl;
using std::ceill;
using std::coshl;
using std::cosl;
using std::expl;
using std::fabsl;
using std::floorl;
using std::fmodl;
using std::frexpl;
using std::ldexpl;
using std::log10l;
using std::logl;
using std::modfl;
using std::powl;
using std::sinhl;
using std::sinl;
using std::sqrtl;
using std::tanhl;
using std::tanl;

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
using std::scalblnl;
using std::scalbnl;
#if 0
		using std::cbrtl;
#endif
using std::hypotl;
#ifndef __INTEL__
using std::erfcl;
using std::erfl;
using std::lgammal;
#endif
#if 0
		using std::tgammal;
#endif
using std::lrintl;
using std::nearbyintl;
using std::rintl;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llrintl;
#endif
using std::lroundl;
using std::roundl;
#ifdef __MSL_LONGLONG_SUPPORT__
using std::llroundl;
#endif
using std::copysignl;
using std::remainderl;
using std::remquol;
using std::truncl;
#if 0
		using std::nanl;
#endif
#if !(__dest_os == __mac_os && defined(__FP__) && defined(__MC68K__))
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
