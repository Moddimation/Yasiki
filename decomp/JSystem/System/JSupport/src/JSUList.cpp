#include <JSUList.h>

JSUPtrLink::JSUPtrLink (void* obj)
{
    pSupervisor = Nil;
    pObject     = obj;
    pNext       = Nil;
    pPrev       = Nil;
}

JSUPtrLink::~JSUPtrLink ()
{
    if (pSupervisor != Nil)
    {
        pSupervisor->remove (this);
    }
}

JSUPtrList::JSUPtrList (BOOL do_init)
{
    if (do_init)
    {
        initiate();
    }
}

JSUPtrList::~JSUPtrList ()
{
    JSUPtrLink* link = pFirst;

    for (u32 i = 0; i < mNumLinks; i++)
    {
        link->pSupervisor = Nil;
        link              = link->pPrev;
    }
}

void
JSUPtrList::initiate ()
{
    pFirst    = Nil;
    pLast     = Nil;
    mNumLinks = Nil;
}

void
JSUPtrList::setFirst (JSUPtrLink* link)
{
    link->pSupervisor = this;
    link->pNext       = Nil;
    link->pPrev       = Nil;
    pLast             = link;
    pFirst            = link;
    mNumLinks         = 1;
}

void
JSUPtrList::setLast (JSUPtrLink* link)
{
    link->pSupervisor = this;
    link->pNext       = pLast;
    link->pPrev       = Nil;
    pLast->pPrev      = link;
    pLast             = link;
    mNumLinks++;
}

void
JSUPtrList::setNext (JSUPtrLink* link)
{
    link->pSupervisor = this;
    link->pNext       = Nil;
    link->pPrev       = pFirst;
    pFirst->pNext     = link;
    pFirst            = link;
    mNumLinks++;
}

BOOL
JSUPtrList::append (JSUPtrLink* link)
{
    BOOL result = (link->pSupervisor == Nil);
    if (!result)
    {
        result = link->pSupervisor->remove (link);
    }

    if (result)
    {
        if (mNumLinks == 0)
        {
            setFirst (link);
        }
        else
        {
            setLast (link);
        }
    }
    return result;
}

BOOL
JSUPtrList::prepend (JSUPtrLink* link)
{
    BOOL result = (link->pSupervisor == Nil);
    if (!result)
    {
        result = link->pSupervisor->remove (link);
    }

    if (result)
    {
        if (mNumLinks == 0)
        {
            setFirst (link);
        }
        else
        {
            setNext (link);
        }
    }
    return result;
}

BOOL
JSUPtrList::insert (JSUPtrLink* last, JSUPtrLink* next)
{
    if (last == pFirst)
    {
        return prepend (next);
    }
    if (last == Nil)
    {
        return append (next);
    }

    if (last->pSupervisor != this)
    {
        return false;
    }

    BOOL result = next->pSupervisor == Nil;
    if (!result)
    {
        result = next->pSupervisor->remove (next);
    }
    if (result)
    {
        JSUPtrLink* old   = last->pNext;
        next->pSupervisor = this;
        next->pNext       = old;
        next->pPrev       = last;
        old->pPrev        = next;
        last->pNext       = next;
        mNumLinks++;
    }

    return result;
}

BOOL
JSUPtrList::remove (JSUPtrLink* link)
{
    BOOL result = link->pSupervisor == this;
    if (result)
    {
        if (mNumLinks == 1)
        {
            pFirst = Nil;
            pLast  = Nil;
        }
        else if (link == pFirst)
        {
            link->pPrev->pNext = Nil;
            pFirst             = link->pPrev;
        }
        else if (link == pLast)
        {
            link->pNext->pPrev = Nil;
            pLast              = link->pNext;
        }
        else
        {
            link->pNext->pPrev = link->pPrev;
            link->pPrev->pNext = link->pNext;
        }

        link->pSupervisor = Nil;
        mNumLinks--;
    }
    return result;
}
