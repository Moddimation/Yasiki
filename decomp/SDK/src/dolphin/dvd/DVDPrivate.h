#ifndef _DOLPHIN_DVD_INTERNAL_H_
#define _DOLPHIN_DVD_INTERNAL_H_

#include <dolphin/dvd.h>
#include <dolphin/os.h>

// dvd.c
void __DVDAudioBufferConfig(DVDCommandBlock* block, u32 enable,
                            u32 size,
                            void (*callback)(s32, struct DVDCommandBlock*));

// dvdfs.c
extern struct OSThreadQueue __DVDThreadQueue;
extern u32        __DVDLongFileNameFlag;

void __DVDFSInit();

// dvdlow.c
void __DVDInterruptHandler(s16 unused, struct OSContext* context);

// dvdqueue.c
void __DVDClearWaitingQueue();
int  __DVDPushWaitingQueue(s32 prio, struct DVDCommandBlock* block);
struct DVDCommandBlock* __DVDPopWaitingQueue();
int                     __DVDCheckWaitingQueue();
int __DVDDequeueWaitingQueue(struct DVDCommandBlock* block);
int __DVDIsBlockInWaitingQueue(struct DVDCommandBlock* block);

// fstload.c
void __fstLoad();

#endif // _DOLPHIN_DVD_INTERNAL_H_
