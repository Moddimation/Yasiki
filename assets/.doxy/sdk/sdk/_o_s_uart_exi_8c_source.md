

# File OSUartExi.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSUartExi.c**](_o_s_uart_exi_8c.md)

[Go to the documentation of this file](_o_s_uart_exi_8c.md)


```C++
#include <dolphin/exi.h>
#include <dolphin/os.h>

static u32 serEnabled;

// None of the functions in this file were ever used or made public
int InitializeUART ();
int ReadUARTN ();
int WriteUARTN (void* buf, u32 len);

int
InitializeUART ()
{
    if (!(OSGetConsoleType() & 0x10000000))
    {
        serEnabled = 0;
        return 2;
    }
    serEnabled = 0xA5FF005A;

    return 0;
}

int
ReadUARTN ()
{
    return 4;
}

static int
QueueLength (void)
{
    u32 cmd;

    if (EXISelect (0, 1, 3) == 0)
    {
        return -1;
    }
    cmd = 0x20010000;
    EXIImm (0, &cmd, 4, 1, 0);
    EXISync (0);
    EXIImm (0, &cmd, 1, 0, 0);
    EXISync (0);
    EXIDeselect (0);

    return (int)(0x10 - (cmd >> 0x18));
}

int
WriteUARTN (void* buf, u32 len)
{
    u32 cmd;
    s32 xLen;
    int qLen;
    u8* ptr;
    int locked;
    int error;

    if (serEnabled != -0x5a00ffa6)
    {
        return 2;
    }

    locked = EXILock (0, 1, 0);
    if (locked == 0)
    {
        return 0;
    }
    else
    {
        ptr = (u8*)buf;
    }

    for (ptr = (u8*)buf; (s32)ptr - (s32)buf < len; ptr++)
    {
        if (*ptr == '\n')
        {
            *ptr = '\r';
        }
    }
    error = 0;
    cmd   = 0xA0010000;

    while (len != 0)
    {
        qLen = QueueLength();
        if (qLen < 0)
        {
            error = -1;
            break;
        }

        if ((qLen >= 12) || (qLen >= len))
        {
            if (EXISelect (0, 1, 3) == 0)
            {
                error = -1;
                break;
            }

            EXIImm (0, &cmd, 4, 1, 0);
            EXISync (0);

            while ((qLen != 0) && (len != 0))
            {
                if ((qLen < 4) && (qLen < len))
                {
                    break;
                }

                xLen = len < 4 ? (s32)len : 4;

                EXIImm (0, buf, xLen, 1, 0);
                (u8*)buf += xLen;
                len      -= xLen;
                qLen     -= xLen;
                EXISync (0);
            }
            EXIDeselect (0);
        }
    }
    EXIUnlock (0);

    return error;
}
```


