#ifndef _DOLPHIN_DTK_H_
#define _DOLPHIN_DTK_H_

#include <dolphin/dvd.h>

typedef void (*DTKCallback) (u32 eventMask);
typedef void (*DTKFlushCallback) (void);
typedef struct DTKTrack
{
    struct DTKTrack* prev;        ///< 0x00
    struct DTKTrack* next;        ///< 0x04
    char*            fileName;    ///< 0x08
    u32              eventMask;   ///< 0x0C
    DTKCallback      callback;    ///< 0x10
    DVDFileInfo      dvdFileInfo; ///< 0x14
} DTKTrack;
#define DTK_STATE_STOP     0
#define DTK_STATE_RUN      1
#define DTK_STATE_PAUSE    2
#define DTK_STATE_BUSY     3
#define DTK_STATE_PREPARE  4

#define DTK_MODE_NOREPEAT  0
#define DTK_MODE_ALLREPEAT 1
#define DTK_MODE_REPEAT1   2

void      DTKInit (void);
void      DTKShutdown (void);
u32       DTKQueueTrack (char*       fileName,
                         DTKTrack*   track,
                         u32         eventMask,
                         DTKCallback callback);
u32       DTKRemoveTrack (struct DTKTrack* track);
void      DTKFlushTracks (DTKFlushCallback callback);
void      DTKSetSampleRate (u32 samplerate);
void      DTKSetInterruptFrequency (u32 samples);
void      DTKSetRepeatMode (u32 repeat);
void      DTKSetState (u32 state);
void      DTKNextTrack (void);
void      DTKPrevTrack (void);
u32       DTKGetSampleRate (void);
u32       DTKGetRepeatMode (void);
u32       DTKGetState (void);
u32       DTKGetPosition (void);
u32       DTKGetInterruptFrequency (void);
DTKTrack* DTKGetCurrentTrack (void);
void      DTKSetVolume (u8 left, u8 right);
u16       DTKGetVolume (void);

#endif
