#include <dolphin.h>
#include <macros.h>

#include <JKRDisposer.h>
#include <JKRHeap.h>

#include <stddef.h>

JKRDisposer::JKRDisposer () : mHeapLink (SELF)
{
    pHeapObj = JKRHeap::findFromRoot (SELF);
    if (pHeapObj != Nil)
    {
        pHeapObj->appendDisposer (SELF);
    }
}

JKRDisposer::~JKRDisposer ()
{
    if (pHeapObj != Nil)
    {
        pHeapObj->removeDisposer (SELF);
    }
}
