#include <types.h>

#ifdef __MWERKS__
extern u8 static_data[] ALIGN (32) = {
/*inline sdata.arc bytes*/ #include "Game/sdata.inc"
};
#endif
