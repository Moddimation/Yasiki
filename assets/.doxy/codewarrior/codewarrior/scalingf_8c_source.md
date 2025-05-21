

# File scalingf.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Single\_precision**](dir_ab405bb3c32ded2f1e51c032d5f75c27.md) **>** [**scalingf.c**](scalingf_8c.md)

[Go to the documentation of this file](scalingf_8c.md)


```C++
/*
   fully complies w/C9X Annex
   Author:  Matthew D. Fassiotto
   Date:    first written 4/15/99
   Purpose: single precision versions of standard frexp,ldexp functions
*/

/* 
ldexp:          
when underflow code is enabled this will return results identical to the exteneded precision 
fscale instruction on any x86 fpu 100% of the time.             
*/
#include <math.h>
float ldexpf(float x, _INT32 n)  
            {           
             _INT32 new_biased_exp = (0x7f800000&(*(_UINT32*)&x))>>23;
             // takes care of C9X inf/nan compliance and MUST be first to filter out these cases     
             switch((*(_INT32*)&x)&0x7f800000)  
              {
               case 0x7f800000:
                return x;         
                // takes care of nan and inf
                break;
               case 0:            
               // may be either 0 or subnormal
#ifdef __No_Gradual_Underflow__
                return 0.0f ;     
                // flush subnormal to zero(as if x was originally 0) and -0 -> 0
                break;
#else                                            
                if(!((*(_INT32*)&x)&0x007fffff)) 
                  return x;    // return only if x==0              
                 do
                  {
                      (*(_UINT32*)&x)= (*(_UINT32*)&x)<<1; //the more we shift the less significance
                      n-- ;
                    }
                   while(!((*(_UINT32*)&x)&0x00800000) ) ;                  
                // no break so we drop down, x is now guaranteed to be normal 
                // The multiplication of x and 2^^n may still produce a denormalized result               
#endif                 
              } // end of switch

           new_biased_exp+=n ; 
           switch(new_biased_exp)
            {
#ifndef __No_Gradual_Underflow__
             case 0:   //barely subnormal(only lowest bit will be lost)
              (*(_UINT32*)&x)=((0x00800000|(*(_UINT32*)&x)&0x007fffff)>>1) + 
              ((*(_UINT32*)&x)&0x80000000);
              return x;
              break;
#endif  
             case 255:  //infinity
              (*(_UINT32*)&x)=( (*(_UINT32*)&x)&0x80000000)|0x7f800000; 
              return x;             
              break;
             default:
              if(!(new_biased_exp&0xffffff00)) // for normal neither the sign bit(underflow) 
               {                               // nor any bit above 7(overflow) should be set
                                               // (255 or 0x000000ff is a full exponent)
                (*(_UINT32*)&x)=((*(_UINT32*)&x)&0x807fffff) + (((_UINT32)new_biased_exp)<<23);        
                return x ;                                                             
               }
               break;
            } 

              if(n > 0)//exponent has overflowed
               {              
                (*(_UINT32*)&x)=( (*(_UINT32*)&x)&0x80000000)|0x7f800000; 
                return x;           
               }
   
#ifdef __No_Gradual_Underflow__
               (*(_UINT32*)&x)=((*(_UINT32*)&x)&0x80000000);
                return x;         //result of x*2^^n is subnormal
#else
               if(new_biased_exp <= -24) 
                {
                 (*(_UINT32*)&x)=((*(_UINT32*)&x)&0x80000000);
                 return x;                                                         
                }                     
                new_biased_exp=(0xffffffff - (_UINT32)new_biased_exp + 1);                        
                (*(_UINT32*)&x)=((0x00800000|(*(_UINT32*)&x)&0x007fffff)>>(new_biased_exp+1)) + 
                ((*(_UINT32*)&x)&0x80000000);
                return x;
#endif                

}
   
float frexpf(float x, int* exp)
 {
  const  _INT32 tmp_int=0x3F000000 + ((*(_INT32*)&x)&0x807fffff);
  switch( (*(_INT32*)&x)&0x7f800000 )
  {
   case 0x7f800000:
   case 0:
    *exp=0;  // here if zero,inf,or nan
    return x;
    break;
  }
  
  *exp=(((*(_INT32*)&x)&0x7F800000)>>23)-126;
  return *((float*)&tmp_int);
 }
```


