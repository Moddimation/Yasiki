#include <dolphin/os.h>

#define ALIGNMENT 32

#define InRange(cell, arenaStart, arenaEnd)                                                    \
    ((u32)arenaStart <= (u32)cell) && ((u32)cell < (u32)arenaEnd)

#define HEADERSIZE 32u
#define MINOBJSIZE 64u

#ifdef DEBUG
#define ENABLE_HEAPDESC
#endif

typedef struct HeapDesc HeapDesc;
typedef struct Cell     Cell;

struct Cell
{
    Cell* prev;          ///< 0x00
    Cell* next;          ///< 0x04
    s32   size;          ///< 0x08
#ifdef ENABLE_HEAPDESC
    HeapDesc* hd;        ///< 0x0C
    s32       requested; ///
#endif
};

struct HeapDesc
{
    s32   size;
    Cell* free;
    Cell* allocated;
#ifdef ENABLE_HEAPDESC
    u32 paddingBytes;
    u32 headerBytes;
    u32 payloadBytes;
#endif
};

volatile OSHeapHandle __OSCurrHeap = -1;

static HeapDesc* HeapArray;
static int       NumHeaps;
static void*     ArenaStart;
static void*     ArenaEnd;

// functions
static Cell* DLAddFront (Cell* list, Cell* cell);
static Cell* DLLookup (Cell* list, Cell* cell);
static Cell* DLExtract (Cell* list, Cell* cell);
static Cell* DLInsert (Cell* list, Cell* cell);
static int   DLOverlap (Cell* list, void* start, void* end);
static s32   DLSize (Cell* list);

static Cell*
DLAddFront (Cell* list, Cell* cell)
{
    cell->next = list;
    cell->prev = 0;
    if (list)
    {
        list->prev = cell;
    }
    return cell;
}

static Cell*
DLLookup (Cell* list, Cell* cell)
{
    for (; list; list = list->next)
    {
        if (list == cell)
        {
            return list;
        }
    }
    return NULL;
}

static Cell*
DLExtract (Cell* list, Cell* cell)
{
    if (cell->next)
    {
        cell->next->prev = cell->prev;
    }
    if (cell->prev == NULL)
    {
        return cell->next;
    }
    cell->prev->next = cell->next;
    return list;
}

