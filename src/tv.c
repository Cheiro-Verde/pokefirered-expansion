#include "global.h"
#include "event_data.h"
#include "field_specials.h"
#include "string_util.h"


void TurnOffTVScreen(void)
{
    // SetTVMetatilesOnMap(gBackupMapLayout.width, gBackupMapLayout.height, METATILE_Building_TV_Off);
    // DrawWholeMapView();
}

// gSpecialVar_0x8004 here is set from GetRandomActiveShowIdx in EventScript_TryDoTVShow
void DoTVShow(void)
{
    // if (gSaveBlock1Ptr->tvShows[gSpecialVar_0x8004].common.active)
    // {
    //     switch (gSaveBlock1Ptr->tvShows[gSpecialVar_0x8004].common.kind)
    //     {
    //     case TVSHOW_FAN_CLUB_LETTER:
    //         DoTVShowPokemonFanClubLetter();
    //         break;
    //     case TVSHOW_RECENT_HAPPENINGS:
    //         DoTVShowRecentHappenings();
    //         break;
    //     case TVSHOW_PKMN_FAN_CLUB_OPINIONS:
    //         DoTVShowPokemonFanClubOpinions();
    //         break;
    //     case TVSHOW_DUMMY:
    //         DoTVShowDummiedOut();
    //         break;
    //     case TVSHOW_MASS_OUTBREAK:
    //         DoTVShowPokemonNewsMassOutbreak();
    //         break;
    //     case TVSHOW_BRAVO_TRAINER_POKEMON_PROFILE:
    //         DoTVShowBravoTrainerPokemonProfile();
    //         break;
    //     case TVSHOW_BRAVO_TRAINER_BATTLE_TOWER_PROFILE:
    //         DoTVShowBravoTrainerBattleTower();
    //         break;
    //     case TVSHOW_POKEMON_TODAY_CAUGHT:
    //         DoTVShowPokemonTodaySuccessfulCapture();
    //         break;
    //     case TVSHOW_SMART_SHOPPER:
    //         DoTVShowTodaysSmartShopper();
    //         break;
    //     case TVSHOW_NAME_RATER_SHOW:
    //         DoTVShowTheNameRaterShow();
    //         break;
    //     case TVSHOW_CONTEST_LIVE_UPDATES:
    //         DoTVShowPokemonContestLiveUpdates();
    //         break;
    //     case TVSHOW_BATTLE_UPDATE:
    //         DoTVShowPokemonBattleUpdate();
    //         break;
    //     case TVSHOW_3_CHEERS_FOR_POKEBLOCKS:
    //         DoTVShow3CheersForPokeblocks();
    //         break;
    //     case TVSHOW_POKEMON_TODAY_FAILED:
    //         DoTVShowPokemonTodayFailedCapture();
    //         break;
    //     case TVSHOW_FISHING_ADVICE:
    //         DoTVShowPokemonAngler();
    //         break;
    //     case TVSHOW_WORLD_OF_MASTERS:
    //         DoTVShowTheWorldOfMasters();
    //         break;
    //     case TVSHOW_TODAYS_RIVAL_TRAINER:
    //         DoTVShowTodaysRivalTrainer();
    //         break;
    //     case TVSHOW_TREND_WATCHER:
    //         DoTVShowDewfordTrendWatcherNetwork();
    //         break;
    //     case TVSHOW_TREASURE_INVESTIGATORS:
    //         DoTVShowHoennTreasureInvestigators();
    //         break;
    //     case TVSHOW_FIND_THAT_GAMER:
    //         DoTVShowFindThatGamer();
    //         break;
    //     case TVSHOW_BREAKING_NEWS:
    //         DoTVShowBreakingNewsTV();
    //         break;
    //     case TVSHOW_SECRET_BASE_VISIT:
    //         DoTVShowSecretBaseVisit();
    //         break;
    //     case TVSHOW_LOTTO_WINNER:
    //         DoTVShowPokemonLotteryWinnerFlashReport();
    //         break;
    //     case TVSHOW_BATTLE_SEMINAR:
    //         DoTVShowThePokemonBattleSeminar();
    //         break;
    //     case TVSHOW_FAN_CLUB_SPECIAL:
    //         DoTVShowTrainerFanClubSpecial();
    //         break;
    //     case TVSHOW_TRAINER_FAN_CLUB:
    //         DoTVShowTrainerFanClub();
    //         break;
    //     case TVSHOW_CUTIES:
    //         DoTVShowSpotTheCuties();
    //         break;
    //     case TVSHOW_FRONTIER:
    //         DoTVShowPokemonNewsBattleFrontier();
    //         break;
    //     case TVSHOW_NUMBER_ONE:
    //         DoTVShowWhatsNo1InHoennToday();
    //         break;
    //     case TVSHOW_SECRET_BASE_SECRETS:
    //         DoTVShowSecretBaseSecrets();
    //         break;
    //     case TVSHOW_SAFARI_FAN_CLUB:
    //         DoTVShowSafariFanClub();
    //         break;
    //     case TVSHOW_LILYCOVE_CONTEST_LADY:
    //         DoTVShowLilycoveContestLady();
    //         break;
    //     }
    // }
}

