/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 21:13:02 $
 * $Revision: 1.13 $
 */

// typeinfo.h

#ifndef _TYPEINFO_H
#    define _TYPEINFO_H

#    include <typeinfo>

#    ifndef _MSL_NO_CPP_NAMESPACE
using std::bad_cast;
using std::bad_typeid;
using std::type_info;
#    endif

#endif // _TYPEINFO_H

// hh 971206  Added namespace support
// hh 990120 changed name of MSIPL flags
// hh 991113 modified using policy
