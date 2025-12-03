

# File SYNPrivate.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**SYNPrivate.h**](_s_y_n_private_8h.md)

[Go to the source code of this file](_s_y_n_private_8h_source.md)



* `#include <dolphin/syn.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNAttackAttnTable**](#variable-__synattackattntable)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* | [**\_\_SYNSynthList**](#variable-__synsynthlist)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) | [**\_\_SYNVoice**](#variable-__synvoice)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNVolumeAttenuation**](#variable-__synvolumeattenuation)  <br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNn128**](#variable-__synn128)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNClearAllNotes**](#function-__synclearallnotes) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNClearVoiceReferences**](#function-__synclearvoicereferences) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* p) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetEnvelopeTime**](#function-__syngetenvelopetime) ([**s32**](types_8h.md#typedef-s32) scale, [**s32**](types_8h.md#typedef-s32) mod, [**u8**](types_8h.md#typedef-u8) key) <br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNGetRelativePitch**](#function-__syngetrelativepitch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetVoiceFader**](#function-__syngetvoicefader) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetVoiceInput**](#function-__syngetvoiceinput) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNGetWavetableData**](#function-__syngetwavetabledata) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetAllControllers**](#function-__synresetallcontrollers) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetController**](#function-__synresetcontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetController0**](#function-__synresetcontroller0) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunInputBufferEvents**](#function-__synruninputbufferevents) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunLfo**](#function-__synrunlfo) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunPitchEnvelope**](#function-__synrunpitchenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunVolumeEnvelope**](#function-__synrunvolumeenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNServiceVoice**](#function-__synservicevoice) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) i) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetController**](#function-__synsetcontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) function, [**u8**](types_8h.md#typedef-u8) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetVoiceToRelease**](#function-__synsetvoicetorelease) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice, [**u32**](types_8h.md#typedef-u32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupLfo**](#function-__synsetuplfo) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPan**](#function-__synsetuppan) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPitch**](#function-__synsetuppitch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPitchEnvelope**](#function-__synsetuppitchenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupSample**](#function-__synsetupsample) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupSrc**](#function-__synsetupsrc) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupVolume**](#function-__synsetupvolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupVolumeEnvelope**](#function-__synsetupvolumeenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNUpdateMix**](#function-__synupdatemix) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNUpdateSrc**](#function-__synupdatesrc) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |




























## Public Attributes Documentation




### variable \_\_SYNAttackAttnTable 

```C++
s32 __SYNAttackAttnTable[100];
```




<hr>



### variable \_\_SYNSynthList 

```C++
struct SYNSYNTH* __SYNSynthList;
```




<hr>



### variable \_\_SYNVoice 

```C++
struct SYNVOICE __SYNVoice[64];
```




<hr>



### variable \_\_SYNVolumeAttenuation 

```C++
s32 __SYNVolumeAttenuation[128];
```




<hr>



### variable \_\_SYNn128 

```C++
float __SYNn128[128];
```




<hr>
## Public Functions Documentation




### function \_\_SYNClearAllNotes 

```C++
void __SYNClearAllNotes (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNClearVoiceReferences 

```C++
void __SYNClearVoiceReferences (
    void * p
) 
```




<hr>



### function \_\_SYNGetEnvelopeTime 

```C++
s32 __SYNGetEnvelopeTime (
    s32 scale,
    s32 mod,
    u8 key
) 
```




<hr>



### function \_\_SYNGetRelativePitch 

```C++
float __SYNGetRelativePitch (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNGetVoiceFader 

```C++
s32 __SYNGetVoiceFader (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNGetVoiceInput 

```C++
s32 __SYNGetVoiceInput (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNGetWavetableData 

```C++
int __SYNGetWavetableData (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNResetAllControllers 

```C++
void __SYNResetAllControllers (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNResetController 

```C++
void __SYNResetController (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNResetController0 

```C++
void __SYNResetController0 (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNRunInputBufferEvents 

```C++
void __SYNRunInputBufferEvents (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNRunLfo 

```C++
void __SYNRunLfo (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNRunPitchEnvelope 

```C++
void __SYNRunPitchEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNRunVolumeEnvelope 

```C++
void __SYNRunVolumeEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNServiceVoice 

```C++
void __SYNServiceVoice (
    int i
) 
```




<hr>



### function \_\_SYNSetController 

```C++
void __SYNSetController (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 function,
    u8 value
) 
```




<hr>



### function \_\_SYNSetVoiceToRelease 

```C++
void __SYNSetVoiceToRelease (
    struct  SYNVOICE * voice,
    u32 priority
) 
```




<hr>



### function \_\_SYNSetupLfo 

```C++
void __SYNSetupLfo (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPan 

```C++
void __SYNSetupPan (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPitch 

```C++
void __SYNSetupPitch (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPitchEnvelope 

```C++
void __SYNSetupPitchEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupSample 

```C++
void __SYNSetupSample (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupSrc 

```C++
void __SYNSetupSrc (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupVolume 

```C++
void __SYNSetupVolume (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupVolumeEnvelope 

```C++
void __SYNSetupVolumeEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNUpdateMix 

```C++
void __SYNUpdateMix (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNUpdateSrc 

```C++
void __SYNUpdateSrc (
    struct  SYNVOICE * voice
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/syn/SYNPrivate.h`

