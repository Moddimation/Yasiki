/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:09 $
 * $Revision: 1.17.4.1 $
 */
 
#ifndef _MSL_LOCALE_H
#define _MSL_LOCALE_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <clocale>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::lconv;
	using std::localeconv;
	using std::setlocale;
#endif

#endif /* __MACH__ */

#endif /* _MSL_LOCALE_H */

/* Change record: 
 * hh  971206 Created.
 * hh  991112 Fixed using bug.
 * JWW 001208 Added case for targeting Mach-O
 */