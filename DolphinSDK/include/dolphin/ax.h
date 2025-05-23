#ifndef _DOLPHIN_AX_H_
#define _DOLPHIN_AX_H_

#include <types.h>

typedef struct _AXPBMIX
{
    u16 vL;                    ///< 0x00
    u16 vDeltaL;               ///< 0x02
    u16 vR;                    ///< 0x04
    u16 vDeltaR;               ///< 0x06
    u16 vAuxAL;                ///< 0x08
    u16 vDeltaAuxAL;           ///< 0x0A
    u16 vAuxAR;                ///< 0x0C
    u16 vDeltaAuxAR;           ///< 0x0E
    u16 vAuxBL;                ///< 0x10
    u16 vDeltaAuxBL;           ///< 0x12
    u16 vAuxBR;                ///< 0x14
    u16 vDeltaAuxBR;           ///< 0x16
    u16 vAuxBS;                ///< 0x18
    u16 vDeltaAuxBS;           ///< 0x1A
    u16 vS;                    ///< 0x1C
    u16 vDeltaS;               ///< 0x1E
    u16 vAuxAS;                ///< 0x20
    u16 vDeltaAuxAS;           ///< 0x22
} AXPBMIX;

typedef struct _AXPBITD
{
    u16 flag;                  ///< 0x00
    u16 bufferHi;              ///< 0x02
    u16 bufferLo;              ///< 0x04
    u16 shiftL;                ///< 0x06
    u16 shiftR;                ///< 0x08
    u16 targetShiftL;          ///< 0x0A
    u16 targetShiftR;          ///< 0x0C
} AXPBITD;

typedef struct _AXPBUPDATE
{
    u16 updNum[5];             ///< 0x00
    u16 dataHi;                ///< 0x0A
    u16 dataLo;                ///< 0x0C
} AXPBUPDATE;

typedef struct _AXPBDPOP
{
    s16 aL;                    ///< 0x00
    s16 aAuxAL;                ///< 0x02
    s16 aAuxBL;                ///< 0x04
    s16 aR;                    ///< 0x06
    s16 aAuxAR;                ///< 0x08
    s16 aAuxBR;                ///< 0x0A
    s16 aS;                    ///< 0x0C
    s16 aAuxAS;                ///< 0x0E
    s16 aAuxBS;                ///< 0x10
} AXPBDPOP;

typedef struct _AXPBVE
{
    u16 currentVolume;         ///< 0x00
    s16 currentDelta;          ///< 0x02
} AXPBVE;

typedef struct _AXPBFIR
{
    u16 numCoefs;              ///< 0x00
    u16 coefsHi;               ///< 0x02
    u16 coefsLo;               ///< 0x04
} AXPBFIR;

typedef struct _AXPBADDR
{
    u16 loopFlag;              ///< 0x00
    u16 format;                ///< 0x02
    u16 loopAddressHi;         ///< 0x04
    u16 loopAddressLo;         ///< 0x06
    u16 endAddressHi;          ///< 0x08
    u16 endAddressLo;          ///< 0x0A
    u16 currentAddressHi;      ///< 0x0C
    u16 currentAddressLo;      ///< 0x0E
} AXPBADDR;

typedef struct _AXPBADPCM
{
    u16 a[8][2];               ///< 0x00
    u16 gain;                  ///< 0x20
    u16 pred_scale;            ///< 0x22
    u16 yn1;                   ///< 0x24
    u16 yn2;                   ///< 0x26
} AXPBADPCM;

typedef struct _AXPBSRC
{
    u16 ratioHi;               ///< 0x00
    u16 ratioLo;               ///< 0x02
    u16 currentAddressFrac;    ///< 0x04
    u16 last_samples[4];       ///< 0x06
} AXPBSRC;

typedef struct _AXPBADPCMLOOP
{
    u16 loop_pred_scale;       ///< 0x00
    u16 loop_yn1;              ///< 0x02
    u16 loop_yn2;              ///< 0x04
} AXPBADPCMLOOP;

typedef struct _AXPB
{
    u16           nextHi;      ///< 0x00
    u16           nextLo;      ///< 0x02
    u16           currHi;      ///< 0x04
    u16           currLo;      ///< 0x06
    u16           srcSelect;   ///< 0x08
    u16           coefSelect;  ///< 0x0A
    u16           mixerCtrl;   ///< 0x0C
    u16           state;       ///< 0x0E
    u16           type;        ///< 0x10
    AXPBMIX       mix;         ///< 0x12
    AXPBITD       itd;         ///< 0x36
    AXPBUPDATE    update;      ///< 0x44
    AXPBDPOP      dpop;        ///< 0x52
    AXPBVE        ve;          ///< 0x64
    AXPBFIR       fir;         ///< 0x68
    AXPBADDR      addr;        ///< 0x6E
    AXPBADPCM     adpcm;       ///< 0x7E
    AXPBSRC       src;         ///< 0xA6
    AXPBADPCMLOOP adpcmLoop;   ///< 0xB4
    u16           pad[3];      ///< 0xBA
} AXPB;

