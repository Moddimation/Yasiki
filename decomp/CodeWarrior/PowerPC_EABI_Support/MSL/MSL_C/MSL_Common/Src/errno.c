/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/19 14:55:22 $
 * $Revision: 1.13 $
 */

#include <errno.h>

#if !(_MWMT && (__dest_os == __win32_os || __dest_os == __wince_os))
__tls int errno;
#    if ((__dest_os == __mac_os) || (__dest_os == __mac_os_x)) /*- mm 010412 -*/
#        include <MacTypes.h>                                  /*- mm 010412 -*/
__tls OSErr __MacOSErrNo;                                      /*- mm 010412 -*/
#    endif                                                     /*- mm 010412 -*/
#endif

/* Change record:
 * JFH 950612 First code release.
 * CVT 960415 Add TLS support for Win32
 * mf  980512 wince changes
 * mm  010412 Added global for storing MacOS OSErr values
 */
