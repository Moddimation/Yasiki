

# File math\_config.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**math\_config.h**](math__config_8h.md)

[Go to the documentation of this file](math__config_8h.md)


```C++
#ifndef __math_config__
#define __math_config__

#include <msl_t.h>

                                            

#if __option(little_endian)
# define __HI(x)  ( sizeof(x)==8 ? *(1+(_INT32*)&x) : (*(_INT32*)&x))
# define __LO(x)  (*(_INT32*)&x)
# define __UHI(x) ( sizeof(x)==8 ? *(1+(_UINT32*)&x) : (*(_UINT32*)&x))
# define __ULO(x) (*(_UINT32*)&x)
#else
# define __LO(x)  ( sizeof(x)==8 ? *(1+(_INT32*)&x) : (*(_INT32*)&x))
# define __HI(x)  (*(_INT32*)&x)
# define __ULO(x) ( sizeof(x)==8 ? *(1+(_UINT32*)&x) : (*(_UINT32*)&x))
# define __UHI(x) (*(_UINT32*)&x)
#endif



extern float _inv_sqrtf(float x); /* implementation in sqrtf.c */
#if !__MIPS__
#define __float2int__(x)    (*(_INT32*)&x)
#define __int2float__(x)    (*(float*)&x)
#endif

/*
note the platform specific header below may contain actual inlined definitions of
the standard C functions they are therefore in namespace std
*/

#ifdef __cplusplus
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
#endif
#if __MIPS__
#  include <math_mips.h>
#elif __m56800__                                    
#  include <m56800_math.h>                          
#elif __m56300__                                    
#  include <m56300_math.h>  
#elif __POWERPC__
#  include <math_ppc.h>                     
#endif                                              
        
#ifdef __cplusplus
    #ifdef _MSL_USING_NAMESPACE
        }
    #endif
#endif

#endif
```


