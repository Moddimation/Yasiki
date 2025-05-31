#include <dolphin.h>
#include <macros.h>

#include <JKRDisposer.h>
#include <JKRHeap.h>

#include <stddef.h>

JKRDisposer::JKRDisposer ()
  : mHeapLink (this)
{
    pHeapObj = JKRHeap::findFromRoot (this);
    if (pHeapObj != Nil)
    {
        pHeapObj->appendDisposer (this);
    }
}

JKRDisposer::~JKRDisposer ()
{
    if (pHeapObj != Nil)
    {
        pHeapObj->removeDisposer (this);
    }
}
