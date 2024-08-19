#include "global.h"
#include "crt0.h"
#include "gflib.h"
#include "m4a.h"
#include "load_save.h"
#include "new_game.h"
#include "overworld.h"
#include "save.h"

void ReloadSave(void)
{
    u16 imeBackup = REG_IME;
    
    REG_IME = 0;
    RegisterRamReset(RESET_EWRAM);
    ReInitializeEWRAM();
    ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_FORCED_BLANK);
    REG_IME = imeBackup;
    gMain.inBattle = FALSE;
    SetSaveBlocksPointers();
    ResetMenuAndMonGlobals();
    Save_ResetSaveCounters();
    LoadGameSave(SAVE_NORMAL);
    if (gSaveFileStatus == SAVE_STATUS_EMPTY || gSaveFileStatus == SAVE_STATUS_CORRUPT)
        Sav2_ClearSetDefault();
    SetPokemonCryStereo(gSaveBlock2Ptr->optionsSound);
    InitHeap(gHeap, HEAP_SIZE);
    SetMainCallback2(CB2_ContinueSavedGame);
}
