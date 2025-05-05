/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/12 14:43:00 $
 * $Revision: 1.37 $
 */

/*	Functions:
 *	---------
 *		parse_format
 *		long2str
 *		longlong2str
 *		double2hex
 *		round_decimal
 *		float2str
 *		__pformatter
 *		__FileWrite
 *		__StringWrite
 *
 *
 *	Routines
 *	--------
 *
 *		vfprintf
 *		fprintf
 *
 *		vprintf
 *		printf
 *
 *		vsprintf
 *      vsnprintf
 *		sprintf
 *		snprintf
 *
 *
 */

#include <ansi_fp.h>
#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>           /*- mm 990325 -*/
#include <string.h>

#include "critical_regions.h" /*- mm 001013 -*/

#define conversion_buff_size 512
#define conversion_max       509
#define bad_conversion       0xFF

/* JUSTIFICATION_OPTIONS: formats output to left justified, right justified and zero
 * fill (no justification) */
enum justification_options
{
    left_justification,
    right_justification,
    zero_fill
};

/* SIGN OPTIONS: Sign of what? */
enum sign_options
{
    only_minus,
    sign_always,
    space_holder
};

/* ARGUMENT_OPTIONS: Determines what type will be defined */
enum argument_options
{
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
#ifdef __MSL_LONGLONG_SUPPORT__       /*- mm 961219 -*/
    long_long_argument,               /*- mm 961219 -*/
#endif /* __MSL_LONGLONG_SUPPORT__ */ /*- mm 961219 -*/
    long_double_argument
#if __ALTIVEC__
        ,
    vector_argument
#endif                                /* __ALTIVEC__ */
#ifndef __NO_WIDE_CHAR                /*- mm 990325 -*/
        ,
    wchar_argument                    /*- mm 990325 -*/
#endif                                /* __NO_WIDE_CHAR */
};
#if __ALTIVEC__
/* depends on the implementation of va_arg */
#if !__VEC__
#define vec_va_arg(ap)                                                                             \
    (*(((MWVector128*)(ap = (char*)((((unsigned long)ap + 15) & ~(15)) + 16))) - 1))
#define va_arg_replacement1(ap, vec_val) (vec_val = vec_va_arg (ap))
#endif /* !__VEC__ */
/* METROWERKS 128 BIT VECTOR: Not sure what this is going to be used for */
union MWVector128      /* used to get at the vec field values 				*/
{
#if __VEC__
    __vector unsigned char  vuc;
    __vector signed char    vsc;
    __vector bool char      vbc;
    __vector unsigned short vus;
    __vector signed short   vss;
    __vector unsigned long  vul;
    __vector signed long    vsl;
    __vector float          vf;
    __vector pixel          vp;
#endif                 /* __VEC__ */
    unsigned char  u8[16];
    signed char    s8[16];
    unsigned short u16[8];
    signed short   s16[8];
    unsigned long  u32[4];
    signed long    s32[4];
    float          f32[4];
};
typedef union MWVector128 MWVector128;
#endif                 /* __ALTIVEC__ */
#define MAX_SIG_DIG 32 /*- mm 970609 -*/

/* PRINT_FORMAT: Define a new type called Print_Format, this type is of the form
 * struct and will be used ... where */
typedef struct
{
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int           field_width;
    int           precision;
#if __ALTIVEC__
    int   vecCount;          /* number of vector fields to convert (4, 8, 16) 		*/
    char* vecSeperator;      /* separator string to insert between vector fields 	*/
    char* c_vecSeperator;    /* separator string to use for %c vector conversion    */
    int   vecSepLen;         /* length of *vecSeperator or *c_vecSeperator string	*/
    int   useSepString;      /* @ -- asking for a separator string instead of char	*/
    int   fbad;              /* used to control standard flags parsing				*/
    int   vecwidth, vecprec; /* width and prec value before each conversion */
    int   useVecDefault;     /* default to "appropriate" vec access if none specified*/
    int   flagAllowed;       /* true means a flag is still possible					*/

    enum                     /* state of vector formatting parse... 					*/
    {
        FLAG_OR_Vcode_OK,    /*   initial state: sep flag or 'v' code allowed */
        Vcode_REQUIRED,      /*   set to this state when sep flag seen  reqiring 'v'	*/
        FLAG_OR_Vcode_NOT_OK /*   set this state when 'v' code qualifier seen */
    } vec_state;

    enum                     /* how to access vector fields (as chars,shorts,longs)	*/
    {
        U8,
        U16,
        U32
    } vec_access;
#endif                       /* __ALTIVEC__ */
} print_format;

/* PARSE_FORMAT: Big function, need to parse the format so appropriate types,
 * precision, and formatting are used */
