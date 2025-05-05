/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/21 20:15:55 $
 * $Revision: 1.20 $
 */

#ifndef _MSL_FCNTL_H
#define _MSL_FCNTL_H

#include <ansi_parms.h> /*- mf 042898 -*/
#include <stat.h>

#define O_TEXT     0x0  /* 960827: Added this for Visual C++ compatibility. */
#define O_RDWR     0x1 /* open the file in read/write mode */ /*- mm 980420 -*/
#define O_RDONLY   0x2 /* open the file in read only mode */  /*- mm 980420 -*/
#define O_WRONLY   0x4 /* open the file in write only mode */ /*- mm 980420 -*/
#define O_APPEND   0x0100                                     /* open the file in append mode */
#define O_CREAT    0x0200 /* create the file if it doesn't exist */
#define O_EXCL     0x0400 /* if the file already exists don't create it again */
#define O_TRUNC    0x0800 /* truncate the file after opening it */
#define O_NRESOLVE 0x1000 /* Don't resolve any aliases */
#define O_ALIAS    0x2000 /* Open alias file (if the file is an alias) */
#define O_RSRC     0x4000 /* Open the resource fork */
#define O_BINARY   0x8000 /* open the file in binary mode (default is text mode) */
#define F_DUPFD    0x0    /* return a duplicate file descriptor */
                          /*- mm 960927 -*/

_MSL_BEGIN_EXTERN_C       /*- cc 010409 -*/

    _MSL_IMP_EXP_C int
                   open (const char*, int, ...); /*- vss 980729 -*/
_MSL_IMP_EXP_C int creat (const char*, mode_t);
_MSL_IMP_EXP_C int fcntl (int, int, ...);

#if (__dest_os == __win32_os)
#include <fcntl.win32.h>
#endif

_MSL_END_EXTERN_C                                /*- cc 010409 -*/

#endif                                           /* _MSL_FCNTL_H */

                                                 /* Change record:
                                                  * mm  960927 Inserted setting of __dest_os to __mac_os when not otherwise set.
                                                  * mm  970708 Inserted Be changes
                                                  * mf  980428 included ansi_parms.h and use #error instead of mac_os by default
                                                  * cc  000403 changed inline of open, create, & fcntl to have  _b ,...
                                                  * JWW 000928 balanced align directives (align=native needs align=reset)
                                                  * JWW 001208 Added case for targeting Mach-O
                                                  * mm  010117 Replaced inline for open, create, & fcntl because one can't inline
                                                  * variable length argument lists.                                             cc
                                                  * 000326 removed dest_os to be_os                                             cc
                                                  * 010405                                             removed pragma options
                                                  * align native and reset                                             cc  010409
                                                  * updated                                             defines to                                              JWW new                                              namespace macros                                              JWW
                                                  * 010510                                              Removed special case for Mach-O
                                                  * - the                                             cname/name.h header split is
                                                  * a better fix
                                                  */
