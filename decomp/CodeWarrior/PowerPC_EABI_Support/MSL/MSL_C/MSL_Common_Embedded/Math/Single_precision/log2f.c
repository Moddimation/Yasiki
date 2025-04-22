#if 0

#    ifndef __log2f__
#        define __log2f__
#        include <cmath>
#        ifndef __INFINITY
static const _INT32 _inf=0x7f800000;
#            define __INFINITY (*(float*)&_inf)

static const _INT32 _nan=0x7fffffff;
#            define __NAN      (*(float*)&_nan)
#        endif
#        pragma cplusplus on
#        if 0
#            if __cplusplus
namespace std
{
#            endif
extern inline float log2f(float x)
		{return (float)log2((double)x);}
#            if __cplusplus
}
#            endif
#            define __log2f log2f

#        else		

static const float __log2_F[]={
-3.75000000e-01, -3.63772745e-01, -3.52632187e-01, -3.41576998e-01, -3.30605881e-01, -3.19717564e-01,
-3.08910810e-01, -2.98184403e-01, -2.87537159e-01, -2.76967917e-01, -2.66475543e-01, -2.56058927e-01, 
-2.45716983e-01, -2.35448648e-01, -2.25252880e-01, -2.15128663e-01, -2.05074999e-01, -1.95090910e-01,
-1.85175441e-01, -1.75327655e-01, -1.65546634e-01, -1.55831480e-01, -1.46181310e-01, -1.36595261e-01, 
-1.27072487e-01, -1.17612157e-01, -1.08213459e-01, -9.88755947e-02, -8.95977811e-02, -8.03792511e-02,
-7.12192518e-02, -6.21170447e-02, -5.30719051e-02, -4.40831219e-02, -3.51499971e-02, -2.62718458e-02,
-1.74479954e-02, -8.67778575e-03,  3.94313469e-05,  8.70429247e-03, 1.73174228e-02, 2.58794363e-02, 
 3.43909361e-02,  4.28525149e-02,  5.12647547e-02,  5.96282276e-02, 6.79434958e-02, 7.62111118e-02, 
 8.44316186e-02,  9.26055501e-02,  1.00733431e-01,  1.08815777e-01, 1.16853096e-01, 1.24845887e-01, 
 1.32794640e-01,  1.40699838e-01,  1.48561956e-01,  1.56381461e-01, 1.64158811e-01, 1.71894460e-01, 
 1.79588852e-01,  1.87242424e-01,  1.94855608e-01,  2.02428828e-01, 2.09962501e-01, 2.17457037e-01, 
 2.24912842e-01,  2.32330314e-01,  2.39709844e-01,  2.47051819e-01, 2.54356620e-01, 2.61624621e-01, 
 2.68856190e-01,  2.76051691e-01,  2.83211483e-01,  2.90335917e-01, 2.97425342e-01, 3.04480100e-01, 
 3.11500527e-01,  3.18486957e-01,  3.25439718e-01,  3.32359132e-01, 3.39245518e-01, 3.46099189e-01, 
 3.52920455e-01,  3.59709620e-01,  3.66466986e-01,  3.73192850e-01, 3.79887502e-01, 3.86551232e-01, 
 3.93184325e-01,  3.99787060e-01,  4.06359714e-01,  4.12902559e-01, 4.19415866e-01, 4.25899900e-01, 
 4.32354922e-01,  4.38781191e-01,  4.45178962e-01,  4.51548487e-01, 4.57890014e-01, 4.64203788e-01, 
 4.70490051e-01,  4.76749041e-01,  4.82980995e-01,  4.89186145e-01, 4.95364720e-01, 5.01516947e-01, 
 5.07643049e-01,  5.13743249e-01,  5.19817763e-01,  5.25866808e-01, 5.31890596e-01, 5.37889336e-01, 
 5.43863237e-01,  5.49812504e-01,  5.55737338e-01,  5.61637939e-01, 5.67514505e-01, 5.73367232e-01, 
 5.79196310e-01,  5.85001932e-01,  5.90784285e-01,  5.96543554e-01, 6.02279923e-01, 6.07993575e-01, 
 6.13684687e-01,  6.19353437e-01,  6.25000000e-01, 
};


extern "C" const float  __one_over_F[];
 

inline float __log2f(float x) 
{
#            if !__LOG2_FOR_POWONLY
switch( (*(_INT32*)&x)&0x7f800000 )
  {
  default:
   {
#            endif   
   //#define __log2e_m1 .44269504888963f
    static const float __log2e_m1[2]={.41015625f,0.03253879088896f}; 
    _UINT32 e;
    const float __log2_poly[2]={-.7213516327f,.4808933270f};
    const _INT32 exp=((*(_UINT32*)&x)>>23)  - 128;
    float q, u;
    float z;
    _UINT32 index=((*(_UINT32*)&x)&0x007fffff)>>16;

#            if __INTEL__&& __option(k63d)
   const _INT32 table_address=4*index;
   asm
    {   
     mov eax, table_address
     prefetch __log2_F[eax]
     prefetch __one_over_F[eax]
    }

#            endif
   
    if((*(_UINT32*)&x)&0x0000ffff)                                //numbers w/no low order bits are 
     {                                                           // already precalculated in __log2_F[]  
      e=((*(_UINT32*)&x)&0x007f0000) | 0x3f800000;               // trailing bits are truncated
      *(_UINT32*)&z=((*(_UINT32*)&x)&0x007fffff) | 0x3f800000;  //  z is x scaled into [1.0,2.0]
      if((*(_UINT32*)&x)&0x00008000)  
       {
        index++;  // scaled x is in right half of interval
        *(_UINT32*)&e+=0x00010000;
       }
      u=z - *(float*)&e;                 // |u| < 2^^-8
      u*=__one_over_F[index];
      q=u*u*(__log2_poly[0]+(u*__log2_poly[1]));
      return ((float)exp + 1.375f)+ (__log2_F[index] + (u+ (__log2e_m1[0]*u + (__log2e_m1[1]*u +q)))); //1.31288296e+00
    }
    else 
    {
	 return ((float)exp + 1.375f) + __log2_F[index];
	}
   }  // either the end of the function or the default case depending on whether the macro below is defined
#            if !__LOG2_FOR_POWONLY   
case 0x7f800000:
   {
    if((*(_INT32*)&x)&0x007fffff) 
     return x;
    else 
    {
     if((*(_INT32*)&x)&0x80000000) 
      return __NAN;
     else
      return __INFINITY;
    }
   }
  case 0:  // will fix for denormals later
    return -__INFINITY ;
   
  }//end of switch
 }  //end log2f
#            endif // __LOG2_FOR_POWONLY

#            if !__LOG2_FOR_POWONLY
#                pragma cplusplus off
extern  float log2f(float x)
{ 
 return __log2f(x); 
}
#                pragma cplusplus reset
#            endif
#            pragma cplusplus reset

#        endif     // #ifdef for inline implementation(for comparing double log2)
#    endif         // prevents header from including > 1 time

#endif
