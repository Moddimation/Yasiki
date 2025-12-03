

# File w\_atan2.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**w\_atan2.c**](w__atan2_8c.md)

[Go to the documentation of this file](w__atan2_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)w_atan2.c 1.2 95/01/04 */
/* $Id: w_atan2.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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
 * wrapper atan2(y,x)
 */

#include "fdlibm.h"


#ifdef __STDC__
    double atan2(double y, double x)    /* wrapper atan2 */
#else
    double atan2(y,x)           /* wrapper atan2 */
    double y,x;
#endif
{
#ifdef _IEEE_LIBM
    return __ieee754_atan2(y,x);
#else
    double z;
    z = __ieee754_atan2(y,x);
    if(_LIB_VERSION == _IEEE_||isnan(x)||isnan(y)) return z;
    if(x==0.0&&y==0.0) {
            return __kernel_standard(y,x,3); /* atan2(+-0,+-0) */
    } else
        return z;
#endif
}
#endif /* _No_Floating_Point  */
```


