/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:17 $
 * $Revision: 1.17.4.1 $
 */

/*
 *	Content:		Interface to setjmp/longjmp ANSI functions ...
 */

#ifndef _MSL_SETJMP_H
#define _MSL_SETJMP_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <csetjmp>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
	using std::jmp_buf;
	using std::longjmp;
#endif

#endif /* __MACH__ */

#endif /* _MSL_SETJMP_H */


/* Change record:
 * hh  971206 Created.
 * JWW 001208 Added case for targeting Mach-O
 */