/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/31 15:56:02 $
 * $Revision: 1.28 $
 */

/*
 *	Routines
 *	--------
 *		__strtold
 *		__strtod
 *
 *	Implementation
 *	--------------
 *
 *		The string scanner is implemented as an extended Finite State Machine.
 *		A state diagram for it can be found in an accompanying TeachText
 *		document, 'strtod syntax' (too bad pictures can't be imbedded in
 *		comments) in the "MSL Technical Notes" directory. A textual description
 *      of it follows.
 *
 *		The state transition loop dispatches to the appropriate code for the
 *		current state, while simultaneously watching for terminating
 *		conditions (field width exhausted, EOF encountered, final state
 *		reached).
 *
 *		start
 *
 *			Skip leading spaces. Once a non-space is seen, process sign (if any)
 *			and trasition to next state.
 *
 *		sig_start
 *
 *			Look for either a digit or a decimal point. If it is a digit zero,
 *			treat it specially.
 *
 *		leading_sig_zeroes
 *
 *			Leading zero digits are discarded, as they add nothing to the result.
 *
 *		int_digit_loop
 *
 *			Process digits from the integer part of the significand. We accept
 *			only so many significant digits (DBL_DIG), but the ones we discard
 *			have to be accounted for in the exponent.
 *
 *			If a decimal point is seen, proceed to process a fractional part (if
 *			one is present).
 *
 *		frac_start
 *
 *			Having seen a leading decimal point, we must see at least one digit.
 *			If the field width expires before the transition from this state to
 *			the next, we fail.
 *
 *		frac_digit_loop
 *
 *			Process digits from the fractional part of the significand. We accept
 *			only so many significant digits (DBL_DIG), but the ones we discard
 *			have to be accounted for in the exponent.
 *		sig_end
 *
 *			If an 'E' (or 'e') follows we go after an exponent; otherwise we're
 *			done.
 *
 *		exp_start
 *
 *			Process the sign (if any).
 *
 *		leading_exp_digit
 *
 *			Check the leading exponent digit. If it is a digit zero, treat it
 *			specially.
 *
 *		leading_exp_zeroes
 *
 *			Leading zero digits are discarded, as they add nothing to the result.
 *
 *		exp_digit_loop
 *
 *			Process digits from the exponent. We watch for short int overflow,
 *			even though the maximum exponent is probably considerably less than
 *			this. The latter will be checked during the actual decimal to binary
 *			conversion.
 *
 *		finished
 *
 *			Successful exit.
 *
 *		failure
 *
 *			Invalid input exit.
 *
 *		The end product is just the parsed input and its conversion to a
 *		'decimal' record Â la SANE and MathLib. '__dec2num' is used for conversion
 *		to binary. For other systems that don't provide decimal to binary
 *		conversion in this or a similar way, a routine will be provided.
 *
 *
 */

#ifndef _No_Floating_Point

#include "strtold.h"

#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ansi_fp.h"
#include "lconv.h"

#if (_MWMT && (__dest_os == __win32_os || __dest_os == __wince_os)) /*- mm 010521   \
                                                                       -*/
#include <ThreadLocalData.h>
#endif
enum scan_states
{
    start = 0x0001,
    sig_start = 0x0002,
    leading_sig_zeroes = 0x0004,
    int_digit_loop = 0x0008,
    frac_start = 0x0010,
    frac_digit_loop = 0x0020,
    sig_end = 0x0040,
    exp_start = 0x0080,
    leading_exp_digit = 0x0100,
    leading_exp_zeroes = 0x0200,
    exp_digit_loop = 0x0400,
    finished = 0x0800,
    failure = 0x1000,
    nan_state = 0x2000,                                             /*- mm 990921 -*/
    infin_state = 0x4000,                                           /*- mm 990921 -*/
    hex_state = 0x8000                                              /*- mm 990921 -*/
};
enum hex_scan_states
{
    not_hex = 0x0000,
    hex_start = 0x0001,
    hex_leading_sig_zeroes = 0x0002,
    hex_int_digit_loop = 0x0004,
    hex_frac_digit_loop = 0x0008,
    hex_sig_end = 0x0010,
    hex_exp_start = 0x0020,
    hex_leading_exp_digit = 0x0040,
    hex_leading_exp_zeroes = 0x0080,
    hex_exp_digit_loop = 0x0100
};
#define MAX_SIG_DIG             20                           /*- mm 970609  -*/

