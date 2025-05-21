

# File log10f.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Single\_precision**](dir_ab405bb3c32ded2f1e51c032d5f75c27.md) **>** [**log10f.c**](log10f_8c.md)

[Go to the documentation of this file](log10f_8c.md)


```C++
#include <math.h>
#  define  __ln2        0.69314718f
#  define  __log10_2    0.301029995664f  
#  define  __sqrt2_m1  .41421356237f                            

static const float _log10_poly[] = 
    {
     0.868588961f,
     0.289530878375f,
     0.173569242f,
     0.1307240643f
    };


float log10f( float x)
 {
  switch((*(_INT32*)&x)&0xff800000)
  {
   default:
   {

    float   __log10_sqrt2 = 0.150514997831990597606869447362247f;  
    //poly 2302--misses double result by > 1 ulp but < 2 ulp .0034% 
    float y,zsq;
    _INT32 exp,tmp;
    if((*(_INT32*)&x)&0x80000000)
      return NAN;
    exp = ((*(_UINT32*)&x) >> 23) - 126; 
    if((*(_INT32*)&x)&=0x007fffff)
       (*(_INT32*)&x)|= 0x3f000000;
    else
       return --exp* __log10_2;

    if( (*(_INT32*)&x) < 0x3F3504F3)              
        x+=__sqrt2_m1*x;
    else
       __log10_sqrt2=0.0f;    

     x = 1.0f -(2.0f/(x + 1.0f));
     zsq = x*x;
     y=(((_log10_poly[3]*zsq + _log10_poly[2])*zsq + 
          _log10_poly[1])*zsq + _log10_poly[0])*x;
     tmp= y;         //truncated toward zero
     y-=(float)tmp;
     return (exp*__log10_2 + tmp) + (y - __log10_sqrt2);
     break;
    }
  case 0x7f800000:
  case 0xff800000:
    if((*(_INT32*)&x)&0x007fffff) 
     return x;
    else 
    {
     if((*(_INT32*)&x)&0x80000000) 
      return NAN;
     else
      return INFINITY;
    }
    
  case 0:  // will fix for denormals later
  case 0x80000000:
    return -INFINITY ;
   
  }//end of switch
 }

```


