/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/07 14:30:00 $
 * $Revision: 1.14 $
 */

#ifndef _MSL_WCHAR_T_H
#    define _MSL_WCHAR_T_H

#    include <ansi_parms.h>

#    if (!__cplusplus || !__option(wchar_type))
typedef unsigned short wchar_t;
#    endif

#    ifdef __cplusplus
#        ifdef _MSL_USING_NAMESPACE
namespace std
{
#        endif
extern "C"
{
#    endif

#    define WCHAR_MIN 0
#    define WCHAR_MAX 0xffffU /*- mm 010607 -*/

typedef wchar_t wint_t;       /*- mm 990809 -*/
typedef wchar_t wctype_t;     /*- mm 990809 -*/
typedef int     mbstate_t;    /*- mm 990809 -*/
typedef wchar_t Wint_t;       /*- mm 990809 -*/

#    ifdef __cplusplus
}
#        ifdef _MSL_USING_NAMESPACE
}
#        endif
#    endif

#endif                        /* _MSL_WCHAR_T_H */

/* Change record:
 * mm  990217 Recreated to avoid standard headers having to include cstddef
 *            to get the typedef for wchar_t
 * mm  990809 Added definitions
 * hh  000609 Put wchar_t in global namespace
 * mm  010302 Changed definition of WCHAR_MAX
 * mm  010607 Repeat of my 010302 change that somehow vanished.
 */
