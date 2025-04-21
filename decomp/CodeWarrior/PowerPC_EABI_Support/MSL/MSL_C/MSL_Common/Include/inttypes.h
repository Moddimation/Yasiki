/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:02 $
 * $Revision: 1.17.4.1 $
 */

#ifndef _MSL_INTTYPES_H
#    define _MSL_INTTYPES_H

#    if __MACH__
#        error You must have the /usr/include access path before the MSL access path
#    else

#        include <cinttypes>
#        include <stdint.h>

#        if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
using std::imaxabs;
using std::imaxdiv;
using std::imaxdiv_t;
using std::strtoimax;
using std::strtoumax;
#            ifndef __NO_WIDE_CHAR
using std::wcstoimax;
using std::wcstoumax;
#            endif
#        endif

#    endif /* __MACH__ */

#endif     /* _MSL_INTTYPES_H */

           /* Change record:
            * mm  980724 Created.
            * hh  991113 Fixed using bug.
            * mm  000515 Modified for use with new cinttypes.
            * JWW 001208 Added case for targeting Mach-O
            */
