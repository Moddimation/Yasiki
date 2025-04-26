
#include <cmath>
static const _INT32 _inf = 0x7f800000;
#define __INFINITY (*(float*)&_inf)

static const _INT32 _nan = 0x7fffffff;
#define __NAN (*(float*)&_nan)
const extern float __one_over_F[];
extern const float __ln_F[];
#define __ln2 .6931471806f
float
logf(float x)
{
    switch ((*(_INT32*)&x) & 0x7f800000)
    {
        default:
            {
                _UINT32      e;
                const float  z;
                const float  __log_poly[2] = { -.50000285f, .333329854f };
                const _INT32 exp = ((*(_UINT32*)&x) >> 23) - 127;
                float        q, u;
                _UINT32      index = ((*(_UINT32*)&x) & 0x007fffff) >> 16;

#if __INTEL__ && __option(k63d)
                const _INT32 table_address = 4 * index;
                asm
                {   
    mov eax, table_address
    prefetch __ln_F[eax]
    prefetch __one_over_F[eax]
                }

#endif

                if ((*(_UINT32*)&x) & 0x0000ffff)
                {
                    e = ((*(_UINT32*)&x) & 0x007f0000) |
                        0x3f800000; // trailing bits are truncated
                    *(_UINT32*)&z = ((*(_UINT32*)&x) & 0x007fffff) | 0x3f800000;
                    if ((*(_UINT32*)&x) & 0x00008000)
                    {
                        index++;    // scaled x is in right half of interval
                        *(_UINT32*)&e += 0x00010000;
                    }
                    u = z - *(float*)&e;
                    u *= __one_over_F[index];
                    q = u * u * (__log_poly[0] + (u * __log_poly[1]));
                    return (exp * __ln2 + __ln_F[index]) + (u + q);
                }
                else return (exp * __ln2) + __ln_F[index];
            }
        case 0x7f800000:
            {
                if ((*(_INT32*)&x) & 0x007fffff)
                {
                    return x;
                }
                else
                {
                    if ((*(_INT32*)&x) & 0x80000000)
                    {
                        return __NAN;
                    }
                    else
                    {
                        return __INFINITY;
                    }
                }
            }
        case 0:                     // will fix for denormals later
            return -__INFINITY;

    } // end of switch
}