static const char*
parse_format (const char* format_string, va_list* arg, print_format* format)
{
    print_format f;
    const char*  s = format_string;
    int          c;
    int          flag_found;

    f.justification_options = right_justification;
    f.sign_options = only_minus;
    f.precision_specified = 0;
    f.alternate_form = 0;
    f.argument_options = normal_argument;
    f.field_width = 0;
    f.precision = 0;

    if ((c = *++s) == '%')
    {
        f.conversion_char = c;
        *format = f;
        return ((const char*)s + 1);
    }

#if __ALTIVEC__
    f.vec_state = FLAG_OR_Vcode_OK;
    f.vecSeperator = " ";
    f.c_vecSeperator = "";
    f.vecSepLen = 1;
getFlags:
    f.useSepString = 0;
#endif /* __ALTIVEC__ */

    for (;;)
    {
        flag_found = 1;

        switch (c)
        {
            case '-':
                f.justification_options = left_justification;
                break;

            case '+':
                f.sign_options = sign_always;
                break;

            case ' ':

                if (f.sign_options != sign_always)
                {
                    f.sign_options = space_holder;
                }

                break;

            case '#':
                f.alternate_form = 1;
                break;

            case '0':

                if (f.justification_options != left_justification)
                {
                    f.justification_options = zero_fill;
                }

                break;
#if __ALTIVEC__
            case '@':

                if (f.vec_state == FLAG_OR_Vcode_OK)
                {
                    f.useSepString = 1;
                    break;
                }
                /* fall through */
#endif                    /* __ALTIVEC__ */
            default:
                flag_found = 0;
        }

        if (flag_found)
        {
#if __ALTIVEC__
            f.c_vecSeperator = (char*)s;
            f.vecSepLen = 1;
#endif                    /* __ALTIVEC__ */
            c = *++s;
        }
        else
        {
            break;
        }
    }

#if __ALTIVEC__
    if (f.useSepString)
    {
        f.vecSeperator = va_arg (*arg, char*);
        f.vecSepLen = strlen (f.vecSeperator);
    }
#endif                    /* __ALTIVEC__ */

    if (c == '*')
    {
        if ((f.field_width = va_arg (*arg, int)) < 0)
        {
            f.justification_options = left_justification;
            f.field_width = -f.field_width;
        }

        c = *++s;
    }
    else
    {
        while (isdigit (c))
        {
            f.field_width = (f.field_width * 10) + (c - '0');
            c = *++s;
        }
    }

    if (f.field_width > conversion_max)
    {
        f.conversion_char = bad_conversion;
        *format = f;
        return ((const char*)s + 1);
    }

    if (c == '.')
    {
        f.precision_specified = 1;

        if ((c = *++s) == '*')
        {
            if ((f.precision = va_arg (*arg, int)) < 0)
            {
                f.precision_specified = 0;
            }

            c = *++s;
        }
        else
        {
            while (isdigit (c))
            {
                f.precision = (f.precision * 10) + (c - '0');
                c = *++s;
            }
        }
    }

    flag_found = 1;

#if __ALTIVEC__
    f.useVecDefault = 1;  /* use vec default access if none specified below 	*/

    if (c == 'v')
    {                     /* allow 'v' to qualify length or format code 		*/
        f.vec_state = FLAG_OR_Vcode_NOT_OK;
        f.argument_options = vector_argument;
        c = *++s;
    }
#endif                    /* __ALTIVEC__ */

    switch (c)
    {
        case 'h':

#if __ALTIVEC__
            if (f.argument_options == normal_argument)
            {
                f.argument_options = short_argument;
            }
            f.vecCount = 8;
            f.vec_access = U16;
            f.useVecDefault = 0;
#else
            f.argument_options = short_argument;
#endif                    /* __ALTIVEC__ */

            if (s[1] == 'h')
            {
                f.argument_options = char_argument;
                c = *++s; /* move past second h */
            }
#if __ALTIVEC__
            else if (s[1] == 'v')
            {
                if (f.vec_state != FLAG_OR_Vcode_NOT_OK)
                {
                    f.vec_state = FLAG_OR_Vcode_NOT_OK;
                    f.argument_options = vector_argument;
                    c = *++s;
                }
            }
#endif                    /* __ALTIVEC__ */

            break;

        case 'l':

#if __ALTIVEC__
            if (f.argument_options == normal_argument)
            {
                f.argument_options = long_argument;
            }
            f.vecCount = 4;
            f.vec_access = U32;
            f.useVecDefault = 0;
            if (s[1] == 'v')
            {
                if (f.vec_state != FLAG_OR_Vcode_NOT_OK)
                {
                    f.vec_state = FLAG_OR_Vcode_NOT_OK;
                    f.argument_options = vector_argument;
                    c = *++s;
                }
            }
#else
            f.argument_options = long_argument;
#endif                    /* __ALTIVEC__ */

#ifdef __MSL_LONGLONG_SUPPORT__
            if (s[1] == 'l')
            {
                f.argument_options = long_long_argument;
                c = *++s; /* move past second l */
#if __ALTIVEC__
                f.vec_state = FLAG_OR_Vcode_NOT_OK;
#endif                    /* __ALTIVEC__ */
            }
#endif                    /* __MSL_LONGLONG_SUPPORT__ */

            break;

        case 'L':
            f.argument_options = long_double_argument;
#if __ALTIVEC__
            f.vec_state = FLAG_OR_Vcode_NOT_OK;
#endif                    /* __ALTIVEC__ */

            break;

        default:
            flag_found = 0;
    }

    if (flag_found)
    {
        c = *++s;
    }

#if __ALTIVEC__
    if (f.vec_state == Vcode_REQUIRED && f.argument_options != vector_argument)
    {
        f.conversion_char = bad_conversion;
        *format = f;
        return s;
    }
#endif                    /* __ALTIVEC__ */

    f.conversion_char = c;

    switch (c)
    {
        case 'd':
        case 'i':
        case 'u':
        case 'o':
        case 'x':
        case 'X':
#if __ALTIVEC__
            if (f.argument_options != vector_argument)
#endif                    /* __ALTIVEC__ */
                if (f.argument_options == long_double_argument)
                {
                    f.conversion_char = bad_conversion; /*- mm 961219 -*/
                    break;                              /*- mm 961219 -*/
                }

            if (!f.precision_specified)
            {
                f.precision = 1;
            }
            else if (f.justification_options == zero_fill)
            {
                f.justification_options = right_justification;
            }

            break;

        case 'f':
        case 'F':                                       /*- mm 990430 -*/
#if __ALTIVEC__
            if (f.argument_options != vector_argument)
#endif                                                  /* __ALTIVEC__ */
                /* if (f.argument_options == short_argument || f.argument_options ==
                 * long_argument) */
                if (f.argument_options == short_argument
#ifdef __MSL_LONGLONG_SUPPORT__
                    || f.argument_options == long_long_argument
#endif                /* __MSL_LONGLONG_SUPPORT__ */
                    ) /*  defacto standard %lf is a double */
                {
                    f.conversion_char = bad_conversion;
                    break;
                }

            if (!f.precision_specified)
            {
                f.precision = 6;
            }

            break;

                      /*- mm 990722 -*/
        case 'a':
        case 'A':
            if (!f.precision_specified)
            {
                f.precision = 13;
            }
            if (f.argument_options == short_argument
#ifdef __MSL_LONGLONG_SUPPORT__
                || f.argument_options == long_long_argument
#endif
                || f.argument_options == char_argument)
            {
                f.conversion_char = bad_conversion;
            }
            break;
            /*- mm 990722 -*/

        case 'g':
        case 'G':

            if (!f.precision)
            {
                f.precision = 1;
            }

        case 'e':
        case 'E':
#if __ALTIVEC__
            if (f.argument_options != vector_argument)
#endif                                                      /* __ALTIVEC__ */
                if (f.argument_options == short_argument
#ifdef __MSL_LONGLONG_SUPPORT__
                    || f.argument_options == long_long_argument
#endif                                                      /* __MSL_LONGLONG_SUPPORT__ */
                    || f.argument_options == char_argument) /*- mm 990208 -*/
                {
                    f.conversion_char = bad_conversion;
                    break;
                }

            if (!f.precision_specified)
            {
                f.precision = 6;
            }

            break;

        case 'p':
#if 0
			f.argument_options = long_argument;
			f.alternate_form   = 1;
			f.conversion_char  = 'x';
			f.precision        = 8;
#else
            f.conversion_char = 'x';
            f.alternate_form = 1;
#if __ALTIVEC__
            if (f.argument_options != vector_argument)
            {
                f.argument_options = long_argument;
                f.precision = 8;
            }
            else
            {
                f.precision = 1;
            }

/* dsp56800x uses 16-bit pointers*/
#elif __dest_os == __m56800_os || __dest_os == __m56800E_os

            f.argument_options = short_argument;
            f.precision = 4;

#else

            f.argument_options = long_argument;
            f.precision = 8;

#endif

#endif
            break;

        case 'c':
#if __ALTIVEC__
            if (f.argument_options != vector_argument)
#endif                                                     /* __ALTIVEC__ */
#ifndef __NO_WIDE_CHAR
                if (f.argument_options == long_argument)   /*- mm 990325 -*/
                {
                    f.argument_options = wchar_argument;   /*- mm 990325 -*/
                }
                else                                       /*- mm 990325 -*/
#endif /* __NO_WIDE_CHAR */                                /*- mm 990325 -*/
                    if (f.precision_specified || f.argument_options != normal_argument)
                    {
                        f.conversion_char = bad_conversion;
                    }

            break;

        case 's':
#if __ALTIVEC__
            if (f.argument_options == vector_argument)
            {
                f.argument_options = normal_argument;
            }
            else
#endif                                                     /* __ALTIVEC__ */
#ifndef __NO_WIDE_CHAR
                if (f.argument_options == long_argument)   /*- mm 990325 -*/
                f.argument_options = wchar_argument;       /*- mm 990325 -*/
            else                                           /*- mm 990325 -*/
#endif /* __NO_WIDE_CHAR */                                /*- mm 990325 -*/
                if (f.argument_options != normal_argument) /*- mm 990325 -*/
                {
                    f.conversion_char = bad_conversion;
                }

            break;

        case 'n':

            if (f.argument_options == long_double_argument)
            {
                f.conversion_char = bad_conversion;        /*- mm 961219 -*/
            }

            break;

        default:
#if __ALTIVEC__
            if (f.vec_state == FLAG_OR_Vcode_OK)
            {
                f.vec_state = Vcode_REQUIRED;
                f.vecSeperator = f.c_vecSeperator = (char*)s;
                f.vecSepLen = 1;
                c = *++s;
                goto getFlags;
            }
#endif                                                     /* __ALTIVEC__ */

            f.conversion_char = bad_conversion;

            break;
    }

#if __ALTIVEC__
    f.vecprec = f.precision; /* save original prec/width for vec conversions  	*/
    f.vecwidth = f.field_width;
#endif                       /* __ALTIVEC__ */

    *format = f;

    return ((const char*)s + 1);
}

