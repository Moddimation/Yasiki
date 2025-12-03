

# File macros.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**lib**](dir_3b305cf5e36a513e0ca27de630bae6c6.md) **>** [**macros.h**](macros_8h.md)

[Go to the documentation of this file](macros_8h.md)


```C++
#ifndef _H_MACROS_
#define _H_MACROS_

#define ALIGN_PREV(u, align) (u & (~(align - 1)))
#define ALIGN_NEXT(u, align) ((u + (align - 1)) & (~(align - 1)))
#define IS_ALIGNED(X, N)     (((X) & ((N) - 1)) == 0)
#define IS_NOT_ALIGNED(X, N) (((X) & ((N) - 1)) != 0)

#define READU32_BE(ptr, offset)                                                                \
    (((u32)ptr[offset] << 24) | ((u32)ptr[offset + 1] << 16) | ((u32)ptr[offset + 2] << 8) |   \
     (u32)ptr[offset + 3]);

#ifdef DEBUG
#    define ASSERTLINE(cond, line)                                                             \
        ((cond) || (OSPanic (__FILE__, line, "Failed assertion " #cond), 0))

#    define ASSERTMSGLINE(cond, msg, line) ((cond) || (OSPanic (__FILE__, line, msg), 0))

// This is dumb but we dont have a Metrowerks way to do variadic macros in the
// macro to make this done in a not scrubby way.
#    define ASSERTMSG1LINE(cond, msg, arg1, line)                                              \
        ((cond) || (OSPanic (__FILE__, line, msg, arg1), 0))

#    define ASSERTMSG2LINE(cond, msg, arg1, arg2, line)                                        \
        ((cond) || (OSPanic (__FILE__, line, msg, arg1, arg2), 0))

#    define ASSERTMSGVLINE(cond, line, ...)                                                    \
        ((cond) || (OSPanic (__FILE__, line, __VA_ARGS__), 0))

#else
#    define ASSERTLINE(cond, line)                      (void)0
#    define ASSERTMSGLINE(cond, msg, line)              (void)0
#    define ASSERTMSG1LINE(cond, msg, arg1, line)       (void)0
#    define ASSERTMSG2LINE(cond, msg, arg1, arg2, line) (void)0
#    define ASSERTMSGLINEV(cond, line, ...)             (void)0
#endif

// clang-format off
#define FORCE_DONT_INLINE \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
    (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
// clang-format on

// Align object to num bytes (num should be power of two)
#define ALIGN(num)          __attribute__ ((aligned (num)))

// Kept it because its used everywhere
#define OFFSET(addr, align) (((u32)(addr) & ((align) - 1)))

// Disable some clangd warnings
#ifdef __clang__
// Allow string literals to be converted to char*
#    pragma clang diagnostic ignored "-Wc++11-compat-deprecated-writable-strings"
#endif

#define __MSTRING(x)           #x
#define MSTRING(x)             __MSTRING (x)

#define __MSTRING_CONCAT(a, b) a##b
#define MSTRING_CONCAT(a, b)   __MSTRING_CONCAT (a, b)

// Static Asserts, for decompiling purposes and security
#define SASSERT(name, expr)                                                                    \
    enum                                                                                       \
    {                                                                                          \
        MSTRING_CONCAT (assert_fail_, name) = 1 / (expr)                                       \
    }
#define SASSERT_SIZE(type, size) SASSERT (MSTRING_CONCAT (size_, type), sizeof (type) == size)

#ifndef __MWERKS__
// Avoid a few warnings inside of text editors with clangd or similar

#    ifdef __POWERPC__
#        undef __POWERPC__
#    endif

#    ifndef __PPC_EABI__
#        define __PPC_EABI__
#    endif

#    define __builtin_va_info
#    define __option(x) 1
#    define __declspec(x)
#    define __frsqrte(x)
#    define __fabsf(x)
#    define __sync()
#    define __cntlzw(x) 1
#    define __cdecl
#    define asm
#    define weak 1
#    define section
#    define floatingpoint 1
#endif

#endif // _H_MACROS_
```


