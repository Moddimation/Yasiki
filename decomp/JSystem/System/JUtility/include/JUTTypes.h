#ifndef __J_TYPES_H__
#    define __J_TYPES_H__

#    include <macros.h>
#    include <types.h>

#    include <new>
#    include <size_t.h>

#    define constructor explicit
#    define destructor  virtual
#    define override    virtual
#    define Nil         0

#    undef FALSE
#    undef TRUE
#    define BOOL  bool
#    define FALSE false
#    define TRUE  true

#endif

#define JUTReportConsole(x)
#define JUTReportConsole_f(x, ...)
