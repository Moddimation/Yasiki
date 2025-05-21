

# File synwt.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**syn**](dir_8018a4be98ca04d477a51285d390aa04.md) **>** [**synwt.c**](synwt_8c.md)

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


