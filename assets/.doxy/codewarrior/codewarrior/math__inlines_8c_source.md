

# File math\_inlines.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**math\_inlines.c**](math__inlines_8c.md)

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


