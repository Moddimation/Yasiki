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
/*
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
*/
#ifndef _No_Floating_Point_Regs
#    if __LESS_ACCURATE_FP__

extern _INLINE float
sqrtf(float x)
{
    static const float _half = .5f;
    static const float _three = 3.0f;

    if (x > 0.0f)
    {
        float guess = (float)__frsqrte((double)x);            /* returns an approximation to	*/
        guess = _half * guess * (_three - guess * guess * x); /* now have 12 sig bits */
        guess = _half * guess * (_three - guess * guess * x); /* now have 24 sig bits */
        guess = _half * guess * (_three - guess * guess * x); /* now have 32 sig bits */
        guess = _half * guess * (_three - guess * guess * x); /* now have 32 sig bits */

        return x * guess;
    }
    return x;
}

#    else                                                     /* __LESS_ACCURATE_FP__ */
extern _INLINE float
sqrtf(float x)
{
    static const double _half = .5;
    static const double _three = 3.0;
    volatile float      y;

    if (x > 0.0f)
    {
        double guess = __frsqrte((double)x);                  /* returns an approximation to	*/
        guess = _half * guess * (_three - guess * guess * x); /* now have 12 sig bits */
        guess = _half * guess * (_three - guess * guess * x); /* now have 24 sig bits */
        guess = _half * guess * (_three - guess * guess * x); /* now have 32 sig bits */
        y = (float)(x * guess);
        return y;
    }
    return x;
}
#    endif                                                    /* __LESS_ACCURATE_FP__ */

extern _INLINE float
_inv_sqrtf(float x)
{
    if (x > 0.0f)
    {
        float guess = (float)__frsqrte((double)x);            /* returns an approximation to	*/
        guess = .5f * guess * (3.0f - guess * guess * x);     /* now have 8  sig bits */
        guess = .5f * guess * (3.0f - guess * guess * x);     /* now have 16 sig bits */
        guess = .5f * guess * (3.0f - guess * guess * x);     /* now have >24 sig bits		*/
        return guess;
    }
    else if (x)
    {
        return NAN;
    }

    return INFINITY;
}

extern _INLINE double
sqrt(double x)
{
    if (x > 0.0)
    {
        double guess = __frsqrte(x);                          /* returns an approximation to	*/
        guess = .5 * guess * (3.0 - guess * guess * x);       /* now have 8 sig bits			*/
        guess = .5 * guess * (3.0 - guess * guess * x);       /* now have 16 sig bits */
        guess = .5 * guess * (3.0 - guess * guess * x);       /* now have 32 sig bits */
        guess = .5 * guess * (3.0 - guess * guess * x);       /* now have > 53 sig bits		*/
        return x * guess;
    }
    else if (x == 0)
    {
        return 0;
    }
    else if (x)
    {
        return NAN;
    }

    return INFINITY;
}

#    ifdef __USING_INTRINSIC_FABS__
extern _INLINE double
fabs(double x)
{
    return __fabs(x);
}

#    endif                                                    /* __USING_INTRINSIC_FABS__ */
#else                                                         /* _No_Floating_Point_Regs */

#    ifdef __USING_IEEE_MATH__
extern _INLINE float sqrtf(float x)
{
	return (float)sqrt((double_t)x);
}