/* LONG2STRING: */
static char*
long2str (long num, char* buff, print_format format)
{
    unsigned long unsigned_num, base;
    char*         p;
    int           n, digits;
    int           minus = 0;

    unsigned_num = num;
    minus = 0;

    p = buff;

    *--p = 0;

    digits = 0;

    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o'))
    {
        return (p);
    }

    switch (format.conversion_char)
    {
        case 'd':
        case 'i':

            base = 10;

            if (num < 0)
            {
                unsigned_num = -unsigned_num;
                minus = 1;
            }

            break;

        case 'o':

            base = 8;

            format.sign_options = only_minus;

            break;

        case 'u':

            base = 10;

            format.sign_options = only_minus;

            break;

        case 'x':
        case 'X':

            base = 16;

            format.sign_options = only_minus;

            break;
    }

    do {
        n = unsigned_num % base;

        unsigned_num /= base;

        if (n < 10)
        {
            n += '0';
        }
        else
        {
            n -= 10;

            if (format.conversion_char == 'x')
            {
                n += 'a';
            }
            else
            {
                n += 'A';
            }
        }

        *--p = n;

        ++digits;
    }
    while (unsigned_num != 0);

    if (base == 8 && format.alternate_form && *p != '0')
    {
        *--p = '0';
        ++digits;
    }

    if (format.justification_options == zero_fill)
    {
        format.precision = format.field_width;

        if (minus || format.sign_options != only_minus)
        {
            --format.precision;
        }

        if (base == 16 && format.alternate_form)
        {
            format.precision -= 2;
        }
    }

    if (buff - p + format.precision > conversion_max)
    {
        return (NULL);
    }

    while (digits < format.precision)
    {
        *--p = '0';
        ++digits;
    }

    if (base == 16 && format.alternate_form)
    {
        *--p = format.conversion_char;
        *--p = '0';
    }

    if (minus)
    {
        *--p = '-';
    }
    else if (format.sign_options == sign_always)
    {
        *--p = '+';
    }
    else if (format.sign_options == space_holder)
    {
        *--p = ' ';
    }

    return (p);
}

/* LONGLONG2STRING: */
#ifdef __MSL_LONGLONG_SUPPORT__ /*- mm 961219 -*/
static char*
longlong2str (long long num, char* buff, print_format format)
{
    unsigned long long unsigned_num, base;
    char*              p;
    int                n, digits;
    int                minus = 0;

    unsigned_num = num;
    minus = 0;

    p = buff;

    *--p = 0;

    digits = 0;

    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o'))
    {
        return (p);
    }

    switch (format.conversion_char)
    {
        case 'd':
        case 'i':

            base = 10;

            if (num < 0)
            {
                unsigned_num = -unsigned_num;
                minus = 1;
            }

            break;

        case 'o':

            base = 8;

            format.sign_options = only_minus;

            break;

        case 'u':

            base = 10;

            format.sign_options = only_minus;

            break;

        case 'x':
        case 'X':

            base = 16;

            format.sign_options = only_minus;

            break;
    }

    do {
        n = unsigned_num % base;

        unsigned_num /= base;

        if (n < 10)
        {
            n += '0';
        }
        else
        {
            n -= 10;

            if (format.conversion_char == 'x')
            {
                n += 'a';
            }
            else
            {
                n += 'A';
            }
        }

        *--p = n;

        ++digits;
    }
    while (unsigned_num != 0);

    if (base == 8 && format.alternate_form && *p != '0')
    {
        *--p = '0';
        ++digits;
    }

    if (format.justification_options == zero_fill)
    {
        format.precision = format.field_width;

        if (minus || format.sign_options != only_minus)
        {
            --format.precision;
        }

        if (base == 16 && format.alternate_form)
        {
            format.precision -= 2;
        }
    }

    if (buff - p + format.precision > conversion_max)
    {
        return (NULL);
    }

    while (digits < format.precision)
    {
        *--p = '0';
        ++digits;
    }

    if (base == 16 && format.alternate_form)
    {
        *--p = format.conversion_char;
        *--p = '0';
    }

    if (minus)
    {
        *--p = '-';
    }
    else if (format.sign_options == sign_always)
    {
        *--p = '+';
    }
    else if (format.sign_options == space_holder)
    {
        *--p = ' ';
    }

    return (p);
}
#endif                          /*__MSL_LONGLONG_SUPPORT__*/

/*- DOUBLE TO HEX -*/
#if !__MC68K__
/*- mm 990722 -*/ /*/ - mm 000414 -*/ /*- PMK 010703 -*/
static char*
double2hex (long double num, char* buff, print_format format)
{ /* num = fp#, buff = ascii representation of fp#, format = formating of the number,
     i.e. %a */
#if __option(little_endian) && __dest_os == __win32_os /*- variables, X-86 specific -*/
    int   offset, what_nibble = 0; /* offset=max precision possible, what_nibble refers
                                      to high and low order nibble of working_byte */
    char* wrk_byte_ptr;            /* pointer to portion of fp# to be manipulated */
#endif                             /* __option (little_endian) */
                                   /*- variables, Common-*/
    char *       p, *q;        /* p points to char array that will be the ascii representation of
                                  fp #, q points to fp# */
    char         working_byte; /* temporary space to manipulate the fp# as a character */
    long double  ld;   /* ld is an internal variable, set equal to the floating point number */
    short*       sptr; /* sptr will point to the high order bits of the fp #, later it is
                          masked to extract the exponent from the fp # */
    short        snum; /* snum is an intermediate value used to calculate the exponent */
    long         exp;  /* is the exponent of the fp # */
    print_format exp_format;
    int          hex_precision; /* hex_precision is used as a limit for the loop that writes
                                   the ascii fp# */
    decform      form;
    decimal      dec;

    p = buff;                   /* p will be the ascii representation of the fp # */
    ld = num;
    sptr = (short*)&ld;

    if (format.precision > conversion_max) /*- STEP#1: Check if conversion is even going to work -*/
    {
        return (NULL);                     /* might as well punt asap */
    }
    form.style = FLOATDECIMAL;
    form.digits = MAX_SIG_DIG;
    __num2dec (&form, num, &dec);

#if __option(little_endian) && __dest_os == __win32_os /*- STEP#2: check for INFINITY or NAN -*/
    if (*dec.sig.text == 'I')                          /*- LITTLE ENDIAN VERSION (X-86) -*/
    {                                                  /*INFINITY*/
        if (*(long long*)sptr & 0x8000000000000000)
        {
            p = buff - 5;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "-INF");
            }
            else
            {
                strcpy (p, "-inf");
            }
        }
        else
        {
            p = buff - 4;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "INF");
            }
            else
            {
                strcpy (p, "inf");
            }
        }
        return (p);
    }
    /*NAN*/
    else if (*dec.sig.text == 'N')
    {
        if (*(long long*)sptr & 0x8000000000000000)
        {
            p = buff - 5;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "-NAN");
            }
            else
            {
                strcpy (p, "-nan");
            }
        }
        else
        {
            p = buff - 4;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "NAN");
            }
            else
            {
                strcpy (p, "nan");
            }
        }
        return (p);
    }
#else                                                       /*- BIG ENDIAN VERSION (MAC) -*/
    if (*dec.sig.text == 'I')
    {
        if (*sptr & 0x8000)
        {
            p = buff - 5;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "-INF");
            }
            else
            {
                strcpy (p, "-inf");
            }
        }
        else
        {
            p = buff - 4;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "INF");
            }
            else
            {
                strcpy (p, "inf");
            }
        }

        return (p);
    }
    else if (*dec.sig.text == 'N')
    {
        if (*(char*)&num & 0x80)
        {
            p = buff - 5;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "-NAN");
            }
            else
            {
                strcpy (p, "-nan");
            }
        }
        else
        {
            p = buff - 4;
            if (format.conversion_char == 'A')
            {
                strcpy (p, "NAN");
            }
            else
            {
                strcpy (p, "nan");
            }
        }
        return (p);
    }
