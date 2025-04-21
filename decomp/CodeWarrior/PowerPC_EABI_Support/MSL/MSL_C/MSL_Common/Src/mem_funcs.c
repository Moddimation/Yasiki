/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/30 20:15:27 $
 * $Revision: 1.20 $
 */

/*
 *	Routines
 *	--------
 *		__copy_longs_aligned
 *		__copy_longs_rev_aligned
 *		__copy_longs_unaligned
 *		__copy_longs_rev_unaligned
 *
 *		__fill_mem
 *
 *	Implementation
 *	--------------
 *		Specialized routines to copy memory by transferring longs and using
 *		unrolled loops whenever possible.
 *
 *		There are two pairs of routines.
 *
 *		One pair handles the cases where both the source and destination are
 *		mutually aligned, in which case it suffices to transfer bytes until they
 *		are long-aligned, then transfer longs, then finish up transferring any
 *		excess bytes.
 *
 *		The other pair handles the cases where the source and destination are not
 *		mutually aligned. The handling is similar but requires repeatedly
 *		assembling a destination long from two source longs.
 *
 *		Each pair consists of one routine to transfer bytes from first byte to last
 *		and another to transfer bytes from last byte to first. The latter should be
 *		used whenever the address of the source is less than the address of the
 *		destination in case they overlap each other.
 *
 *		There are also two routines here that effectively duplicate memcpy and
 *		memmove, so that these routines may be used without bringing in the entire
 *		StdLib.
 *
 *		Oh, and let's not forget __fill_mem, which fills memory a long at a time
 *		and in an unrolled loop whenever possible.
 *
 *
 */

#include "mem_funcs.h"

#pragma ANSI_strict off

#if !defined(__MOTO__) && !defined(__MIPS__)
#    define cps ((unsigned char *)src)
#    define cpd ((unsigned char *)dst)
#    define lps ((unsigned long *)src)
#    define lpd ((unsigned long *)dst)
#endif

#if !__POWERPC__
#    define deref_auto_inc(p) *(p)++
#else
#    define deref_auto_inc(p) *++(p)
#endif

void
__copy_mem(void *dst, const void *src, unsigned long n)
{
    const char *p;
    char       *q;

    if (n >= __min_bytes_for_long_copy)
    {
        if ((((int)dst ^ (int)src)) & 3)
        {
            __copy_longs_unaligned(dst, src, n);
        }
        else
        {
            __copy_longs_aligned(dst, src, n);
        }

        return;
    }
#if !__POWERPC__

    for (p = (const char *)src, q = (char *)dst, n++; --n;)
    {
        *q++ = *p++;
    }

#else

    for (p = (const char *)src - 1, q = (char *)dst - 1, n++; --n;)
    {
        *++q = *++p;
    }
#endif
}

void
__move_mem(void *dst, const void *src, unsigned long n)
{
    const char *p;
    char       *q;
    int         rev = ((unsigned long)src < (unsigned long)dst);

    if (n >= __min_bytes_for_long_copy)
    {
        if ((((int)dst ^ (int)src)) & 3)
        {
            if (!rev)
            {
                __copy_longs_unaligned(dst, src, n);
            }
            else
            {
                __copy_longs_rev_unaligned(dst, src, n);
            }
        }
        else if (!rev)
        {
            __copy_longs_aligned(dst, src, n);
        }
        else
        {
            __copy_longs_rev_aligned(dst, src, n);
        }

        return;
    }

    if (!rev)
    {
#if !__POWERPC__

        for (p = (const char *)src, q = (char *)dst, n++; --n;)
        {
            *q++ = *p++;
        }

#else

        for (p = (const char *)src - 1, q = (char *)dst - 1, n++; --n;)
        {
            *++q = *++p;
        }

#endif
    }
    else
    {
        for (p = (const char *)src + n, q = (char *)dst + n, n++; --n;)
        {
            *--q = *--p;
        }
    }
}

