

# File e\_remainder.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**e\_remainder.c**](e__remainder_8c.md)

[Go to the documentation of this file](e__remainder_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)e_remainder.c 1.2 95/01/04 */
/* $Id: e_remainder.c,v 1.2.4.1 1999/12/06 19:47:53 fassiott Exp $ */
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

/* __ieee754_remainder(x,p)
 * Return :                  
 *  returns  x REM p  =  x - [x/p]*p as if in infinite 
 *  precise arithmetic, where [x/p] is the (infinite bit) 
 *  integer nearest x/p (in half way case choose the even one).
 * Method : 
 *  Based on fmod() return x-[x/p]chopped*p exactlp.
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double zero = 0.0;
#else
static double zero = 0.0;
#endif


#ifdef __STDC__
    double __ieee754_remainder(double x, double p)
#else
    double __ieee754_remainder(x,p)
    double x,p;
#endif
{
    int hx,hp;
    unsigned sx,lx,lp;
    double p_half;

    hx = __HI(x);       /* high word of x */
    lx = __LO(x);       /* low  word of x */
    hp = __HI(p);       /* high word of p */
    lp = __LO(p);       /* low  word of p */
    sx = hx&0x80000000;
    hp &= 0x7fffffff;
    hx &= 0x7fffffff;

    /* purge off exception values */
    if((hp|lp)==0) return (x*p)/(x*p);  /* p = 0 */
    if((hx>=0x7ff00000)||           /* x not finite */
      ((hp>=0x7ff00000)&&           /* p is NaN */
      (((hp-0x7ff00000)|lp)!=0)))
        return (x*p)/(x*p);


    if (hp<=0x7fdfffff) x = __ieee754_fmod(x,p+p);  /* now x < 2p */
    if (((hx-hp)|(lx-lp))==0) return zero*x;
    x  = fabs(x);
    p  = fabs(p);
    if (hp<0x00200000) {
        if(x+x>p) {
        x-=p;
        if(x+x>=p) x -= p;
        }
    } else {
        p_half = 0.5*p;
        if(x>p_half) {
        x-=p;
        if(x>=p_half) x -= p;
        }
    }
    __HI(x) ^= sx;
    return x;
}
#endif /* _No_Floating_Point  */
```


