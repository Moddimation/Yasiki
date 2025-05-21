

# File w\_pow.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**w\_pow.c**](w__pow_8c.md)

[Go to the documentation of this file](w__pow_8c.md)


```C++


#ifndef _No_Floating_Point  
/* @(#)w_pow.c 1.2 95/01/04 */
/* $Id: w_pow.c,v 1.2.4.1 1999/12/06 19:47:33 fassiott Exp $ */
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
 * wrapper pow(x,y) return x**y
 */

#include "fdlibm.h"


#ifdef __STDC__
     double   pow(double x, double y)   /* wrapper pow */
#else
    double pow(x,y)         /* wrapper pow */
    double x,y;
#endif
{
#ifdef _IEEE_LIBM
    return  __ieee754_pow(x,y);
#else
    double z;
    z=__ieee754_pow(x,y);
    if(_LIB_VERSION == _IEEE_|| isnan(y)) return z;
    if(isnan(x)) {
        if(y==0.0) 
            return __kernel_standard(x,y,42); /* pow(NaN,0.0) */
        else 
        return z;
    }
    if(x==0.0){ 
        if(y==0.0)
            return __kernel_standard(x,y,20); /* pow(0.0,0.0) */
        if(isfinite(y)&&y<0.0)
            return __kernel_standard(x,y,23); /* pow(0.0,negative) */
        return z;
    }
    if(!isfinite(z)) {
        if(isfinite(x)&&isfinite(y)) {
            if(isnan(z))
                return __kernel_standard(x,y,24); /* pow neg**non-int */
            else 
                return __kernel_standard(x,y,21); /* pow overflow */
        }
    } 
    if(z==0.0&&isfinite(x)&&isfinite(y))
        return __kernel_standard(x,y,22); /* pow underflow */
    return z;
#endif
}
#endif /* _No_Floating_Point  */
```


