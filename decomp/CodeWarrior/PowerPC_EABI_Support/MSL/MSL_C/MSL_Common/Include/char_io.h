/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:12:59 $
 * $Revision: 1.18 $
 */

#ifndef _MSL_CHAR_IO_H
#define _MSL_CHAR_IO_H

#include <ansi_parms.h>                  				/*- hh 971206 -*/
#include <cstdio>                        				/*- hh 971206 -*/

	_MSL_BEGIN_EXTERN_C	/*- cc 010409 -*/

		int	__ungotten(__std(FILE) *  );  	/*- hh 990121 -*/  /*- mf 990715 -*/

	_MSL_END_EXTERN_C	/*- cc 010409 -*/

#endif /* _MSL_CHAR_IO_H */

/* Change record:
 * hh  971206 namespace support
 * hh  990121 fixed __std
 * mf  990715 Arg names in prototype cause conflicts
 * cc  010405 removed pragma options align native and reset
 * cc  010409 updated defines to JWW new namespace macros
 * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
 */