typedef struct _AXVPB
{
    void* next;                ///< 0x000
    void* prev;                ///< 0x004
    void* next1;               ///< 0x008
    u32   priority;            ///< 0x00C
    void  (*callback) (void*); ///< 0x010
    u32   userContext;         ///< 0x014
    u32   index;               ///< 0x018
    u32   sync;                ///< 0x01C
    u32   depop;               ///< 0x020
    u32   updateMS;            ///< 0x024
    u32   updateCounter;       ///< 0x028
    u32   updateTotal;         ///< 0x02C
    u16*  updateWrite;         ///< 0x030
    u16   updateData[128];     ///< 0x034
    void* itdBuffer;           ///< 0x134
    AXPB  pb;                  ///< 0x138
} AXVPB;

typedef struct _AXPBITDBUFFER
{
    s16 data[32];              ///< 0x00
} AXPBITDBUFFER;

typedef struct _AXPBU
{
    u16 data[128];             ///< 0x00
} AXPBU;

typedef struct _AXSPB
{
    u16 dpopLHi;               ///< 0x00
    u16 dpopLLo;               ///< 0x02
    s16 dpopLDelta;            ///< 0x04
    u16 dpopRHi;               ///< 0x06
    u16 dpopRLo;               ///< 0x08
    s16 dpopRDelta;            ///< 0x0A
    u16 dpopSHi;               ///< 0x0C
    u16 dpopSLo;               ///< 0x0E
    s16 dpopSDelta;            ///< 0x10
    u16 dpopALHi;              ///< 0x12
    u16 dpopALLo;              ///< 0x14
    s16 dpopALDelta;           ///< 0x16
    u16 dpopARHi;              ///< 0x18
    u16 dpopARLo;              ///< 0x1A
    s16 dpopARDelta;           ///< 0x1C
    u16 dpopASHi;              ///< 0x1E
    u16 dpopASLo;              ///< 0x20
    s16 dpopASDelta;           ///< 0x22
    u16 dpopBLHi;              ///< 0x24
    u16 dpopBLLo;              ///< 0x26
    s16 dpopBLDelta;           ///< 0x28
    u16 dpopBRHi;              ///< 0x2A
    u16 dpopBRLo;              ///< 0x2C
    s16 dpopBRDelta;           ///< 0x2E
    u16 dpopBSHi;              ///< 0x30
    u16 dpopBSLo;              ///< 0x32
    s16 dpopBSDelta;           ///< 0x34
} AXSPB;

typedef struct _AXPROFILE
{
    u64 axFrameStart;          ///< 0x00
    u64 auxProcessingStart;    ///< 0x08
    u64 auxProcessingEnd;      ///< 0x10
    u64 userCallbackStart;     ///< 0x18
    u64 userCallbackEnd;       ///< 0x20
    u64 axFrameEnd;            ///< 0x28
    u32 axNumVoices;           ///< 0x30
} AXPROFILE;

struct AX_AUX_DATA
{
    s32* l;                    ///< 0x00
    s32* r;                    ///< 0x00
    s32* s;                    ///< 0x00
};

#define AX_DSP_SLAVE_LENGTH        3264
#define AX_MAX_VOICES              64

#define AX_SRC_TYPE_NONE           0
#define AX_SRC_TYPE_LINEAR         1
#define AX_SRC_TYPE_4TAP_8K        2
#define AX_SRC_TYPE_4TAP_12K       3
#define AX_SRC_TYPE_4TAP_16K       4

