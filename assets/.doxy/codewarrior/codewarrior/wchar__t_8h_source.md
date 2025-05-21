

# File wchar\_t.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wchar\_t.h**](wchar__t_8h.md)

[Go to the documentation of this file](wchar__t_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/02/22 15:02:40 $
 *  $Revision: 1.1 $
 *  $NoKeywords: $
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  wchar_t.h
 */

#ifndef __wchar_t__
#define __wchar_t__

#include <macros.h>

#ifdef __cplusplus /* hh  971206 */
#ifdef _MSL_USING_NAMESPACE
namespace std
{
#endif
extern "C"
{
#endif

#if !__cplusplus || !__option(wchar_type)
typedef unsigned short wchar_t;
#endif

#define WCHAR_MIN 0
#define WCHAR_MAX ((wchar_t) - 1)

#ifdef __cplusplus /* hh  971206 */
}
#ifdef _MSL_USING_NAMESPACE
}
#endif
#endif

#endif             /* __wchar_t__ */

/* Change record
 *  mm 990217  Recreated to avoid standard headers having to include cstddef
 *             to get the typedef for wchar_t
 */

```


