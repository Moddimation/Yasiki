/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:25 $
 * $Revision: 1.10.2.1 $
 */

/*
 *  based on the 18 January 1999 committee draft
 */

#ifndef _MSL_STDBOOL_H
#define _MSL_STDBOOL_H

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else

#include <ansi_parms.h>

#if !(__option(c9x) && !defined(__cplusplus))					/*- cc 010712 -*/
	#pragma c9x on												/*- cc 010712 -*/
	#warning "Compiler support for c99 has been turned on"		/*- cc 010712 -*/
#endif

#define bool							_Bool
#define true							1
#define false							0
#define __bool_true_false_are_defined	1

#endif /* __MACH__ */

#endif /* _MSL_STDBOOL_H */

/* Change record:
 * blc 990323 Created.
 * JWW 001208 Added case for targeting Mach-O
 * cc  010712 Fixed c99 check
 */