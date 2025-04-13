/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:37 $
 * $Revision: 1.17.4.1 $
 */
 
#ifndef _MSL_STRING_H
#define _MSL_STRING_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <cstring>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::size_t;
	using std::memchr;
	using std::memcmp;
	using std::memcpy;
	using std::memmove;
	using std::memset;
	using std::strcat;
	using std::strchr;
	using std::strcmp;
	using std::strcoll;
	using std::strcpy;
	using std::strcspn;
	using std::strerror;
	using std::strlen;
	using std::strncat;
	using std::strncmp;
	using std::strncpy;
	using std::strpbrk;
	using std::strrchr;
	using std::strspn;
	using std::strstr;
	using std::strtok;
	using std::strxfrm;
#endif

#endif /* __MACH__ */

#endif /* _MSL_STRING_H */

/* Change record:
 * hh  971206 Created.
 * hh  991112 Fixed using bug.
 * JWW 001208 Added case for targeting Mach-O
 */