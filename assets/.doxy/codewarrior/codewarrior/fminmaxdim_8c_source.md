

# File fminmaxdim.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**fminmaxdim.c**](fminmaxdim_8c.md)

[Go to the documentation of this file](fminmaxdim_8c.md)


```C++
/* $Id: fminmaxdim.c,v 1.2.4.1 1999/12/06 19:47:53 fassiott Exp $ */

#ifndef _No_Floating_Point

#include "fdlibm.h"
#include <math.h>
double fmax ( double x, double y )
 {
 if(x >= y) return x;
 else if(x < y) return y;
 else
 { /* since x is neither ge or l y they are unordered */
  if(isnan(x)) return y;
  else return x;
  }
 }
double fmin ( double x, double y )
 {
 if(x >= y) return y;
 else if(x < y) return x;
 else
 { /* since x is neither ge or l y they are unordered */
  if(isnan(x)) return y;
  else return x;
  }
 }
double fdim ( double x, double y )
{
 if(x >= y) return (x-y);
 else if(x < y) return 0.0;
 else
 {
 if(isnan(x)) return x;
 else return y;
 }
}
#endif /* _No_Floating_Point */
```