#endif                                                      /*  __option (little_endian)	*/

    exp_format.justification_options = right_justification; /*- STEP4: format -*/
    exp_format.sign_options = sign_always;
    exp_format.precision_specified = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = normal_argument;
    exp_format.field_width = 0;
    exp_format.precision = 1;
    exp_format.conversion_char = 'd';
    /* STEP5: isolate exponent */
#if __option(little_endian) && __dest_os == __win32_os /* LITTLE ENDIAN VERSION (X-86) */
    sptr = (((short*)&ld) + 3);                        /* point sptr to exponent information */
    snum = (*sptr & 0x7ff0) >> 4;         /* mask fp # to extract just the exponent values */
    exp = snum - 1023;                    /* remove the bias */
    p = long2str (exp, buff, exp_format); /* start filling p with exponent characters */
    if (format.conversion_char == 'a')
    {
        *--p = 'p';
    }
    else
    {
        *--p = 'P';
    }
    /*- STEP6: convert FP# to ASCII char, REMEMBER you are not converting to decimal,
     * # remains in hex form! -*/
    q = (char*)&num;           /* q is pointing to the address of num, which is cast to char
                                  ptr */
    offset = 13;
    wrk_byte_ptr = (q + ((offset - format.precision) / 2));
    hex_precision = 0;
    if (format.precision <= 2) /* special case: format.precision <= 2*/
    {
        what_nibble = 1;       /* insure high byte is accessed */
    }
    if (format.precision != 0) /* normal cases: format.precision > 2 */
    {
        do {
            working_byte = *wrk_byte_ptr;
            /*- DECIDE WHAT BYTE TO ACCESS -*/
            if (what_nibble == 0) /* isolate l.o. byte */
            {
                working_byte = working_byte & 0x0f;
                what_nibble = 1;
            }
            else                  /* isolate h.o. byte*/
            {
                working_byte = (working_byte >> 4) & 0x0f;
                what_nibble = 0;
            }

            /*- CONVERT TO ASCII: Two cases, Case 1 is (0 =< # < 10), Case2 is (# >
             * 10) -*/
            if (working_byte < 10)
            {
                working_byte += '0'; /* Add the ASCII value of 0 */
            }
            else
            {
                working_byte -= 10;
                /*- Keep track if you are in %a or %A formatting mode -*/
                if (format.conversion_char == 'a')
                {
                    working_byte += 'a'; /* Add the ASCII value of a */
                }
                else
                {
                    working_byte += 'A'; /* Add the ASCII value of A */
                }
            }

            /*- LOAD ASCII NUMBER INTO ARRAY -*/
            *--p = working_byte;
            hex_precision++;
            /*- SHOULD WORKING BYTE POINTER BE MOVED? -*/
            if ((hex_precision % 2) & (format.precision > 2))
            {
                wrk_byte_ptr = wrk_byte_ptr;
            }
            else
            {
                wrk_byte_ptr = (wrk_byte_ptr + 1);
            }
        }
        while (hex_precision < format.precision);
    }
#else                                              /* BIG ENDIAN VERSION (MAC) */
    snum = (*sptr & 0x7ff0) >> 4;
    exp = snum - 1023;
    p = long2str (exp, buff, exp_format);
    if (format.conversion_char == 'a')
    {
        *--p = 'p';
    }
    else
    {
        *--p = 'P';
    }
    q = (char*)&num;
    hex_precision = format.precision;

    for (hex_precision = format.precision; hex_precision >= 1; hex_precision--)
    {
        working_byte = *(q + (hex_precision / 2) + 1);
        if (hex_precision % 2)
        {
            working_byte = working_byte & 0x0f;
        }
        else
        {
            working_byte = (working_byte >> 4) & 0x0f;
        }
        if (working_byte < 10)
        {
            working_byte += '0';
        }
        else
        {
            working_byte -= 10;

            if (format.conversion_char == 'a')
            {
                working_byte += 'a';
            }
            else
            {
                working_byte += 'A';
            }
        }
        *--p = working_byte;
    }
#endif                                             /*  __option (little_endian)	*/

    if (format.precision || format.alternate_form) /* STEP#6: more formating */
    {
        *--p = '.';
    }
    *--p = '1';
    if (format.conversion_char == 'a')
    {
        *--p = 'x';
    }
    else
    {
        *--p = 'X';
    }
    *--p = '0';
    if (*sptr & 0x8000)
    {
        *--p = '-';
    }
    else if (format.sign_options == sign_always)
    {
        *--p = '+';
    }
    else if (format.sign_options == space_holder)
    {
        *--p = ' ';
    }
    return (p);                                    /*- STEP#7: return the fp# as ascii -*/
}
#endif /* !__MC68K__  */ /*- mm 000414 -*/         /*- mm 990722 -*/
/*- ROUND_DECIMAL -*/
static void
round_decimal (decimal* dec, int new_length)
{
    char  c;
    char* p;
    int   carry;

    if (new_length < 0)
    {
    return_zero:
        /*dec->sgn         =  0 ;*/                         /*- mm 990901 -*/
        dec->exp = 0;
        dec->sig.length = 1;
        *dec->sig.text = '0';
        return;
    }

    if (new_length >= dec->sig.length)
    {
        return;
    }

    p = (char*)dec->sig.text + new_length + 1;
    c = *--p - '0';

    if (c == 5)                                             /*- mm 970614 -*/
    {                                                       /*- mm 970614 -*/
        char* q = &((char*)dec->sig.text)[dec->sig.length]; /*- mm 970614 -*/
        while (--q > p && *q == '0')                        /*- mm 970614 -*/
            ;                                               /*- mm 970614 -*/
        /* The following change is to fix WB1-24254                             /*-
         * mm 010710 -*/
        /*	  	if (new_length == 0)											/*-
         * mm 991102 -*/ /*- mm 010710 -*/
        /*	  		carry = 0;													/*-
         * mm 991102 -*/ /*- mm 010710 -*/
        /*	  	else															/*-
         * mm 010710 -*/ /*- mm 010710 -*/
        carry = (q == p) ? p[-1] & 1 : 1; /*- mm 970614 -*/
    } /*- mm 970614 -*/
    else                                      /*- mm 970614 -*/
    {
        carry = (c > 5);                      /*- mm 970614 -*/
    }

    while (new_length)
    {
        c = *--p - '0' + carry;

        if ((carry = (c > 9)) != 0 || c == 0) /*- mm 970614 -*/
        {
            --new_length;
        }
        else
        {
            *p = c + '0';
            break;
        }
    }

    if (carry)
    {
        dec->exp += 1;
        dec->sig.length = 1;
        *dec->sig.text = '1';
        return;
    }
    else if (new_length == 0)
    {
        goto return_zero;
    }

    dec->sig.length = new_length;
}

