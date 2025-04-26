/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:42:47 $
 * $Revision: 1.19.4.1 $
 */

#ifndef _MSL_ERRNO_H
#define _MSL_ERRNO_H

#if __MACH__
#error You must have the /usr/include access path before the MSL access path
#else

#include <cerrno>

#endif /* __MACH__ */

#endif /* _MSL_ERRNO_H */

       /* Change record:
        * hh  971206 Created.
        * mf  990301 errno is a utility and is no longer in std.
        * JWW 001208 Added case for targeting Mach-O
        */
