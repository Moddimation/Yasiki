

# File e\_atanh.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**e\_atanh.c**](e__atanh_8c.md)

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


