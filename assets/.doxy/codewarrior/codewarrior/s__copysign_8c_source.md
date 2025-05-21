

# File s\_copysign.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_copysign.c**](s__copysign_8c.md)

[Go to the documentation of this file](s__copysign_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_copysign.c 1.2 95/01/04 */
/* $Id: s_copysign.c,v 1.2.4.1 1999/12/06 19:47:53 fassiott Exp $ */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 */

/*
 * copysign(double x, double y)
 * copysign(x,y) returns a value with the magnitude of x and
 * with the sign bit of y.
 */

#include "fdlibm.h"

#ifdef __STDC__
    double copysign(double x, double y)
#else
    double __copysign(x,y)
    double x,y;
#endif
{
    __HI(x) = (__HI(x)&0x7fffffff)|(__HI(y)&0x80000000);
        return x;
}
#endif /* _No_Floating_Point  */
```


