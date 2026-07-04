

# File synwt.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**synwt.c**](synwt_8c.md)

[Go to the documentation of this file](synwt_8c.md)


```C++
#include <dolphin/syn.h>

#include <dolphin.h>

#include "fake_tgmath.h"
#include "SYNPrivate.h"

int
__SYNGetWavetableData (struct SYNVOICE* voice)
{
    u32              regionIndex;
    struct SYNSYNTH* synth;

    synth = voice->synth;
    regionIndex = synth->inst[voice->midiChannel]->keyRegion[voice->keyNum];
    if (regionIndex == 0xFFFF)
    {
        return 0;
    }
    voice->region = &synth->region[regionIndex];
    voice->art = &synth->art[voice->region->articulationIndex];
    voice->sample = &synth->sample[voice->region->sampleIndex];
    voice->adpcm = &synth->adpcm[voice->sample->adpcmIndex];
    return 1;
}
```


