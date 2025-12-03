

# File msg.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**msg.c**](msg_8c.md)

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


