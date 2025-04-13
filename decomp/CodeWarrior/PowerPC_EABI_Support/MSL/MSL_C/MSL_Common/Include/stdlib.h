/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:35 $
 * $Revision: 1.18.4.1 $
 */
 
#ifndef _MSL_STDLIB_H
#define _MSL_STDLIB_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <cstdlib>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::size_t;
	using std::abort;
	using std::atexit;
	using std::exit;
	using std::getenv;
	using std::system;
	using std::malloc;
	using std::calloc;
	using std::realloc;
	using std::free;
	using std::atol;
#ifndef _No_Floating_Point
	using std::atof;
	using std::strtod;
#endif
	using std::atoi;
	using std::mblen;
	using std::strtol;
	using std::strtoul;
#ifdef __MSL_LONGLONG_SUPPORT__
	using std::strtoll;
	using std::strtoull;
#endif
#ifndef __NO_WIDE_CHAR
	using std::mbstowcs;
	using std::mbtowc;
	using std::wctomb;
	using std::wcstombs;
#endif
	using std::bsearch;
	using std::qsort;
	using std::div_t;
	using std::ldiv_t;
	using std::abs;
	using std::div;
	using std::labs;
#ifdef __MSL_LONGLONG_SUPPORT__
	using std::llabs;
	using std::lldiv_t;
	using std::lldiv;
#endif
	using std::ldiv;
	using std::srand;
	using std::rand;
#if __VEC__
	using std::vec_calloc;
	using std::vec_free;
	using std::vec_malloc;
	using std::vec_realloc;
#endif
#endif

#endif /* __MACH__ */

#endif /* _MSL_STDLIB_H */

/* Change record:
 * hh  971206 Created.
 * hh  991112 Fixed using bug
 * JWW 001208 Added case for targeting Mach-O
 */