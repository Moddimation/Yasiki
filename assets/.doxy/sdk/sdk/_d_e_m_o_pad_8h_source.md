

# File DEMOPad.h

[**File List**](files.md) **>** [**demo**](dir_5983b1906ef8e2e82d96c775d5089d03.md) **>** [**DEMOPad.h**](_d_e_m_o_pad_8h.md)

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


