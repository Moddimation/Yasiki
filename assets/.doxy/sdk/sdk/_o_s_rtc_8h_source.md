

# File OSRtc.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSRtc.h**](_o_s_rtc_8h.md)

[Go to the documentation of this file](_o_s_rtc_8h.md)


```C++
#ifndef _DOLPHIN_OSRTC_H_
#define _DOLPHIN_OSRTC_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

// make the assert happy
#define OS_SOUND_MODE_MONO   0
#define OS_SOUND_MODE_STEREO 1

// make the asserts happy
#define OS_VIDEO_MODE_NTSC   0
#define OS_VIDEO_MODE_MPAL   2

typedef struct OSSram
{
    u16 checkSum;           
    u16 checkSumInv;        
    u32 ead0;               
    u32 ead1;               
    u32 counterBias;        
    s8  displayOffsetH;     
    u8  ntd;                
    u8  language;           
    u8  flags;              
} OSSram;

typedef struct OSSramEx
{
    u8  flashID[2][12];     
    u32 wirelessKeyboardID; 
    u16 wirelessPadID[4];   
    u8  dvdErrorCode;       
    u8  _padding0;          
    u8  flashIDCheckSum[2]; 
    u8  _padding1[4];       
} OSSramEx;

u32  OSGetSoundMode ();
void OSSetSoundMode (u32 mode);
u32  OSGetProgressiveMode ();
void OSSetProgressiveMode (u32 mode);
u32  OSGetVideoMode ();
void OSSetVideoMode (u32 mode);
u16  OSGetLanguage ();
void OSSetLanguage (u16 language);

#ifdef __cplusplus
}
#endif

#endif                      // _DOLPHIN_OSRTC_H_
```


