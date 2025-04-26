/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/05 22:38:49 $
 * $Revision: 1.14 $
 */

#ifndef _MSL_T_H
#define _MSL_T_H

#include <ansi_parms.h>

#ifdef _INT32
#undef _INT32
#endif

#ifdef _UINT32
#undef _UINT32
#endif

#if __MC68K__ || defined(__m56800__) || defined(__m56800E__)
typedef long          _INT32;
typedef unsigned long _UINT32;
#else
typedef int          _INT32;
typedef unsigned int _UINT32;
#endif

#endif /* _MSL_T_H */

/* Change record:
 * vss 990729 New file to define new types introduced into MSL
 * cc  010405 removed pragma options align native and reset
 */
