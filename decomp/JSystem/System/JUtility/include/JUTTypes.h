#ifndef __J_TYPES_H__
#define __J_TYPES_H__

#include <macros.h>
#include <types.h>

#define constructor explicit
#define destructor  virtual
#define SELF        this
#define Nil         0

#undef FALSE
#undef TRUE
#define BOOL  bool
#define FALSE false
#define TRUE  true

typedef u32 size_t;

#endif
