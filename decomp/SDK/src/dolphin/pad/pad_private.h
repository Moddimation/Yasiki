#ifndef __PAD_INTERNAL__
#define __PAD_INTERNAL__

#include <dolphin.h>

#define LATENCY 8

#define PAD_ALL                                                                     \
    (PAD_BUTTON_LEFT | PAD_BUTTON_RIGHT | PAD_BUTTON_DOWN | PAD_BUTTON_UP |         \
     PAD_TRIGGER_Z | PAD_TRIGGER_R | PAD_TRIGGER_L | PAD_BUTTON_A | PAD_BUTTON_B |  \
     PAD_BUTTON_X | PAD_BUTTON_Y | PAD_BUTTON_MENU | 0x2000 | 0x0080)

#ifndef __MWERKS__
u16 __OSWirelessPadFixMode = 0;
#else
u16 __OSWirelessPadFixMode : 0x800030E0;
#endif

// functions
static u16  GetWirelessID(s32 chan);
static void SetWirelessID(s32 chan, u16 id);
static int  DoReset();
static void PADEnable(s32 chan);
static void ProbeWireless(s32 chan);
static void PADProbeCallback(s32 chan, u32 error, OSContext* context);
static void PADDisable(s32 chan);
static void UpdateOrigin(s32 chan);
static void PADOriginCallback(s32 chan, u32 error, OSContext* context);
static void PADFixCallback(s32 unused, u32 error, struct OSContext* context);
static void PADResetCallback(s32 unused, u32 error, struct OSContext* context);
int         PADReset(u32 mask);
BOOL        PADRecalibrate(u32 mask);
BOOL        PADInit();
static void PADReceiveCheckCallback(s32 chan, u32 error, OSContext* arg2);
u32         PADRead(struct PADStatus* status);
void        PADSetSamplingRate(u32 msec);
void        __PADTestSamplingRate(u32 tvmode);
void        PADControlAllMotors(const u32* commandArray);
void        PADControlMotor(s32 chan, u32 command);
void        PADSetSpec(u32 spec);
u32         PADGetSpec();
static void SPEC0_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static void SPEC1_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static void SPEC2_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static s8   ClampS8(s8 var, s8 org);
static u8   ClampU8(u8 var, u8 org);
int         PADGetType(s32 chan, u32* type);
BOOL        PADSync(void);
void        PADSetAnalogMode(u32 mode);
static BOOL OnReset(BOOL f);

static s32 ResettingChan = 0x00000020;              // size: 0x4,
static u32 XPatchBits = 0xF0000000;                 // size: 0x4
static u32 AnalogMode = 0x00000300;                 // size: 0x4,
static u32 Spec = 0x00000005;                       // size: 0x4,

static void (*MakeStatus)(s32, struct PADStatus*,
                          u32*) = SPEC2_MakeStatus; // size: 0x4, address: 0xC

static int Initialized;                             // size: 0x4,
static u32 EnabledBits;                             // size: 0x4,
static u32 ResettingBits;                           // size: 0x4,
static u32 ProbingBits;                             // size: 0x4,
static u32 RecalibrateBits;                         // size: 0x4,
static u32 WaitingBits;                             // size: 0x4,
static u32 CheckingBits;                            // size: 0x4,

static u32              PADType[4];                 // size: 0x10,
static u32              Type[4];                    // size: 0x10,
static struct PADStatus Origin[4];                  // size: 0x30,

static u32 cmdReadOrigin = 0x41u << 24;
static u32 cmdCalibrate = 0x42u << 24;
static u32 cmdTypeAndStatus;
static u32 cmdProbeDevice[4];
static u32 cmdFixDevice[4];

#endif