void DoPokeNews(void)
{
    // u8 i = FindAnyPokeNewsOnTheAir();
    // if (i == 0xFF)
    // {
    //     gSpecialVar_Result = FALSE;
    // }
    // else
    // {
    //     if (gSaveBlock1Ptr->pokeNews[i].dayCountdown == 0)
    //     {
    //         // News event is occurring, make comment depending on how much time is left
    //         gSaveBlock1Ptr->pokeNews[i].state = POKENEWS_STATE_ACTIVE;
    //         if (gLocalTime.hours < 20)
    //             ShowFieldMessage(sPokeNewsTextGroup_Ongoing[gSaveBlock1Ptr->pokeNews[i].kind]);
    //         else
    //             ShowFieldMessage(sPokeNewsTextGroup_Ending[gSaveBlock1Ptr->pokeNews[i].kind]);
    //     }
    //     else
    //     {
    //         // News event is upcoming, make comment about countdown to event
    //         u16 dayCountdown = gSaveBlock1Ptr->pokeNews[i].dayCountdown;
    //         ConvertIntToDecimalStringN(gStringVar1, dayCountdown, STR_CONV_MODE_LEFT_ALIGN, 1);

    //         // Mark as inactive so the countdown TV airing doesn't repeat
    //         // Will be flagged as "upcoming" again by UpdatePokeNewsCountdown
    //         gSaveBlock1Ptr->pokeNews[i].state = POKENEWS_STATE_INACTIVE;
    //         ShowFieldMessage(sPokeNewsTextGroup_Upcoming[gSaveBlock1Ptr->pokeNews[i].kind]);
    //     }
    //     gSpecialVar_Result = TRUE;
    // }
}

u8 GetRandomActiveShowIdx(void)
{
    // u8 i;
    // u8 j;
    // u8 selIdx;
    // TVShow *show;

    // // Include all normal TV shows, and up through any present Record Mix shows
    // for (i = NUM_NORMAL_TVSHOW_SLOTS; i < LAST_TVSHOW_IDX; i++)
    // {
    //     if (gSaveBlock1Ptr->tvShows[i].common.kind == TVSHOW_OFF_AIR)
    //         break;
    // }
    // j = Random() % i;
    // selIdx = j;
    // do
    // {
    //     if (GetTVGroupByShowId(gSaveBlock1Ptr->tvShows[j].common.kind) != TVGROUP_OUTBREAK)
    //     {
    //         if (gSaveBlock1Ptr->tvShows[j].common.active == TRUE)
    //             return j;
    //     }
    //     else
    //     {
    //         show = &gSaveBlock1Ptr->tvShows[j];
    //         if (show->massOutbreak.daysLeft == 0 && show->massOutbreak.active == TRUE)
    //             return j;
    //     }

    //     if (j == 0)
    //         j = ARRAY_COUNT(gSaveBlock1Ptr->tvShows) - 2;
    //     else
    //         j--;

    // } while (j != selIdx);
    return 0xFF;
}

