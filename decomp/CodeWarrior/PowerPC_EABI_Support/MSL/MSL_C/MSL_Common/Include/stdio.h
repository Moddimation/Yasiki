/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:32 $
 * $Revision: 1.18.4.1 $
 */

#ifndef _MSL_STDIO_H
#    define _MSL_STDIO_H

#    if __MACH__
#        error You must have the /usr/include access path before the MSL access path
#    else

#        include <cstdio>

#        if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
using std::clearerr;
using std::fclose;
using std::feof;
using std::ferror;
using std::fflush;
using std::fgetc;
using std::fgetpos;
using std::fgets;
using std::FILE;
using std::fpos_t;
using std::size_t;
#            ifndef _No_Disk_File_OS_Support
using std::fopen;
#            endif
using std::fprintf;
using std::fputc;
using std::fputs;
using std::fread;
#            ifndef _No_Disk_File_OS_Support
using std::freopen;
#            endif
using std::fscanf;
using std::fseek;
using std::fsetpos;
using std::ftell;
using std::fwrite;
using std::getc;
using std::getchar;
using std::gets;
using std::perror;
using std::printf;
using std::putc;
using std::putchar;
using std::puts;
#            ifndef _No_Disk_File_OS_Support
using std::remove;
using std::rename;
#            endif
using std::rewind;
using std::scanf;
using std::setbuf;
using std::setvbuf;
using std::snprintf;
using std::sprintf;
using std::sscanf;
#            ifndef _No_Disk_File_OS_Support
using std::tmpfile;
using std::tmpnam;
#            endif
using std::ungetc;
using std::vfprintf;
using std::vfscanf;
using std::vprintf;
using std::vsprintf;
//	using std::vscanf;
using std::vsnprintf;
using std::vsscanf;
#            ifndef __NO_WIDE_CHAR
using std::fwide;
#            endif
#        endif

#    endif /* __MACH__ */

#endif     /* _MSL_STDIO_H */

           /* Change record:
            * hh  971206 Created.
            * hh  991112 Fixed using bug.
            * JWW 001208 Added case for targeting Mach-O
            */
