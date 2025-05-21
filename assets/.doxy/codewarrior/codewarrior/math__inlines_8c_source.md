

# File math\_inlines.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**math\_inlines.c**](math__inlines_8c.md)

[Go to the documentation of this file](math__inlines_8c.md)


```C++
//
// Math_Inlines.c
//

// Added for Nintendo since linking was not working
// when upgrading from an older MSL without the same
// inlines to the newer version where sqrt was inlined.

// When a function is made inline, the previous version
// of the function should be placed here, so that older
// versions of the library will link. Also, the header
// should have a #if !__option(dont_inline) that has
// the inline version of the function. If the user 
// is inlining, then the header version will be used.
// If not, this version will be used.
// swells on 06-26-00

#include <math.h>

double sqrt(double x)
{
  if(x > 0.0f)
 {

   double guess = __frsqrte(x);   // returns an approximation to    
   guess = .5*guess*(3.0 - guess*guess*x);  // now have 8 sig bits
   guess = .5*guess*(3.0 - guess*guess*x);  // now have 16 sig bits
   guess = .5*guess*(3.0 - guess*guess*x);  // now have 32 sig bits
   guess = .5*guess*(3.0 - guess*guess*x);  // now have > 53 sig bits
   return x*guess ;
 }
 else if ( x == 0 )
    return 0;
 else if ( x )
    return NAN;

    return INFINITY;
}

```


