

# File dolphin\_trk\_glue.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Os**](dir_c56ed9b4d0a834609820f8ece539b317.md) **>** [**dolphin**](dir_dce8d8183be8371126a2be5b42bed669.md) **>** [**dolphin\_trk\_glue.h**](dolphin__trk__glue_8h.md)

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


