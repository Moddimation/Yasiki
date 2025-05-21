

# File msg.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**msg.c**](msg_8c.md)

[Go to the documentation of this file](msg_8c.md)


```C++
#include "Portable/msg.h"
#include "Os/dolphin/dolphin_trk_glue.h"
#include "trk.h"

DSError TRKMessageSend(TRK_Msg* msg)
{
    DSError write_err = TRKWriteUARTN(&msg->m_msg, msg->m_msgLength);
    return DS_NoError;
}
```


