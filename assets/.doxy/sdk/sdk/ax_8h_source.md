

# File ax.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**ax.h**](ax_8h.md)

[Go to the documentation of this file](ax_8h.md)


```C++
#ifndef _DOLPHIN_AX_H_
#define _DOLPHIN_AX_H_

#include <types.h>

typedef struct _AXPBMIX
{
    u16 vL;                    
    u16 vDeltaL;               
    u16 vR;                    
    u16 vDeltaR;               
    u16 vAuxAL;                
    u16 vDeltaAuxAL;           
    u16 vAuxAR;                
    u16 vDeltaAuxAR;           
    u16 vAuxBL;                
    u16 vDeltaAuxBL;           
    u16 vAuxBR;                
    u16 vDeltaAuxBR;           
    u16 vAuxBS;                
    u16 vDeltaAuxBS;           
    u16 vS;                    
    u16 vDeltaS;               
    u16 vAuxAS;                
    u16 vDeltaAuxAS;           
} AXPBMIX;

typedef struct _AXPBITD
{
    u16 flag;                  
    u16 bufferHi;              
    u16 bufferLo;              
    u16 shiftL;                
    u16 shiftR;                
    u16 targetShiftL;          
    u16 targetShiftR;          
} AXPBITD;

typedef struct _AXPBUPDATE
{
    u16 updNum[5];             
    u16 dataHi;                
    u16 dataLo;                
} AXPBUPDATE;

typedef struct _AXPBDPOP
{
    s16 aL;                    
    s16 aAuxAL;                
    s16 aAuxBL;                
    s16 aR;                    
    s16 aAuxAR;                
    s16 aAuxBR;                
    s16 aS;                    
    s16 aAuxAS;                
    s16 aAuxBS;                
} AXPBDPOP;

typedef struct _AXPBVE
{
    u16 currentVolume;         
    s16 currentDelta;          
} AXPBVE;

typedef struct _AXPBFIR
{
    u16 numCoefs;              
    u16 coefsHi;               
    u16 coefsLo;               
} AXPBFIR;

typedef struct _AXPBADDR
{
    u16 loopFlag;              
    u16 format;                
    u16 loopAddressHi;         
    u16 loopAddressLo;         
    u16 endAddressHi;          
    u16 endAddressLo;          
    u16 currentAddressHi;      
    u16 currentAddressLo;      
} AXPBADDR;

typedef struct _AXPBADPCM
{
    u16 a[8][2];               
    u16 gain;                  
    u16 pred_scale;            
    u16 yn1;                   
    u16 yn2;                   
} AXPBADPCM;

typedef struct _AXPBSRC
{
    u16 ratioHi;               
    u16 ratioLo;               
    u16 currentAddressFrac;    
    u16 last_samples[4];       
} AXPBSRC;

typedef struct _AXPBADPCMLOOP
{
    u16 loop_pred_scale;       
    u16 loop_yn1;              
    u16 loop_yn2;              
} AXPBADPCMLOOP;

typedef struct _AXPB
{
    u16           nextHi;      
    u16           nextLo;      
    u16           currHi;      
    u16           currLo;      
    u16           srcSelect;   
    u16           coefSelect;  
    u16           mixerCtrl;   
    u16           state;       
    u16           type;        
    AXPBMIX       mix;         
    AXPBITD       itd;         
    AXPBUPDATE    update;      
    AXPBDPOP      dpop;        
    AXPBVE        ve;          
    AXPBFIR       fir;         
    AXPBADDR      addr;        
    AXPBADPCM     adpcm;       
    AXPBSRC       src;         
    AXPBADPCMLOOP adpcmLoop;   
    u16           pad[3];      
} AXPB;

typedef struct _AXVPB
{
    void* next;                
    void* prev;                
    void* next1;               
    u32   priority;            
    void  (*callback) (void*); 
    u32   userContext;         
    u32   index;               
    u32   sync;                
    u32   depop;               
    u32   updateMS;            
    u32   updateCounter;       
    u32   updateTotal;         
    u16*  updateWrite;         
    u16   updateData[128];     
    void* itdBuffer;           
    AXPB  pb;                  
} AXVPB;

typedef struct _AXPBITDBUFFER
{
    s16 data[32];              
} AXPBITDBUFFER;

typedef struct _AXPBU
{
    u16 data[128];             
} AXPBU;

typedef struct _AXSPB
{
    u16 dpopLHi;               
    u16 dpopLLo;               
    s16 dpopLDelta;            
    u16 dpopRHi;               
    u16 dpopRLo;               
    s16 dpopRDelta;            
    u16 dpopSHi;               
    u16 dpopSLo;               
    s16 dpopSDelta;            
    u16 dpopALHi;              
    u16 dpopALLo;              
    s16 dpopALDelta;           
    u16 dpopARHi;              
    u16 dpopARLo;              
    s16 dpopARDelta;           
    u16 dpopASHi;              
    u16 dpopASLo;              
    s16 dpopASDelta;           
    u16 dpopBLHi;              
    u16 dpopBLLo;              
    s16 dpopBLDelta;           
    u16 dpopBRHi;              
    u16 dpopBRLo;              
    s16 dpopBRDelta;           
    u16 dpopBSHi;              
    u16 dpopBSLo;              
    s16 dpopBSDelta;           
} AXSPB;

typedef struct _AXPROFILE
{
    u64 axFrameStart;          
    u64 auxProcessingStart;    
    u64 auxProcessingEnd;      
    u64 userCallbackStart;     
    u64 userCallbackEnd;       
    u64 axFrameEnd;            
    u32 axNumVoices;           
} AXPROFILE;

struct AX_AUX_DATA
{
    s32* l;                    
    s32* r;                    
    s32* s;                    
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
```


