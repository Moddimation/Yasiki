

# File axfx.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**axfx.h**](axfx_8h.md)

[Go to the documentation of this file](axfx_8h.md)


```C++
#ifndef _DOLPHIN_AXFX_H_
#define _DOLPHIN_AXFX_H_

struct AXFX_REVSTD_DELAYLINE
{
    s32    inPoint;                               
    s32    outPoint;                              
    s32    length;                                
    float* inputs;                                
    float  lastOutput;                            
};

struct AXFX_REVSTD_WORK
{
    struct AXFX_REVSTD_DELAYLINE AP[6];           
    struct AXFX_REVSTD_DELAYLINE C[6];            
    float                        allPassCoeff;    
    float                        combCoef[6];     
    float                        lpLastout[3];    
    float                        level;           
    float                        damping;         
    s32                          preDelayTime;    
    float*                       preDelayLine[3]; 
    float*                       preDelayPtr[3];  
};

struct AXFX_REVERBSTD
{
    struct AXFX_REVSTD_WORK rv;                   
    u8                      tempDisableFX;        
    float                   coloration;           
    float                   mix;                  
    float                   time;                 
    float                   damping;              
    float                   preDelay;             
};

struct AXFX_BUFFERUPDATE
{
    s32* left;                                    
    s32* right;                                   
    s32* surround;                                
};

// REVHI Structs

struct AXFX_REVHI_DELAYLINE
{
    s32    inPoint;                                    
    s32    outPoint;                                   
    s32    length;                                     
    float* inputs;                                     
    float  lastOutput;                                 
};

struct AXFX_REVHI_WORK
{
    struct AXFX_REVHI_DELAYLINE AP[9];                 
    struct AXFX_REVHI_DELAYLINE C[9];                  
    float                       allPassCoeff;          
    float                       combCoef[9];           
    float                       lpLastout[3];          
    float                       level;                 
    float                       damping;               
    s32                         preDelayTime;          
    float                       crosstalk;             
    float*                      preDelayLine[3];       
    float*                      preDelayPtr[3];        
};

struct AXFX_REVERBHI
{
    struct AXFX_REVHI_WORK rv;                         
    u8                     tempDisableFX;              
    float                  coloration;                 
    float                  mix;                        
    float                  time;                       
    float                  damping;                    
    float                  preDelay;                   
    float                  crosstalk;                  
};

struct AXFX_DELAY
{
    u32  currentSize[3];                               
    u32  currentPos[3];                                
    u32  currentFeedback[3];                           
    u32  currentOutput[3];                             
    s32* left;                                         
    s32* right;                                        
    s32* sur;                                          
    u32  delay[3];                                     
    u32  feedback[3];                                  
    u32  output[3];                                    
};

struct AXFX_CHORUS_SRCINFO
{
    s32* dest;                                         
    s32* smpBase;                                      
    s32* old;                                          
    u32  posLo;                                        
    u32  posHi;                                        
    u32  pitchLo;                                      
    u32  pitchHi;                                      
    u32  trigger;                                      
    u32  target;                                       
};

struct AXFX_CHORUS_WORK
{
    s32*                       lastLeft[3];            
    s32*                       lastRight[3];           
    s32*                       lastSur[3];             
    u8                         currentLast;            
    s32                        oldLeft[4];             
    s32                        oldRight[4];            
    s32                        oldSur[4];              
    u32                        currentPosLo;           
    u32                        currentPosHi;           
    s32                        pitchOffset;            
    u32                        pitchOffsetPeriodCount; 
    u32                        pitchOffsetPeriod;      
    struct AXFX_CHORUS_SRCINFO src;                    
};

struct AXFX_CHORUS
{
    struct AXFX_CHORUS_WORK work;                      
    u32                     baseDelay;                 
    u32                     variation;                 
    u32                     period;                    
};

// chorus.c
int  AXFXChorusInit (struct AXFX_CHORUS* c);
int  AXFXChorusShutdown (struct AXFX_CHORUS* c);
int  AXFXChorusSettings (struct AXFX_CHORUS* c);
void AXFXChorusCallback (struct AXFX_BUFFERUPDATE* bufferUpdate, struct AXFX_CHORUS* chorus);

// delay.c
void AXFXDelayCallback (struct AXFX_BUFFERUPDATE* bufferUpdate, struct AXFX_DELAY* delay);
int  AXFXDelaySettings (struct AXFX_DELAY* delay);
int  AXFXDelayInit (struct AXFX_DELAY* delay);
int  AXFXDelayShutdown (struct AXFX_DELAY* delay);

// reverb_hi.c
void DoCrossTalk (s32* l, long* r, float cross, float invcross);
int  AXFXReverbHiInit (struct AXFX_REVERBHI* rev);
int  AXFXReverbHiShutdown (struct AXFX_REVERBHI* rev);
int  AXFXReverbHiSettings (struct AXFX_REVERBHI* rev);
void AXFXReverbHiCallback (struct AXFX_BUFFERUPDATE* bufferUpdate, struct AXFX_REVERBHI* reverb);

// reverb_std.c
int  AXFXReverbStdInit (struct AXFX_REVERBSTD* rev);
int  AXFXReverbStdShutdown (struct AXFX_REVERBSTD* rev);
int  AXFXReverbStdSettings (struct AXFX_REVERBSTD* rev);
void AXFXReverbStdCallback (struct AXFX_BUFFERUPDATE* bufferUpdate, struct AXFX_REVERBSTD* reverb);

#endif // _DOLPHIN_AXFX_H_
```


