

# File JUTTypes.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JUtility**](dir_aff7e77974aed43c34a2cacd921cced7.md) **>** [**include**](dir_6690900a6ed7d30e5a4c9ed5f795befe.md) **>** [**JUTTypes.h**](_j_u_t_types_8h.md)

[Go to the documentation of this file](_j_u_t_types_8h.md)


```C++
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
```


