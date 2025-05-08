#include <JKRDisposer.h>
#include <JKRHeap.h>

JKRDisposer::JKRDisposer () : mHeapLink (SELF)
{
    pHeapObj = JKRHeap::findFromRoot (SELF);
    if (pHeapObj != nullptr)
    {
        pHeapObj->appendDisposer (SELF);
    }
}

JKRDisposer::~JKRDisposer ()
{
    if (pHeapObj != nullptr)
    {
        pHeapObj->removeDisposer (SELF);
    }
}
