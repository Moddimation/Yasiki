

# File w\_atan2.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**w\_atan2.c**](w__atan2_8c.md)

[Go to the documentation of this file](w__atan2_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)w_atan2.c 1.2 95/01/04 */
/* $Id: w_atan2.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 *
 */

/* 
 * wrapper atan2(y,x)
 */

#include "fdlibm.h"


#ifdef __STDC__
    double atan2(double y, double x)    /* wrapper atan2 */
#else
    double atan2(y,x)           /* wrapper atan2 */
    double y,x;
#endif
{
#ifdef _IEEE_LIBM
    return __ieee754_atan2(y,x);
#else
    double z;
    z = __ieee754_atan2(y,x);
    if(_LIB_VERSION == _IEEE_||isnan(x)||isnan(y)) return z;
    if(x==0.0&&y==0.0) {
            return __kernel_standard(y,x,3); /* atan2(+-0,+-0) */
    } else
        return z;
#endif
}
#endif /* _No_Floating_Point  */
```


