#include <dolphin/card.h>

#include <dolphin.h>

#include "CARDPrivate.h"

s32
__CARDRawReadAsync(s32 chan, void* buf, long length, long offset, void (*callback)(long, long))
{
    struct CARDControl* card;
    s32                result;

    ASSERTLINE(0x36, buf && ((u32)buf % 32) == 0);

    result = __CARDGetControlBlock(chan, &card);
    if (result < 0)
    {
        return __CARDPutControlBlock(card, result);
    }
    ASSERTLINE(0x3E, 0 < length && (length % CARD_SEG_SIZE) == 0 && length < CARD_MAX_SIZE);
    ASSERTLINE(0x3F, (offset % card->sectorSize) == 0);
    DCInvalidateRange(buf, length);
    result = __CARDRead(chan, offset, length, buf, callback);
    if (result < 0)
    {
        __CARDPutControlBlock(card, result);
    }
    return result;
}

s32
__CARDRawRead(s32 chan, void* buf, long length, long offset)
{
    s32 result = __CARDRawReadAsync(chan, buf, length, offset, &__CARDSyncCallback);

    if (result < 0)
    {
        return result;
    }
    return __CARDSync(chan);
}
