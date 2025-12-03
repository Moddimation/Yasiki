

# File SYNPrivate.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**SYNPrivate.h**](_s_y_n_private_8h.md)

[Go to the documentation of this file](_s_y_n_private_8h.md)


```C++
#ifndef _DOLPHIN_SYN_INTERNAL_H_
#define _DOLPHIN_SYN_INTERNAL_H_

#include <dolphin/syn.h>

// syn.c
extern struct SYNSYNTH* __SYNSynthList;

// synctrl.c
extern float __SYNn128[128];

void __SYNClearAllNotes (struct SYNSYNTH* synth);
void __SYNSetController (struct SYNSYNTH* synth, u8 midiChannel, u8 function, u8 value);
void __SYNResetController0 (struct SYNSYNTH* synth, u8 midiChannel);
void __SYNResetController (struct SYNSYNTH* synth, u8 midiChannel);
void __SYNResetAllControllers (struct SYNSYNTH* synth);
void __SYNRunInputBufferEvents (struct SYNSYNTH* synth);

// synenv.c
s32  __SYNGetEnvelopeTime (s32 scale, s32 mod, u8 key);
void __SYNSetupVolumeEnvelope (struct SYNVOICE* voice);
void __SYNSetupPitchEnvelope (struct SYNVOICE* voice);
void __SYNRunVolumeEnvelope (struct SYNVOICE* voice);
void __SYNRunPitchEnvelope (struct SYNVOICE* voice);

// synlfo.c
void __SYNSetupLfo (struct SYNVOICE* voice);
void __SYNRunLfo (struct SYNVOICE* voice);

// synmix.c
extern s32 __SYNVolumeAttenuation[128];
extern s32 __SYNAttackAttnTable[100];

void __SYNSetupVolume (struct SYNVOICE* voice);
void __SYNSetupPan (struct SYNVOICE* voice);
s32  __SYNGetVoiceInput (struct SYNVOICE* voice);
s32  __SYNGetVoiceFader (struct SYNVOICE* voice);
void __SYNUpdateMix (struct SYNVOICE* voice);

// synpitch.c
float __SYNGetRelativePitch (struct SYNVOICE* voice);
void  __SYNSetupPitch (struct SYNVOICE* voice);
void  __SYNSetupSrc (struct SYNVOICE* voice);
void  __SYNUpdateSrc (struct SYNVOICE* voice);

// synsample.c
void __SYNSetupSample (struct SYNVOICE* voice);

// synvoice.c
extern struct SYNVOICE __SYNVoice[64];

void __SYNClearVoiceReferences (void* p);
void __SYNSetVoiceToRelease (struct SYNVOICE* voice, u32 priority);
void __SYNServiceVoice (int i);

// synwt.c
int __SYNGetWavetableData (struct SYNVOICE* voice);

#endif // _DOLPHIN_SYN_INTERNAL_H_
```


