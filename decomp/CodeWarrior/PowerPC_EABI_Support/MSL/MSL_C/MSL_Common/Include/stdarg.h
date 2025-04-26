/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:22 $
 * $Revision: 1.17.4.1 $
 */

#ifndef _MSL_STDARG_H
#define _MSL_STDARG_H

#if __MACH__
#error You must have the /usr/include access path before the MSL access path
#else

#include <cstdarg>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
using std::va_list;
#endif

#endif /* __MACH__ */

#endif /* _MSL_STDARG_H_ */

       /* Change record:
        * hh  971206 Created.
        * hh  991112 Fixed using bug.
        * JWW 001208 Added case for targeting Mach-O
        */
