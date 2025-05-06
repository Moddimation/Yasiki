

# File dvd\_private.h

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dvd**](dir_89a52050841a8ad6d679d86dc07787eb.md) **>** [**dvd\_private.h**](dvd__private_8h.md)

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

// dvdlow.c
void __DVDInterruptHandler (s16 unused, OSContext* context);

// dvdqueue.c
void                    __DVDClearWaitingQueue ();
int                     __DVDPushWaitingQueue (s32 prio, struct DVDCommandBlock* block);
struct DVDCommandBlock* __DVDPopWaitingQueue ();
int                     __DVDCheckWaitingQueue ();
int                     __DVDDequeueWaitingQueue (struct DVDCommandBlock* block);
int                     __DVDIsBlockInWaitingQueue (struct DVDCommandBlock* block);

// fstload.c
void __fstLoad ();

// dvderror.c
void __DVDStoreErrorCode (u32 code);

#define DVD_DE_INT_ERROR_CODE  0x01234567
#define DVD_TIMEOUT_ERROR_CODE 0x01234568

#endif // _DOLPHIN_DVD_INTERNAL_H_
```


