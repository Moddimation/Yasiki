/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:04 $
 * $Revision: 1.16.4.1 $
 */

#ifndef _MSL_ISO646_H
#    define _MSL_ISO646_H

#    if __MACH__
#        warning The standard BSD headers do not have an equivalent iso646.h header to #include
#    else

#        include <ciso646>

#    endif /* __MACH__ */

#endif     /* _MSL_ISO646_H */

           /* Change record:
            * hh  980106 Created.
            * hh  991113 Removed namespace support.
            * JWW 001208 Added case for targeting Mach-O
            */
