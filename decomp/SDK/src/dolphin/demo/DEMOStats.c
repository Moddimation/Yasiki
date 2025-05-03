#include <dolphin/demo.h>
#include <dolphin/gx.h>

#include <dolphin.h>

#include "DEMOPrivate.h"

u16                  DemoStatEnable = 0;
static DemoStatData* DemoStat;
static u32           DemoStatIndx;
static u32           DemoStatMaxIndx;
static u32           DemoStatClocks;
static u32           DemoStatDisp;
static u32           DemoStatStrLen;
static u32           topPixIn;
static u32           topPixOut;
static u32           botPixIn;
static u32           botPixOut;
static u32           clrPixIn;
static u32           copyClks;
static u32           vcCheck;
static u32           vcMiss;
static u32           vcStall;
static u32           cpReq;
static u32           tcReq;
static u32           cpuRdReq;
static u32           cpuWrReq;
static u32           dspReq;
static u32           ioReq;
static u32           viReq;
static u32           peReq;
static u32           rfReq;
static u32           fiReq;

// functions
static void DEMOWriteStats (u16 update);
static void DEMOWriteStats (u16 update);
void
DEMOSetStats (DemoStatData* stat, u32 nstats, DEMO_STAT_DISP disp)
{
    if (!stat || nstats == 0)
    {
        DemoStatEnable = FALSE;
    }
    else
    {
        DemoStatEnable = TRUE;
        DemoStat = stat;
        DemoStatIndx = 0;
        DemoStatMaxIndx = nstats;
        DemoStatDisp = disp;
        DemoStatStrLen = strlen (DemoStat->text);
    }
}
static void
DEMOWriteStats (u16 update)
{
    u32 cnt0;
    u32 cnt1;
    u32 cnt2;
    u32 cnt3;
    u32 cnt4;
    u32 cnt5;
    u32 cnt6;
    u32 cnt7;
    u32 cnt8;
    u32 cnt9;

    switch (DemoStat[DemoStatIndx].stat_type)
    {
        case DEMO_STAT_GP0:
            cnt0 = GXReadGP0Metric();
            GXSetGPMetric (DemoStat[DemoStatIndx].stat, 0x16);
            GXClearGPMetric();
            if (update)
            {
                DemoStat[DemoStatIndx].count = cnt0;
            }
            break;
        case DEMO_STAT_GP1:
            cnt0 = GXReadGP1Metric();
            GXSetGPMetric (0x23, DemoStat[DemoStatIndx].stat);
            GXClearGPMetric();
            if (update)
            {
                DemoStat[DemoStatIndx].count = cnt0;
            }
            break;
        case DEMO_STAT_MEM:
            GXReadMemMetric (&cnt0,
                             &cnt1,
                             &cnt2,
                             &cnt3,
                             &cnt4,
                             &cnt5,
                             &cnt6,
                             &cnt7,
                             &cnt8,
                             &cnt9);
            GXClearMemMetric();
            if (update)
            {
                cpReq = cnt0;
                tcReq = cnt1;
                cpuRdReq = cnt2;
                cpuWrReq = cnt3;
                dspReq = cnt4;
                ioReq = cnt5;
                viReq = cnt6;
                peReq = cnt7;
                rfReq = cnt8;
                fiReq = cnt9;
            }
            break;
        case DEMO_STAT_PIX:
            GXReadPixMetric (&cnt0, &cnt1, &cnt2, &cnt3, &cnt4, &cnt5);
            GXClearPixMetric();
            if (update)
            {
                topPixIn = cnt0;
                topPixOut = cnt1;
                botPixIn = cnt2;
                botPixOut = cnt3;
                clrPixIn = cnt4;
                copyClks = cnt5;
            }
            break;
        case DEMO_STAT_VC:
            GXReadVCacheMetric (&cnt0, &cnt1, &cnt2);
            GXSetVCacheMetric (0);
            GXClearVCacheMetric();
            if (update)
            {
                vcCheck = cnt0;
                vcMiss = cnt1;
                vcStall = cnt2;
            }
            break;
        case DEMO_STAT_FR:
            GXReadPixMetric (&cnt0, &cnt1, &cnt2, &cnt3, &cnt4, &cnt5);
            GXClearPixMetric();
            if (update)
            {
                topPixIn = cnt0;
                topPixOut = cnt1;
                botPixIn = cnt2;
                botPixOut = cnt3;
                clrPixIn = cnt4;
                copyClks = cnt5;
            }
            DemoStatClocks = GXReadGP0Metric();
            GXSetGPMetric (0x22, 0x16);
            GXClearGPMetric();
            break;
        case DEMO_STAT_TBW:
        case DEMO_STAT_TBP:
            GXReadPixMetric (&cnt0, &cnt1, &cnt2, &cnt3, &cnt4, &cnt5);
            GXClearPixMetric();
            if (update)
            {
                topPixIn = cnt0;
                topPixOut = cnt1;
                botPixIn = cnt2;
                botPixOut = cnt3;
                clrPixIn = cnt4;
                copyClks = cnt5;
            }
            DemoStatClocks = GXReadGP0Metric();
            GXSetGPMetric (0x22, 0x16);
            GXClearGPMetric();
            GXReadMemMetric (&cnt0,
                             &cnt1,
                             &cnt2,
                             &cnt3,
                             &cnt4,
                             &cnt5,
                             &cnt6,
                             &cnt7,
                             &cnt8,
                             &cnt9);
            GXClearMemMetric();
            tcReq = cnt1;
            break;
        case DEMO_STAT_MYC:
        case DEMO_STAT_MYR:
            break;
        default:
            OSPanic ("DEMOStats.c", 0x119, "DEMOSetStats: Unknown demo stat type\n");
    }
}
void
DEMOUpdateStats (u16 inc)
{
    DEMOWriteStats (inc);
    if (inc)
    {
        DemoStatIndx = DemoStatIndx + 1;
        if (DemoStatIndx == DemoStatMaxIndx)
        {
            DemoStatIndx = 0;
        }
    }
}
void
DEMOPrintStats (void)
{
    GXRenderModeObj* rmode;
    u32              i;
    s16              text_x;
    s16              text_y;
    s16              text_yinc;
    u16              wd;
    u16              ht;
    float            rate;

    if (DemoStatDisp == DEMO_STAT_IO)
    {
        for (i = 0; i < DemoStatMaxIndx; i++)
        {
            switch (DemoStat[i].stat_type)
            {
                case DEMO_STAT_PIX:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            OSReport ("%s: %8d\n", DemoStat[i].text, topPixIn);
                            break;
                        case 1:
                            OSReport ("%s: %8d\n", DemoStat[i].text, topPixOut);
                            break;
                        case 2:
                            OSReport ("%s: %8d\n", DemoStat[i].text, botPixIn);
                            break;
                        case 3:
                            OSReport ("%s: %8d\n", DemoStat[i].text, botPixOut);
                            break;
                        case 4:
                            OSReport ("%s: %8d\n", DemoStat[i].text, clrPixIn);
                            break;
                        case 5:
                            OSReport ("%s: %8d\n", DemoStat[i].text, copyClks);
                            break;
                    }
                    break;
                case DEMO_STAT_FR:
                    rate = 40.0F * (topPixIn + botPixIn) /
                           (float)(DemoStatClocks - copyClks);
                    OSReport ("%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_TBW:
                    rate = 40.0F * (tcReq << 5) / (float)(DemoStatClocks - copyClks);
                    OSReport ("%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_TBP:
                    rate = (tcReq << 5) / (float)(topPixIn + botPixIn);
                    OSReport ("%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_VC:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            OSReport ("%s: %8d\n", DemoStat[i].text, vcCheck);
                            break;
                        case 1:
                            OSReport ("%s: %8d\n", DemoStat[i].text, vcMiss);
                            break;
                        case 2:
                            OSReport ("%s: %8d\n", DemoStat[i].text, vcStall);
                            break;
                    }
                    break;
                case DEMO_STAT_MYR:
                    rate = DemoStat[i].stat / (float)DemoStat[i].count;
                    OSReport ("%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_MEM:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            OSReport ("%s: %8d\n", DemoStat[i].text, cpReq);
                            break;
                        case 1:
                            OSReport ("%s: %8d\n", DemoStat[i].text, tcReq);
                            break;
                        case 2:
                            OSReport ("%s: %8d\n", DemoStat[i].text, cpuRdReq);
                            break;
                        case 3:
                            OSReport ("%s: %8d\n", DemoStat[i].text, cpuWrReq);
                            break;
                        case 4:
                            OSReport ("%s: %8d\n", DemoStat[i].text, dspReq);
                            break;
                        case 5:
                            OSReport ("%s: %8d\n", DemoStat[i].text, ioReq);
                            break;
                        case 6:
                            OSReport ("%s: %8d\n", DemoStat[i].text, viReq);
                            break;
                        case 7:
                            OSReport ("%s: %8d\n", DemoStat[i].text, peReq);
                            break;
                        case 8:
                            OSReport ("%s: %8d\n", DemoStat[i].text, rfReq);
                            break;
                        case 9:
                            OSReport ("%s: %8d\n", DemoStat[i].text, fiReq);
                            break;
                    }
                    break;
                default:
                    OSReport ("%s: %8d\n", DemoStat[i].text, DemoStat[i].count);
                    break;
            }
        }
    }
    else
    {
        rmode = DEMOGetRenderModeObj();
        switch (DemoStatDisp)
        {
            case DEMO_STAT_TL:
                text_x = 0x10;
                text_y = 0x10;
                text_yinc = 0xA;
                wd = rmode->fbWidth;
                ht = rmode->xfbHeight;
                break;
            case DEMO_STAT_BL:
                text_x = 0x10;
                text_y = rmode->xfbHeight - 0x18;
                text_yinc = -0xA;
                wd = rmode->fbWidth;
                ht = rmode->xfbHeight;
                break;
            case DEMO_STAT_TLD:
                text_x = 8;
                text_y = 8;
                text_yinc = 9;
                wd = rmode->fbWidth / 2;
                ht = rmode->xfbHeight / 2;
                break;
            case DEMO_STAT_BLD:
                text_x = 8;
                text_y = (rmode->xfbHeight - 0x18) / 2;
                text_yinc = -9;
                wd = rmode->fbWidth / 2;
                ht = rmode->xfbHeight / 2;
                break;
        }
        DEMOInitCaption (0, wd, ht);
        for (i = 0; i < DemoStatMaxIndx; i++)
        {
            switch (DemoStat[i].stat_type)
            {
                case DEMO_STAT_PIX:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        topPixIn);
                            break;
                        case 1:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        topPixOut);
                            break;
                        case 2:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        botPixIn);
                            break;
                        case 3:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        botPixOut);
                            break;
                        case 4:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        clrPixIn);
                            break;
                        case 5:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        copyClks);
                            break;
                    }
                    break;
                case DEMO_STAT_FR:
                    rate = 40.0F * (topPixIn + botPixIn) /
                           (float)(DemoStatClocks - copyClks);
                    DEMOPrintf (
                        text_x, text_y, 0, "%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_TBW:
                    rate = 40.0F * (tcReq << 5) / (float)(DemoStatClocks - copyClks);
                    DEMOPrintf (
                        text_x, text_y, 0, "%s: %8.2f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_TBP:
                    rate = (tcReq << 5) / (float)(topPixIn - botPixIn);
                    DEMOPrintf (
                        text_x, text_y, 0, "%s: %8.3f\n", DemoStat[i].text, rate);
                    break;
                case DEMO_STAT_VC:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        vcCheck);
                            break;
                        case 1:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        vcMiss);
                            break;
                        case 2:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        vcStall);
                            break;
                    }
                    break;
                case DEMO_STAT_MEM:
                    switch (DemoStat[i].stat)
                    {
                        case 0:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        cpReq);
                            break;
                        case 1:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        tcReq);
                            break;
                        case 2:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        cpuRdReq);
                            break;
                        case 3:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        cpuWrReq);
                            break;
                        case 4:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        dspReq);
                            break;
                        case 5:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        ioReq);
                            break;
                        case 6:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        viReq);
                            break;
                        case 7:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        peReq);
                            break;
                        case 8:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        rfReq);
                            break;
                        case 9:
                            DEMOPrintf (text_x,
                                        text_y,
                                        0,
                                        "%s: %8d\n",
                                        DemoStat[i].text,
                                        fiReq);
                            break;
                    }
                    break;
                case DEMO_STAT_GP0:
                case DEMO_STAT_GP1:
                case DEMO_STAT_MYC:
                    DEMOPrintf (text_x,
                                text_y,
                                0,
                                "%s: %8d",
                                DemoStat[i].text,
                                DemoStat[i].count);
                    break;
                case DEMO_STAT_MYR:
                    rate = DemoStat[i].stat / (float)DemoStat[i].count;
                    DEMOPrintf (
                        text_x, text_y, 0, "%s: %8.3f", DemoStat[i].text, rate);
                    break;
                default:
                    OSReport ("Undefined stat type %d in DEMOPrintStats()\n",
                              DemoStat[i].stat_type);
                    break;
            }
            text_y += text_yinc;
        }
    }
}