/*- FLOAT2STRING -*/
#ifndef _No_Floating_Point                 /*- scm 970709 -*/
static char*
float2str (long double num, char* buff, print_format format)
{
    decimal dec;
    decform form;
    char*   p;
    char*   q;
    int     n, digits, sign;
    int     int_digits, frac_digits;

    if (format.precision > conversion_max) /* might as well punt asap */
    {
        return (NULL);
    }

                                           /*
                                            *	Note: If you look at <ansi_fp.h> you'll see that __num2dec only supports
                                            *double.                                        If you look at <float.h> you'll
                                            *see that long double == double. Ergo,                                        the                                        difference is
                                            *moot *until* a truly                                        long double type is supported.
                                            */

    form.style = FLOATDECIMAL;
    form.digits = MAX_SIG_DIG;                        /*- mm 970609 -*/

    __num2dec (&form, num, &dec);

    p = (char*)dec.sig.text + dec.sig.length;         /* strip off trailing zeroes */

    while (dec.sig.length > 1 && *--p == '0')
    {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text)
    {
        case '0':

            /* dec.sgn = 0;		*/                    /* print correctly signed zero --mf 060298 */
            dec.exp = 0;                              /* __num2dec doesn't guarantee */
                                                      /* this for zeroes             */
            break;

        case 'I':

            if (num < 0)                              /*- mm 970213 -*/
            {                                         /*- mm 970213 -*/
                p = buff - 5; /*- mm 970213 -*/       /* special cases */
                if (isupper (format.conversion_char)) /*- mm 990430 -*/
                {
                    strcpy (p, "-INF");               /*- mm 990430 -*/
                }
                else                                  /*- mm 990430 -*/
                {
                    strcpy (p, "-inf"); /*- mm 970213 -*/ /*- mm 990430 -*/
                }
            } /*- mm 970213 -*/
            else                                         /*- mm 970213 -*/
            {                                            /*- mm 970213 -*/
                p = buff - 4; /*- mm 970213 -*/          /* special cases */
                if (isupper (format.conversion_char))    /*- mm 990430 -*/
                {
                    strcpy (p, "INF");                   /*- mm 990430 -*/
                }
                else                                     /*- mm 990430 -*/
                {
                    strcpy (p, "inf"); /*- mm 970213 -*/ /*- mm 990430 -*/
                }
            } /*- mm 970213 -*/

            return (p);

        case 'N':

            if (dec.sgn)                              /*- mm 990816 -*/
            {                                         /*- mm 990816 -*/
                p = buff - 5;                         /*- mm 990816 -*/
                if (isupper (format.conversion_char)) /*- mm 990816 -*/
                {
                    strcpy (p, "-NAN");               /*- mm 990816 -*/
                }
                else                                  /*- mm 990816 -*/
                {
                    strcpy (p, "-nan");               /*- mm 990816 -*/
                }
            } /*- mm 990816 -*/
            else                                      /*- mm 990816 -*/
            {                                         /*- mm 990816 -*/
                p = buff - 4;                         /*- mm 990816 -*/
                if (isupper (format.conversion_char)) /*- mm 990816 -*/
                {
                    strcpy (p, "NAN");                /*- mm 990816 -*/
                }
                else                                  /*- mm 990816 -*/
                {
                    strcpy (p, "nan");                /*- mm 990816 -*/
                }
            } /*- mm 990816 -*/

            return (p);
    }

    dec.exp += dec.sig.length - 1;   /* shift decimal point to   */
                                     /* follow first digit	    */
    p = buff;

    *--p = 0;

    switch (format.conversion_char)
    {
        case 'g':
        case 'G':

            if (dec.sig.length > format.precision)
            {
                round_decimal (&dec, format.precision);
            }

            if (dec.exp < -4 || dec.exp >= format.precision)
            {
                if (format.alternate_form)
                {
                    --format.precision;
                }
                else
                {
                    format.precision = dec.sig.length - 1;
                }

                if (format.conversion_char == 'g')
                {
                    format.conversion_char = 'e';
                }
                else
                {
                    format.conversion_char = 'E';
                }

                goto e_format;
            }

            if (format.alternate_form)
            {
                format.precision -= dec.exp + 1;
            }
            else if ((format.precision = dec.sig.length - (dec.exp + 1)) < 0)
            {
                format.precision = 0;
            }

            goto f_format;

        case 'e':
        case 'E':
        e_format:

            if (dec.sig.length > format.precision + 1)
            {
                round_decimal (&dec, format.precision + 1);
            }

            n = dec.exp;
            sign = '+';

            if (n < 0)
            {
                n = -n;
                sign = '-';
            }

            for (digits = 0; n || digits < 2; ++digits)
            {
                *--p = n % 10 + '0';
                n /= 10;
            }

            *--p = sign;
            *--p = format.conversion_char;

            if (buff - p + format.precision > conversion_max)
            {
                return (NULL);
            }

            if (dec.sig.length < format.precision + 1)
            {
                for (n = format.precision + 1 - dec.sig.length + 1; --n;)
                {
                    *--p = '0';
                }
            }

            for (n = dec.sig.length, q = (char*)dec.sig.text + dec.sig.length; --n;)
            {
                *--p = *--q;
            }

            if (format.precision || format.alternate_form)
            {
                *--p = '.';
            }

            *--p = *dec.sig.text;

            if (dec.sgn)
            {
                *--p = '-';
            }
            else if (format.sign_options == sign_always)
            {
                *--p = '+';
            }
            else if (format.sign_options == space_holder)
            {
                *--p = ' ';
            }

            break;

        case 'f':
        case 'F':                    /*- mm 990430 -*/
        f_format:

            if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0)
            {
                frac_digits = 0;
            }

            if (frac_digits > format.precision)
            {
                round_decimal (&dec, dec.sig.length - (frac_digits - format.precision));

                if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0)
                {
                    frac_digits = 0;
                }
            }

            if ((int_digits = dec.exp + 1) < 0)
            {
                int_digits = 0;
            }

            if (int_digits + frac_digits > conversion_max)
            {
                return (NULL);
            }

            q = (char*)dec.sig.text + dec.sig.length;

            for (digits = 0; digits < (format.precision - frac_digits); ++digits)
            {
                *--p = '0';
            }

            for (digits = 0; digits < frac_digits && digits < dec.sig.length; ++digits)
            {
                *--p = *--q;
            }

            for (; digits < frac_digits; ++digits)
            {
                *--p = '0';
            }

            if (format.precision || format.alternate_form)
            {
                *--p = '.';
            }

            if (int_digits)
            {
#if defined(__m56800__) || defined(__m56800E__)
                for (digits = 0; digits < int_digits - (int)dec.sig.length; ++digits)
                {
                    *--p = '0';
                }
#else
                for (digits = 0; digits < int_digits - dec.sig.length; ++digits)
                {
                    *--p = '0';
                }
#endif

                for (; digits < int_digits; ++digits)
                {
                    *--p = *--q;
                }
            }
            else
            {
                *--p = '0';
            }

            if (dec.sgn)
            {
                *--p = '-';
            }
            else if (format.sign_options == sign_always)
            {
                *--p = '+';
            }
            else if (format.sign_options == space_holder)
            {
                *--p = ' ';
            }

            break;
    }

    return (p);
}
#endif /* ndef _No_Floating_Point */ /*- scm 970709 -*/
/* __PFORMATTER -*/
static int
__pformatter (void*       (*WriteProc) (void*, const char*, size_t),
              void*       WriteProcArg,
              const char* format_str,
              va_list     arg)            /*- mm 990325 -*/
{
    int          num_chars, chars_written, field_width;
    const char*  format_ptr;
    const char*  curr_format;
    print_format format;
    long         long_num;
#ifdef __MSL_LONGLONG_SUPPORT__       /*- mm 961219 -*/
    long long long_long_num;          /*- mm 961219 -*/
#endif /* __MSL_LONGLONG_SUPPORT__ */ /*- mm 961219 -*/
#ifndef _No_Floating_Point
    long double long_double_num;
#endif
    char  buff[conversion_buff_size];
    char* buff_ptr;
    char* string_end;
    char  fill_char = ' ';            /*- mm 960722 -*/
#if __ALTIVEC__
    int         vecIndex;             /* counts vector elements							*/
    MWVector128 vec_val;
#endif                                /* __ALTIVEC__ */

    format_ptr = format_str;
    chars_written = 0;

    while (*format_ptr)
    {
        if (!(curr_format = strchr (format_ptr, '%')))
        {
            num_chars = strlen (format_ptr);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc) (WriteProcArg, format_ptr, num_chars)) /*- mm 990325 -*/
            {
                return (-1);
            }

            break;
        }

        num_chars = curr_format - format_ptr;
        chars_written += num_chars;

        if (num_chars && !(*WriteProc) (WriteProcArg, format_ptr, num_chars))     /*- mm 990325 -*/
        {
            return (-1);
        }

        format_ptr = curr_format;

#if __PPC_EABI__
        format_ptr = parse_format (format_ptr, (va_list*)arg, &format);
