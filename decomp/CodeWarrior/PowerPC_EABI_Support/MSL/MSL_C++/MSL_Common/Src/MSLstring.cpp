/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 20:56:21 $ 
 * $Revision: 1.12 $ 
 */

// MSLstring.cpp

#include <MSLstring.h>

#ifndef _MSL_NO_EXCEPTIONS

#include <string>
#include <cstring>

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

_STD::_MSLstring::_MSLstring(const string& value)
	: data_(new char [value.size()+1])
{
	strcpy(const_cast<char*>(static_cast<const char*>(data_)), value.c_str());
}

#endif // _MSL_NO_EXCEPTIONS

// hh 990120 changed name of MSIPL flags
// hh 990314 Added const char* constructor to support nonstandard const char* constructors
//           on all of the standard exceptions.
