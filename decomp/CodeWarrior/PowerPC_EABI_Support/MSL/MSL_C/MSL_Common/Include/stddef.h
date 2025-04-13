/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:27 $
 * $Revision: 1.16.4.1 $
 */
 
#ifndef _MSL_STDDEF_H
#define _MSL_STDDEF_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <cstddef>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::ptrdiff_t;
	using std::size_t;
#endif

#endif /* __MACH__ */

#endif /* _MSL_STDDEF_H */

/* Change record:
 * hh  971206 Created.
 * hh  990928 fixed "using bug"
 * JWW 001208 Added case for targeting Mach-O
 */