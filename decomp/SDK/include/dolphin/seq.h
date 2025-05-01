#ifndef _DOLPHIN_SEQ_H_
#define _DOLPHIN_SEQ_H_

#include <dolphin/syn.h>
typedef struct _SEQTRACK
{
    void* sequence;                              ///< 0x00
    u8*   start;                                 ///< 0x04
    u8*   end;                                   ///< 0x08
    u8*   current;                               ///< 0x0C
    u8    status;                                ///< 0x10
    float beatsPerSec;                           ///< 0x14
    u32   defaultTicksPerFrame;                  ///< 0x18
    u32   ticksPerFrame;                         ///< 0x1C
    u32   delay;                                 ///< 0x20
    u32   state;                                 ///< 0x24
} SEQTRACK;
typedef struct _SEQSEQUENCE
{
    void*           next;                        ///< 0x0000
    u32             state;                       ///< 0x0004
    u16             nTracks;                     ///< 0x0008
    s16             timeFormat;                  ///< 0x000A
    u32             tracksRunning;               ///< 0x000C
    u32             end;                         ///< 0x0010
    struct SYNSYNTH synth;                       ///< 0x0014
    void            (*callback[128])(void*, u8); ///< 0x3148
    SEQTRACK        track[64];                   ///< 0x3348
} SEQSEQUENCE;
#define SEQ_ALL_TRACKS -1

// seq.c
void SEQInit(void);
void SEQQuit(void);
void SEQRunAudioFrame(void);
void SEQAddSequence(SEQSEQUENCE* sequence, u32* midiStream, void* wt, u32 aramBase,
                    u32 priorityVoiceAlloc, u32 priorityNoteOn,
                    u32 priorityNoteRelease);
void SEQRemoveSequence(SEQSEQUENCE* sequence);
void SEQRegisterControllerCallback(SEQSEQUENCE* sequence, u8 controller,
                                   void (*callback)(void*, u8));
void SEQSetState(SEQSEQUENCE* sequence, u32 state);
u32  SEQGetState(SEQSEQUENCE* sequence);
void SEQSetTempo(SEQSEQUENCE* sequence, u32 trackIndex, float bpm);
f32  SEQGetTempo(SEQSEQUENCE* sequence, u32 trackIndex);
void SEQSetVolume(SEQSEQUENCE* sequence, s32 dB);
s32  SEQGetVolume(SEQSEQUENCE* sequence);

#endif // _DOLPHIN_SEQ_H_
