

# File s\_logb.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_logb.c**](s__logb_8c.md)

[Go to the documentation of this file](s__logb_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)s_logb.c 1.2 95/01/04 */
/* $Id: s_logb.c,v 1.2.4.1 1999/12/06 19:47:31 fassiott Exp $ */
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
 * double logb(x)
 * IEEE 754 logb. Included to pass IEEE test suite. Not recommend.
 * Use ilogb instead.
 */

#include "fdlibm.h"

#ifdef __STDC__
    double logb(double x)
#else
    double logb(x)
    double x;
#endif
{
    int lx,ix;
    ix = (__HI(x))&0x7fffffff;  /* high |x| */
    lx = __LO(x);           /* low x */
    if((ix|lx)==0) return -1.0/fabs(x);
    if(ix>=0x7ff00000) return x*x;
    if((ix>>=20)==0)            /* IEEE 754 logb */
        return -1022.0; 
    else
        return (double) (ix-1023); 
}
#endif /* _No_Floating_Point  */
```


