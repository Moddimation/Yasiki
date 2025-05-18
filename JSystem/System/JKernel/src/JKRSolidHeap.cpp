#include <JKRSolidHeap.h>

JKRSolidHeap::JKRSolidHeap (HANDLE obj, size_t size, JKRHeap* parent, bool is_error)
  : JKRHeap (obj, size, parent, is_error), mFreeSize (mSize), _6C (mStart), _70 (mEnd), _74 (0)
{}

JKRSolidHeap::~JKRSolidHeap ()
{
    dispose();
}
