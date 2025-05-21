

# File s\_ldexp.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_ldexp.c**](s__ldexp_8c.md)

[Go to the documentation of this file](s__ldexp_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_ldexp.c 1.2 95/01/04 */
/* $Id: s_ldexp.c,v 1.3.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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

#include "fdlibm.h"
#include <errno.h>
#include <math.h>  /* for isfinite macro */
static const double

two54   =  1.80143985094819840000e+16, /* 0x43500000, 0x00000000 */
twom54  =  5.55111512312578270212e-17, /* 0x3C900000, 0x00000000 */
big    = 1.0e+300,
tiny   = 1.0e-300;

double ldexp(double x, int n)
{
    int  k,hx,lx;
    if(!isfinite(x)||x==0.0)
     return x;
     
    hx = __HI(x);
    lx = __LO(x);
    k = (hx&0x7ff00000)>>20;        /* extract exponent */
    if (k==0) {             /* 0 or subnormal x */
        if ((lx|(hx&0x7fffffff))==0) return x; /* +-0 */
    x *= two54; 
    hx = __HI(x);
    k = ((hx&0x7ff00000)>>20) - 54; 
        if (n< -50000) 
          return tiny*x;    /*underflow*/
    }
    if (k==0x7ff) return x+x;       /* NaN or Inf */
    k = k+n; 
    if (k >  0x7fe) 
      return big* copysign(big,x); /* overflow  */
    if (k > 0)              /* normal result */
    {__HI(x) = (hx&0x800fffff)|(k<<20); return x;}
    if (k <= -54)
        if (n > 50000)  /* in case integer overflow in n+k */
    return big*copysign(big,x); /*overflow*/
    else return tiny*copysign(tiny,x);  /*underflow*/
    k += 54;                /* subnormal result */
    __HI(x) = (hx&0x800fffff)|(k<<20);
    return x*twom54;
    
}

/* changed __finite to __isfinite to match new naming convention 141097 bds */
#endif /* _No_Floating_Point  */
```


