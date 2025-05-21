

# File \_\_bt.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**\_\_bt.h**](____bt_8h.md)

[Go to the documentation of this file](____bt_8h.md)


```C++
/* Values returned by the __builtin_ntype function  */

#ifndef __bt_h
#define __bt_h

#define __BT_VOID       0x0000
#define __BT_INT        0x0100      //  has BTS_* subtype
#define __BT_FLOAT      0x0200      //  has BTS_* subtype
#define __BT_ENUM       0x0400      //  has BTS_* subtype
#define __BT_POINTER    0x0800
#define __BT_ARRAY      0x1000
#define __BT_STRUCT     0x2000
#define __BT_PTM        0x4000
#define __BT_FUNC       0x8000

#define __BTS_BOOL      0x0001      //  bool
#define __BTS_CHAR      0x0002      //  char
#define __BTS_SCHAR     0x0003      //  signed char
#define __BTS_UCHAR     0x0004      //  unsigned char
#define __BTS_WCHAR     0x0005      //  wchar_t
#define __BTS_SHORT     0x0006      //  short
#define __BTS_USHORT    0x0007      //  unsigned short
#define __BTS_INT       0x0008      //  int
#define __BTS_UINT      0x0009      //  unsigned int
#define __BTS_LONG      0x000a      //  long
#define __BTS_ULONG     0x000b      //  unsigned long
#define __BTS_LONGLONG  0x000c      //  long long
#define __BTS_ULONGLONG 0x000d      //  unsigned long long
#define __BTS_FLOAT     0x000e      //  float
#define __BTS_SDOUBLE   0x000f      //  short float
#define __BTS_DOUBLE    0x0010      //  double
#define __BTS_LDOUBLE   0x0011      //  long double

#endif
```


