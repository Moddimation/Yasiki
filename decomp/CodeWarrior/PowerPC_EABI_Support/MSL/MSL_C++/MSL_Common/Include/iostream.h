/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights
 * reserved.
 *
 * $Date: 2001/03/08 20:55:06 $
 * $Revision: 1.14 $
 */

// iostream.h               // hh 971207 Changed filename from iostream to iostream.h

#ifndef _IOSTREAM_H           // hh 971207 added standard include guards
#define _IOSTREAM_H

#include <ios.h>
#include <iostream>
#include <istream.h>
#include <ostream.h>
#include <streambuf.h>

#ifndef _MSL_NO_CPP_NAMESPACE // hh 971207 Added backward compatibility
#ifndef _MSL_NO_IO
using std::cerr;
using std::cin;
using std::clog;
using std::cout;
#ifndef _MSL_NO_WCHART_CPP_SUPPORT
using std::wcerr;
using std::wcin;
using std::wclog;
using std::wcout;
#endif
#endif
#endif

#endif                        // _IOSTREAM_H

// hh 971207 Changed filename from iostream to iostream.h
// hh 971207 added standard include guards
// hh 971207 Added backward compatibility
// hh 990120 changed name of MSIPL flags
// hh 991113 modified using policy
