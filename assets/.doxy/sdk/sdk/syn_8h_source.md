

# File syn.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**syn.h**](syn_8h.md)

[Go to the documentation of this file](syn_8h.md)


```C++
#ifndef _DOLPHIN_SYN_H_
#define _DOLPHIN_SYN_H_

#include <dolphin/ax.h>

#define SYN_INPUT_BUFFER_SIZE 0x100

struct WTINST
{
    u16 keyRegion[128];                               
};

struct WTREGION
{
    u8  unityNote;                                    
    u8  keyGroup;                                     
    s16 fineTune;                                     
    s32 attn;                                         
    u32 loopStart;                                    
    u32 loopLength;                                   
    u32 articulationIndex;                            
    u32 sampleIndex;                                  
};

struct WTART
{
    s32 lfoFreq;                                      
    s32 lfoDelay;                                     
    s32 lfoAtten;                                     
    s32 lfoPitch;                                     
    s32 lfoMod2Atten;                                 
    s32 lfoMod2Pitch;                                 
    s32 eg1Attack;                                    
    s32 eg1Decay;                                     
    s32 eg1Sustain;                                   
    s32 eg1Release;                                   
    s32 eg1Vel2Attack;                                
    s32 eg1Key2Decay;                                 
    s32 eg2Attack;                                    
    s32 eg2Decay;                                     
    s32 eg2Sustain;                                   
    s32 eg2Release;                                   
    s32 eg2Vel2Attack;                                
    s32 eg2Key2Decay;                                 
    s32 eg2Pitch;                                     
    s32 pan;                                          
};

struct WTSAMPLE
{
    u16 format;                                       
    u16 sampleRate;                                   
    u32 offset;                                       
    u32 length;                                       
    u16 adpcmIndex;                                   
};

struct WTADPCM
{
    u16 a[8][2];                                      
    u16 gain;                                         
    u16 pred_scale;                                   
    u16 yn1;                                          
    u16 yn2;                                          
    u16 loop_pred_scale;                              
    u16 loop_yn1;                                     
    u16 loop_yn2;                                     
};

struct SYNSYNTH
{
    void*            next;                            
    struct WTINST*   percussiveInst;                  
    struct WTINST*   melodicInst;                     
    struct WTREGION* region;                          
    struct WTART*    art;                             
    struct WTSAMPLE* sample;                          
    struct WTADPCM*  adpcm;                           
    u32              aramBaseWord;                    
    u32              aramBaseByte;                    
    u32              aramBaseNibble;                  
    u32              priorityVoiceAlloc;              
    u32              priorityNoteOn;                  
    u32              priorityNoteRelease;             
    struct WTINST*   inst[16];                        
    s32              masterVolume;                    
    u8               controller[16][128];             
    u8               rpn[16];                         
    s16              dataEntry[16];                   
    s32              pwMaxCents[16];                  
    s32              pwCents[16];                     
    s32              volAttn[16];                     
    s32              expAttn[16];                     
    s32              auxAAttn[16];                    
    s32              auxBAttn[16];                    
    u8               input[SYN_INPUT_BUFFER_SIZE][3]; 
    u8*              inputPosition;                   
    u32              inputCounter;                    
    u32              notes;                           
    void*            keyGroup[16][16];                
    void*            voice[16][128];                  
};

struct SYNVOICE
{
    void*            next;                            
    AXVPB*           axvpb;                           
    struct SYNSYNTH* synth;                           
    u8               midiChannel;                     
    u8               keyNum;                          
    u8               keyVel;                          
    u8               pan;                             
    u8               keyGroup;                        
    struct WTREGION* region;                          
    struct WTART*    art;                             
    struct WTSAMPLE* sample;                          
    struct WTADPCM*  adpcm;                           
    u32              hold;                            
    u32              type;                            
    f32              srcRatio;                        
    s32              cents;                           
    s32              attn;                            
    s32              lfoState;                        
    s32              lfoAttn;                         
    s32              lfoCents;                        
    s32              lfoFreq;                         
    s32              lfoDelay;                        
    s32              lfoAttn_;                        
    s32              lfoCents_;                       
    s32              lfoModAttn;                      
    s32              lfoModCents;                     
    u32              veState;                         
    s32              veAttn;                          
    s32              veAttack;                        
    s32              veAttackDelta;                   
    s32              veDecay;                         
    s32              veSustain;                       
    s32              veRelease;                       
    u32              peState;                         
    s32              peCents;                         
    s32              peAttack;                        
    s32              peDecay;                         
    s32              peSustain;                       
    s32              peRelease;                       
    s32              pePitch;                         
};

// sample formats
#define SYN_SAMPLE_FORMAT_ADPCM 0
#define SYN_SAMPLE_FORMAT_PCM16 1
#define SYN_SAMPLE_FORMAT_PCM8  2

// syn.c
void SYNInit ();
void SYNQuit ();
void SYNRunAudioFrame ();
void SYNInitSynth (struct SYNSYNTH* synth,
                   void*            wavetable,
                   u32              aramBase,
                   u32              priorityVoiceAlloc,
                   u32              priorityNoteOn,
                   u32              priorityNoteRelease);
void SYNQuitSynth (struct SYNSYNTH* synth);
void SYNMidiInput (struct SYNSYNTH* synth, u8* input);
void SYNSetMasterVolume (struct SYNSYNTH* synth, s32 dB);
s32  SYNGetMasterVolume (struct SYNSYNTH* synth);
u32  SYNGetActiveNotes (struct SYNSYNTH* synth);

// synctrl.c
u8 SYNGetMidiController (struct SYNSYNTH* synth, u8 midiChannel, u8 function);

#endif // _DOLPHIN_SYN_H_
```


