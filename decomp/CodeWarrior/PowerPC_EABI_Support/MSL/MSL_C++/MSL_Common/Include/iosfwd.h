/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 20:54:57 $
 * $Revision: 1.14 $
 */

// iosfwd.h             // hh 971207 Changed filename from iosfwd to iosfwd.h

#ifndef _IOSFWD_H                 // hh 971207 added standard include guards
#    define _IOSFWD_H

#    include <iosfwd>

#    ifndef _MSL_NO_CPP_NAMESPACE // hh 971207 Added backward compatibility
using std::allocator;
using std::char_traits;
#        ifndef _MSL_NO_IO
using std::basic_filebuf;
using std::basic_fstream;
using std::basic_ifstream;
using std::basic_ios;
using std::basic_iostream;
using std::basic_istream;
using std::basic_istringstream;
using std::basic_ofstream;
using std::basic_ostream;
using std::basic_ostringstream;
using std::basic_streambuf;
using std::basic_stringbuf;
using std::basic_stringstream;
using std::filebuf;
using std::fpos;
using std::fstream;
using std::ifstream;
using std::ios;
using std::iostream;
using std::istream;
using std::istreambuf_iterator;
using std::istringstream;
using std::ofstream;
using std::ostream;
using std::ostreambuf_iterator;
using std::ostringstream;
using std::streambuf;
using std::streampos;
using std::stringbuf;
using std::stringstream;
#            ifndef _MSL_NO_WCHART_CPP_SUPPORT
using std::wfilebuf;
using std::wfstream;
using std::wifstream;
using std::wios;
using std::wiostream;
using std::wistream;
using std::wistringstream;
using std::wofstream;
using std::wostream;
using std::wostringstream;
using std::wstreambuf;
using std::wstreampos;
using std::wstringbuf;
using std::wstringstream;
#            endif
#        endif
#    endif

#endif                            // _IOSFWD_H

// hh 971207 Changed filename from iosfwd to iosfwd.h
// hh 971207 added standard include guards
// hh 971207 Added backward compatibility
// hh 990120 changed name of MSIPL flags
// hh 991113 modified using policy
