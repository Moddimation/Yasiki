/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/22 14:19:58 $
 * $Revision: 1.3 $
 */

#include <ansi_parms.h>
#include <fcntl.h>
#include <stat.h>
#include <stdio.h>
#include <unistd.h>
#include <unix.h>
#include <utime.h>
#include <utsname.h>

#define _MSL_PRO6_POSIX_COMPATIBILITY 1

#if _MSL_PRO6_POSIX_COMPATIBILITY

_MSL_BEGIN_EXTERN_C

/* Items from fcntl.h */
_MSL_IMP_EXP_C int _creat(const char*, mode_t);
_MSL_IMP_EXP_C int _fcntl(int, int, ...);
_MSL_IMP_EXP_C int _open(const char*, int, ...);

int
_creat(const char* path, mode_t mode)
{
    return creat(path, mode);
}

int
_fcntl(int fildes, int cmd, ...)
{
    return fcntl(fildes, cmd);
}

int
_open(const char* path, int oflag, ...)
{
    return open(path, oflag);
}

/* Items from stat.h */

#    if (__dest_os == __win32_os || __dest_os == __wince_os)
#        define _MSL_STAT_TYPE _stat
#    else
#        define _MSL_STAT_TYPE stat
#    endif

_MSL_IMP_EXP_C int _fstat(int, struct _MSL_STAT_TYPE*);
_MSL_IMP_EXP_C int _mkdir(const char*, ...);
_MSL_IMP_EXP_C int _stat(const char*, struct _MSL_STAT_TYPE*);

int
_fstat(int fildes, struct _MSL_STAT_TYPE* buf)
{
    return fstat(fildes, (struct stat*)buf);
}

int
_mkdir(const char* path, ...)
{
    return mkdir(path);
}

int
_stat(const char* path, struct _MSL_STAT_TYPE* buf)
{
    return stat(path, (struct stat*)buf);
}

/* Items from stdio.h */

_MSL_IMP_EXP_C int _fileno(__std(FILE) *);
_MSL_IMP_EXP_C     __std(FILE) * _fdopen(int, const char*);

int
_fileno(FILE* stream)
{
    return fileno(stream);
}

FILE*
_fdopen(int fildes, const char* type)
{
    return fdopen(fildes, type);
}

/* Items from unistd.h */

_MSL_IMP_EXP_C int          _access(const char*, int);
_MSL_IMP_EXP_C int          _chdir(const char*);
_MSL_IMP_EXP_C int          _close(int);
_MSL_IMP_EXP_C char*        _cuserid(char*);
_MSL_IMP_EXP_C int          _exec(const char*, ...);
_MSL_IMP_EXP_C int          _execl(const char*, ...);
_MSL_IMP_EXP_C int          _execle(const char*, ...);
_MSL_IMP_EXP_C int          _execlp(const char*, ...);
_MSL_IMP_EXP_C int          _execv(const char*, ...);
_MSL_IMP_EXP_C int          _execve(const char*, ...);
_MSL_IMP_EXP_C int          _execvp(const char*, ...);
_MSL_IMP_EXP_C char*        _getcwd(char*, int);
_MSL_IMP_EXP_C char*        _getlogin(void);
_MSL_IMP_EXP_C int          _getpid(void);
_MSL_IMP_EXP_C int          _isatty(int);
_MSL_IMP_EXP_C long         _lseek(int, long, int);
_MSL_IMP_EXP_C int          _read(int, void*, __std(size_t));
_MSL_IMP_EXP_C int          _rmdir(const char*);
_MSL_IMP_EXP_C unsigned int _sleep(unsigned int);
_MSL_IMP_EXP_C char*        _ttyname(int);
_MSL_IMP_EXP_C int          _unlink(const char*);
_MSL_IMP_EXP_C int          _write(int, const void*, __std(size_t));

int
_access(const char* path, int mode)
{
    return access(path, mode);
}

int
_chdir(const char* path)
{
    return chdir(path);
}

int
_close(int fildes)
{
    return close(fildes);
}

char*
_cuserid(char* string)
{
    return cuserid(string);
}

int
_exec(const char* path, ...)
{
    return exec(path);
}

int
_execl(const char* path, ...)
{
    return exec(path);
}

int
_execle(const char* path, ...)
{
    return exec(path);
}

int
_execlp(const char* path, ...)
{
    return exec(path);
}

int
_execv(const char* path, ...)
{
    return exec(path);
}

int
_execve(const char* path, ...)
{
    return exec(path);
}

int
_execvp(const char* path, ...)
{
    return exec(path);
}

char*
_getcwd(char* buf, int size)
{
    return getcwd(buf, size);
}

char*
_getlogin(void)
{
    return getlogin();
}

int
_getpid(void)
{
    return getpid();
}

int
_isatty(int fildes)
{
    return isatty(fildes);
}

long
_lseek(int fildes, long offset, int whence)
{
    return lseek(fildes, offset, whence);
}

int
_read(int fildes, void* buf, size_t count)
{
    return read(fildes, buf, count);
}

int
_rmdir(const char* path)
{
    return rmdir(path);
}

unsigned int
_sleep(unsigned int seconds)
{
    return sleep(seconds);
}

char*
_ttyname(int fildes)
{
    return ttyname(fildes);
}

int
_unlink(const char* path)
{
    return unlink(path);
}

int
_write(int fildes, const void* buf, size_t count)
{
    return write(fildes, buf, count);
}

/* Items from unix.h */

_MSL_IMP_EXP_C int               _chmod(const char*, mode_t);
_MSL_IMP_EXP_C _MSL_POSIX_PARAMS _umask(_MSL_POSIX_PARAMS); /*- cc 000210 -*/

int
_chmod(const char* path, mode_t mode)
{
    return chmod(path, mode);
}

_MSL_POSIX_PARAMS
_umask(_MSL_POSIX_PARAMS __pmode)
{
    return umask(__pmode);
}

/* Items from utime.h */

#    if (__dest_os == __win32_os || __dest_os == __wince_os)
#        define _MSL_STRUCT_UTIMEBUF_TYPE struct
#    else
#        define _MSL_STRUCT_UTIMEBUF_TYPE const struct
#    endif

_MSL_IMP_EXP_C int _utime(const char*, _MSL_STRUCT_UTIMEBUF_TYPE utimbuf*);
_MSL_IMP_EXP_C int _utimes(const char* path, struct timeval buf[2]);

int
_utime(const char* path, _MSL_STRUCT_UTIMEBUF_TYPE utimbuf* buf)
{
    return utime(path, buf);
}

int
_utimes(const char* path, struct timeval buf[2])
{
    return utimes(path, buf);
}

/* Items from utsname.h */

_MSL_IMP_EXP_C int _uname(struct utsname*);

int
_uname(struct utsname* name)
{
    return uname(name);
}

_MSL_END_EXTERN_C

#endif

/* Change record:
 * JWW 010614 Added Pro 6 compatibility routines
 * cc  010622 Added _chmod and _umask
 */
