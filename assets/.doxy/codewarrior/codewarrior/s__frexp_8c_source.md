

# File s\_frexp.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_frexp.c**](s__frexp_8c.md)

[Go to the documentation of this file](s__frexp_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_frexp.c 1.3 95/01/04 */
/* $Id: s_frexp.c,v 1.2.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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
 * for non-zero x 
 *  x = frexp(arg,&exp);
 * return a double fp quantity x such that 0.5 <= |x| <1.0
 * and the corresponding binary exponent "exp". That is
 *  arg = x*2^exp.
 * If arg is inf, 0.0, or NaN, then frexp(arg,&exp) returns arg 
 * with *exp=0. 
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double
#else
static double
#endif
two54 =  1.80143985094819840000e+16; /* 0x43500000, 0x00000000 */

#ifdef __STDC__
    double frexp(double x, int *eptr)
#else
    double frexp(x, eptr)
    double x; int *eptr;
#endif
{
    int  hx, ix, lx;
    hx = __HI(x);
    ix = 0x7fffffff&hx;
    lx = __LO(x);
    *eptr = 0;
    if(ix>=0x7ff00000||((ix|lx)==0)) return x;  /* 0,inf,nan */
    if (ix<0x00100000) {        /* subnormal */
        x *= two54;
        hx = __HI(x);
        ix = hx&0x7fffffff;
        *eptr = -54;
    }
    *eptr += (ix>>20)-1022;
    hx = (hx&0x800fffff)|0x3fe00000;
    __HI(x) = hx;
    return x;
}
#endif /* _No_Floating_Point  */
```