// gSpecialVar_0x8004 here is set from GetRandomActiveShowIdx in EventScript_TryDoTVShow
u8 GetSelectedTVShow(void)
{
    // return gSaveBlock1Ptr->tvShows[gSpecialVar_0x8004].common.kind;
    return 0;
}

void InterviewBefore(void)
{
    // gSpecialVar_Result = FALSE;
    // switch (gSpecialVar_0x8005)
    // {
    // case TVSHOW_FAN_CLUB_LETTER:
    //     InterviewBefore_FanClubLetter();
    //     break;
    // case TVSHOW_RECENT_HAPPENINGS:
    //     InterviewBefore_RecentHappenings();
    //     break;
    // case TVSHOW_PKMN_FAN_CLUB_OPINIONS:
    //     InterviewBefore_PkmnFanClubOpinions();
    //     break;
    // case TVSHOW_DUMMY:
    //     InterviewBefore_Dummy();
    //     break;
    // case TVSHOW_NAME_RATER_SHOW:
    //     InterviewBefore_NameRater();
    //     break;
    // case TVSHOW_BRAVO_TRAINER_POKEMON_PROFILE:
    //     InterviewBefore_BravoTrainerPkmnProfile();
    //     break;
    // case TVSHOW_BRAVO_TRAINER_BATTLE_TOWER_PROFILE:
    //     InterviewBefore_BravoTrainerBTProfile();
    //     break;
    // case TVSHOW_CONTEST_LIVE_UPDATES:
    //     InterviewBefore_ContestLiveUpdates();
    //     break;
    // case TVSHOW_3_CHEERS_FOR_POKEBLOCKS:
    //     InterviewBefore_3CheersForPokeblocks();
    //     break;
    // case TVSHOW_FAN_CLUB_SPECIAL:
    //     InterviewBefore_FanClubSpecial();
    //     break;
    // }
}

void InterviewAfter(void)
{
    // switch (gSpecialVar_0x8005)
    // {
    // case TVSHOW_FAN_CLUB_LETTER:
    //     InterviewAfter_FanClubLetter();
    //     break;
    // case TVSHOW_RECENT_HAPPENINGS:
    //     InterviewAfter_RecentHappenings();
    //     break;
    // case TVSHOW_PKMN_FAN_CLUB_OPINIONS:
    //     InterviewAfter_PkmnFanClubOpinions();
    //     break;
    // case TVSHOW_DUMMY:
    //     break;
    // case TVSHOW_BRAVO_TRAINER_POKEMON_PROFILE:
    //     InterviewAfter_BravoTrainerPokemonProfile();
    //     break;
    // case TVSHOW_BRAVO_TRAINER_BATTLE_TOWER_PROFILE:
    //     InterviewAfter_BravoTrainerBattleTowerProfile();
    //     break;
    // case TVSHOW_CONTEST_LIVE_UPDATES:
    //     InterviewAfter_ContestLiveUpdates();
    //     break;
    // }
}

static bool8 IsPartyMonNicknamedOrNotEnglish(u8 monIdx)
{
    struct Pokemon *pokemon;
    u8 language;

    pokemon = &gPlayerParty[monIdx];
    GetMonData(pokemon, MON_DATA_NICKNAME, gStringVar1);
    language = GetMonData(pokemon, MON_DATA_LANGUAGE, &language);
    if (language == GAME_LANGUAGE && !StringCompare(GetSpeciesName(GetMonData(pokemon, MON_DATA_SPECIES, NULL)), gStringVar1))
        return FALSE;

    return TRUE;
}

bool8 IsLeadMonNicknamedOrNotEnglish(void)
{
    return IsPartyMonNicknamedOrNotEnglish(GetLeadMonIndex());
}

void SetContestCategoryStringVarForInterview(void)
{
    // TVShow *show = &gSaveBlock1Ptr->tvShows[gSpecialVar_0x8004];
    // CopyContestCategoryToStringVar(1, show->bravoTrainer.contestCategory);
}

