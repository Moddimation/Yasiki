/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:42:36 $
 * $Revision: 1.16.4.1 $
 */
 
#ifndef _MSL_CTYPE_H
#define _MSL_CTYPE_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <cctype>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::isalnum;
	using std::isalpha;
	using std::iscntrl;
	using std::isdigit;
	using std::isgraph;
	using std::islower;
	using std::isprint;
	using std::ispunct;
	using std::isspace;
	using std::isupper;
	using std::iswblank;
	using std::isxdigit;
	using std::tolower;
	using std::toupper;
#endif

#endif /* __MACH__ */

#endif /* _MSL_CTYPE_H */

/* Change record:
 * hh  971206 Created.
 * hh  991112 Fixed using bug.
 * JWW 001208 Added case for targeting Mach-O
 */