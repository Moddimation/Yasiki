/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 20:54:50 $
 * $Revision: 1.14 $
 */

// ios.h            // hh 971207 Changed filename from ios to ios.h

#ifndef _IOS_H                    // hh 971207 added standard include guards
#    define _IOS_H

#    include <ios>

#    ifndef _MSL_NO_CPP_NAMESPACE // hh 971207 Added backward compatibility
#        ifndef _MSL_NO_IO
using std::basic_ios;
using std::fpos;
using std::ios;
using std::ios_base;
using std::streamoff;
using std::streamsize;
#            ifndef _MSL_NO_WCHART_CPP_SUPPORT
using std::wios;
#            endif
using std::boolalpha;
using std::dec;
using std::fixed;
using std::hex;
using std::internal;
using std::left;
using std::noboolalpha;
using std::noshowbase;
using std::noshowpoint;
using std::noshowpos;
using std::noskipws;
using std::nouppercase;
using std::oct;
using std::right;
using std::scientific;
using std::showbase;
using std::showpoint;
using std::showpos;
using std::skipws;
using std::uppercase;
#        endif
#    endif

#endif                            // _IOS_H

// hh 971207 Changed filename from ios to ios.h
// hh 971207 added standard include guards
// hh 971207 Added backward compatibility
// hh 990120 changed name of MSIPL flags
// hh 991113 modified using policy