#else
        format_ptr = parse_format (format_ptr, (va_list*)&arg, &format);
#if __ALTIVEC__
        vecIndex = 0;
        do { /* can be done repeatedly for each vector field */
#endif                                                                            /* __ALTIVEC__ */
#endif
        switch (format.conversion_char)
        {
            case 'd':
            case 'i':
#if __ALTIVEC__
                if (format.argument_options == vector_argument)
                {
                    if (vecIndex == 0)
                    {
                        if (format.useVecDefault) /* establish default vec access */
                        {
                            format.vecCount = 16;
                            format.vec_access = U8;
                        }
#if __VEC__
                        vec_val = va_arg (arg, MWVector128);
#else
                        va_arg_replacement1 (arg, vec_val);
#endif
                    }
                    switch (format.vec_access)
                    {
                        case U8:
                            long_num = vec_val.s8[vecIndex];
                            break;
                        case U16:
                            long_num = vec_val.s16[vecIndex];
                            break;
                        case U32:
                            long_num = vec_val.s32[vecIndex];
                            break;
                    }
                }
                else
#endif                                            /* __ALTIVEC__ */
                    if (format.argument_options == long_argument)
                    {
                        long_num = va_arg (arg, long);
                    }
#ifdef __MSL_LONGLONG_SUPPORT__                   /*- mm 961219 -*/
                    else if (format.argument_options == long_long_argument) /*- mm 961219 -*/
                    {
                        long_long_num = va_arg (arg, long long);            /*- mm 961219 -*/
                    }
#endif /* __MSL_LONGLONG_SUPPORT__ */                                       /*- mm 961219 -*/
                    else
                    {
                        long_num = va_arg (arg, int);
                    }

                if (format.argument_options == short_argument)
                {
                    long_num = (short)long_num;
                }
                if (format.argument_options == char_argument)
                {
                    long_num = (char)long_num;
                }

#ifdef __MSL_LONGLONG_SUPPORT__                                             /*- mm 961219 -*/
                if (format.argument_options == long_long_argument)          /*- mm 961219 -*/
                {                                                           /*- bb 971019 -*/
                    if (!(buff_ptr = longlong2str (long_long_num,           /*- mm 961219 -*/
                                                   buff + conversion_buff_size,
                                                   format)))                /*- mm 961219 -*/
                    {
                        goto conversion_error;                              /*- mm 961219 -*/
                    }
                } /*- bb 971019 -*/
                else                              /*- mm 961219 -*/
#endif /* __MSL_LONGLONG_SUPPORT__ */             /*- mm 961219 -*/
                    if (!(buff_ptr = long2str (long_num, buff + conversion_buff_size, format)))
                    {
                        goto conversion_error;
                    }

                num_chars = buff + conversion_buff_size - 1 - buff_ptr;

                break;

            case 'o':
            case 'u':
            case 'x':
            case 'X':
#if __ALTIVEC__
                if (format.argument_options == vector_argument)
                {
                    if (vecIndex == 0)
                    {
                        if (format.useVecDefault) /* establish default vec access */
                        {
                            format.vecCount = 16;
                            format.vec_access = U8;
                        }
#if __VEC__
                        vec_val = va_arg (arg, MWVector128);
#else
                        va_arg_replacement1 (arg, vec_val);
#endif
                    }
                    switch (format.vec_access)
                    {
                        case U8:
                            long_num = vec_val.u8[vecIndex];
                            break;
                        case U16:
                            long_num = vec_val.u16[vecIndex];
                            break;
                        case U32:
                            long_num = vec_val.u32[vecIndex];
                            break;
                    }
                }
                else
#endif                                            /* __ALTIVEC__ */
                    if (format.argument_options == long_argument)
                    {
                        long_num = va_arg (arg, unsigned long);
                    }
#ifdef __MSL_LONGLONG_SUPPORT__                   /*- mm 961219 -*/
                    else if (format.argument_options == long_long_argument) /*- mm 961219 -*/
                    {
                        long_long_num = va_arg (arg, long long);            /*- mm 961219 -*/
                    }
#endif /* __MSL_LONGLONG_SUPPORT__ */                                       /*- mm 961219 -*/
                    else
                    {
                        long_num = va_arg (arg, unsigned int);
                    }

                if (format.argument_options == short_argument)
                {
                    long_num = (unsigned short)long_num;
                }
                if (format.argument_options == char_argument)
                {
                    long_num = (unsigned char)long_num;
                }

#ifdef __MSL_LONGLONG_SUPPORT__                                             /*- mm 961219 -*/
                if (format.argument_options == long_long_argument)          /*- mm 961219 -*/
                {                                                           /*- mf 971020 -*/
                    if (!(buff_ptr = longlong2str (long_long_num,           /*- mm 961219 -*/
                                                   buff + conversion_buff_size,
                                                   format)))                /*- mm 961219 -*/
                    {
                        goto conversion_error;                              /*- mm 961219 -*/
                    }
                } /*- mf 971020 -*/
                else                              /*- mm 961219 -*/
#endif /* __MSL_LONGLONG_SUPPORT__ */             /*- mm 961219 -*/
                    if (!(buff_ptr = long2str (long_num, buff + conversion_buff_size, format)))
                    {
                        goto conversion_error;
                    }

                num_chars = buff + conversion_buff_size - 1 - buff_ptr;

                break;

#ifndef _No_Floating_Point

            case 'f':
            case 'F':                             /*- mm 990430 -*/
            case 'e':
            case 'E':
            case 'g':
            case 'G':
#if __ALTIVEC__
                if (format.argument_options == vector_argument)
                {
                    if (vecIndex == 0)
                    {
                        if (format.useVecDefault) /* establish default vec access */
                        {
                            format.vecCount = 4;
                            format.vec_access = U32;
                        }
#if __VEC__
                        vec_val = va_arg (arg, MWVector128);
#else
                        va_arg_replacement1 (arg, vec_val);
#endif
                    }
                    switch (format.vec_access)
                    {
                        case U8:
                            long_double_num = vec_val.u8[vecIndex];
                            break;
                        case U16:
                            long_double_num = vec_val.u16[vecIndex];
                            break;
                        case U32:
                            long_double_num = vec_val.f32[vecIndex];
                            break;
                    }
                }
                else
#endif                                            /* __ALTIVEC__ */
                    if (format.argument_options == long_double_argument)
                    {
                        long_double_num = va_arg (arg, long double);
                    }
                    else
                    {
                        long_double_num = va_arg (arg, double);
                    }

                if (!(buff_ptr = float2str (long_double_num, buff + conversion_buff_size, format)))
                {
                    goto conversion_error;
                }

                num_chars = buff + conversion_buff_size - 1 - buff_ptr;
                break;
#endif                                            /* _No_Floating_Point */

/*- CASE OF a AND A -*/
#if !__MC68K__ /*- mm 990722 -*/ /*- mm 000414 -*/
            case 'a':
            case 'A':
                if (format.argument_options == long_double_argument)
                {
                    long_double_num = va_arg (arg, long double);
                }
                else
                {
                    long_double_num = va_arg (arg, double);
                }

                if (!(buff_ptr = double2hex (long_double_num, buff + conversion_buff_size, format)))
                {
                    goto conversion_error;
                }

                num_chars = buff + conversion_buff_size - 1 - buff_ptr;
                break;
#endif /* !__MC68K__  */         /*- mm 000414 -*/
                                 /*- mm 990722 -*/

                                 /*- CASE OF s -*/
            case 's':
#ifndef __NO_WIDE_CHAR                                         /*- vss 990624 -*/
                if (format.argument_options == wchar_argument) /*- mm 990325 -*/
                {                                              /*- mm 990325 -*/
                    wchar_t* wcs_ptr = va_arg (arg, wchar_t*); /*- mm 990325 -*/
                    if (wcs_ptr == NULL)
                    {
                        wcs_ptr = L"";
                    }
                    if ((num_chars = wcstombs (buff, wcs_ptr, sizeof (buff))) < 0)
                    {
                        goto conversion_error;
                    }
                    buff_ptr = &buff[0];                       /*- mm 990325 -*/
                }
                else
#endif                                                         /* __NO_WIDE_CHAR */
                    buff_ptr = va_arg (arg, char*);
                if (buff_ptr == NULL)                          /*- mm 970708 -*/
                {
                    buff_ptr = "";                             /*- mm 970708 -*/
                }
                if (format.alternate_form)
                {
                    num_chars = (unsigned char)*buff_ptr++;

                    if (format.precision_specified && num_chars > format.precision)
                    {
                        num_chars = format.precision;
                    }
                }
                else if (format.precision_specified)
                {
                    num_chars = format.precision;

                    if ((string_end = (char*)memchr (buff_ptr, 0, num_chars)) != 0)
                    {
                        num_chars = string_end - buff_ptr;
                    }
                }
                else
                {
                    num_chars = strlen (buff_ptr);
                }

                break;
                /*- CASE OF n -*/
            case 'n':
                {
#ifdef __m56800E__
                    int* buff_ptr;
                    buff_ptr = va_arg (arg, int*);
#else
                        buff_ptr = va_arg (arg, char*);
#endif                                /* __m56800E__ */

                    switch (format.argument_options)
                    {
                        case normal_argument:
                            *(int*)buff_ptr = chars_written;
                            break;
                        case short_argument:
                            *(short*)buff_ptr = chars_written;
                            break;
                        case long_argument:
                            *(long*)buff_ptr = chars_written;
                            break;
#ifdef __MSL_LONGLONG_SUPPORT__       /*- mm 961219 -*/
                        case long_long_argument:
                            *(long long*)buff_ptr = chars_written;
                            break;
#endif /* __MSL_LONGLONG_SUPPORT__ */ /*- mm 961219 -*/
                    }

                    continue;
                }

                                      /*- CASE OF c -*/
            case 'c':
                buff_ptr = buff;
#if __ALTIVEC__
                if (format.argument_options == vector_argument)
                {
                    if (vecIndex == 0)
                    {
                        if (format.useVecDefault) /* establish default vec access */
                        {
                            format.vecCount = 16;
                            format.vec_access = U8;
                        }
                        if (!format.useSepString)
                        {
                            format.vecSeperator = format.c_vecSeperator;
                            format.vecSepLen = *format.c_vecSeperator ? 1 : 0;
                        }
#if __VEC__
                        vec_val = va_arg (arg, MWVector128);
#else
                        va_arg_replacement1 (arg, vec_val);
#endif
                    }
                    switch (format.vec_access)
                    {
                        case U8:
                            *buff_ptr = vec_val.u8[vecIndex];
                            break;
                        case U16:
                            *buff_ptr = vec_val.u16[vecIndex];
                            break;
                        case U32:
                            *buff_ptr = vec_val.u32[vecIndex];
                            break;
                    }
                }
                else
#endif                                            /* __ALTIVEC__ */
                    *buff_ptr = va_arg (arg, int);

                num_chars = 1;

                break;

            case '%':

                buff_ptr = buff;

                *buff_ptr = '%';

                num_chars = 1;

                break;

            case bad_conversion:
            conversion_error:
            default:
                num_chars = strlen (curr_format);
                chars_written += num_chars;

                if (num_chars &&
                    !(*WriteProc) (WriteProcArg, curr_format, num_chars))        /*- mm 990325 -*/
                {
                    return (-1);
                }

                return (chars_written);
        }

        field_width = num_chars;

        if (format.justification_options != left_justification)
        {                                                                        /*- mm 960722 -*/
            fill_char = (format.justification_options == zero_fill) ? '0' : ' '; /*- mm 960722 -*/
            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) &&
                (fill_char == '0')) /*- mm 970206 -*/                            /*- mm 990831 -*/
            {                                                                    /*- mm 970206 -*/
                if ((*WriteProc) (WriteProcArg, buff_ptr, 1) == 0)               /*- mm 990325 -*/
                {
                    return (-1);                                                 /*- mm 970206 -*/
                }
                ++buff_ptr;                                                      /*- mm 970206 -*/
                num_chars--;                                                     /*- mm 970723 -*/
            }
            while (field_width < format.field_width)
            {
                if ((*WriteProc) (WriteProcArg, &fill_char, 1) == 0)             /*- mm 990325 -*/
                {
                    return (-1);
                }

                ++field_width;
            }
        } /*- mm 960722 -*/
        if (num_chars && !(*WriteProc) (WriteProcArg, buff_ptr, num_chars)) /*- mm 990325 -*/
        {
            return (-1);
        }

        if (format.justification_options == left_justification)
        {
            while (field_width < format.field_width)
            {
                char blank = ' ';
                if ((*WriteProc) (WriteProcArg, &blank, 1) == 0)            /*- mm 990325 -*/
                {
                    return (-1);
                }

                ++field_width;
            }
        }

        chars_written += field_width;
