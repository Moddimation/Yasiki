

# File DEMOPad.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOPad.h**](_d_e_m_o_pad_8h.md)

[Go to the documentation of this file](_d_e_m_o_pad_8h.md)


```C++
#ifndef _DOLPHIN_DEMOPAD_H_
#define _DOLPHIN_DEMOPAD_H_

#include <dolphin/pad.h>

typedef struct
{
    PADStatus pst;            
    u16       buttonDown;     
    u16       buttonUp;       
    u16       dirs;           
    u16       dirsNew;        
    u16       dirsReleased;   
    s16       stickDeltaX;    
    s16       stickDeltaY;    
    s16       substickDeltaX; 
    s16       substickDeltaY; 
} DEMODMPad;

extern DEMODMPad DemoPad[4];

extern u32 DemoNumValidPads;

void DEMOPadRead ();
void DEMOPadInit ();

#endif                        // _DOLPHIN_DEMOPAD_H_
```


