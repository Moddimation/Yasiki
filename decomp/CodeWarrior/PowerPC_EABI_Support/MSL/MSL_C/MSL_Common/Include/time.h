/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:41 $
 * $Revision: 1.17.4.1 $
 */

#ifndef _MSL_TIME_H
#define _MSL_TIME_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <ctime>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)	
	using std::size_t;
	
	using std::clock_t;
	using std::time_t;
	using std::tm;
	
	#ifndef _No_Time_OS_Support
		using std::clock;
	#endif
	
	#ifndef _No_Floating_Point
		using std::difftime;
	#endif
	
	using std::asctime;
	using std::ctime;
	using std::gmtime;
	using std::localtime;
	using std::mktime;
	using std::strftime;
	using std::time;
#endif

#endif /* __MACH__ */

#endif /* _MSL_TIME_H */

/* Change record:
 * hh  971206 Created.
 * hh  991112 Fixed using bug.
 * JWW 001208 Added case for targeting Mach-O
 */