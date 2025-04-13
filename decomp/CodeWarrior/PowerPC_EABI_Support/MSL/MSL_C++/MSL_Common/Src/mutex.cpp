/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 20:56:28 $ 
 * $Revision: 1.7 $ 
 */

// mutex.cpp

#include <mslconfig>

#ifdef _MSL_FORCE_ENUMS_ALWAYS_INT
	#if _MSL_FORCE_ENUMS_ALWAYS_INT
		#pragma enumsalwaysint on
	#else
		#pragma enumsalwaysint off
	#endif
#endif

#ifdef _MSL_FORCE_ENABLE_BOOL_SUPPORT
	#if _MSL_FORCE_ENABLE_BOOL_SUPPORT
		#pragma bool on
	#else
		#pragma bool off
	#endif
#endif

#ifdef _MSL_MULTITHREAD

	#if defined(__dest_os) && __dest_os == __win32_os

		#pragma ANSI_strict off

		#include <cstring>  // include before Win SDK gets a chance to goof it up

		#include <stdarg.h>
		#include <WINDEF.H>
		#include <WINBASE.H>

		#pragma ANSI_strict reset

		namespace {

		template <bool b>
		class __compile_assert;
		
		template <>
		class __compile_assert<true>
		{
		};
		
		__compile_assert<sizeof(CRITICAL_SECTION) == 24> check_CRITICAL_SECTION;

		// If you get an error with this object, that means that
		// sizeof(CRITICAL_SECTION) != 24.  You need to find out
		// what the new size of CRITICAL_SECTION is, change the
		// number here, and then go to the windows section of
		// msl_mutex.  There is a declaration in the mutex class:
		// long m_[6];  You need to adjust this number so that
		// sizeof(long)*x == sizeof(CRITICAL_SECTION).
		//
		// Note:  The reason for this elaborate song and dance is
		// because including windows headers in our own tends to
		// irritate customers.
		//
		// hh 990520

		}

	#endif

#endif
