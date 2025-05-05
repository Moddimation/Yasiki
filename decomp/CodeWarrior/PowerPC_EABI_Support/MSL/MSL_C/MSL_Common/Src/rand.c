/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/31 15:56:02 $
 * $Revision: 1.14 $
 */

/*
 *	Routines
 *	--------
 *		rand
 *		srand
 *
 *	Note
 *	----
 *
 *		This is exactly the function described in the standard, including the
 *		assumption that RAND_MAX == 32767.
 *
 *
 */

#include <stdlib.h>

#if _MWMT && (__dest_os == __win32_os || __dest_os == __wince_os)
#include <ThreadLocalData.h>
#else

__tls static unsigned long int next = 1;

#endif
int
rand (void)
{
#if _MWMT && (__dest_os == __win32_os || __dest_os == __wince_os)
    _GetThreadLocalData (_MSL_TRUE)->random_next =
        _GetThreadLocalData (_MSL_TRUE)->random_next * 1103515245 + 12345;
    return ((_GetThreadLocalData (_MSL_TRUE)->random_next >> 16) & 0x7FFF);
#else
    next = next * 1103515245 + 12345;
    return ((next >> 16) & 0x7FFF);
#endif
}

void
srand (unsigned int seed)
{
#if _MWMT && (__dest_os == __win32_os || __dest_os == __wince_os)
    _GetThreadLocalData (_MSL_TRUE)->random_next = seed; /*- cc 010531 -*/
#else
    next = seed;
#endif
}

/* Change record:
 * JFH 950607 First code release.
 * JFH 960429 Merged Win32 changes in.
 * KO  961219 Changed this file to use the thread local data structure instead
 *            of a global.
 * mf  980512 wince changes
 * mf  990309 use _MWMT instead of _MT for single threaded lib
 * cc  010531 Added _GetThreadLocalData's flag
 */
