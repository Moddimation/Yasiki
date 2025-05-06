

# File seq.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**seq.h**](seq_8h.md)

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


