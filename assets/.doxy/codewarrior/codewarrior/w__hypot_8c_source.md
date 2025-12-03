

# File w\_hypot.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**w\_hypot.c**](w__hypot_8c.md)

[Go to the documentation of this file](w__hypot_8c.md)


```C++

#ifndef _No_Floating_Point  
/* @(#)w_hypot.c 1.2 95/01/04 */
/* $Id: w_hypot.c,v 1.2.4.1 1999/12/06 19:47:32 fassiott Exp $ */
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
 * wrapper hypot(x,y)
 */

#include "fdlibm.h"


#ifdef __STDC__
    double hypot(double x, double y)/* wrapper hypot */
#else
    double hypot(x,y)       /* wrapper hypot */
    double x,y;
#endif
{
#ifdef _IEEE_LIBM
    return __ieee754_hypot(x,y);
#else
    double z;
    z = __ieee754_hypot(x,y);
    if(_LIB_VERSION == _IEEE_) return z;
    if((!isfinite(z))&&isfinite(x)&&isfinite(y))
        return __kernel_standard(x,y,4); /* hypot overflow */
    else
        return z;
#endif
}
#endif /* _No_Floating_Point  */
```


