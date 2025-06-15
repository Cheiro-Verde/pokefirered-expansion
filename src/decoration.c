#include "global.h"
#include "decoration.h"
#include "constants/decorations.h"

#include "data/decoration/tiles.h"
#include "data/decoration/description.h"
#include "data/decoration/header.h"



void SetDecoration(void)
{
    // u8 i;
    // u8 j;

    // for (i = 0; i < NUM_DECORATION_FLAGS; i++)
    // {
    //     if (FlagGet(FLAG_DECORATION_1 + i) == TRUE)
    //     {
    //         FlagClear(FLAG_DECORATION_1 + i);
    //         for (j = 0; j < gMapHeader.events->objectEventCount; j++)
    //         {
    //             if (gMapHeader.events->objectEvents[j].flagId == FLAG_DECORATION_1 + i)
    //                 break;
    //         }

    //         VarSet(
    //             VAR_OBJ_GFX_ID_0 + (gMapHeader.events->objectEvents[j].graphicsId - OBJ_EVENT_GFX_VAR_0),
    //             sPlaceDecorationGraphicsDataBuffer.decoration->tiles[0]);

    //         gSpecialVar_0x8005 = gMapHeader.events->objectEvents[j].localId;
    //         gSpecialVar_0x8006 = sCurDecorMapX;
    //         gSpecialVar_0x8007 = sCurDecorMapY;
    //         TrySpawnObjectEvent(gSpecialVar_0x8005, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    //         TryMoveObjectEventToMapCoords(gSpecialVar_0x8005, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, gSpecialVar_0x8006, gSpecialVar_0x8007);
    //         TryOverrideObjectEventTemplateCoords(gSpecialVar_0x8005, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    //         break;
    //     }
    // }
}

// Input
// gSpecialVar_0x8004: Current iteration.
//
// Output
// gSpecialVar_Result: TRUE if all iterations complete.
// gSpecialVar_0x8005: flagId of decoration (if any).
// gSpecialVar_0x8006: localId of decoration object event (if any).
void PutAwayDecorationIteration(void)
{
    // u16 i;

    // gSpecialVar_0x8005 = 0;
    // gSpecialVar_Result = FALSE;
    // if (gSpecialVar_0x8004 == sCurDecorSelectedInRearrangement)
    // {
    //     gSpecialVar_Result = TRUE;
    // }
    // else if (gDecorations[sDecorationContext.items[sDecorRearrangementDataBuffer[gSpecialVar_0x8004].idx]].permission == DECORPERM_SPRITE)
    // {
    //     gSpecialVar_0x8005 = sDecorRearrangementDataBuffer[gSpecialVar_0x8004].flagId;
    //     ClearDecorationContextIndex(sDecorRearrangementDataBuffer[gSpecialVar_0x8004].idx);
    //     for (i = 0; i < gMapHeader.events->objectEventCount; i++)
    //     {
    //         if (gMapHeader.events->objectEvents[i].flagId == gSpecialVar_0x8005)
    //         {
    //             gSpecialVar_0x8006 = gMapHeader.events->objectEvents[i].localId;
    //             break;
    //         }
    //     }
    // }
}