// sync flags
#define AX_SYNC_FLAG_COPYALL       (1 << 31)
#define AX_SYNC_FLAG_UNK1          (1 << 30) // reserved, unused?
#define AX_SYNC_FLAG_UNK2          (1 << 29) // reserved, unused?
#define AX_SYNC_FLAG_UNK3          (1 << 28) // reserved, unused?
#define AX_SYNC_FLAG_UNK4          (1 << 27) // reserved, unused?
#define AX_SYNC_FLAG_UNK5          (1 << 26) // reserved, unused?
#define AX_SYNC_FLAG_UNK6          (1 << 25) // reserved, unused?
#define AX_SYNC_FLAG_UNK7          (1 << 24) // reserved, unused?
#define AX_SYNC_FLAG_UNK8          (1 << 23) // reserved, unused?
#define AX_SYNC_FLAG_UNK9          (1 << 22) // reserved, unused?
#define AX_SYNC_FLAG_UNK10         (1 << 21) // reserved, unused?
#define AX_SYNC_FLAG_COPYADPCMLOOP (1 << 20)
#define AX_SYNC_FLAG_COPYRATIO     (1 << 19)
#define AX_SYNC_FLAG_COPYSRC       (1 << 18)
#define AX_SYNC_FLAG_COPYADPCM     (1 << 17)
#define AX_SYNC_FLAG_COPYCURADDR   (1 << 16)
#define AX_SYNC_FLAG_COPYENDADDR   (1 << 15)
#define AX_SYNC_FLAG_COPYLOOPADDR  (1 << 14)
#define AX_SYNC_FLAG_COPYLOOP      (1 << 13)
#define AX_SYNC_FLAG_COPYADDR      (1 << 12)
#define AX_SYNC_FLAG_COPYFIR       (1 << 11)
#define AX_SYNC_FLAG_SWAPVOL       (1 << 10)
#define AX_SYNC_FLAG_COPYVOL       (1 << 9)
#define AX_SYNC_FLAG_COPYDPOP      (1 << 8)
#define AX_SYNC_FLAG_COPYUPDATE    (1 << 7)
#define AX_SYNC_FLAG_COPYTSHIFT    (1 << 6)
#define AX_SYNC_FLAG_COPYITD       (1 << 5)
#define AX_SYNC_FLAG_COPYAXPBMIX   (1 << 4)
#define AX_SYNC_FLAG_COPYTYPE      (1 << 3)
#define AX_SYNC_FLAG_COPYSTATE     (1 << 2)
#define AX_SYNC_FLAG_COPYMXRCTRL   (1 << 1)
#define AX_SYNC_FLAG_COPYSELECT    (1 << 0)

#define AX_PRIORITY_STACKS         32

// AX.c
void AXInit (void);
void AXQuit (void);

// AXAlloc.c
void   AXFreeVoice (AXVPB* p);
AXVPB* AXAcquireVoice (u32 priority, void (*callback) (void*), u32 userContext);
void   AXSetVoicePriority (AXVPB* p, u32 priority);

// AXAux.c
void AXRegisterAuxACallback (void (*callback) (void*, void*), void* context);
void AXRegisterAuxBCallback (void (*callback) (void*, void*), void* context);

// AXCL.c
void AXSetMode (u32 mode);
u32  AXGetMode (void);

// AXOut.c
extern AXPROFILE   __AXLocalProfile;
extern DSPTaskInfo task;
extern u16         ax_dram_image[8192];

void AXRegisterCallback (void (*callback)());

// AXProf.c
void AXInitProfile (AXPROFILE* profile, u32 maxProfiles);
u32  AXGetProfile (void);

// AXVPB.c
void AXSetVoiceSrcType (AXVPB* p, u32 type);
void AXSetVoiceState (AXVPB* p, u16 state);
void AXSetVoiceType (AXVPB* p, u16 type);
void AXSetVoiceMix (AXVPB* p, AXPBMIX* mix);
void AXSetVoiceItdOn (AXVPB* p);
void AXSetVoiceItdTarget (AXVPB* p, u16 lShift, u16 rShift);
void AXSetVoiceUpdateIncrement (AXVPB* p);
void AXSetVoiceUpdateWrite (AXVPB* p, u16 param, u16 data);
void AXSetVoiceDpop (AXVPB* p, AXPBDPOP* dpop);
void AXSetVoiceVe (AXVPB* p, AXPBVE* ve);
void AXSetVoiceVeDelta (AXVPB* p, s16 delta);
void AXSetVoiceFir (AXVPB* p, AXPBFIR* fir);
void AXSetVoiceAddr (AXVPB* p, AXPBADDR* addr);
void AXSetVoiceLoop (AXVPB* p, u16 loop);
void AXSetVoiceLoopAddr (AXVPB* p, u32 addr);
void AXSetVoiceEndAddr (AXVPB* p, u32 addr);
void AXSetVoiceCurrentAddr (AXVPB* p, u32 addr);
void AXSetVoiceAdpcm (AXVPB* p, AXPBADPCM* adpcm);
void AXSetVoiceSrc (AXVPB* p, AXPBSRC* src_);
void AXSetVoiceSrcRatio (AXVPB* p, float ratio);
void AXSetVoiceAdpcmLoop (AXVPB* p, AXPBADPCMLOOP* adpcmloop);
void AXSetMaxDspCycles (u32 cycles);
u32  AXGetMaxDspCycles (void);
u32  AXGetDspCycles (void);

// DSPCode.c
extern u16 axDspSlaveLength;
extern u16 axDspSlave[AX_DSP_SLAVE_LENGTH];

#endif // _DOLPHIN_AX_H_
