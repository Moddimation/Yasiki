#ifndef _DOLPHIN_SYN_H_
#define _DOLPHIN_SYN_H_

#include <dolphin/ax.h>

#define SYN_INPUT_BUFFER_SIZE 0x100
struct WTINST
{
    u16 keyRegion[128];                               ///< 0x00
};
struct WTREGION
{
    u8  unityNote;                                    ///< 0x00
    u8  keyGroup;                                     ///< 0x01
    s16 fineTune;                                     ///< 0x02
    s32 attn;                                         ///< 0x04
    u32 loopStart;                                    ///< 0x08
    u32 loopLength;                                   ///< 0x0C
    u32 articulationIndex;                            ///< 0x10
    u32 sampleIndex;                                  ///< 0x14
};
struct WTART
{
    s32 lfoFreq;                                      ///< 0x00
    s32 lfoDelay;                                     ///< 0x04
    s32 lfoAtten;                                     ///< 0x08
    s32 lfoPitch;                                     ///< 0x0C
    s32 lfoMod2Atten;                                 ///< 0x10
    s32 lfoMod2Pitch;                                 ///< 0x14
    s32 eg1Attack;                                    ///< 0x18
    s32 eg1Decay;                                     ///< 0x1C
    s32 eg1Sustain;                                   ///< 0x20
    s32 eg1Release;                                   ///< 0x24
    s32 eg1Vel2Attack;                                ///< 0x28
    s32 eg1Key2Decay;                                 ///< 0x2C
    s32 eg2Attack;                                    ///< 0x30
    s32 eg2Decay;                                     ///< 0x34
    s32 eg2Sustain;                                   ///< 0x38
    s32 eg2Release;                                   ///< 0x3C
    s32 eg2Vel2Attack;                                ///< 0x40
    s32 eg2Key2Decay;                                 ///< 0x44
    s32 eg2Pitch;                                     ///< 0x48
    s32 pan;                                          ///< 0x4C
};
struct WTSAMPLE
{
    u16 format;                                       ///< 0x00
    u16 sampleRate;                                   ///< 0x02
    u32 offset;                                       ///< 0x04
    u32 length;                                       ///< 0x08
    u16 adpcmIndex;                                   ///< 0x0C
};
struct WTADPCM
{
    u16 a[8][2];                                      ///< 0x00
    u16 gain;                                         ///< 0x20
    u16 pred_scale;                                   ///< 0x22
    u16 yn1;                                          ///< 0x24
    u16 yn2;                                          ///< 0x26
    u16 loop_pred_scale;                              ///< 0x28
    u16 loop_yn1;                                     ///< 0x2A
    u16 loop_yn2;                                     ///< 0x2C
};
struct SYNSYNTH
{
    void*            next;                            ///< 0x0000
    struct WTINST*   percussiveInst;                  ///< 0x0004
    struct WTINST*   melodicInst;                     ///< 0x0008
    struct WTREGION* region;                          ///< 0x000C
    struct WTART*    art;                             ///< 0x0010
    struct WTSAMPLE* sample;                          ///< 0x0014
    struct WTADPCM*  adpcm;                           ///< 0x0018
    u32              aramBaseWord;                    ///< 0x001C
    u32              aramBaseByte;                    ///< 0x0020
    u32              aramBaseNibble;                  ///< 0x0024
    u32              priorityVoiceAlloc;              ///< 0x0028
    u32              priorityNoteOn;                  ///< 0x002C
    u32              priorityNoteRelease;             ///< 0x0030
    struct WTINST*   inst[16];                        ///< 0x0034
    s32              masterVolume;                    ///< 0x0074
    u8               controller[16][128];             ///< 0x0078
    u8               rpn[16];                         ///< 0x0878
    s16              dataEntry[16];                   ///< 0x0888
    s32              pwMaxCents[16];                  ///< 0x08A8
    s32              pwCents[16];                     ///< 0x08E8
    s32              volAttn[16];                     ///< 0x0928
    s32              expAttn[16];                     ///< 0x0968
    s32              auxAAttn[16];                    ///< 0x09A8
    s32              auxBAttn[16];                    ///< 0x09E8
    u8               input[SYN_INPUT_BUFFER_SIZE][3]; ///< 0x0A28
    u8*              inputPosition;                   ///< 0x0D28
    u32              inputCounter;                    ///< 0x0D2C
    u32              notes;                           ///< 0x0D30
    void*            keyGroup[16][16];                ///< 0x0D34
    void*            voice[16][128];                  ///< 0x1134
};
struct SYNVOICE
{
    void*            next;                            ///< 0x00
    AXVPB*           axvpb;                           ///< 0x04
    struct SYNSYNTH* synth;                           ///< 0x08
    u8               midiChannel;                     ///< 0x0C
    u8               keyNum;                          ///< 0x0D
    u8               keyVel;                          ///< 0x0E
    u8               pan;                             ///< 0x0F
    u8               keyGroup;                        ///< 0x10
    struct WTREGION* region;                          ///< 0x14
    struct WTART*    art;                             ///< 0x18
    struct WTSAMPLE* sample;                          ///< 0x1C
    struct WTADPCM*  adpcm;                           ///< 0x20
    u32              hold;                            ///< 0x24
    u32              type;                            ///< 0x28
    f32              srcRatio;                        ///< 0x2C
    s32              cents;                           ///< 0x30
    s32              attn;                            ///< 0x34
    s32              lfoState;                        ///< 0x38
    s32              lfoAttn;                         ///< 0x3C
    s32              lfoCents;                        ///< 0x40
    s32              lfoFreq;                         ///< 0x44
    s32              lfoDelay;                        ///< 0x48
    s32              lfoAttn_;                        ///< 0x4C
    s32              lfoCents_;                       ///< 0x50
    s32              lfoModAttn;                      ///< 0x54
    s32              lfoModCents;                     ///< 0x58
    u32              veState;                         ///< 0x5C
    s32              veAttn;                          ///< 0x60
    s32              veAttack;                        ///< 0x64
    s32              veAttackDelta;                   ///< 0x68
    s32              veDecay;                         ///< 0x6C
    s32              veSustain;                       ///< 0x70
    s32              veRelease;                       ///< 0x74
    u32              peState;                         ///< 0x78
    s32              peCents;                         ///< 0x7C
    s32              peAttack;                        ///< 0x80
    s32              peDecay;                         ///< 0x84
    s32              peSustain;                       ///< 0x88
    s32              peRelease;                       ///< 0x8C
    s32              pePitch;                         ///< 0x90
};
// sample formats
#define SYN_SAMPLE_FORMAT_ADPCM 0
#define SYN_SAMPLE_FORMAT_PCM16 1
#define SYN_SAMPLE_FORMAT_PCM8  2

// syn.c
void SYNInit();
void SYNQuit();
void SYNRunAudioFrame();
void SYNInitSynth(struct SYNSYNTH* synth, void* wavetable, u32 aramBase,
                  u32 priorityVoiceAlloc, u32 priorityNoteOn,
                  u32 priorityNoteRelease);
void SYNQuitSynth(struct SYNSYNTH* synth);
void SYNMidiInput(struct SYNSYNTH* synth, u8* input);
void SYNSetMasterVolume(struct SYNSYNTH* synth, s32 dB);
s32  SYNGetMasterVolume(struct SYNSYNTH* synth);
u32  SYNGetActiveNotes(struct SYNSYNTH* synth);

// synctrl.c
u8 SYNGetMidiController(struct SYNSYNTH* synth, u8 midiChannel, u8 function);

#endif // _DOLPHIN_SYN_H_
