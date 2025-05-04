#include <JKRDisposer.hpp>
#include <JKRHeap.hpp>

JKRDisposer::JKRDisposer () : mPtr (this)
{
    pHeap = JKRHeap::findFromRoot (this);
    if (pHeap != nullptr)
    {
        pHeap->appendDisposer (this);
    }
}

JKRDisposer::~JKRDisposer ()
{
    if (pHeap != nullptr)
    {
        pHeap->removeDisposer (this);
    }
}
