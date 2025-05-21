

# File e\_cosh.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**e\_cosh.c**](e__cosh_8c.md)

[Go to the documentation of this file](e__cosh_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)e_cosh.c 1.2 95/01/04 */
/* $Id: e_cosh.c,v 1.2.4.1 1999/12/06 19:47:52 fassiott Exp $ */
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

/* __ieee754_cosh(x)
 * Method : 
 * mathematically cosh(x) if defined to be (exp(x)+exp(-x))/2
 *  1. Replace x by |x| (cosh(x) = cosh(-x)). 
 *  2. 
 *                                              [ exp(x) - 1 ]^2 
 *      0        <= x <= ln2/2  :  cosh(x) := 1 + -------------------
 *                                     2*exp(x)
 *
 *                                        exp(x) +  1/exp(x)
 *      ln2/2    <= x <= 22     :  cosh(x) := -------------------
 *                                    2
 *      22       <= x <= lnovft :  cosh(x) := exp(x)/2 
 *      lnovft   <= x <= ln2ovft:  cosh(x) := exp(x/2)/2 * exp(x/2)
 *      ln2ovft  <  x       :  cosh(x) := big*big (overflow)
 *
 * Special cases:
 *  cosh(x) is |x| if x is +INF, -INF, or NaN.
 *  only cosh(0)=1 is exact for finite x.
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double one = 1.0, half=0.5, big = 1.0e300;
#else
static double one = 1.0, half=0.5, big = 1.0e300;
#endif

#ifdef __STDC__
    double __ieee754_cosh(double x)
#else
    double __ieee754_cosh(x)
    double x;
#endif
{   
    double t,w;
    int ix;
    unsigned lx;

    /* High word of |x|. */
    ix = __HI(x);
    ix &= 0x7fffffff;

    /* x is INF or NaN */
    if(ix>=0x7ff00000) return x*x;  

    /* |x| in [0,0.5*ln2], return 1+expm1(|x|)^2/(2*exp(|x|)) */
    if(ix<0x3fd62e43) {
        t = expm1(fabs(x));
        w = one+t;
        if (ix<0x3c800000) return w;    /* cosh(tiny) = 1 */
        return one+(t*t)/(w+w);
    }

    /* |x| in [0.5*ln2,22], return (exp(|x|)+1/exp(|x|)/2; */
    if (ix < 0x40360000) {
        t = __ieee754_exp(fabs(x));
        return half*t+half/t;
    }

    /* |x| in [22, log(maxdouble)] return half*exp(|x|) */
    if (ix < 0x40862E42)  return half*__ieee754_exp(fabs(x));

    /* |x| in [log(maxdouble), overflowthresold] */
    lx = *( (((*(unsigned*)&one)>>29)) + (unsigned*)&x);
    if (ix<0x408633CE || 
          (ix==0x408633ce)&&(lx<=(unsigned)0x8fb9f87d)) {
        w = __ieee754_exp(half*fabs(x));
        t = half*w;
        return t*w;
    }

    /* |x| > overflowthresold, cosh(x) overflow */
    return big*big;
}
#endif /* _No_Floating_Point  */
```


