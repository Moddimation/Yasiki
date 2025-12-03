

# File wchar\_t.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wchar\_t.h**](wchar__t_8h.md)

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


