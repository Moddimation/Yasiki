

# File hyperbolicsf.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Single\_precision**](dir_e8afb2b224d923f9df254cf5acbdc830.md) **>** [**hyperbolicsf.c**](hyperbolicsf_8c.md)

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