void
__copy_longs_aligned(void *dst, const void *src, unsigned long n)
{
#if (__MOTO__ || __MIPS__)
    unsigned char *cps = ((unsigned char *)src);
    unsigned char *cpd = ((unsigned char *)dst);
    unsigned long *lps = ((unsigned long *)src);
    unsigned long *lpd = ((unsigned long *)dst);
#endif

    unsigned long i;

    i = (-(unsigned long)dst) & 3;

#if __POWERPC__
    cps = ((unsigned char *)src) - 1;
    cpd = ((unsigned char *)dst) - 1;
#endif

    if (i)
    {
        n -= i;

        do
        {
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        } while (--i);
    }

#if __POWERPC__
    lps = ((unsigned long *)(cps + 1)) - 1;
    lpd = ((unsigned long *)(cpd + 1)) - 1;
#endif

    i = n >> 5;

    if (i)
    {
        do
        {
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        } while (--i);
    }

    i = (n & 31) >> 2;

    if (i)
    {
        do
        {
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        } while (--i);
    }

#if __POWERPC__
    cps = ((unsigned char *)(lps + 1)) - 1;
    cpd = ((unsigned char *)(lpd + 1)) - 1;
#endif

    n &= 3;

    if (n)
    {
        do
        {
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        } while (--n);
    }

    return;
}

void
__copy_longs_rev_aligned(void *dst, const void *src, unsigned long n)
{
#if (__MOTO__ || __MIPS__)
    unsigned char *cps = ((unsigned char *)src);
    unsigned char *cpd = ((unsigned char *)dst);
    unsigned long *lps = ((unsigned long *)src);
    unsigned long *lpd = ((unsigned long *)dst);
#endif
    unsigned long i;

    cps = ((unsigned char *)src) + n;
    cpd = ((unsigned char *)dst) + n;

    i = ((unsigned long)cpd) & 3;

    if (i)
    {
        n -= i;

        do
        {
            *--cpd = *--cps;
        } while (--i);
    }

    i = n >> 5;

    if (i)
    {
        do
        {
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
        } while (--i);
    }

    i = (n & 31) >> 2;

    if (i)
    {
        do
        {
            *--lpd = *--lps;
        } while (--i);
    }

    n &= 3;

    if (n)
    {
        do
        {
            *--cpd = *--cps;
        } while (--n);
    }

    return;
}

void
__copy_longs_unaligned(void *dst, const void *src, unsigned long n)
{
#if (__MOTO__ || __MIPS__)
    unsigned char *cps = ((unsigned char *)src);
    unsigned char *cpd = ((unsigned char *)dst);
    unsigned long *lps = ((unsigned long *)src);
    unsigned long *lpd = ((unsigned long *)dst);
#endif

    unsigned long i, v1, v2;
    unsigned int  src_offset, left_shift, right_shift;

    i = (-(unsigned long)dst) & 3;

#if __POWERPC__
    cps = ((unsigned char *)src) - 1;
    cpd = ((unsigned char *)dst) - 1;
#endif

    if (i)
    {
        n -= i;

        do
        {
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        } while (--i);
    }

#if !__POWERPC__
    src_offset = ((unsigned int)cps) & 3;
#else
    src_offset = ((unsigned int)(cps + 1)) & 3;
#endif

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    cps -= src_offset;

#if __POWERPC__
    lps = ((unsigned long *)(cps + 1)) - 1;
    lpd = ((unsigned long *)(cpd + 1)) - 1;
#endif

    i = n >> 3;

    v1 = deref_auto_inc(lps);

    do
    {
        v2 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v1 << left_shift) | (v2 >> right_shift);
        v1 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v2 << left_shift) | (v1 >> right_shift);
    } while (--i);

    if (n & 4)
    {
        v2 = deref_auto_inc(lps);
        deref_auto_inc(lpd) = (v1 << left_shift) | (v2 >> right_shift);
    }

#if __POWERPC__
    cps = ((unsigned char *)(lps + 1)) - 1;
    cpd = ((unsigned char *)(lpd + 1)) - 1;
#endif

    n &= 3;

    if (n)
    {
        cps -= 4 - src_offset;
        do
        {
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        } while (--n);
    }

    return;
}