u8 GetNextActiveShowIfMassOutbreak(void)
{
    // TVShow *tvShow;

    // tvShow = &gSaveBlock1Ptr->tvShows[gSpecialVar_0x8004];
    // if (tvShow->common.kind == TVSHOW_MASS_OUTBREAK && gSaveBlock1Ptr->outbreakPokemonSpecies != SPECIES_NONE)
    //     return FindFirstActiveTVShowThatIsNotAMassOutbreak();

    return gSpecialVar_0x8004;
}

// Unused script special
bool8 IsTVShowAlreadyInQueue(void)
{
    // u8 i;

    // for (i = 0; i < NUM_NORMAL_TVSHOW_SLOTS; i++)
    // {
    //     if (gSaveBlock1Ptr->tvShows[i].common.kind == gSpecialVar_0x8004)
    //         return TRUE;
    // }
    return FALSE;
}

u8 CheckForPlayersHouseNews(void)
{
    // Check if not in Littleroot house map group
    // if (gSaveBlock1Ptr->location.mapGroup != MAP_GROUP(MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F))
    //     return PLAYERS_HOUSE_TV_NONE;

    // // Check if not in player's house (dependent on gender)
    // if (gSaveBlock2Ptr->playerGender == MALE)
    // {
    //     if (gSaveBlock1Ptr->location.mapNum != MAP_NUM(MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F))
    //         return PLAYERS_HOUSE_TV_NONE;
    // }
    // else
    // {
    //     if (gSaveBlock1Ptr->location.mapNum != MAP_NUM(MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F))
    //         return PLAYERS_HOUSE_TV_NONE;
    // }

    // if (FlagGet(FLAG_SYS_TV_LATIAS_LATIOS) == TRUE)
    //     return PLAYERS_HOUSE_TV_LATI;

    // if (FlagGet(FLAG_SYS_TV_HOME) == TRUE)
    //     return PLAYERS_HOUSE_TV_MOVIE;

    // return PLAYERS_HOUSE_TV_LATI;
    return 0;
}

void GetMomOrDadStringForTVMessage(void)
{
    // // If the player is checking the TV in their house it will only refer to their Mom.
    // if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F))
    // {
    //     if (gSaveBlock2Ptr->playerGender == MALE)
    //     {
    //         if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F))
    //         {
    //             StringCopy(gStringVar1, gText_Mom);
    //             VarSet(VAR_TEMP_3, 1);
    //         }
    //     }
    //     else
    //     {
    //         if (gSaveBlock1Ptr->location.mapNum == MAP_NUM(MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F))
    //         {
    //             StringCopy(gStringVar1, gText_Mom);
    //             VarSet(VAR_TEMP_3, 1);
    //         }
    //     }
    // }
    // if (VarGet(VAR_TEMP_3) == 1)
    // {
    //     StringCopy(gStringVar1, gText_Mom);
    // }
    // else if (VarGet(VAR_TEMP_3) == 2)
    // {
    //     StringCopy(gStringVar1, gText_Dad);
    // }
    // else if (VarGet(VAR_TEMP_3) > 2)
    // {
    //     // Should only happen if VAR_TEMP_3 is already in use by something else.
    //     if (VarGet(VAR_TEMP_3) % 2 == 0)
    //         StringCopy(gStringVar1, gText_Mom);
    //     else
    //         StringCopy(gStringVar1, gText_Dad);
    // }
    // else
    // {
    //     // Randomly choose whether to refer to Mom or Dad.
    //     // NOTE: Because of this, any map that has a TV in it shouldn't rely on VAR_TEMP_3.
    //     //       If its value is 0, checking the TV will set it to 1 or 2.
    //     if (Random() % 2 != 0)
    //     {
    //         StringCopy(gStringVar1, gText_Mom);
    //         VarSet(VAR_TEMP_3, 1);
    //     }
    //     else
    //     {
    //         StringCopy(gStringVar1, gText_Dad);
    //         VarSet(VAR_TEMP_3, 2);
    //     }
    // }
}

void ResetTVShowState(void)
{
    // sTVShowState = 0;
}