#define final_state(scan_state) (scan_state & (finished | failure))

#define success(scan_state)                                                         \
    (scan_state & (leading_sig_zeroes | int_digit_loop | frac_digit_loop |          \
                   leading_exp_zeroes | exp_digit_loop | finished))

#define fetch()                                                                     \
    (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar))       /*- mm 990325          \
                                                                -*/
#define unfetch(c) (*ReadProc)(ReadProcArg, c, __UngetAChar) /*- mm 990325 -*/
long double
__strtold(int max_width, int (*ReadProc)(void*, int, int),   /*- mm 990325 -*/
          void* ReadProcArg,                                 /*- mm 990325 -*/
          int* chars_scanned, int* overflow)
{
    int     scan_state = start;
    int     hex_scan_state = not_hex;
    int     count = 0;
    int     spaces = 0;                                      /*- mm 970708 -*/
    int     c;
    decimal d = {
        0, 0, 0, { 0, "" }
    };
    int         sig_negative = 0;
    int         exp_negative = 0;
    long        exp_value = 0;
    int         exp_adjust = 0;
    long double result;
    int         sign_detected = 0;                           /*- mm 990921 -*/

    unsigned char* chptr = (unsigned char*)&result;
    unsigned char  uch, uch1;
    int            ui;
    int            chindex;
    int            NibbleIndex;
    int            expsign = 0;
    int            exp_digits = 0;
    int            intdigits = 0;
    int            RadixPointFound = 0;
    short          exponent = 0;
    int            dot;
#if !((__dest_os == __win32_os || __dest_os == __wince_os) &&                       \
      _MWMT)                                                 /*- mm 010521 -*/
    dot = *(unsigned char*)__lconv.decimal_point;
#else                                                        /*- mm 010503 -*/
    struct lconv* lconvptr = _GetThreadLocalData(_MSL_TRUE)->tls_lconv;
    /*- mm 010503 -*/                               /*- cc 010531 -*/
    dot = *(unsigned char*)lconvptr->decimal_point; /*- mm 010503 -*/
