

# File s\_modf.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_modf.c**](s__modf_8c.md)

[Go to the documentation of this file](s__modf_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_modf.c 1.2 95/01/04 */
/* $Id: s_modf.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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
 * modf(double x, double *iptr) 
 * return fraction part of x, and return x's integral part in *iptr.
 * Method:
 *  Bit twiddling.
 *
 * Exception:
 *  No exception.
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double one = 1.0;
#else
static double one = 1.0;
#endif

#ifdef __STDC__
    double modf(double x, double *iptr)
#else
    double modf(x, iptr)
    double x,*iptr;
#endif
{
    int i0,i1,j0;
    unsigned i;
    i0 =  __HI(x);      /* high x */
    i1 =  __LO(x);      /* low  x */
    j0 = ((i0>>20)&0x7ff)-0x3ff;    /* exponent of x */
    if(j0<20) {         /* integer part in high x */
        if(j0<0) {          /* |x|<1 */
        __HIp(iptr) = i0&0x80000000;
        __LOp(iptr) = 0;        /* *iptr = +-0 */
        return x;
        } else {
        i = (0x000fffff)>>j0;
        if(((i0&i)|i1)==0) {        /* x is integral */
            *iptr = x;
            __HI(x) &= 0x80000000;
            __LO(x)  = 0;   /* return +-0 */
            return x;
        } else {
            __HIp(iptr) = i0&(~i);
            __LOp(iptr) = 0;
            return x - *iptr;
        }
        }
    } else if (j0>51) {     /* no fraction part */
        *iptr = x*one;
        __HI(x) &= 0x80000000;
        __LO(x)  = 0;   /* return +-0 */
        return x;
    } else {            /* fraction part in low x */
        i = ((unsigned)(0xffffffff))>>(j0-20);
        if((i1&i)==0) {         /* x is integral */
        *iptr = x;
        __HI(x) &= 0x80000000;
        __LO(x)  = 0;   /* return +-0 */
        return x;
        } else {
        __HIp(iptr) = i0;
        __LOp(iptr) = i1&(~i);
        return x - *iptr;
        }
    }
}
#endif /* _No_Floating_Point  */
```


