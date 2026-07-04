

# File seq.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**seq.h**](seq_8h.md)

[Go to the documentation of this file](seq_8h.md)


```C++
#ifndef _DOLPHIN_SEQ_H_
#define _DOLPHIN_SEQ_H_

#include <dolphin/syn.h>

typedef struct _SEQTRACK
{
    void* sequence;                               
    u8*   start;                                  
    u8*   end;                                    
    u8*   current;                                
    u8    status;                                 
    float beatsPerSec;                            
    u32   defaultTicksPerFrame;                   
    u32   ticksPerFrame;                          
    u32   delay;                                  
    u32   state;                                  
} SEQTRACK;

typedef struct _SEQSEQUENCE
{
    void*           next;                         
    u32             state;                        
    u16             nTracks;                      
    s16             timeFormat;                   
    u32             tracksRunning;                
    u32             end;                          
    struct SYNSYNTH synth;                        
    void            (*callback[128]) (void*, u8); 
    SEQTRACK        track[64];                    
} SEQSEQUENCE;

#define SEQ_ALL_TRACKS -1

// seq.c
void SEQInit (void);
void SEQQuit (void);
void SEQRunAudioFrame (void);
void SEQAddSequence (SEQSEQUENCE* sequence,
                     u32*         midiStream,
                     void*        wt,
                     u32          aramBase,
                     u32          priorityVoiceAlloc,
                     u32          priorityNoteOn,
                     u32          priorityNoteRelease);
void SEQRemoveSequence (SEQSEQUENCE* sequence);
void SEQRegisterControllerCallback (SEQSEQUENCE* sequence,
                                    u8           controller,
                                    void         (*callback) (void*, u8));
void SEQSetState (SEQSEQUENCE* sequence, u32 state);
u32  SEQGetState (SEQSEQUENCE* sequence);
void SEQSetTempo (SEQSEQUENCE* sequence, u32 trackIndex, float bpm);
f32  SEQGetTempo (SEQSEQUENCE* sequence, u32 trackIndex);
void SEQSetVolume (SEQSEQUENCE* sequence, s32 dB);
s32  SEQGetVolume (SEQSEQUENCE* sequence);

#endif // _DOLPHIN_SEQ_H_
```


