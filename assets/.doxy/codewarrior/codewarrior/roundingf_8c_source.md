

# File roundingf.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Single\_precision**](dir_ab405bb3c32ded2f1e51c032d5f75c27.md) **>** [**roundingf.c**](roundingf_8c.md)

[Go to the documentation of this file](roundingf_8c.md)


```C++
#if !( __MIPS__ && __MIPS_ISA3__  && __MIPS_single_fpu__)

#include <math.h>
/*
 Author:  Matthew D. Fassiotto
 Date:    first written 4/15/99
 Purpose: non-optimal single precision version of standard ceil and floor functions
 Assumptions: --IEEE 754 single precision float format
     *fp difference should never produce -0
     *casting a float to an int always truncates regardless of fp rounding mode.
     *the type _INT32 is 32 bits(i.e. sizeof(_INT32)=sizeof(float)
*/

 /* ceilf--  returns smallest integer(as a float) not less than x(round x -> infinity)
    floorf-- returns largest integer(as a float) not greater than x(round x -> -infinity)
 */ 
extern float ceilf (float x)
            {
             _INT32 i=x;   
             float y=x-(float)i; 
             if((!__HI(y)) || (__HI(x)&0x7f800000) >= 0x4B800000) 
               return x ;               // x is already an int
             else if(__HI(x)&0x80000000)
                   return (float)i;                   
             return (float)++i;
            }       
            
extern float floorf(float x)
            {
             _INT32 i=x;               // signed int 
             float y=(float)i-x;       // since order of evaluation is NOT guaranteed
                                       // this is not guaranteed to work with all compilers for -0
                                       // I currently have no "cheap" work around to this.                          
                                       
             if((!__HI(y)) || (__HI(x)&0x7f800000) >= 0x4B800000) 
              return x ;               // x is already an int
             else if(__HI(x)&0x80000000) 
                   return (float)--i;  
                   // x < 0 -> int conversion of x above rounded toward zero(so decrement)                
             return (float)i;
            }

#endif /* !( __MIPS__ && __MIPS_ISA3__  && __MIPS_single_fpu__) */
```


