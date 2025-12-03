

# File dvd\_private.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvd\_private.h**](dvd__private_8h.md)

[Go to the documentation of this file](dvd__private_8h.md)


```C++
#ifndef _DOLPHIN_DVD_INTERNAL_H_
#define _DOLPHIN_DVD_INTERNAL_H_

#include <dolphin/dvd.h>
#include <dolphin/os.h>

// dvd.c
void __DVDAudioBufferConfig (DVDCommandBlock* block,
                             u32              enable,
                             u32              size,
                             void             (*callback) (s32, struct DVDCommandBlock*));
void __DVDInitWA ();

// dvdfs.c
extern OSThreadQueue __DVDThreadQueue;
extern u32           __DVDLongFileNameFlag;

void __DVDFSInit ();
void __DVDLowSetWAType (u32 type, s32 seekLoc);
BOOL __DVDLowTestAlarm (const OSAlarm* alarm);

// dvdlow.c
void __DVDInterruptHandler (s16 unused, OSContext* context);

// dvdqueue.c
void                    __DVDClearWaitingQueue ();
BOOL                    __DVDPushWaitingQueue (s32 prio, struct DVDCommandBlock* block);
struct DVDCommandBlock* __DVDPopWaitingQueue ();
BOOL                    __DVDCheckWaitingQueue ();
BOOL                    __DVDDequeueWaitingQueue (struct DVDCommandBlock* block);
BOOL                    __DVDIsBlockInWaitingQueue (struct DVDCommandBlock* block);

// fstload.c
void __fstLoad ();

// dvderror.c
void __DVDStoreErrorCode (u32 code);

#define DVD_DE_INT_ERROR_CODE  0x01234567
#define DVD_TIMEOUT_ERROR_CODE 0x01234568

#endif // _DOLPHIN_DVD_INTERNAL_H_
```


