

# File s\_rint.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_rint.c**](s__rint_8c.md)

[Go to the documentation of this file](s__rint_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_rint.c 1.2 95/01/04 */
/* $Id: s_rint.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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
 * rint(x)
 * Return x rounded to integral value according to the prevailing
 * rounding mode.
 * Method:
 *  Using floating addition.
 * Exception:
 *  Inexact flag raised if x not equal to rint(x).
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double
#else
static double 
#endif
TWO52[2]={
  4.50359962737049600000e+15, /* 0x43300000, 0x00000000 */
 -4.50359962737049600000e+15, /* 0xC3300000, 0x00000000 */
};

#ifdef __STDC__
    double rint(double x)
#else
    double rint(x)
    double x;
#endif
{
    int i0,j0,sx;
    unsigned i,i1;
    double w,t;
    i0 =  __HI(x);
    sx = (i0>>31)&1;
    i1 =  __LO(x);
    j0 = ((i0>>20)&0x7ff)-0x3ff;
    if(j0<20) {
        if(j0<0) {  
        if(((i0&0x7fffffff)|i1)==0) return x;
        i1 |= (i0&0x0fffff);
        i0 &= 0xfffe0000;
        i0 |= ((i1|-i1)>>12)&0x80000;
        __HI(x)=i0;
            w = TWO52[sx]+x;
            t =  w-TWO52[sx];
            i0 = __HI(t);
            __HI(t) = (i0&0x7fffffff)|(sx<<31);
            return t;
        } else {
        i = (0x000fffff)>>j0;
        if(((i0&i)|i1)==0) return x; /* x is integral */
        i>>=1;
        if(((i0&i)|i1)!=0) {
            if(j0==19) i1 = 0x40000000; else
            i0 = (i0&(~i))|((0x20000)>>j0);
        }
        }
    } else if (j0>51) {
        if(j0==0x400) return x+x;   /* inf or NaN */
        else return x;      /* x is integral */
    } else {
        i = ((unsigned)(0xffffffff))>>(j0-20);
        if((i1&i)==0) return x; /* x is integral */
        i>>=1;
        if((i1&i)!=0) i1 = (i1&(~i))|((0x40000000)>>(j0-20));
    }
    __HI(x) = i0;
    __LO(x) = i1;
    w = TWO52[sx]+x;
    return w-TWO52[sx];
}
#endif /* _No_Floating_Point  */
```


