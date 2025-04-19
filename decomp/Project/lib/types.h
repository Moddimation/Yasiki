

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef nullptr
#define nullptr 0
#endif

#ifndef _DOLPHIN_STL_H
#include <cstdarg>
#endif
#include <cstddef>
#include <cstring>
#include <macros.h>

#ifndef _TYPES_H
#define _TYPES_H

// r2 is  803F0200
// r13 is 803E4D20

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef long double f128;
typedef volatile f32 vf32;
typedef volatile f64 vf64;
typedef volatile f128 vf128;

typedef u32 unk;
typedef u8 unk8;
typedef u16 unk16;
typedef u32 unk32;
typedef u64 unk64;

#define DEFINE_ENUM_TYPE(name, ...)                                            \
	struct name {                                                              \
		enum Values { __VA_ARGS__ };                                           \
		typedef Values Type;                                                   \
	}

#ifndef __cplusplus
typedef u16 wchar_t;
#endif

#endif // _TYPES_H