static Cell*
DLInsert (Cell* list, Cell* cell)
{
    Cell* prev;
    Cell* next;

    for (next = list, prev = NULL; next != 0; prev = next, next = next->next)
    {
        if (cell <= next)
        {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;
    if (next)
    {
        next->prev = cell;
        if ((u8*)cell + cell->size == (u8*)next)
        {
            cell->size += next->size;
            next = next->next;
            cell->next = next;
            if (next)
            {
                next->prev = cell;
            }
        }
    }
    if (prev)
    {
        prev->next = cell;
        if ((u8*)prev + prev->size == (u8*)cell)
        {
            prev->size += cell->size;
            prev->next = next;
            if (next)
            {
                next->prev = prev;
            }
        }
        return list;
    }
    return cell;
}

static BOOL
DLOverlap (Cell* list, void* start, void* end)
{
    Cell* cell = list;

    while (cell)
    {
        if (((start <= (void*)cell) && ((void*)cell < end)) ||
            ((start < (void*)((u8*)cell + cell->size)) &&
             ((void*)((u8*)cell + cell->size) <= end)))
        {
            return TRUE;
        }
        cell = cell->next;
    }
    return FALSE;
}

static s32
DLSize (Cell* list)
{
    Cell* cell;
    s32   size;

    size = 0;
    cell = list;

    while (cell)
    {
        size += cell->size;
        cell = cell->next;
    }

    return size;
}

void*
OSAllocFromHeap (int heap, u32 size)
{
    HeapDesc* hd;
    Cell*     cell;
    Cell*     newCell;
    s32       leftoverSize;
    s32       requested;

    requested = (s32)size;
    ASSERTMSGLINE (0x14D, HeapArray, "OSAllocFromHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x14E, (s32)size > 0, "OSAllocFromHeap(): invalid size.");
    ASSERTMSGLINE (0x14F,
                   heap >= 0 && heap < NumHeaps,
                   "OSAllocFromHeap(): invalid heap handle.");
    ASSERTMSGLINE (0x150, HeapArray[heap].size >= 0, "OSAllocFromHeap(): invalid heap handle.");

    hd = &HeapArray[heap];
    size += 0x20;
    size = (size + 0x1F) & 0xFFFFFFE0;

    for (cell = hd->free; cell != NULL; cell = cell->next)
    {
        if ((signed)size <= (signed)cell->size)
        {
            break;
        }
    }

    if (cell == NULL)
    {
#if DEBUG
        OSReport ("OSAllocFromHeap: Warning- failed to allocate %d bytes\n", size);
#endif
        return NULL;
    }
    ASSERTMSGLINE (0x168, !((s32)cell & 0x1F), "OSAllocFromHeap(): heap is broken.");
    ASSERTMSGLINE (0x169, cell->hd == NULL, "OSAllocFromHeap(): heap is broken.");

    leftoverSize = cell->size - (s32)size;
    if (leftoverSize < 0x40U)
    {
        hd->free = DLExtract (hd->free, cell);
    }
    else
    {
        cell->size = (s32)size;
        newCell = (void*)((u8*)cell + size);
        newCell->size = leftoverSize;
#ifdef ENABLE_HEAPDESC
        newCell->hd = 0;
#endif
        newCell->prev = cell->prev;
        newCell->next = cell->next;
        if (newCell->next != NULL)
        {
            newCell->next->prev = newCell;
        }
        if (newCell->prev != NULL)
        {
            newCell->prev->next = newCell;
        }
        else
        {
            ASSERTMSGLINE (0x186, hd->free == cell, "OSAllocFromHeap(): heap is broken.");
            hd->free = newCell;
        }
    }

    hd->allocated = DLAddFront (hd->allocated, cell);
#ifdef ENABLE_HEAPDESC
    cell->hd = hd;
    cell->requested = requested;
    hd->headerBytes += 0x20;
    hd->paddingBytes += (cell->size - (requested + 0x20));
    hd->payloadBytes += requested;
#endif
    return (u8*)cell + 0x20;
}

void*
OSAllocFixed (void* rstart, void* rend)
{
    int       i;
    Cell*     cell;
    Cell*     newCell;
    HeapDesc* hd;
    void*     start;
    void*     end;
    void*     cellEnd;

    start = (void*)((*(u32*)rstart) & ~((32) - 1));
    end = (void*)((*(u32*)rend + 0x1FU) & ~((32) - 1));

    ASSERTMSGLINE (0x1B0, HeapArray, "OSAllocFixed(): heap is not initialized.");
    ASSERTMSGLINE (0x1B1, (u32)start < (u32)end, "OSAllocFixed(): invalid range.");
    ASSERTMSGLINE (0x1B3,
                   ((u32)ArenaStart <= (u32)start) && ((u32)end <= (u32)ArenaEnd),
                   "OSAllocFixed(): invalid range.");

    for (i = 0; i < NumHeaps; i++)
    {
        hd = &HeapArray[i];
        if (hd->size >= 0)
        {
            if (DLOverlap (hd->allocated, start, end))
            {
#if DEBUG
                OSReport ("OSAllocFixed: Warning - failed to allocate from %p to %p\n",
                          start,
                          end);
#endif
                return NULL;
            }
        }
    }

    for (i = 0; i < NumHeaps; i++)
    {
        hd = &HeapArray[i];
        if (hd->size >= 0)
        {
            for (cell = hd->free; cell; cell = cell->next)
            {
                cellEnd = ((u8*)cell + cell->size);
                if (cellEnd > start)
                {
                    if (end <= cell)
                    {
                        break;
                    }
                    if ((char*)start - 0x20 <= (char*)cell && cell < end &&
                        (start <= cellEnd) && (cellEnd < ((char*)end + 0x40)))
                    {
                        if (cell < start)
                        {
                            start = cell;
                        }
                        if (end < cellEnd)
                        {
                            end = cellEnd;
                        }
                        hd->free = DLExtract (hd->free, cell);
                        hd->size -= cell->size;
                    }
                    else if ((char*)start - 0x20 <= (char*)cell && cell < end)
                    {
                        if (cell < start)
                        {
                            start = cell;
                        }
                        ASSERTLINE (0x1F3, MINOBJSIZE <= (char*)cellEnd - (char*)end);
                        newCell = (Cell*)end;

                        newCell->size = (s32)((char*)cellEnd - (char*)end);
#ifdef ENABLE_HEAPDESC
                        newCell->hd = 0;
#endif
                        newCell->next = cell->next;
                        if (newCell->next)
                        {
                            newCell->next->prev = newCell;
                        }
                        newCell->prev = cell->prev;
                        if (newCell->prev)
                        {
                            newCell->prev->next = newCell;
                        }
                        else
                        {
                            hd->free = newCell;
                        }
                        hd->size -= ((char*)end - (char*)cell);
                        break;
                    }
                    else
                    {
                        if ((start <= cellEnd) && (cellEnd < ((char*)end + 0x40U)))
                        {
                            if (end < cellEnd)
                            {
                                end = cellEnd;
                            }
                            ASSERTLINE (0x20C, MINOBJSIZE <= (char*)start - (char*)cell);
                            hd->size -= ((char*)cellEnd - (char*)start);
                            cell->size = ((char*)start - (char*)cell);
                        }
                        else
                        {
                            ASSERTLINE (0x213, MINOBJSIZE <= (char*)cellEnd - (char*)end);
                            newCell = (Cell*)end;
                            newCell->size = ((char*)cellEnd - (char*)end);
#ifdef ENABLE_HEAPDESC
                            newCell->hd = 0;
#endif
                            newCell->next = cell->next;
                            if (newCell->next)
                            {
                                newCell->next->prev = newCell;
                            }
                            newCell->prev = cell;
                            cell->next = newCell;
                            cell->size = ((char*)start - (char*)cell);
                            hd->size -= ((char*)end - (char*)start);
                            break;
                        }
                    }
                }
            }
            ASSERTLINE (0x222, 0 <= hd->size);
        }
    }
    ASSERTLINE (0x225, OFFSET (start, ALIGNMENT) == 0);
    ASSERTLINE (0x226, OFFSET (end, ALIGNMENT) == 0);
    ASSERTLINE (0x227, start < end);
    *(u32*)rstart = (u32)start;
    *(u32*)rend = (u32)end;
    return (void*)*(u32*)rstart;
}

void
OSFreeToHeap (int heap, void* ptr)
{
    HeapDesc* hd;
    Cell*     cell;

    ASSERTMSGLINE (0x23D, HeapArray, "OSFreeToHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x23F,
                   ((u32)ArenaStart + 0x20) <= (u32)ptr && (u32)ptr < (u32)ArenaEnd,
                   "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE (0x240, OFFSET (ptr, ALIGNMENT) == 0, "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE (0x241, HeapArray[heap].size >= 0, "OSFreeToHeap(): invalid heap handle.");
    cell = (void*)((u32)ptr - 0x20);
    hd = &HeapArray[heap];
    ASSERTMSGLINE (0x246, cell->hd == hd, "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE (0x247, DLLookup (hd->allocated, cell), "OSFreeToHeap(): invalid pointer.");
#ifdef ENABLE_HEAPDESC
    cell->hd = 0;
    hd->headerBytes -= 0x20;
    hd->paddingBytes -= (cell->size - (cell->requested + 0x20));
    hd->payloadBytes -= cell->requested;
#endif
    hd->allocated = DLExtract (hd->allocated, cell);
    hd->free = DLInsert (hd->free, cell);
}

int
OSSetCurrentHeap (int heap)
{
    int prev;

    ASSERTMSGLINE (0x267, HeapArray, "OSSetCurrentHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x268,
                   (heap >= 0) && (heap < NumHeaps),
                   "OSSetCurrentHeap(): invalid heap handle.");
    ASSERTMSGLINE (0x269,
                   HeapArray[heap].size >= 0,
                   "OSSetCurrentHeap(): invalid heap handle.");
    prev = __OSCurrHeap;
    __OSCurrHeap = heap;
    return prev;
}

void*
OSInitAlloc (void* arenaStart, void* arenaEnd, int maxHeaps)
{
    u32       arraySize;
    int       i;
    HeapDesc* hd;

    ASSERTMSGLINE (0x283, maxHeaps > 0, "OSInitAlloc(): invalid number of heaps.");
    ASSERTMSGLINE (0x285, (u32)arenaStart < (u32)arenaEnd, "OSInitAlloc(): invalid range.");
    ASSERTMSGLINE (0x288,
                   maxHeaps <= (((u32)arenaEnd - (u32)arenaStart) / 24U),
                   "OSInitAlloc(): too small range.");
    arraySize = maxHeaps * sizeof (HeapDesc);
    HeapArray = arenaStart;
    NumHeaps = maxHeaps;

    for (i = 0; i < NumHeaps; i++)
    {
        hd = &HeapArray[i];
        hd->size = -1;
        hd->free = hd->allocated = 0;
#ifdef ENABLE_HEAPDESC
        hd->paddingBytes = hd->headerBytes = hd->payloadBytes = 0;
#endif
    }
    __OSCurrHeap = -1;
    arenaStart = (void*)((u32)((char*)HeapArray + arraySize));
    arenaStart = (void*)(((u32)arenaStart + 0x1F) & 0xFFFFFFE0);
    ArenaStart = arenaStart;
    ArenaEnd = (void*)((u32)arenaEnd & 0xFFFFFFE0);
    ASSERTMSGLINE (0x2A4,
                   ((u32)ArenaEnd - (u32)ArenaStart) >= 0x40U,
                   "OSInitAlloc(): too small range.");
    return arenaStart;
}

int
OSCreateHeap (void* start, void* end)
{
    int       heap;
    HeapDesc* hd;
    Cell*     cell;

    ASSERTMSGLINE (0x2BD, HeapArray, "OSCreateHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x2BE, (u32)start < (u32)end, "OSCreateHeap(): invalid range.");

    start = (void*)(((u32)start + 0x1FU) & ~((32) - 1));
    end = (void*)(((u32)end) & ~((32) - 1));

    ASSERTMSGLINE (0x2C1, (u32)start < (u32)end, "OSCreateHeap(): invalid range.");
    ASSERTMSGLINE (0x2C3,
                   (u32)ArenaStart <= (u32)start && (u32)end <= (u32)ArenaEnd,
                   "OSCreateHeap(): invalid range.");
    ASSERTMSGLINE (0x2C5, ((u32)end - (u32)start) >= 0x40U, "OSCreateHeap(): too small range.");

#if DEBUG
    for (heap = 0; heap < NumHeaps; heap++)
    {
        if (HeapArray[heap].size >= 0)
        {
            ASSERTMSGLINE (0x2CF,
                           !DLOverlap (HeapArray[heap].free, start, end),
                           "OSCreateHeap(): invalid range.");
            ASSERTMSGLINE (0x2D1,
                           !DLOverlap (HeapArray[heap].allocated, start, end),
                           "OSCreateHeap(): invalid range.");
        }
    }
#endif

    for (heap = 0; heap < NumHeaps; heap++)
    {
        hd = &HeapArray[heap];
        if (hd->size < 0)
        {
            hd->size = (s32)end - (s32)start;
            cell = start;
            cell->prev = 0;
            cell->next = 0;
            cell->size = hd->size;
#ifdef ENABLE_HEAPDESC
            cell->hd = 0;
#endif
            hd->free = cell;
            hd->allocated = 0;
#ifdef ENABLE_HEAPDESC
            hd->paddingBytes = hd->headerBytes = hd->payloadBytes = 0;
#endif
            return heap;
        }
    }
#if DEBUG
    OSReport ("OSCreateHeap: Warning - Failed to find free heap descriptor.");
#endif
    return -1;
}

void
OSDestroyHeap (int heap)
{
    HeapDesc* hd;
    s32       size;

#pragma unused(size)

    ASSERTMSGLINE (0x30A, HeapArray, "OSDestroyHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x30B,
                   (heap >= 0) && (heap < NumHeaps),
                   "OSDestroyHeap(): invalid heap handle.");
    ASSERTMSGLINE (0x30C, HeapArray[heap].size >= 0, "OSDestroyHeap(): invalid heap handle.");

    hd = &HeapArray[heap];
#if DEBUG
    size = DLSize (hd->free);

    if (hd->size != size)
    {
        OSReport ("OSDestroyHeap(%d): Warning - free list size %d, heap size %d\n",
                  heap,
                  size,
                  hd->size);
    }
#endif

    hd->size = -1;
#ifdef ENABLE_HEAPDESC
    hd->paddingBytes = hd->headerBytes = hd->payloadBytes = 0;
    if (__OSCurrHeap == heap)
    {
        __OSCurrHeap = -1;
    }
#endif
}

void
OSAddToHeap (int heap, void* start, void* end)
{
    HeapDesc* hd;
    Cell*     cell;
    int       i;

#pragma unused(i)

    ASSERTMSGLINE (0x339, HeapArray, "OSAddToHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x33A,
                   (heap >= 0) && (heap < NumHeaps),
                   "OSAddToHeap(): invalid heap handle.");
    ASSERTMSGLINE (0x33B, HeapArray[heap].size >= 0, "OSAddToHeap(): invalid heap handle.");

    hd = &HeapArray[heap];

    ASSERTMSGLINE (0x33F, (u32)start < (u32)end, "OSAddToHeap(): invalid range.");

    start = (void*)(((u32)start + 0x1F) & ~((32) - 1));
    end = (void*)(((u32)end) & ~((32) - 1));

    ASSERTMSGLINE (0x343, ((u32)end - (u32)start) >= 0x40U, "OSAddToHeap(): too small range.");
    ASSERTMSGLINE (0x345,
                   (u32)ArenaStart <= (u32)start && (u32)end <= (u32)ArenaEnd,
                   "OSAddToHeap(): invalid range.");

#if DEBUG
    for (i = 0; i < NumHeaps; i++)
    {
        if (HeapArray[i].size >= 0)
        {
            ASSERTMSGLINE (0x34F,
                           !DLOverlap (HeapArray[i].free, start, end),
                           "OSAddToHeap(): invalid range.");
            ASSERTMSGLINE (0x351,
                           !DLOverlap (HeapArray[i].allocated, start, end),
                           "OSAddToHeap(): invalid range.");
        }
    }
#endif
    cell = (Cell*)start;
    cell->size = ((char*)end - (char*)start);
#ifdef ENABLE_HEAPDESC
    cell->hd = 0;
#endif
    hd->size += cell->size;
    hd->free = DLInsert (hd->free, cell);
}

// custom macro for OSCheckHeap
#define ASSERTREPORT(line, cond)                                                               \
    if (!(cond))                                                                               \
    {                                                                                          \
        OSReport ("OSCheckHeap: Failed " #cond " in %d", line);                                \
        return -1;                                                                             \
    }

s32
OSCheckHeap (int heap)
{
    HeapDesc* hd;
    Cell*     cell;
    s32       total = 0;
    s32       free = 0;

    ASSERTREPORT (0x37D, HeapArray);
    ASSERTREPORT (0x37E, 0 <= heap && heap < NumHeaps);
    hd = &HeapArray[heap];
    ASSERTREPORT (0x381, 0 <= hd->size);

    ASSERTREPORT (0x383, hd->allocated == NULL || hd->allocated->prev == NULL);

    for (cell = hd->allocated; cell; cell = cell->next)
    {
        ASSERTREPORT (0x386, InRange (cell, ArenaStart, ArenaEnd));
        ASSERTREPORT (0x387, OFFSET (cell, ALIGNMENT) == 0);
        ASSERTREPORT (0x388, cell->next == NULL || cell->next->prev == cell);
        ASSERTREPORT (0x389, MINOBJSIZE <= cell->size);
        ASSERTREPORT (0x38A, OFFSET (cell->size, ALIGNMENT) == 0);
        total += cell->size;
        ASSERTREPORT (0x38D, 0 < total && total <= hd->size);
#ifdef ENABLE_HEAPDESC
        ASSERTREPORT (0x390, cell->hd == hd);
        ASSERTREPORT (0x391, HEADERSIZE + cell->requested <= cell->size);
#endif
    }

    ASSERTREPORT (0x395, hd->free == NULL || hd->free->prev == NULL);

    for (cell = hd->free; cell; cell = cell->next)
    {
        ASSERTREPORT (0x398, InRange (cell, ArenaStart, ArenaEnd));
        ASSERTREPORT (0x399, OFFSET (cell, ALIGNMENT) == 0);
        ASSERTREPORT (0x39A, cell->next == NULL || cell->next->prev == cell);
        ASSERTREPORT (0x39B, MINOBJSIZE <= cell->size);
        ASSERTREPORT (0x39C, OFFSET (cell->size, ALIGNMENT) == 0);
        ASSERTREPORT (0x39D,
                      cell->next == NULL || (char*)cell + cell->size < (char*)cell->next);
        total += cell->size;
        free = (cell->size + free);
        free -= HEADERSIZE;
        ASSERTREPORT (0x3A1, 0 < total && total <= hd->size);
#ifdef ENABLE_HEAPDESC
        ASSERTREPORT (0x3A4, cell->hd == NULL);
#endif
    }
    ASSERTREPORT (0x3A8, total == hd->size);
    return free;
}

u32
OSReferentSize (void* ptr)
{
    Cell* cell;

    ASSERTMSGLINE (0x3BB, HeapArray, "OSReferentSize(): heap is not initialized.");
    ASSERTMSGLINE (0x3BD,
                   InRange (ptr, ArenaStart + HEADERSIZE, ArenaEnd),
                   "OSReferentSize(): invalid pointer.");
    ASSERTMSGLINE (0x3BE, !OFFSET (ptr, 32), "OSReferentSize(): invalid pointer.");
    cell = (void*)((u32)ptr - HEADERSIZE);
    ASSERTMSGLINE (0x3C2, cell->hd, "OSReferentSize(): invalid pointer.");
    ASSERTMSGLINE (0x3C4,
                   !(((u32)cell->hd - (u32)HeapArray) % 24),
                   "OSReferentSize(): invalid pointer.");
    ASSERTMSGLINE (0x3C6,
                   ((u32)HeapArray <= (u32)cell->hd) &&
                       ((u32)cell->hd < (u32)((u32)HeapArray + (NumHeaps * 0x18))),
                   "OSReferentSize(): invalid pointer.");
    ASSERTMSGLINE (0x3C7, cell->hd->size >= 0, "OSReferentSize(): invalid pointer.");
    ASSERTMSGLINE (0x3C9,
                   DLLookup (cell->hd->allocated, cell),
                   "OSReferentSize(): invalid pointer.");
    return ((u32)cell->size - HEADERSIZE);
}

void
OSDumpHeap (int heap)
{
    HeapDesc* hd;
    Cell*     cell;

    OSReport ("\nOSDumpHeap(%d):\n", heap);
    ASSERTMSGLINE (0x3DE, HeapArray, "OSDumpHeap(): heap is not initialized.");
    ASSERTMSGLINE (0x3DF,
                   (heap >= 0) && (heap < NumHeaps),
                   "OSDumpHeap(): invalid heap handle.");
    hd = &HeapArray[heap];
    if (hd->size < 0)
    {
        OSReport ("--------Inactive\n");
        return;
    }
    ASSERTMSGLINE (0x3E8, OSCheckHeap (heap) >= 0, "OSDumpHeap(): heap is broken.");
#ifdef ENABLE_HEAPDESC
    OSReport ("padding %d/(%f%%) header %d/(%f%%) payload %d/(%f%%)\n",
              hd->paddingBytes,
              (100.0 * hd->paddingBytes / hd->size),
              hd->headerBytes,
              (100.0 * hd->headerBytes / hd->size),
              hd->payloadBytes,
              (100.0 * hd->payloadBytes / hd->size));
#endif
    OSReport ("addr	size		end	prev	next\n");
    OSReport ("--------Allocated\n");

    ASSERTMSGLINE (0x3F5,
                   hd->allocated == NULL || hd->allocated->prev == NULL,
                   "OSDumpHeap(): heap is broken.");

    for (cell = hd->allocated; cell; cell = cell->next)
    {
        OSReport ("%x	%d	%x	%x	%x\n",
                  cell,
                  cell->size,
                  (char*)cell + cell->size,
                  cell->prev,
                  cell->next);
    }
    OSReport ("--------Free\n");
    for (cell = hd->free; cell; cell = cell->next)
    {
        OSReport ("%x	%d	%x	%x	%x\n",
                  cell,
                  cell->size,
                  (char*)cell + cell->size,
                  cell->prev,
                  cell->next);
    }
}

void
OSVisitAllocated (void (*visitor) (void*, u32))
{
    u32   heap;
    Cell* cell;

    for (heap = 0; heap < NumHeaps; heap++)
    {
        if (HeapArray[heap].size >= 0)
        {
            for (cell = HeapArray[heap].allocated; cell; cell = cell->next)
            {
                visitor ((char*)cell + HEADERSIZE, (u32)cell->size);
            }
        }
    }
}
