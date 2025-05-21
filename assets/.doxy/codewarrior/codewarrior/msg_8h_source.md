

# File msg.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**msg.h**](msg_8h.md)

[Go to the documentation of this file](msg_8h.md)


```C++
#ifndef METROTRK_PORTABLE_MSG_H
#define METROTRK_PORTABLE_MSG_H

#include "trk.h"
#include "dolphin/types.h"

typedef struct _TRK_Msg {
    u8 _00[8];
    u32 m_msgLength;
    u32 _0C;
    u32 m_msg;
} TRK_Msg;

#ifdef __cplusplus
extern "C" {
#endif

DSError TRKMessageSend(TRK_Msg* msg);

#ifdef __cplusplus
}
#endif

#endif /* METROTRK_PORTABLE_MSG_H */
```


