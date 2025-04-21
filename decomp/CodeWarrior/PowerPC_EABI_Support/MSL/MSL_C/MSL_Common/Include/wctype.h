/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:45 $
 * $Revision: 1.18.4.1 $
 */

#ifndef _MSL_WCTYPE_H
#    define _MSL_WCTYPE_H

#    if __MACH__
#        warning The standard BSD headers do not have an equivalent wctype.h header to #include
#    else

#        include <cwctype>

#        if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
#            ifndef __NO_WIDE_CHAR
/*	using std::wctrans_t; */
using std::iswalnum;
using std::iswalpha;
using std::iswcntrl;
using std::iswctype;
using std::iswdigit;
using std::iswgraph;
using std::iswlower;
using std::iswprint;
using std::iswpunct;
using std::iswspace;
using std::iswupper;
using std::iswxdigit;
using std::wctype_t;
using std::wint_t;
/*	using std::towctrans; */
using std::towlower;
using std::towupper;
/*	using std::wctrans; */
using std::wctype;
#            endif
#        endif

#    endif /* __MACH__ */

#endif     /* _MSL_WCTYPE_H */

           /* Change record:
            * 980121 JCM First code release.
            * 991112 hh  Fixed using bug.
            * 001208 JWW Added case for targeting Mach-O
            */
