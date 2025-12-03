

# File w\_exp.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**w\_exp.c**](w__exp_8c.md)

[Go to the documentation of this file](w__exp_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)w_exp.c 1.2 95/01/04 */
/* $Id: w_exp.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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
 * wrapper exp(x)
 */

#include "fdlibm.h"

#ifdef __STDC__
static const double
#else
static double
#endif
o_threshold=  7.09782712893383973096e+02,  /* 0x40862E42, 0xFEFA39EF */
u_threshold= -7.45133219101941108420e+02;  /* 0xc0874910, 0xD52D3051 */

#ifdef __STDC__
     double   exp(double x) /* wrapper pow */
#else
    double exp(x)           /* wrapper exp */
    double x;
#endif
{
#ifdef _IEEE_LIBM
    return __ieee754_exp(x);
#else
    double z;
    z = __ieee754_exp(x);
    if(_LIB_VERSION == _IEEE_) return z;
    if(isfinite(x)) {
        if(x>o_threshold)
            return __kernel_standard(x,x,6); /* exp overflow */
        else if(x<u_threshold)
            return __kernel_standard(x,x,7); /* exp underflow */
    } 
    return z;
#endif
}
#endif /* _No_Floating_Point  */
```


