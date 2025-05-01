#ifndef _DOLPHIN_AXFX_H_
#define _DOLPHIN_AXFX_H_
struct AXFX_REVSTD_DELAYLINE
{
    s32    inPoint;                               ///< 0x00
    s32    outPoint;                              ///< 0x04
    s32    length;                                ///< 0x08
    float* inputs;                                ///< 0x0C
    float  lastOutput;                            ///< 0x10
};
struct AXFX_REVSTD_WORK
{
    struct AXFX_REVSTD_DELAYLINE AP[6];           ///< 0x000
    struct AXFX_REVSTD_DELAYLINE C[6];            ///< 0x078
    float                        allPassCoeff;    ///< 0x0F0
    float                        combCoef[6];     ///< 0x0F4
    float                        lpLastout[3];    ///< 0x10C
    float                        level;           ///< 0x118
    float                        damping;         ///< 0x11C
    s32                          preDelayTime;    ///< 0x120
    float*                       preDelayLine[3]; ///< 0x124
    float*                       preDelayPtr[3];  ///< 0x130
};
struct AXFX_REVERBSTD
{
    struct AXFX_REVSTD_WORK rv;                   ///< 0x000
    u8                      tempDisableFX;        ///< 0x13C
    float                   coloration;           ///< 0x140
    float                   mix;                  ///< 0x144
    float                   time;                 ///< 0x148
    float                   damping;              ///< 0x14C
    float                   preDelay;             ///< 0x150
};
struct AXFX_BUFFERUPDATE
{
    s32* left;                                    ///< 0x00
    s32* right;                                   ///< 0x04
    s32* surround;                                ///< 0x08
};
// REVHI Structs

struct AXFX_REVHI_DELAYLINE
{
    s32    inPoint;                                    ///< 0x00
    s32    outPoint;                                   ///< 0x04
    s32    length;                                     ///< 0x08
    float* inputs;                                     ///< 0x0C
    float  lastOutput;                                 ///< 0x10
};
struct AXFX_REVHI_WORK
{
    struct AXFX_REVHI_DELAYLINE AP[9];                 ///< 0x000
    struct AXFX_REVHI_DELAYLINE C[9];                  ///< 0x0B4
    float                       allPassCoeff;          ///< 0x168
    float                       combCoef[9];           ///< 0x16C
    float                       lpLastout[3];          ///< 0x190
    float                       level;                 ///< 0x19C
    float                       damping;               ///< 0x1A0
    s32                         preDelayTime;          ///< 0x1A4
    float                       crosstalk;             ///< 0x1A8
    float*                      preDelayLine[3];       ///< 0x1AC
    float*                      preDelayPtr[3];        ///< 0x1B8
};
struct AXFX_REVERBHI
{
    struct AXFX_REVHI_WORK rv;                         ///< 0x000
    u8                     tempDisableFX;              ///< 0x1C4
    float                  coloration;                 ///< 0x1C8
    float                  mix;                        ///< 0x1CC
    float                  time;                       ///< 0x1D0
    float                  damping;                    ///< 0x1D4
    float                  preDelay;                   ///< 0x1D8
    float                  crosstalk;                  ///< 0x1DC
};
struct AXFX_DELAY
{
    u32  currentSize[3];                               ///< 0x00
    u32  currentPos[3];                                ///< 0x0C
    u32  currentFeedback[3];                           ///< 0x18
    u32  currentOutput[3];                             ///< 0x24
    s32* left;                                         ///< 0x30
    s32* right;                                        ///< 0x34
    s32* sur;                                          ///< 0x38
    u32  delay[3];                                     ///< 0x3C
    u32  feedback[3];                                  ///< 0x48
    u32  output[3];                                    ///< 0x54
};
struct AXFX_CHORUS_SRCINFO
{
    s32* dest;                                         ///< 0x00
    s32* smpBase;                                      ///< 0x04
    s32* old;                                          ///< 0x08
    u32  posLo;                                        ///< 0x0C
    u32  posHi;                                        ///< 0x10
    u32  pitchLo;                                      ///< 0x14
    u32  pitchHi;                                      ///< 0x18
    u32  trigger;                                      ///< 0x1C
    u32  target;                                       ///< 0x20
};
struct AXFX_CHORUS_WORK
{
    s32*                       lastLeft[3];            ///< 0x00
    s32*                       lastRight[3];           ///< 0x0C
    s32*                       lastSur[3];             ///< 0x18
    u8                         currentLast;            ///< 0x24
    s32                        oldLeft[4];             ///< 0x28
    s32                        oldRight[4];            ///< 0x38
    s32                        oldSur[4];              ///< 0x48
    u32                        currentPosLo;           ///< 0x58
    u32                        currentPosHi;           ///< 0x5C
    s32                        pitchOffset;            ///< 0x60
    u32                        pitchOffsetPeriodCount; ///< 0x64
    u32                        pitchOffsetPeriod;      ///< 0x68
    struct AXFX_CHORUS_SRCINFO src;                    ///< 0x6C
};
struct AXFX_CHORUS
{
    struct AXFX_CHORUS_WORK work;                      ///< 0x00
    u32                     baseDelay;                 ///< 0x90
    u32                     variation;                 ///< 0x94
    u32                     period;                    ///< 0x98
};
// chorus.c
int  AXFXChorusInit(struct AXFX_CHORUS* c);
int  AXFXChorusShutdown(struct AXFX_CHORUS* c);
int  AXFXChorusSettings(struct AXFX_CHORUS* c);
void AXFXChorusCallback(struct AXFX_BUFFERUPDATE* bufferUpdate,
                        struct AXFX_CHORUS*       chorus);

// delay.c
void AXFXDelayCallback(struct AXFX_BUFFERUPDATE* bufferUpdate,
                       struct AXFX_DELAY*        delay);
int  AXFXDelaySettings(struct AXFX_DELAY* delay);
int  AXFXDelayInit(struct AXFX_DELAY* delay);
int  AXFXDelayShutdown(struct AXFX_DELAY* delay);

// reverb_hi.c
void DoCrossTalk(s32* l, long* r, float cross, float invcross);
int  AXFXReverbHiInit(struct AXFX_REVERBHI* rev);
int  AXFXReverbHiShutdown(struct AXFX_REVERBHI* rev);
int  AXFXReverbHiSettings(struct AXFX_REVERBHI* rev);
void AXFXReverbHiCallback(struct AXFX_BUFFERUPDATE* bufferUpdate,
                          struct AXFX_REVERBHI*     reverb);

// reverb_std.c
int  AXFXReverbStdInit(struct AXFX_REVERBSTD* rev);
int  AXFXReverbStdShutdown(struct AXFX_REVERBSTD* rev);
int  AXFXReverbStdSettings(struct AXFX_REVERBSTD* rev);
void AXFXReverbStdCallback(struct AXFX_BUFFERUPDATE* bufferUpdate,
                           struct AXFX_REVERBSTD*    reverb);

#endif // _DOLPHIN_AXFX_H_
