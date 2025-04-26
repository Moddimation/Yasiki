/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/22 14:18:31 $
 * $Revision: 1.10 $
 */

/*
 *	Content:	Interface file to standard UNIX-style entry points ...
 *
 *	NB:			This file implements some UNIX low level support.  These functions
 *				are not guaranteed to be 100% conformant.
 *
 */

#include <stdio.h>
#include <unix.h>

/*  	if !POSIX _MSL_POSIX_PARAMS is an int else it is of type mode_t
 *
 *		_MSL_POSIX_PARAMS _umask( _MSL_POSIX_PARAMS __pmode )
 *
 *		Sets the file permission mask so that all future
 *      files will be created to the mode specified by __pmode
 */
_MSL_POSIX_PARAMS __new_umask = 0; /*- cc 000517 -*/ /*- cc 010622 -*/
_MSL_POSIX_PARAMS
umask(_MSL_POSIX_PARAMS __pmode)                     /*- cc 010622 -*/
{
    _MSL_POSIX_PARAMS __oldmask = __new_umask;       /*- cc 010622 -*/

    __new_umask = __pmode;

    return __oldmask;
} /*- cc 000517 -*/
/*
 *	int fileno(FILE *stream)
 *
 *		Returns the file number associated with a stream.
 */

int
fileno(FILE* stream)
{
    return (stream->handle);
}
/* Change record:
 * cc  000404 Removed io.h and added stdio.h and unix.h
 * cc  000517 Cleanup of umask return type
 * cc  000517 Changed #include to cstdio
 * cc  010622 Removed _ on umask and renamed posixparams to _MSL_POSIX_PARAMS
 */