#endif                                                       /*- mm 010503 -*/
    *overflow = 0;
    c = fetch();

    while (count <= max_width && c != EOF && !final_state(scan_state))
    {
        switch (scan_state)
        {
            case start:
                if (isspace(c))
                {
                    c = fetch();
                    count--;                                 /*- mani 970101 -*/
                    spaces++;                                /*- mani 970101 -*/
                    break;
                }

                /*- mm 990921 -*/
                switch (toupper(c))
                {
                    case '-':
                        sig_negative = 1;

                    case '+':
                        c = fetch();
                        /*scan_state = sig_start;*/
                        sign_detected = 1;
                        break;

                    case 'I':
                        c = fetch();
                        scan_state = infin_state;
                        break;

                    case 'N':
                        c = fetch();
                        scan_state = nan_state;
                        break;

                    default:
                        scan_state = sig_start;
                        break;
                }
                break;

            case infin_state:
                {
                    int  i = 1;
                    char model[] = "INFINITY";
                    while ((i < 8) && (toupper(c) == model[i]))
                    {
                        i++;
                        c = fetch();
                    }
                    if ((i == 3) || (i == 8))
                    {
                        if (sig_negative)
                        {
                            result = -INFINITY;
                        }
                        else
                        {
                            result = INFINITY;
                        }
                        *chars_scanned = spaces + i + sign_detected;
                        return (result);
                    }
                    else
                    {
                        scan_state = failure;
                    }
                    break;
                }

            case nan_state:
                {
                    int  i = 1, j = 0;
                    char model[] = "NAN(";
                    char nan_arg[32] = "";
                    while ((i < 4) && (toupper(c) == model[i]))
                    {
                        i++;
                        c = fetch();
                    }
                    if ((i == 3) || (i == 4))
                    {
                        if (i == 4)
                        {
                            while ((j < 32) && (isdigit(c) || isalpha(c)))
                            {
                                nan_arg[j++] = c;
                                c = fetch();
                            }
                            if (c != ')')
                            {
                                scan_state = failure;
                                break;
                            }
                            else
                            {
                                j++;
                            }
                        }
                        nan_arg[j] = '\0';

                        if (sig_negative)
                        {
                            result = -nan(nan_arg);
                        }
                        else
                        {
                            result = nan(nan_arg);
                        }
                        *chars_scanned = spaces + i + j + sign_detected;
                        return (result);
                    }
                    else
                    {
                        scan_state = failure;
                    }
                    break;
                }
                /*- mm 990921 -*/

            case sig_start:
                if (c == dot)
                {
                    scan_state = frac_start;
                    c = fetch();
                    break;
                }
                if (!isdigit(c))
                {
                    scan_state = failure;
                    break;
                }
                if (c == '0')
                {
                    /*- mm 990921 -*/
                    c = fetch();
                    if (toupper(c) == 'X')
                    {
                        scan_state = hex_state;
                        hex_scan_state = hex_start;
                    }
                    else
                    {
                        scan_state = leading_sig_zeroes;
                    }
                    break;
                }
                scan_state = int_digit_loop;
                break;

            case leading_sig_zeroes:

                if (c == '0')
                {
                    c = fetch();

                    break;
                }
                scan_state = int_digit_loop;
                break;

            case int_digit_loop:
                if (!isdigit(c))
                {
                    if (c == dot)
                    {
                        scan_state = frac_digit_loop;
                        c = fetch();
                    }
                    else
                    {
                        scan_state = sig_end;
                    }
                    break;
                }
                if (d.sig.length < MAX_SIG_DIG) /*- mm 970609 -*/
                {
                    d.sig.text[d.sig.length++] = c;
                }
                else
                {
                    exp_adjust++;
                }
                c = fetch();
                break;

            case frac_start:
                if (!isdigit(c))
                {
                    scan_state = failure;
                    break;
                }
                scan_state = frac_digit_loop;
                break;

            case frac_digit_loop:
                if (!isdigit(c))
                {
                    scan_state = sig_end;
                    break;
                }
                if (d.sig.length < MAX_SIG_DIG) /*- mm 970609 -*/
                {
                    if (c != '0' ||
                        d.sig.length) /* __dec2num doesn't like leading zeroes*/
                    {
                        d.sig.text[d.sig.length++] = c;
                    }
                    exp_adjust--;
                }
                c = fetch();
                break;

            case sig_end:
                if (toupper(c) == 'E')
                {
                    scan_state = exp_start;
                    c = fetch();
                    break;
                }
                scan_state = finished;
                break;

            case exp_start:
                if (c == '+')
                {
                    c = fetch();
                }
                else if (c == '-')
                {
                    c = fetch();
                    exp_negative = 1;
                }
                scan_state = leading_exp_digit;
                break;

            case leading_exp_digit:
                if (!isdigit(c))
                {
                    scan_state = failure;
                    break;
                }
                if (c == '0')
                {
                    scan_state = leading_exp_zeroes;
                    c = fetch();
                    break;
                }
                scan_state = exp_digit_loop;
                break;

            case leading_exp_zeroes:
                if (c == '0')
                {
                    c = fetch();
                    break;
                }
                scan_state = exp_digit_loop;
                break;

            case exp_digit_loop:
                if (!isdigit(c))
                {
                    scan_state = finished;
                    break;
                }
                exp_value = exp_value * 10 + (c - '0');
                if (exp_value > SHRT_MAX)
                {
                    *overflow = 1;
                }
                c = fetch();
                break;

            /*- mm 990921 -*/
            case hex_state:
                {
                    switch (hex_scan_state)
                    {
                        case hex_start:
                            for (chindex = 0; chindex < 8; chindex++)
                            {
                                *(chptr + chindex) = '\0';
                            }
                            NibbleIndex = 2;
                            hex_scan_state = hex_leading_sig_zeroes;
                            c = fetch();
                            break;

                        case hex_leading_sig_zeroes:
                            if (c == '0')
                            {
                                c = fetch();
                                break;
                            }
                            hex_scan_state = hex_int_digit_loop;

                            break;

                        case hex_int_digit_loop:
                            if (!isxdigit(c))
                            {
                                if (c == dot)
                                {
                                    hex_scan_state = hex_frac_digit_loop;
                                    c = fetch();
                                }
                                else
                                {
                                    hex_scan_state = hex_sig_end;
                                }
                                break;
                            }
                            if (NibbleIndex < 17)
                            {
                                intdigits++;
                                uch = *(chptr + NibbleIndex / 2);
                                ui = toupper(c);
                                if (ui >= 'A')
                                {
                                    ui = ui - 'A' + 10;
                                }
                                else
                                {
                                    ui -= '0';
                                }
                                uch1 = ui;
                                if ((NibbleIndex % 2) != 0)
                                {
                                    uch |= uch1;
                                }
                                else
                                {
                                    uch |= uch1 << 4;
                                }
                                *(chptr + NibbleIndex++ / 2) = uch;
                                c = fetch();
                            }
                            else
                            {
                                c = fetch(); /* ignore extra hexadecimal digits */
                            }

                            break;

                        case hex_frac_digit_loop:
                            if (!isxdigit(c))
                            {
                                hex_scan_state = hex_sig_end;
                                break;
                            }
                            if (NibbleIndex < 17)
                            {
                                uch = *(chptr + NibbleIndex / 2);
                                ui = toupper(c);
                                if (ui >= 'A')
                                {
                                    ui = ui - 'A' + 10;
                                }
                                else
                                {
                                    ui -= '0';
                                }
                                uch1 = ui;
                                if ((NibbleIndex % 2) != 0)
                                {
                                    uch |= uch1;
                                }
                                else
                                {
                                    uch |= uch1 << 4;
                                }
                                *(chptr + NibbleIndex++ / 2) = uch;
                                c = fetch();
                            }
                            else
                            {
                                c = fetch(); /* ignore extra hexadecimal digits */
                            }
                            break;

                        case hex_sig_end:
                            if (toupper(c) == 'P')
                            {
                                hex_scan_state = hex_exp_start;
                                exp_digits++;
                                c = fetch();
                            }
                            else
                            {
                                scan_state = finished;
                            }
                            break;

                        case hex_exp_start:
                            exp_digits++;
                            if (c == '-')
                            {
                                expsign = 1;
                            }
                            else if (c != '+')
                            {
                                c = unfetch(c);
                                exp_digits--;
                            }
                            hex_scan_state = hex_leading_exp_digit;
                            c = fetch();
                            break;

                        case hex_leading_exp_digit:

                            if (!isdigit(c))
                            {
                                scan_state = failure;
                                break;
                            }
                            if (c == '0')
                            {
                                exp_digits++;
                                hex_scan_state = hex_leading_exp_zeroes;
                                c = fetch();
                                break;
                            }
                            hex_scan_state = hex_exp_digit_loop;
                            break;

                        case hex_exp_digit_loop:
                            if (!isdigit(c))
                            {
                                scan_state = finished;
                                break;
                            }
                            exponent = exponent * 10 + (c - '0');
                            if (exp_value > SHRT_MAX)
                            {
                                *overflow = 1;
                            }
                            exp_digits++;
                            c = fetch();

                            break;
                    }
                }
                /*- mm 990921 -*/
                break;
        }
    }

    if (!success(scan_state))
    {
        count = 0;                       /*- mf 092497 -*/
        *chars_scanned = 0;
    }
    else
    {
        count--;
        *chars_scanned = count + spaces; /*- mani 970101 -*/
    }

    unfetch(c);

    if (hex_scan_state == not_hex)
    {                                    /* This was decimal input */

        if (exp_negative)
        {
            exp_value = -exp_value;
        }

        {
            int            n = d.sig.length;
            unsigned char* p = &d.sig.text[n];

            while (n-- && *--p == '0')
            {
                exp_adjust++;
            }

            d.sig.length = n + 1;

            if (d.sig.length == 0)
            {
                d.sig.text[d.sig.length++] = '0';
            }
        }

        exp_value += exp_adjust;

        if (exp_value < SHRT_MIN || exp_value > SHRT_MAX)
        {
            *overflow = 1;
        }

        if (*overflow)
        {
            if (exp_negative)
            {
                return (0.0);
            }
            else
            {
                return (sig_negative ? -HUGE_VAL : HUGE_VAL);
            }
        }

        d.exp = exp_value;

        result = __dec2num(&d);

                                         /*
                                          *	Note: If you look at <ansi_fp.h> you'll see that __dec2num only supports
                                          *double.                                  If you look at <float.h> you'll
                                          *see that long double == double.                                  Ergo, the
                                          *difference is moot *until* a                                  truly long double type is supported.
                                          */

        if (result != 0.0 && result < LDBL_MIN)
        {
            *overflow = 1;                       /*- hh 000126 -*/
        }
        else if (result > LDBL_MAX)
        {
            *overflow = 1;
            result = HUGE_VAL;
        }

        if (sig_negative && success(scan_state)) /*- mm 990921 -*/
        {
            result = -result;
        }

        return (result);
    }
    else
    {                                            /* The input was in hex */
#ifdef __MSL_LONGLONG_SUPPORT__
        unsigned long long* uptr = (unsigned long long*)&result;
#else
        unsigned long* uptr = (unsigned long*)&result;
#endif

        if (result)                              /*- mm 010517 -*/
        {                                        /*- mm 010517 -*/
            if (expsign)
            {
                exponent = -exponent;
            }
            while ((*(short*)(&result) & 0x00f0) != 0x0010)
            {
                *uptr >>= 1;
                exponent++;
            }
            exponent += 4 * (intdigits - 1);
            *(short*)&result &= 0x000f;
            *(short*)(&result) |= ((exponent + 1023) << 4);

            *chars_scanned = spaces + sign_detected + NibbleIndex + 1 + exp_digits;
            if (result != 0.0 && result < LDBL_MIN)
            {
                *overflow = 1;
                result = 0.0;
            }
            else if (result > LDBL_MAX)
            {
                *overflow = 1;
                result = HUGE_VAL;
            }
            if (sig_negative)
            {
                *(short*)(&result) |= 0x8000;
            }
        } /*- mm 010517 -*/
        else              /*- mm 010517 -*/
        {
            result = 0.0; /*- mm 010517 -*/
        }
        return (result);
    }
}
/*- mm 990930 -*/
long double
strtold(const char* nptr, char** endptr)
{
    long double value, abs_value;
    int         count, overflow;

    __InStrCtrl isc;
    isc.NextChar = (char*)nptr;
    isc.NullCharDetected = 0;

    value = __strtold(INT_MAX, &__StringRead, (void*)&isc, &count, &overflow);

    if (endptr)
    {
        *endptr = (char*)nptr + count;
    }

    abs_value = fabs(value);

    if (overflow || (value != 0.0 && (abs_value < DBL_MIN || abs_value > DBL_MAX)))
    {
        errno = ERANGE;
    }

    return (value);
}
/*- mm 990930 -*/

