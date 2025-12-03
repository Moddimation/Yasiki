

# File dolphin\_trk\_glue.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Os**](dir_2f2fdfbe259708b14c1b1957d535f4d4.md) **>** [**dolphin**](dir_54b1793060a27cda3d182d23bc617e99.md) **>** [**dolphin\_trk\_glue.h**](dolphin__trk__glue_8h.md)

[Go to the documentation of this file](dolphin__trk__glue_8h.md)


```C++
#ifndef OS_DOLPHIN_DOLPHIN_TRK_GLUE_H
#define OS_DOLPHIN_DOLPHIN_TRK_GLUE_H

#include "dolphin/os.h"
#include "trk.h"
#include "stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*DBCommFunc)(void);
typedef u32 (*DBPollFunc)(void);
typedef void (*DBCommInitFunc)(volatile u8**, __OSInterruptHandler);
typedef int (*DBCommReadFunc)(void*, size_t);
typedef int (*DBCommWriteFunc)(const void*, size_t);

typedef struct DBCommTable {
    DBCommInitFunc initialize_func;
    DBCommFunc init_interrupts_func;
    DBPollFunc peek_func;
    DBCommReadFunc read_func;
    DBCommWriteFunc write_func;
    DBCommFunc open_func;
    DBCommFunc close_func;
} DBCommTable;

DSError TRKInitializeIntDrivenUART(u32 param_0, u32 param_1, u32 param_2,
                                   volatile u8** param_3);

void UnreserveEXI2Port(void);
void ReserveEXI2Port(void);
int TRKPollUART(void);
UARTError TRKReadUARTN(void* bytes, u32 length);
UARTError TRKWriteUARTN(const void* bytes, u32 length);
void TRKLoadContext(OSContext* ctx, u32 r4);
int InitMetroTRKCommTable(int hwId);
void EnableEXI2Interrupts(void);
void TRK_board_display(char* str);

#ifdef __cplusplus
}
#endif

#endif /* OS_DOLPHIN_DOLPHIN_TRK_GLUE_H */
```