#if __ALTIVEC__
        /* Process vec types specially... */

        if (format.argument_options == vector_argument && ++vecIndex < format.vecCount)
        {
            if (format.vecSeperator && format.vecSepLen > 0)
            {
                if (format.vecSepLen == 1)
                {
                    if ((*WriteProc) (WriteProcArg, format.vecSeperator, 1) == 0) /*- mm 990325 -*/
                    {
                        return (-1);
                    }
                }
                else if (!(*WriteProc) (WriteProcArg,
                                        format.vecSeperator,
                                        format.vecSepLen))                        /*- mm 990325 -*/
                {
                    return (-1);
                }
                chars_written += format.vecSepLen;
            }
            format.field_width = format.vecwidth;
            format.precision = format.vecprec;
            fill_char = ' ';
        }
    }
    while (format.argument_options == vector_argument && vecIndex < format.vecCount);
#endif                                                                            /* __ALTIVEC__ */
}

return (chars_written);
}

/*- __FILEWRITE -*/                                                               /*- mm 990325 -*/
void*
__FileWrite (void* File, const char* Buffer, size_t NumChars)
{
    return (fwrite (Buffer, 1, NumChars, (FILE*)File) == NumChars ? File : 0);
}

/*- __STRINGWRITE -*/
void*
__StringWrite (void* osc, const char* Buffer, size_t NumChars)
{
    size_t        CharsToBeWritten;
    void*         MemCpyResult;
    __OutStrCtrl* Oscp = (__OutStrCtrl*)osc;

    CharsToBeWritten = ((Oscp->CharsWritten + NumChars) <= Oscp->MaxCharCount)
                           ? NumChars
                           : Oscp->MaxCharCount - Oscp->CharsWritten;
    MemCpyResult = (void*)memcpy (Oscp->CharStr + Oscp->CharsWritten, Buffer, CharsToBeWritten);
    Oscp->CharsWritten += CharsToBeWritten;
    /*return(MemCpyResult);*/ /*- mm 000404 -*/
    return ((void*)1);        /*- mm 000404 -*/
}

