/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/27 20:51:25 $
 * $Revision: 1.8.4.1 $
 */

// locale.cpp

#include <locale>

#ifndef _MSL_NO_IO

#ifndef _MSL_NO_LOCALE
#include <clocale>
#endif
#include <cctype>
#include <ios>
#include <streambuf>
#ifdef _MSL_USING_MSL_C
#include <ansi_fp.h>
#endif

#ifdef _MSL_FORCE_ENUMS_ALWAYS_INT
#if _MSL_FORCE_ENUMS_ALWAYS_INT
#pragma enumsalwaysint on
#else
#pragma enumsalwaysint off
#endif
#endif

#ifdef _MSL_FORCE_ENABLE_BOOL_SUPPORT
#if _MSL_FORCE_ENABLE_BOOL_SUPPORT
#pragma bool on
#else
#pragma bool off
#endif
#endif

#ifndef _MSL_NO_CPP_NAMESPACE
namespace std
{
#endif

#ifndef _MSL_NO_LOCALE

size_t locale::id::id_count_s = 0;
locale&
locale::global() _MSL_THROW
{
    static locale G(classic());
    return G;
}
locale
locale::global(const locale& loc)
{
    locale& g = global();
    locale  result(g);
    g = loc;
    if (loc.imp_->name() != "*")
    {
        setlocale(LC_ALL, loc.imp_->name().c_str());
    }
    return result;
}
const locale&
locale::classic() _MSL_THROW
{
    static locale C(imp_type(new __locale_imp<true>("C")));
    return C;
}
// ctype<char>

// hh 990109
#define __ct ctype_base::mask(0x01)
#define __mt ctype_base::mask(0x02)
#define __sp ctype_base::mask(0x04)
#define __pt ctype_base::mask(0x08)
#define __hd ctype_base::mask(0x30)
#define __lw ctype_base::mask(0x40)
#define __up ctype_base::mask(0x80)
#define __hl ctype_base::mask(0x60)
#define __hu ctype_base::mask(0xA0)

#ifndef _MSL_USING_MSL_C

ctype_base::mask __ctype_map[ctype<char>::table_size] = {
    //	 -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C
    //-D    -E    -F
    __ct, __ct, __ct, __ct, __ct, __ct, __ct, __ct,
    __ct, __mt, __mt, __mt, __mt, __mt, __ct, __ct, // 0-
    __ct, __ct, __ct, __ct, __ct, __ct, __ct, __ct,
    __ct, __ct, __ct, __ct, __ct, __ct, __ct, __ct, // 1-
    __sp, __pt, __pt, __pt, __pt, __pt, __pt, __pt,
    __pt, __pt, __pt, __pt, __pt, __pt, __pt, __pt, // 2-
    __hd, __hd, __hd, __hd, __hd, __hd, __hd, __hd,
    __hd, __hd, __pt, __pt, __pt, __pt, __pt, __pt, // 3-
    __pt, __hu, __hu, __hu, __hu, __hu, __hu, __up,
    __up, __up, __up, __up, __up, __up, __up, __up, // 4-
    __up, __up, __up, __up, __up, __up, __up, __up,
    __up, __up, __up, __pt, __pt, __pt, __pt, __pt, // 5-
    __pt, __hl, __hl, __hl, __hl, __hl, __hl, __lw,
    __lw, __lw, __lw, __lw, __lw, __lw, __lw, __lw, // 6-
    __lw, __lw, __lw, __lw, __lw, __lw, __lw, __lw,
    __lw, __lw, __lw, __pt, __pt, __pt, __pt, __ct  // 7-
};

unsigned char __lower_map[ctype<char>::table_size] = {
    //	 -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C
    //-D    -E    -F
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, // 0-
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, // 1-
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
    0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, // 2-
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
    0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, // 3-
    0x40, 'a',  'b',  'c',  'd',  'e',  'f',  'g',
    'h',  'i',  'j',  'k',  'l',  'm',  'n',  'o',  // 4-
    'p',  'q',  'r',  's',  't',  'u',  'v',  'w',
    'x',  'y',  'z',  0x5B, 0x5C, 0x5D, 0x5E, 0x5F, // 5-
    0x60, 'a',  'b',  'c',  'd',  'e',  'f',  'g',
    'h',  'i',  'j',  'k',  'l',  'm',  'n',  'o',  // 6-
    'p',  'q',  'r',  's',  't',  'u',  'v',  'w',
    'x',  'y',  'z',  0x7B, 0x7C, 0x7D, 0x7E, 0x7F, // 7-
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
    0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, // 8-
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
    0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, // 9-
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7,
    0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, // A-
    0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7,
    0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, // B-
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7,
    0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, // C-
    0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7,
    0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, // D-
    0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7,
    0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, // E-
    0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7,
    0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF  // F-
};

unsigned char __upper_map[ctype<char>::table_size] = {
    //	 -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C
    //-D    -E    -F
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, // 0-
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, // 1-
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
    0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, // 2-
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
    0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, // 3-
    0x40, 'A',  'B',  'C',  'D',  'E',  'F',  'G',
    'H',  'I',  'J',  'K',  'L',  'M',  'N',  'O',  // 4-
    'P',  'Q',  'R',  'S',  'T',  'U',  'V',  'W',
    'X',  'Y',  'Z',  0x5B, 0x5C, 0x5D, 0x5E, 0x5F, // 5-
    0x60, 'A',  'B',  'C',  'D',  'E',  'F',  'G',
    'H',  'I',  'J',  'K',  'L',  'M',  'N',  'O',  // 6-
    'P',  'Q',  'R',  'S',  'T',  'U',  'V',  'W',
    'X',  'Y',  'Z',  0x7B, 0x7C, 0x7D, 0x7E, 0x7F, // 7-
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
    0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, // 8-
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
    0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, // 9-
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7,
    0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, // A-
    0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7,
    0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, // B-
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7,
    0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, // C-
    0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7,
    0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, // D-
    0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7,
    0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, // E-
    0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7,
    0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF  // F-
};

#endif                                              // _MSL_USING_MSL_C

#ifndef __GNUC__
template <>
#endif
ctype<char>::ctype(const mask* tab, bool del, size_t refs)
  : locale::facet(refs), __table_(tab), __lower_map_(__lower_map),
    __upper_map_(__upper_map), __owns_(del)
{
    if (__table_ == 0)
    {
        __table_ = classic_table();
        __owns_ = false;
    }
}
#ifndef __GNUC__
template <>
#endif
ctype<char>::~ctype()
{
    if (__owns_)
    {
        delete[] __table_;
    }
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::is(const char* low, const char* high, mask* vec) const
{
    for (const char* p = low; p < high; ++low, ++vec)
    {
        *vec = __table_[(unsigned char)*p];
    }
    return high;
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::scan_is(mask m, const char* low, const char* high) const
{
    const char* p;
    for (p = low; p < high; ++p)
    {
        if (__table_[(unsigned char)*p] & m)
        {
            break;
        }
    }
    return p;
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::scan_not(mask m, const char* low, const char* high) const
{
    const char* p;
    for (p = low; p < high; ++p)
    {
        if (!(__table_[(unsigned char)*p] & m))
        {
            break;
        }
    }
    return p;
}
#ifndef __GNUC__
template <>
#endif
locale::id ctype<char>::id;

#ifndef __GNUC__
template <>
#endif
char
ctype<char>::do_toupper(char c) const
{
    return (char)__upper_map_[(unsigned char)c];
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::do_toupper(char* low, const char* high) const
{
    for (; low < high; ++low)
    {
        *low = char(__upper_map_[(unsigned char)*low]);
    }
    return high;
}
#ifndef __GNUC__
template <>
#endif
char
ctype<char>::do_tolower(char c) const
{
    return (char)__lower_map_[(unsigned char)c];
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::do_tolower(char* low, const char* high) const
{
    for (; low < high; ++low)
    {
        *low = char(__lower_map_[(unsigned char)*low]);
    }
    return high;
}
#ifndef __GNUC__
template <>
#endif
char
ctype<char>::do_widen(char c) const
{
    return c;
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::do_widen(const char* low, const char* high, char* to) const
{
    memcpy(to, low, size_t(high - low));
    return high;
}
#ifndef __GNUC__
template <>
#endif
char
ctype<char>::do_narrow(char c, char) const
{
    return c;
}
#ifndef __GNUC__
template <>
#endif
const char*
ctype<char>::do_narrow(const char* low, const char* high, char, char* to) const
{
    memcpy(to, low, size_t(high - low));
    return high;
}
// codecvt<char, char, mbstate_t>

#ifndef __GNUC__
template <>
#endif
locale::id codecvt<char, char, mbstate_t>::id;

// codecvt<wchar_t, char, mbstate_t>

#if defined(__MWERKS__) && __MWERKS__ < 0x2500 &&                                   \
    !defined(_MSL_NO_WCHART_CPP_SUPPORT)
template <> locale::id codecvt<wchar_t, char, mbstate_t>::id;
#endif

#endif // _MSL_NO_LOCALE

#ifndef _No_Floating_Point

#ifdef _MSL_EXTENDED_PRECISION_OUTP
_BCD::_BCD(size_t x) : exp_(0)
{
    for (; x != 0; x /= 10)
    {
        mantissa_ += char(x % 10);
    }
    reverse(mantissa_.begin(), mantissa_.end());
    if (mantissa_.size() > 0)
    {
        exp_ = short(mantissa_.size() - 1);
    }
}
#endif
_BCD::_BCD(long double x) : exp_(0), classification_(0)
{
    if (isinf(x))
    {
        classification_ = 2;
        return;
    }
    if (isnan(x))
    {
        classification_ = 1;
        return;
    }
#ifndef _MSL_EXTENDED_PRECISION_OUTP
#ifdef _MSL_USING_MSL_C
    decimal d;
    decform form;
    form.style = FLOATDECIMAL;
    form.digits = decform_digits_;
    __num2dec(&form, x, &d);
    mantissa_.reserve(d.sig.length);
    for (size_t i = 0; i < d.sig.length; ++i)
    {
        mantissa_.push_back(char(d.sig.text[i] - '0'));
    }
    exp_ = short(d.sig.length + d.exp - 1);
#else  // _MSL_USING_MSL_C
    char buff[40];
    sprintf(buff, "%#.*Le", 31, x);
    mantissa_ = buff;
    // Get exponent
    string::iterator i = mantissa_.begin() + 35;
    while (i != mantissa_.end())
    {
        exp_ *= 10;
        exp_ += short(*i - '0');
        ++i;
    }
    i = mantissa_.begin() + 34;
    if (*i == '-')
    {
        exp_ = short(-exp_);
    }
    --i;
    // Remove exponent and decimal point
    mantissa_.erase(i, mantissa_.end());
    mantissa_.erase(mantissa_.begin() + 1);
    for (i = mantissa_.begin(); i != mantissa_.end(); ++i)
    {
        *i -= '0';
    }
#endif // _MSL_USING_MSL_C
#else  // _MSL_EXTENDED_PRECISION_OUTP
    if (x > 0)
    {
        int         exp;
        long double frac = frexpl(x, &exp);
        _BCD        scale = __two_exp(short(exp));
        const short num_bits_extract = numeric_limits<size_t>::digits;
        const _BCD  inc_scale = __two_exp(-num_bits_extract);
        _BCD        temp;
        while (frac != 0)
        {
            long double integer;
            frac = modfl(ldexpl(frac, num_bits_extract), &integer);
            scale *= inc_scale;
            if (integer != 0)
            {
                temp = scale;
                temp *= _BCD((size_t)integer);
                *this += temp;
            }
        }
    }
#endif // _MSL_EXTENDED_PRECISION_OUTP
}
// return 1 if mantissa_[pos]... > 5
//       -1 if mantissa_[pos]... < 5
//        0 if mantissa_[pos] == 5 and all following are 0
//   else 1
int
_BCD::must_round(size_t pos) const
{
    if (pos >= mantissa_.size())
    {
        return -1;
    }
    char tmp = mantissa_[pos];
    if (tmp > 5)
    {
        return 1;
    }
    if (tmp < 5)
    {
        return -1;
    }
    if (mantissa_.find_first_not_of(char(0), size_t(pos + 1)) == string::npos)
    {
        return 0;
    }
    return 1;
}
string
_BCD::to_string(int precision, int& exponent) const
{
    if (precision <= 0)
    {
        return string();
    }
    string result(mantissa_, 0, size_t(precision));
    exponent = exp_;
    if (precision < mantissa_.size())
    {
        int might_round = must_round(size_t(precision));
        if (might_round >= 0)
        {
            string::iterator i = result.end() - 1;
            bool             round = static_cast<bool>(might_round == 1);
            if (might_round == 0)
            {
                round = static_cast<bool>(*i % 2);
            }
            if (round)
            {
                while (true)
                {
                    if (*i < 9)
                    {
                        (*i)++;
                        break;
                    }
                    *i = char();
                    if (i == result.begin())
                    {
                        result.insert(result.begin(), char(1));
                        result.resize(result.size() - 1);
                        ++exponent;
                        break;
                    }
                    --i;
                }
            }
        }
    }
    string::iterator e = result.end();
    for (string::iterator i = result.begin(); i < e; ++i)
    {
        *i += '0';
    }
    return result;
}
long double
_BCD::to_long_double() const
{
    if (classification_ == 1)
    {
        return NAN;
    }
    if (classification_ == 2)
    {
        return INFINITY;
    }
    if (mantissa_.size() == 0)
    {
        return 0;
    }
#if 1
#ifdef _MSL_USING_MSL_C
    decimal d = {
        0, 0, 0, { 0, "" }
    };
    d.sig.length =
        min<unsigned char>(decform_digits_, (unsigned char)mantissa_.size());
    for (unsigned char i = 0; i < d.sig.length; ++i)
    {
        d.sig.text[i] = (unsigned char)(mantissa_[i] + '0');
    }
    d.exp = short(exp_ + 1 - d.sig.length);
    return __dec2num(&d);
#else  // _MSL_USING_MSL_C
    string           str(mantissa_);
    string::iterator e = str.end();
    for (string::iterator i = str.begin(); i < e; ++i)
    {
        *i += '0';
    }
    str.insert(1, 1, '.');
    if (exp_ != 0)
    {
        str.append(1, 'e');
        if (exp_ >= 0)
        {
            str.append(1, '+');
        }
        else
        {
            str.append(1, '-');
        }
        int               exp = abs(int(exp_));
        string::size_type e1 = str.size();
        while (exp > 0)
        {
            str.append(1, char(exp % 10 + '0'));
            exp /= 10;
        }
        reverse(str.begin() + e1, str.end());
    }
    return strtod(str.c_str(), 0);
#endif // _MSL_USING_MSL_C
#else
    string::const_iterator e = mantissa_.end();
    string::const_iterator i = mantissa_.begin();
    long double            first_guess = *i;
    int                    exponent = exp_;
    for (++i; i < e; ++i)
    {
        long double temp1 = first_guess * 10;
        long double temp2 = temp1 + *i;
        if (*i != 0 && temp1 == temp2)
        {
            break;
        }
        first_guess = temp2;
        --exponent;
    }
    first_guess = ldexp(first_guess, exponent);
    if (exponent < 0)
    {
        first_guess /= pow(5.L, -exponent);
    }
    else
    {
        first_guess *= pow(5.L, exponent);
    }
    _BCD feedback1(first_guess);
    if (feedback1 == *this || isinf(first_guess))
    {
        return first_guess;
    }
    if (feedback1 < *this)
    {
        long double next_guess =
            nextafter(first_guess, static_cast<long double>(INFINITY));
        if (isinf(next_guess))
        {
            return next_guess;
        }
        _BCD feedback2(next_guess);
        while (feedback2 < *this)
        {
            feedback1 = feedback2;
            first_guess = next_guess;
            next_guess = nextafter(next_guess, static_cast<long double>(INFINITY));
            if (isinf(next_guess))
            {
                return next_guess;
            }
            feedback2 = _BCD(next_guess);
        }
        _BCD difflow = *this - feedback1;
        _BCD diffhigh = feedback2 - *this;
        if (difflow <= diffhigh)
        {
            return first_guess;
        }
        return next_guess;
    }
    long double next_guess =
        nextafter(first_guess, static_cast<long double>(-INFINITY));
    _BCD feedback2(next_guess);
    while (feedback2 > *this)
    {
        feedback1 = feedback2;
        first_guess = next_guess;
        next_guess = nextafter(next_guess, static_cast<long double>(-INFINITY));
        feedback2 = _BCD(next_guess);
    }
    _BCD difflow = *this - feedback2;
    _BCD diffhigh = feedback1 - *this;
    if (difflow <= diffhigh)
    {
        return next_guess;
    }
    return first_guess;
#endif
}
#ifdef _MSL_EXTENDED_PRECISION_OUTP
_BCD::_BCD(const char* mantissa, int exponent)
  : mantissa_(mantissa), exp_((short)exponent)
{
    string::iterator i = mantissa_.begin();
    string::iterator e = mantissa_.end();
    while (i < e)
    {
        *i++ -= '0';
    }
    trim();
}
_BCD&
_BCD::operator+=(_BCD rhs)
{
    if (rhs.mantissa_.size() == 0)
    {
        return *this;
    }
    if (mantissa_.size() == 0)
    {
        *this = rhs;
        return *this;
    }
    if (exp_ > rhs.exp_)
    {
        rhs.mantissa_.insert(rhs.mantissa_.begin(), size_t(exp_ - rhs.exp_), char());
        rhs.exp_ = exp_;
    }
    else if (exp_ < rhs.exp_)
    {
        mantissa_.insert(mantissa_.begin(), size_t(rhs.exp_ - exp_), char());
        exp_ = rhs.exp_;
    }
    if (rhs.mantissa_.size() > mantissa_.size())
    {
        mantissa_.resize(rhs.mantissa_.size(), char());
    }
    else if (rhs.mantissa_.size() < mantissa_.size())
    {
        rhs.mantissa_.resize(mantissa_.size(), char());
    }
    string::iterator       i = mantissa_.end() - 1;
    string::iterator       b = mantissa_.begin();
    string::const_iterator j = rhs.mantissa_.end() - 1;
    char                   carry = char();
    for (; i > b; --i, --j)
    {
        *i += char(*j + carry);
        if (*i > 9)
        {
            carry = char(*i / 10);
            *i %= char(10);
        }
        else
        {
            carry = char();
        }
    }
    *i += char(*j + carry);
    if (*i > 9)
    {
        carry = char(*i / 10);
        *i %= char(10);
        mantissa_.insert(b, carry);
        ++exp_;
    }
    trim();
    return *this;
}
_BCD&
_BCD::operator-=(_BCD rhs)
{
    if (rhs.mantissa_.size() == 0)
    {
        return *this;
    }
    if (exp_ > rhs.exp_)
    {
        rhs.mantissa_.insert(rhs.mantissa_.begin(), size_t(exp_ - rhs.exp_), char());
        rhs.exp_ = exp_;
    }
    if (rhs.mantissa_.size() > mantissa_.size())
    {
        mantissa_.resize(rhs.mantissa_.size(), char());
    }
    else if (rhs.mantissa_.size() < mantissa_.size())
    {
        rhs.mantissa_.resize(mantissa_.size(), char());
    }
    string::iterator       i = mantissa_.end() - 1;
    string::iterator       b = mantissa_.begin();
    string::const_iterator j = rhs.mantissa_.end() - 1;
    for (; i > b; --i, --j)
    {
        if (*i < *j)
        {
            string::iterator k = i - 1;
            while (*k == 0)
            {
                --k;
            }
            while (k != i)
            {
                --*k;
                *++k += char(10);
            }
        }
        *i -= *j;
    }
    *i -= *j;
    for (; *i == 0; ++i)
    {
    }
    if (i > b)
    {
        exp_ -= static_cast<short>(i - b);
        mantissa_.erase(b, i);
    }
    trim();
    return *this;
}
_BCD&
_BCD::operator*=(_BCD rhs)
{      // hh 990401
    if (mantissa_.size() == 0)
    {
        return *this;
    }
    if (rhs.mantissa_.size() == 0)
    {
        *this = rhs;
        return *this;
    }
    _BCD                   lhs(*this);
    unsigned long          accumulator = 0;
    long                   lhs_sz = static_cast<long>(lhs.mantissa_.size());
    long                   rhs_sz = static_cast<long>(rhs.mantissa_.size());
    string::const_iterator lhs_beg = lhs.mantissa_.begin();
    string::const_iterator rhs_beg = rhs.mantissa_.begin();
    mantissa_.clear();
    mantissa_.resize(static_cast<string::size_type>(lhs_sz + rhs_sz - 1), char());
    string::iterator ip = mantissa_.end();
    for (long i = (long)mantissa_.size() - 1; i >= 0; --i)
    {
        long k = rhs_sz - 1;
        long j = i - k;
        if (j < 0)
        {
            j = 0;
            k = i;
        }
        string::const_iterator jp = lhs_beg + j;
        string::const_iterator kp = rhs_beg + k + 1;
        for (; j < lhs_sz && k >= 0; --k, ++j, ++jp)
        {
            accumulator += (unsigned long)*jp * *--kp;
        }
        *--ip = char(accumulator % 10);
        accumulator /= 10;
    }
    exp_ = short(lhs.exp_ + rhs.exp_);
    while (accumulator > 0)
    {
        mantissa_.insert(mantissa_.begin(), char(accumulator % 10));
        accumulator /= 10;
        ++exp_;
    }
    trim();
    return *this;
}
_BCD
__two_exp(short x)
{
    static const _BCD one_half("5", -1);
    static const _BCD two("2", 0);
    switch (x)
    {
        case -64:
            {
                static const _BCD one_two_to_the_negative_sixtyfourth(
                    "542101086242752217003726400434970855712890625", -20);
                return one_two_to_the_negative_sixtyfourth;
            }
        case -53:
            {
                static const _BCD one_two_to_the_negative_fiftythird(
                    "11102230246251565404236316680908203125", -16);
                return one_two_to_the_negative_fiftythird;
            }
        case -32:
            {
                static const _BCD one_two_to_the_negative_thirtysecond(
                    "23283064365386962890625", -10);
                return one_two_to_the_negative_thirtysecond;
            }
        case -16:
            {
                static const _BCD one_two_to_the_negative_sixteenth("152587890625",
                                                                    -5);
                return one_two_to_the_negative_sixteenth;
            }
        case -8:
            {
                static const _BCD one_twohundredfiftysixth("390625", -3);
                return one_twohundredfiftysixth;
            }
        case -7:
            {
                static const _BCD one_onehundredtwentyeighth("78125", -3);
                return one_onehundredtwentyeighth;
            }
        case -6:
            {
                static const _BCD one_sixtyfourth("15625", -2);
                return one_sixtyfourth;
            }
        case -5:
            {
                static const _BCD one_thirtysecond("3125", -2);
                return one_thirtysecond;
            }
        case -4:
            {
                static const _BCD one_sixteenth("625", -2);
                return one_sixteenth;
            }
        case -3:
            {
                static const _BCD one_eighth("125", -1);
                return one_eighth;
            }
        case -2:
            {
                static const _BCD one_fourth("25", -1);
                return one_fourth;
            }
        case -1:
            return one_half;
        case 0:
            {
                static const _BCD one("1", 0);
                return one;
            }
        case 1:
            return two;
        case 2:
            {
                static const _BCD four("4", 0);
                return four;
            }
        case 3:
            {
                static const _BCD eight("8", 0);
                return eight;
            }
        case 4:
            {
                static const _BCD sixteen("16", 1);
                return sixteen;
            }
        case 5:
            {
                static const _BCD thirtytwo("32", 1);
                return thirtytwo;
            }
        case 6:
            {
                static const _BCD sixtyfour("64", 1);
                return sixtyfour;
            }
        case 7:
            {
                static const _BCD onehundredtwentyeight("128", 2);
                return onehundredtwentyeight;
            }
        case 8:
            {
                static const _BCD twohundredfiftysix("256", 2);
                return twohundredfiftysix;
            }
    }
    _BCD temp = __two_exp(short(x / 2));
    temp *= temp;
    if (x % 2)
    {
        if (x > 0)
        {
            temp *= two;
        }
        else
        {
            temp *= one_half;
        }
    }
    return temp;
}
bool
operator<(const _BCD& x, const _BCD& y)
{
    bool x_zero = x.mantissa_.empty();
    bool y_zero = y.mantissa_.empty();
    if (x_zero && !y_zero)
    {
        return true;
    }
    if (x_zero && y_zero)
    {
        return false;
    }
    if (y_zero)
    {
        return false;
    }
    return x.exp_ < y.exp_ || x.exp_ == y.exp_ && x.mantissa_ < y.mantissa_;
}
#endif // _MSL_EXTENDED_PRECISION_OUTP

#endif // _No_Floating_Point

#ifndef _MSL_NO_CPP_NAMESPACE
}
#endif

#endif // _MSL_NO_IO

// hh 980811 reworded dhex, uhex and lhex defines
// hh 980816 ARM/Standard neutral for-scoping
// hh 980902 #ifdef'd out exception code when ndef MSIPL_EXCEPT
// hh 980915 Modified file so that it would work without
// MSIPL_EXPLICIT_FUNC_TEMPLATE_ARG hh 981018 Modified _BCD helper class to not round
// if it uses sprintf hh 981111 Removed dependence on compiler support for default
// template args in string declarations hh 990109 Created a C lib independent
// ctype_base::mask (suggested by bc). hh 990109 do_nothing no longer used hh 990120
// changed name of MSIPL flags hh 990328 Fixed bug in floating point output rounding
// hh 990330 Rewrote classify().  It was completely bonkers
// hh 990401 _BCD::operator *= uses a long long.  Put this and any code that uses it
//           inside of #ifdef __MSL_LONGLONG_SUPPORT__
// hh 000130 Installed _MSL_NO_LOCALE
// hh 000130 Installed _MSL_EXTENDED_PRECISION_OUTP
// hh 000604 Rewrote codecvt<wchar_t, char, mbstate_t>::do_in and do_out.
// hh 001011 Uninlined locale constructor taking other locale and category, gcc only
// hh 001011 ifdefed out template<> for gcc
// hh 001011 Fixed bug several places:  base class missing template arguments
// hh 010125 Rewrote
