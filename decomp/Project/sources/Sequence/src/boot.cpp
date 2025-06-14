#include <types.h>

#ifdef __MWERKS__
extern u8 static_data[] ALIGN (32) = {
#    include "Game/sdata.inc" /*inline sdata.arc bytes*/
};
#endif
