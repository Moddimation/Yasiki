/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/26 15:49:24 $
 * $Revision: 1.24 $
 */

#ifndef _MSL_UNISTD_H
#define _MSL_UNISTD_H

#include <ansi_parms.h> /*- mf 042898 -*/
#include <size_t.h>     /*- mm 000607 -*/

/* macros for whence parameter of lseek() (taken from <stdio.h> */
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

_MSL_BEGIN_EXTERN_C                                                 /*- cc 010409 -*/

/* The following are symbolic constants for access() */             /*- mm 991216 -*/
/* See Posix 2.9.1 */                                               /*- mm 991216 -*/
#define F_OK 0 /* Test for existence of file */                     /*- mm 991216 -*/
#define W_OK 2 /* Test for write permission  */                     /*- mm 991216 -*/
#define R_OK 4 /* Test for read permission   */                     /*- mm 991216 -*/
#define X_OK                                                                        \
    1		/* Test for execute permission--temporary--don't know what
	                           value this should have --m.f. 000403   */	/*- mm 010626 -*/

    _MSL_IMP_EXP_C int
                            chdir(const char*);
_MSL_IMP_EXP_C int          close(int);
_MSL_IMP_EXP_C char*        cuserid(char*);
_MSL_IMP_EXP_C int          exec(const char*, ...);
_MSL_IMP_EXP_C char*        getcwd(char*, int);
_MSL_IMP_EXP_C char*        getlogin(void);
_MSL_IMP_EXP_C long         lseek(int, long, int);
_MSL_IMP_EXP_C int          isatty(int);
_MSL_IMP_EXP_C int          read(int, void*, __std(size_t));        /*- mm 000607 -*/
_MSL_IMP_EXP_C int          rmdir(const char*);
_MSL_IMP_EXP_C unsigned int sleep(unsigned int);
_MSL_IMP_EXP_C char*        ttyname(int);
_MSL_IMP_EXP_C int          unlink(const char*);
_MSL_IMP_EXP_C int          write(int, const void*, __std(size_t)); /*- mm 000607 -*/
_MSL_IMP_EXP_C int          access(const char*, int);

#if (__dest_os == __win32_os)
_MSL_IMP_EXP_C int getpid(void);
#include <unistd.win32.h>
#else
__inline int
getpid(void)
{
    return 9000;
} /*- cc 010517 -*/
#endif
__inline int
getppid(void)
{
    return 8000;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
getuid(void)
{
    return 200;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
geteuid(void)
{
    return 200;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
getgid(void)
{
    return 100;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
getegid(void)
{
    return 100;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
getpgrp(void)
{
    return 9000;
} /*- mm 990106 -*/                                                 /*- cc 010517 -*/
__inline int
execl(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
__inline int
execv(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
__inline int
execle(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
__inline int
execve(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
__inline int
execlp(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
__inline int
execvp(const char* _a, ...)
{
    return exec(_a);
} /*- cc 010427 -*/
_MSL_END_EXTERN_C /*- cc 010409 -*/

#endif            /* _MSL_UNISTD_H */

                  /* Change record:
                   * mm  960927 Inserted setting of __dest_os to __mac_os when not otherwise set.
                   * mf  980428 included ansi_parms.h and use #error instead of mac_os by default
                   * vss 990115 removed powerTV
                   * cc  000320 moved common functions here from unistd.win.h and unistd.mac.h
                   * cc  000502 dest_os _getpid()
                   * mm  000607 Changed definitions of read and write to accord with POSIX
                   *Standard.               JWW 000727 Uninlined various routines when compiling
                   *for 68K MPW               cc               000809 added execl and other defines to mac only.
                   *It is too late to add to win               will fix after pro6               cc  000828 made execl and
                   *others common.               JWW 001208 Added case for targeting Mach-O               mm  010119 Completed
                   *change of mm 000607 for write and for access               cc  010405 removed pragma options
                   *align native and reset               cc  010409 updated defines to JWW new namespace macros
                   * cc  010427 Changed exec #defines to inlines
                   * JWW 010510 Removed special case for Mach-O - the cname/name.h header split is
                   *a better fix               cc  010517 Fixes getfamily to have void in param and
                   *removed cast               to int               cc  010517 Removed __BUILDING_MPW__ if else
                   *cc  010622 Removed ifndef
                   *__stdio__               mm  010626 Changed the value of X_OK to make it
                   *distinct from the               others---WB1-23773
                   */