double
strtod(const char* str, char** end)
{
    long double value, abs_value;
    int         count, overflow;

    __InStrCtrl isc;
    isc.NextChar = (char*)str;
    isc.NullCharDetected = 0;

    value = __strtold(INT_MAX, &__StringRead, (void*)&isc, &count, &overflow);

    if (end)
    {
        *end = (char*)str + count;
    }

    abs_value = fabs(value);

    if (overflow || (value != 0.0 && (abs_value < DBL_MIN || abs_value > DBL_MAX)))
    {
        errno = ERANGE;
    }

    return (value);
}
double
atof(const char* str)
{
    return (strtod(str, NULL));
}
#endif /* ndef _No_Floating_Point */

/* Change record:
 * JFH 950622 First code release.
 * JFH 950727 Removed stray SysBreak(). Added code to make use of the remembered sign
 *of of the significand. JFH 950929 Discovered __dec2num doesn't like leading zeroes
 *except for zeroes, so numbers like .01 would get interpreted as zero. Fixed by
 *suppressing leading zeroes. JFH 951114 Fixed bug in strtod where value was checked
 *against DBL_MIN and DBL_MAX instead of the absolute value. JFH 960425 Changed
 *__strtold to return -HUGE_VAL instead of HUGE_VAL on overflow if a minus sign was
 *previously detected. SCM 970715 Disabled when _No_Floating_Point is defined.
 * mani970101 Fix a scanf bug dealing with white space. Things like
 *			  scanf("%5lx") weren't working properly when there was
 *			  white space.
 * mm  970609 Changed the max number of significant digits to MAX_SIG_DIG(==32)
 *instead of DBL_DIG mm  970708 Inserted Be changes mf  970924 If there are no digits
 *in the string then the value of &endp must remain unchanged In this case the
 *variable chars_scanned of strtold should be 0 mm  990325 Made to work with input
 *functions passed by pointers mf  990420 turned off k6 calling convention mf  990420
 *had to provide k6 wrap internal function __strtold as well mm  990817 Deleted
 *include of <string_io.h> mm  990921 Added code to recognize INF, NAN and for hex
 *input mm  990930 Added strtold and general clean up hh  000126 Eliminated the
 *statement that set denormalized values to zero. mm  010503 Added code for thread
 *local storage for lconv mm  010517 Correction to avoid infinite loop when str is
 *"0xy".  IR0105-0110. mm  010521 Added _MWMT wrappers cc  010531 Added
 *_GetThreadLocalData's flag
 */
