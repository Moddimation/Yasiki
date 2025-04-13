/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:39 $
 * $Revision: 1.23.4.1 $
 */

/*************************************************************************
*	Project...:	Draft Standard C9X Library								 *
*   Author..... Matthew D. Fassiotto                                     *
*	Purpose...:	to provide fast single precision overloads of the        *
*               standard C double functions in math.h 					 *			
*************************************************************************/

#ifndef _MSL_TGMATH_H
#define _MSL_TGMATH_H

#if __MACH__
	#warning The standard BSD headers do not have an equivalent tgmath.h header to #include
#else

#include <cmath>    /* has float overloads with same name as standard double version(e.g. float cos) */

#if (__dest_os != __mac_os)

#pragma cplusplus on

_MSL_BEGIN_NAMESPACE_STD	/*- cc 010409 -*/

	__inline   float exp  (float x) 
		{ return expf(x);}						
	__inline  float log  (float x) 
		{ return logf(x);}			
	__inline  float log10(float x) 
		{ return log10f(x); }
	__inline  float pow  (float x, float y) 
		{ return powf(x, y); }

	/* m.f. -- added required overloads	for pow w/integral second arguments */ 

	__inline double pow(double x, int y) 
		{return pow(x, (double)y);}	
	__inline float pow(float x, int y) 
		{return powf(x, (float)y);}							
	__inline long double pow(long double x, int y) 
		{return powl(x, (long double)y);}														
	__inline  float sqrt (float x) 
		{ return sqrtf(x); }
	__inline  float fabs(float x) 
		{ return fabsf(x); }
	__inline  float ceil (float x) 
		{ return ceilf(x);}					
	__inline  float floor(float x) 
		{ return floorf(x); }

/* ldexp: when underflow code is enabled this will return results identical to the exteneded precision 
fscale instruction on any x86 fpu 100% of the time. 			*/

	__inline  float ldexp(float x, _INT32 n)  
		{ return ldexpf( x,  n);}
	__inline  float frexp(float x, int* exp)
		{ return frexpf( x,  exp);}					
	__inline  float tan  (float x)
		{ return tanf(x);}			
	__inline  float acos (float x)
		{ return acosf(x);}
	__inline  float asin (float x)
		{ return asinf(x);}				
	__inline  float atan2(float x, float y)
		{ return atan2f(x, y);}
	__inline  float atan (float x)
		{ return atanf(x);}					
	__inline  float sin  (float x)
		{ return sinf(x); }		
	__inline  float cos  (float x)
		{ return cosf(x); }
	__inline  float cosh (float x)
		{ return coshf(x); }
	__inline  float sinh (float x)			
		{ return sinhf(x); }
	__inline  float tanh (float x)
		{ return tanhf(x); }
	__inline  float fmod (float x, float y)
		{ return fmodf(x,y); }

/* long double argument overloads, here we assume sizeof(double)=sizeof(long double)
 * as is currently the case except on 68K macos.*/

	__inline  long double acos(long double x)
		{return acosl(x);}
	__inline  long double asin(long double x)
		{return asinl(x);}
	__inline  long double atan(long double x)
		{return atanl(x);}
	__inline  long double atan2(long double y, long double x)
		{return atan2l(y, x);}
	__inline  long double cos(long double x)
		{return cosl(x);}
	__inline  long double sin(long double x)
		{return sinl(x);}
	__inline  long double tan(long double x)
		{return tanl(x);}
	__inline  long double cosh(long double x)
		{return coshl(x);}
	__inline  long double sinh(long double x)
		{return sinhl(x);}
	__inline  long double tanh(long double x)
		{return tanhl(x);}
    __inline  long double fmod(long double x, long double y)
		{return fmodl(x, y);}			
    __inline  long double ceil(long double x)
		{return ceill(x);}
    __inline  long double floor(long double x)
		{return floorl(x);}
    __inline  long double exp(long double x)
		{return expl(x);}
	__inline  long double frexp(long double x, int* exp)
		{return frexpl(x, exp);}
	__inline  long double ldexp(long double x, int exp)
		{return ldexpl(x, exp);}
	__inline  long double log(long double x)
		{return logl(x);}
	__inline  long double log10(long double x)
		{return log10l(x);}
	__inline  long double fabs(long double x)
		{return fabsl(x);}
	__inline  long double pow(long double x, long double y)
		{return powl(x, y);}
	__inline  long double sqrt(long double x)
		{return sqrtl(x);}			

_MSL_END_NAMESPACE_STD	/*- cc 010409 -*/

#pragma cplusplus reset

#endif /* __dest_os != __mac_os */

#endif /* __MACH__ */

#endif /* _MSL_TGMATH_H */

/* Change record:
 * mf  012799 including cmath instead of math.h per C++ standard,
 *            also added header to top of file
 * mf  021799 added faster version of ldexp, also added a complete
 *            set of int overloads for two argument functions
 * mf  031099 tgmath.h is a general C++ header-- let cmath turn on k6 calling convention
 * vss 990803 Clean up code a bit
 * mf  000416 removed dependency on cmath.
 * mf  000512 wrapped with #pragma cplusplus on ( cc )
 * hh  000519 wrapped in __dest_os != __mac_os.
 * JWW 001208 Added case for targeting Mach-O
 * cc  010409 updated defines to JWW new namespace macros
 */