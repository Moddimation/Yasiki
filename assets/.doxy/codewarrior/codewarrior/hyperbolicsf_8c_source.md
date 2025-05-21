

# File hyperbolicsf.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Single\_precision**](dir_ab405bb3c32ded2f1e51c032d5f75c27.md) **>** [**hyperbolicsf.c**](hyperbolicsf_8c.md)

[Go to the documentation of this file](hyperbolicsf_8c.md)


```C++
/*  Single precision hyperbolic functions tanh,sinh,cosh
    NOTE: these are just temporary implementations which will be rewritten.
*/
    
#include <math.h>
#include <float.h>



float sinhf( float arg)
{
    
    if(fabsf(arg) > FLT_EPSILON)
        return .5f*(expf(arg)- expf(-arg));
    else
     return arg ;       
}   

float coshf( float arg)
{
    return .5f*(expf(arg)+ expf(-arg));

}

float tanhf( float arg)
{
if(fabsf(arg) > FLT_EPSILON)    
    return 1.0f - 2.0f/(expf(2.0f*arg)+1.0f);
else
    return arg ;
}
```


