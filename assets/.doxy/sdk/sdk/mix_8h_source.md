

# File mix.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**mix.h**](mix_8h.md)

[Go to the documentation of this file](mix_8h.md)


```C++
#ifndef _DOLPHIN_MIX_H_
#define _DOLPHIN_MIX_H_

#include <dolphin/ax.h>

struct MIXChannel
{
    AXVPB* axvpb; 
    u32    mode;  
    int    input; 
    int    auxA;  
    int    auxB;  
    int    pan;   
    int    span;  
    int    fader; 
    int    l;     
    int    r;     
    int    f;     
    int    b;     
    u16    v;     
    u16    v1;    
    u16    vL;    
    u16    vL1;   
    u16    vR;    
    u16    vR1;   
    u16    vS;    
    u16    vS1;   
    u16    vAL;   
    u16    vAL1;  
    u16    vAR;   
    u16    vAR1;  
    u16    vAS;   
    u16    vAS1;  
    u16    vBL;   
    u16    vBL1;  
    u16    vBR;   
    u16    vBR1;  
    u16    vBS;   
    u16    vBS1;  
};

// mix.c
void MIXInit (void);
void MIXQuit (void);
void MIXInitChannel (AXVPB* axvpb,
                     u32    mode,
                     int    input,
                     int    auxA,
                     int    auxB,
                     int    pan,
                     int    span,
                     int    fader);
void MIXReleaseChannel (AXVPB* axvpb);
void MIXResetControls (AXVPB* p);
void MIXSetInput (AXVPB* p, int dB);
void MIXAdjustInput (AXVPB* p, int dB);
int  MIXGetInput (AXVPB* p);
void MIXAuxAPostFader (AXVPB* p);
void MIXAuxAPreFader (AXVPB* p);
int  MIXAuxAIsPostFader (AXVPB* p);
void MIXSetAuxA (AXVPB* p, int dB);
void MIXAdjustAuxA (AXVPB* p, int dB);
int  MIXGetAuxA (AXVPB* p);
void MIXAuxBPostFader (AXVPB* p);
void MIXAuxBPreFader (AXVPB* p);
int  MIXAuxBIsPostFader (AXVPB* p);
void MIXSetAuxB (AXVPB* p, int dB);
void MIXAdjustAuxB (AXVPB* p, int dB);
int  MIXGetAuxB (AXVPB* p);
void MIXSetPan (AXVPB* p, int pan);
void MIXAdjustPan (AXVPB* p, int pan);
int  MIXGetPan (AXVPB* p);
void MIXSetSPan (AXVPB* p, int span);
void MIXAdjustSPan (AXVPB* p, int span);
int  MIXGetSPan (AXVPB* p);
void MIXMute (AXVPB* p);
void MIXUnMute (AXVPB* p);
int  MIXIsMute (AXVPB* p);
void MIXSetFader (AXVPB* p, int dB);
void MIXAdjustFader (AXVPB* p, int dB);
int  MIXGetFader (AXVPB* p);
void MIXSetDvdStreamFader (int dB);
int  MIXGetDvdStreamFader (void);
void MIXUpdateSettings (void);

#endif // _DOLPHIN_MIX_H_
```