void
__copy_longs_rev_unaligned(void *dst, const void *src, unsigned long n)
{
#if (__MOTO__ || __MIPS__)
    unsigned char *cps = ((unsigned char *)src);
    unsigned char *cpd = ((unsigned char *)dst);
    unsigned long *lps = ((unsigned long *)src);
    unsigned long *lpd = ((unsigned long *)dst);
#endif

    unsigned long i, v1, v2;
    unsigned int  src_offset, left_shift, right_shift;

    cps = ((unsigned char *)src) + n;
    cpd = ((unsigned char *)dst) + n;

    i = ((unsigned long)cpd) & 3;

    if (i)
    {
        n -= i;

        do
        {
            *--cpd = *--cps;
        } while (--i);
    }

    src_offset = ((unsigned int)cps) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    cps += 4 - src_offset;

    i = n >> 3;

    v1 = *--lps;

    do
    {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
        v1 = *--lps;
        *--lpd = (v1 << left_shift) | (v2 >> right_shift);
    } while (--i);

    if (n & 4)
    {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
    }

    n &= 3;

    if (n)
    {
        cps += src_offset;
        do
        {
            *--cpd = *--cps;
        } while (--n);
    }

    return;
}

#if ((!__PPC_EABI__) && !defined(__m56800__) && !defined(__m56800E__))
void
__fill_mem(void *dst, int val, unsigned long n)
{
#    if (__MOTO__ || __MIPS__)
    /*	unsigned char *	cps	= ((unsigned char *) src);	*/
    unsigned char *cpd = ((unsigned char *)dst);
    /*	unsigned long *	lps	= ((unsigned long *) src);	*/
    unsigned long *lpd = ((unsigned long *)dst);
#    endif

    unsigned long v = (unsigned char)val;
    unsigned long i;

#    if __POWERPC__
    cpd = ((unsigned char *)dst) - 1;
#    endif

    if (n >= 32)
    {
#    if __POWERPC__
        i = (~(unsigned long)dst) & 3;
#    else
        i = (-(unsigned long)dst) & 3;
#    endif
        if (i)
        {
            n -= i;

            do
            {
                deref_auto_inc(cpd) = v;
            } while (--i);
        }

        if (v)
        {
            v |= v << 24 | v << 16 | v << 8;
        }

#    if __POWERPC__
        lpd = ((unsigned long *)(cpd + 1)) - 1;
#    endif

        i = n >> 5;

        if (i)
        {
            do
            {
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
            } while (--i);
        }

        i = (n & 31) >> 2;

        if (i)
        {
            do
            {
                deref_auto_inc(lpd) = v;
            } while (--i);
        }

#    if __POWERPC__
        cpd = ((unsigned char *)(lpd + 1)) - 1;
#    endif

        n &= 3;
    }

    if (n)
    {
        do
        {
            deref_auto_inc(cpd) = v;
        } while (--n);
    }

    return;
}

#endif /* !__PPC_EABI__ */

#if defined(__m56800__) || defined(__m56800E__)
void
__fill_mem(void *dst, int val, unsigned long n)
{
    unsigned long v = (unsigned char)val;
    unsigned long i;

    if (n >= 32)
    {
        /*	asm(debug); */
        if (v)
        {
            v |= v << 16;
        }

        i = n >> 4;
        if (i)
        {
            do
            {
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
            } while (--i);
        }
        i = (n & 15) >> 1;

        if (i)
        {
            do
            {
                deref_auto_inc(lpd) = v;
            } while (--i);
        }

        n &= 1;
    }

    if (n)
    {
        do
        {
            deref_auto_inc(cpd) = v;
        } while (--n);
    }

    return;
}

#endif /* defined(__m56800__) */

       /* Change record:
        * JFH 951105 First code release.
        * JFH 960119 Fixed bug in the PowerPC version of __copy_longs_unaligned where
        *			  the destination address was being tested for alignment *after*
        *			  decrementing the address in preparation for pre-increment accesses.
        * JFH 960122 Added casts from (void *) for C++ compatibility.
        * JFH 960221 Fixed bug in __copy_longs_aligned analagous to the one in
        *			  __copy_longs_unaligned.
        * SCM 970710 Added support for __PPC_EABI__.
        * MEA 980308 In __fill_mem, changed i = (- (unsigned long) dst) & 3; to
        *									to i = (~ (unsigned long) dst) & 3;
        * mf  012699 undid change above outside of ppc.  It breaks other platforms badly.
        * US  991223 Changed #if (!__PPC_EABI__) to #if ((!__PPC_EABI__) && !defined(__m56800__)) in
        * 			  __fill_mem(). The __m56800__ version of __fill_mem() can be found below.
        */
