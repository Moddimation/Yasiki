

# File e\_atanh.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**e\_atanh.c**](e__atanh_8c.md)

[Go to the documentation of this file](e__atanh_8c.md)


```C++
#ifndef _No_Floating_Point  
#include <math.h>
/* @(#)e_atanh.c 1.2 95/01/04 */
/* $Id: e_atanh.c,v 1.2.4.1 1999/12/06 19:47:52 fassiott Exp $ */
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

/* __ieee754_atanh(x)
 * Method :
 *    1.Reduced x to positive by atanh(-x) = -atanh(x)
 *    2.For x>=0.5
 *                  1              2x                          x
 *  atanh(x) = --- * log(1 + -------) = 0.5 * log1p(2 * --------)
 *                  2             1 - x                      1 - x
 *  
 *  For x<0.5
 *  atanh(x) = 0.5*log1p(2x+2x*x/(1-x))
 *
 * Special cases:
 *  atanh(x) is NaN if |x| > 1 with signal;
 *  atanh(NaN) is that NaN with no signal;
 *  atanh(+-1) is +-INF with signal.
 *
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double one = 1.0, big = 1e300;
#else
static double one = 1.0, big = 1e300;
#endif

static double zero = 0.0;

#ifdef __STDC__
    double __ieee754_atanh(double x)
#else
    double __ieee754_atanh(x)
    double x;
#endif
{
    double t;
    int hx,ix;
    unsigned lx;
    hx = __HI(x);       /* high word */
    lx = __LO(x);       /* low word */
    ix = hx&0x7fffffff;
    if ((ix|((lx|(-lx))>>31))>0x3ff00000) /* |x|>1 */
        return NAN;
    if(ix==0x3ff00000) 
        return x/zero;
    if(ix<0x3e300000&&(big+x)>zero) return x;   /* x<2**-28 */
    __HI(x) = ix;       /* x <- |x| */
    if(ix<0x3fe00000) {     /* x < 0.5 */
        t = x+x;
        t = 0.5*log1p(t+t*x/(one-x));
    } else 
        t = 0.5*log1p((x+x)/(one-x));
    if(hx>=0) return t; else return -t;
}
#endif /* _No_Floating_Point  */
```


