/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:41:07 $
 * $Revision: 1.19.4.1 $
 */

#if __MACH__
	#error You must have the /usr/include access path before the MSL access path
#else
	#include <cassert>
#endif /* __MACH__ */

/*
 * Change record
 * hh  971206 Created.
 * mm  980724 Deleted wrappers to allow multiple includes.  MW 08171
 * hh  991112 Removed namespace support
 * JWW 001208 Added case for targeting Mach-O
 */