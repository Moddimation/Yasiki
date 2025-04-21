/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 21:00:50 $
 * $Revision: 1.14 $
 */

// sstream.h             // hh 971207 Changed filename from sstream to sstream.h

#ifndef _SSTREAM_H                // hh 971207 added standard include guards
#    define _SSTREAM_H

#    include <sstream>

#    ifndef _MSL_NO_CPP_NAMESPACE // hh 971207 Added backward compatibility
#        ifndef _MSL_NO_IO
using std::basic_istringstream;
using std::basic_ostringstream;
using std::basic_stringbuf;
using std::basic_stringstream;
using std::istringstream;
using std::ostringstream;
using std::stringbuf;
using std::stringstream;
#            ifndef _MSL_NO_WCHART_CPP_SUPPORT
using std::wistringstream;
using std::wostringstream;
using std::wstringbuf;
using std::wstringstream;
#            endif
#        endif
#    endif

#endif                            // _SSTREAM_H

// hh 971207 Changed filename from sstream to sstream.h
// hh 971207 added standard include guards
// hh 971207 Added backward compatibility
// hh 990120 changed name of MSIPL flags
// hh 991113 modified using policy
