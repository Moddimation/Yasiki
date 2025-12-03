

# File w\_asin.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**w\_asin.c**](w__asin_8c.md)

[Go to the documentation of this file](w__asin_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)w_asin.c 1.2 95/01/04 */
/* $Id: w_asin.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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

/* 
 * wrapper asin(x)
 */


#include "fdlibm.h"


#ifdef __STDC__
    double asin(double x)       /* wrapper asin */
#else
    double asin(x)          /* wrapper asin */
    double x;
#endif
{
#ifdef _IEEE_LIBM
    return __ieee754_asin(x);
#else
    double z;
    z = __ieee754_asin(x);
    if(_LIB_VERSION == _IEEE_ || isnan(x)) return z;
    if(fabs(x)>1.0) {
            return __kernel_standard(x,x,2); /* asin(|x|>1) */
    } else
        return z;
#endif
}
#endif /* _No_Floating_Point  */
```


