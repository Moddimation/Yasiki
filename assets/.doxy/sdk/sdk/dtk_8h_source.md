

# File dtk.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dtk.h**](dtk_8h.md)

[Go to the documentation of this file](dtk_8h.md)


```C++
#ifndef _DOLPHIN_DTK_H_
#define _DOLPHIN_DTK_H_

#include <dolphin/dvd.h>

typedef void (*DTKCallback) (u32 eventMask);
typedef void (*DTKFlushCallback) (void);

typedef struct DTKTrack
{
    struct DTKTrack* prev;        
    struct DTKTrack* next;        
    char*            fileName;    
    u32              eventMask;   
    DTKCallback      callback;    
    DVDFileInfo      dvdFileInfo; 
} DTKTrack;

#define DTK_STATE_STOP     0
#define DTK_STATE_RUN      1
#define DTK_STATE_PAUSE    2
#define DTK_STATE_BUSY     3
#define DTK_STATE_PREPARE  4

#define DTK_MODE_NOREPEAT  0
#define DTK_MODE_ALLREPEAT 1
#define DTK_MODE_REPEAT1   2

void      DTKInit (void);
void      DTKShutdown (void);
u32       DTKQueueTrack (char* fileName, DTKTrack* track, u32 eventMask, DTKCallback callback);
u32       DTKRemoveTrack (struct DTKTrack* track);
void      DTKFlushTracks (DTKFlushCallback callback);
void      DTKSetSampleRate (u32 samplerate);
void      DTKSetInterruptFrequency (u32 samples);
void      DTKSetRepeatMode (u32 repeat);
void      DTKSetState (u32 state);
void      DTKNextTrack (void);
void      DTKPrevTrack (void);
u32       DTKGetSampleRate (void);
u32       DTKGetRepeatMode (void);
u32       DTKGetState (void);
u32       DTKGetPosition (void);
u32       DTKGetInterruptFrequency (void);
DTKTrack* DTKGetCurrentTrack (void);
void      DTKSetVolume (u8 left, u8 right);
u16       DTKGetVolume (void);

#endif
```