/*- PRINTF -*/
#if __dest_os != __n64_os                                              /*- ard 990128  -*/
#ifndef _No_Console
int
printf (const char* format, ...)
{
    int result;                                                        /*- mm 001013 -*/
#ifndef __NO_WIDE_CHAR
#endif                                                                 /* __NO_WIDE_CHAR */

#if __PPC_EABI__ || __MIPS__
    va_list args;
#ifndef __NO_WIDE_CHAR
    if (fwide (stdout, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                 /* __NO_WIDE_CHAR */
    va_start (args, format);
    __begin_critical_region (files_access);                            /*- mm 001013 -*/
    result = __pformatter (&__FileWrite, (void*)stdout, format, args); /*- mm 001013 -*/
#else
#ifndef __NO_WIDE_CHAR
    if (fwide (stdout, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                 /* __NO_WIDE_CHAR */
    __begin_critical_region (files_access);                                      /*- mm 001013 -*/
    result =
        __pformatter (&__FileWrite, (void*)stdout, format, __va_start (format)); /*- mm 001013 -*/
#endif                                                                 /* __PPC_EABI__||__MIPS__  */
    __end_critical_region (files_access);                              /*- mm 001013 -*/
    return (result);                                                   /*- mm 001013 -*/
}
#endif                                                                 /* _No_Console */
#endif                                                                 /* __dest_os != __n64_os */

#ifndef _No_Disk_File_OS_Support
int
fprintf (FILE* file, const char* format, ...)
{
    int result;                                                        /*- mm 001013 -*/
#if __PPC_EABI__ || __MIPS__
    va_list args;
#ifndef __NO_WIDE_CHAR
    if (fwide (file, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                 /* __NO_WIDE_CHAR */
    va_start (args, format);
    __begin_critical_region (files_access);                            /*- mm 001013 -*/
    result = __pformatter (&__FileWrite, (void*)file, format, args);   /*- mm 001013 -*/
#else
#ifndef __NO_WIDE_CHAR
    if (fwide (file, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                 /* __NO_WIDE_CHAR */
    __begin_critical_region (files_access);                                    /*- mm 001013 -*/
    result =
        __pformatter (&__FileWrite, (void*)file, format, __va_start (format)); /*- mm 001013 -*/
#endif                                                                 /* __PPC_EABI__||__MIPS__ */
    __end_critical_region (files_access);                              /*- mm 001013 -*/
    return (result);                                                   /* -mm 001013 -*/
}
#endif                                                                /* _No_Disk_File_OS_Support */
int
vprintf (const char* format, va_list arg)
{
    int retval;                                                       /*- mm 001013 -*/
#ifndef __NO_WIDE_CHAR
    if (fwide (stdout, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                /* __NO_WIDE_CHAR */
    __begin_critical_region (files_access);                           /*- mm 001013 -*/
    retval = __pformatter (&__FileWrite, (void*)stdout, format, arg); /*- mm 001013 -*/
    __end_critical_region (files_access);                             /*- mm 001013 -*/
    return (retval);                                                  /*- mm 001013 -*/
}

int
vfprintf (FILE* file, const char* format, va_list arg)
{
    int retval;                                                       /*- mm 001013 -*/
#ifndef __NO_WIDE_CHAR
    if (fwide (file, -1) >= 0)
    {
        return (-1);
    }
#endif                                                                /* __NO_WIDE_CHAR */

    __begin_critical_region (files_access);                           /*- mm 001013 -*/
    retval = __pformatter (&__FileWrite, (void*)file, format, arg);   /*- mm 001013 -*/
    __end_critical_region (files_access);                             /*- mm 001013 -*/
    return (retval);                                                  /*- mm 001013 -*/
}

int
vsnprintf (char* s, size_t n, const char* format, va_list arg)
{
    int          end;
    __OutStrCtrl osc;

    osc.CharStr = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;

    end = __pformatter (&__StringWrite, &osc, format, arg);

    if (s)                                                            /*- mm 000404 -*/
    {
        s[(end < n) ? end : n - 1] = '\0';
    }

    return (end);
}

int
vsprintf (char* s, const char* format, va_list arg)
{
    return (vsnprintf (s, ULONG_MAX, format, arg));
}

int
snprintf (char* s, size_t n, const char* format, ...)
{
#if __PPC_EABI__ || __MIPS__
    va_list args;

    va_start (args, format);
    return (vsnprintf (s, n, format, args));
#else
        return (vsnprintf (s, n, format, __va_start (format)));
#endif                                                                /* __PPC_EABI__ || __MIPS__ */
}
#if __dest_os != __n64_os                                             /*- ard 990126 -*/
int
sprintf (char* s, const char* format, ...)
{
#if __PPC_EABI__ || __MIPS__
    va_list args;

    va_start (args, format);
    return (vsnprintf (s, ULONG_MAX, format, args));
#else
    return (vsnprintf (s, ULONG_MAX, format, __va_start (format)));
#endif                                                                /* __PPC_EABI__ || __MIPS__ */
}
#endif                                                                /* __dest_os != __n64_os */

/* Change record:
 * JFH 950918 First code release.
 * JFH 950929 Fixed bug in 'f' format where a zero fractional part would be
 *suppressed regardless of the precision. JFH 951010 Changed long2str to comply with
 *Standard saying: "The result of converting a zero value with a precision of zero is
 *no characters." JFH 951030 Corrected handling of 'g','G' conversions using the
 *alternate form (#). JFH 960222 Added casts from (void *) for C++ compatibility. JFH
 *960219 Added #ifndef around area that handles floating point output. If disabled,
 *you can get away with not including MathLib just because you wanted to use printf.
 *			  There is also some ANSI lib code savings as well.
 * JFH 960907 Fixed bug in round_decimal where it *wasn't* rounding anything if all
 *the precision digits were zero. JFH 960919 Changed handling of '+' flag so it
 *doesn't affect how unsigned values (i.e., o,u,x,X) are displayed. JFH 960924
 *Changed "round_decimal" to do rounding using more conventional rules of arithmetic.
 *:-) MM  960722 Fill with zeros when required. bkoz960829 add l.you's changes for
 *powertv, defines for no floating point mm  960930 Removed bitfields from
 *printformat structure to compile with ANSI strict mm  961220 Support for long long.
 * mani970101 Don't choke if a NULL string is passed to %s. Just print "(null)".
 * mm  970206 Corrected position of sign and left zero fill
 * mm  970213 Made to print -Inf for negative infinite values
 * mm  970609 Set the max number of significant digits tolarger than DBL_DIG
 * mm  970614 Modifications to remove trailing blanks for g format and to round to
 *nearest or even mm  970702 Modified Mani's fix to conform to Standard mm  970708
 *Inserted Be changes SCM 970709 Converted __va_start() to va_start() for PPC_EABI mm
 *970723 Further correction to change of 970206  BW01232 beb 971019 Cleaned up
 *confusing nested if statements mf  971020 found another bad if block under long
 *long support FS  980113 Converted __va_start() to va_start() for MIPS_bare mm
 *980206 Added wide-character support BLC 980301 added vsnprintf, snprintf functions
 * BLC 980309 added format string support for 'll' and 'hh' type mods from C9X
 * MEA 980320 Changed the call to parse_format for PPC_EABI
 * mf  060298 should print 0 with correct sign(i.e. -0 when the number is minus
 *zero(0x80000000) mm  980715 corrected placement of null char in result of vsnprintf
 *MW07942 ad  990128 guarded printf() and sprintf() with if __dest_os != __n64_os vss
 *990203 Add AltiVec changes (contributed) mm  990208 Change to make %lE, %le, %lG,
 *and %lg be accepted but ignore the l (C9x Clause 7.13.6.1 para #3) mm  990317
 *ReCorrected placement of null char in result of vsnprintf to match C9x
 *(IL9903-1264) mm  990325 Modified to make split between string functions andfile
 *i/o mm  990430 Added code for %F in accordance with C9x mm  990430 Brought printing
 *of inf into line with C9x vss 990624 Added NO_WIDE_CHAR wrappers mm  990430 Brought
 *printing of nan into line with C9x mm  990817 Deleted include of <string_io.h> mm
 *990722 Added code for %a %A mm  990722 Brought printing of NaN into line with C9x
 * mm  990831 Move blank where there is zero fill and a blank sign space holder
 *IL9908-4231 mm  990901 Print correct sign for zero.  IL9908-4232 mm  991102
 *Corrected fix of 970614 mm  000404 Corrected problem with passing null string to
 *snprintf  WB1-12370 mm  000414 Excluded %a %A from 68k because algorithm not
 *correct for it mm  001013 Threadsafety changes for fprintf, printf, vfprintf,
 *vprintf PMK 010703 Double2Hex( ) function will now work for little endian (X-86)
 *architecture. mm  010710 Corrected rounding to fix WB1-24254
 */
