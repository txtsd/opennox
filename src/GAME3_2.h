#ifndef NOX_PORT_GAME3_2
#define NOX_PORT_GAME3_2

#include "defs.h"

int nox_xxx_updDrawDBall_4CDF80(int a1, int a2);
int sub_4CE0A0(int a1, int a2);
int nox_xxx_updDrawCloud_4CE1D0(int a1, int a2);
int sub_4CE340(int a1, int a2);
int sub_4CE360(int a1, int a2);
int nox_xxx_updDrawColorlight_4CE390(uint32_t* a1, int a2);
void nox_xxx_colorLightAlterB0ArrayColor_4CE440(int a1);
void nox_xxx_colorLightAlterIntensity_4CE610(int a1);
int nox_xxx_colorLightAlterRadius_4CE760(int a1);
void sub_4CE8C0(int a1);
void sub_4CE960(int a1);
int sub_4CEBA0(int a1, char* a2);
void* sub_4CED40(char* a1);
int sub_4CEED0(int a1, int a2);
int sub_4CF060(int a1, unsigned int a2, int* a3, int a4);
int nox_xxx_mapValidateMB_4CF470(char* a1, int a2);
void nox_xxx_mapFindCrown_4CFC30();
int sub_4CFDF0(int a1);
int sub_4CFE00();
int nox_common_checkMapFile_4CFE10(char* a1);
int nox_mapToGameFlags_4CFF50(int a1);
int nox_xxx_mapGetTypeMB_4CFFA0(void* a1);
int sub_4CFFC0(int a1);
int sub_4CFFE0(int a1);
int nox_xxx_interesting_xfer_4D0010(uint32_t* a1, int a2);
int sub_4D0550(char* a1);
int sub_4D0670(char* a1);
void nox_common_maplist_free_4D0970();
nox_map_list_item* nox_common_maplist_first_4D09B0();
nox_map_list_item* nox_common_maplist_next_4D09C0(nox_map_list_item* list);
FILE* nox_xxx_loadMapCycle_4D0A30();
int sub_4D0C70(int a1);
int sub_4D0C80(char* a1);
void sub_4D0CC0(char* a1);
int sub_4D0D50(int a1);
int sub_4D0D70();
int sub_4D0D90(int a1);
void sub_4D0DA0();
int sub_4D0DC0(int a1, int a2);
int sub_4D0DE0(int a1);
int nox_xxx_mapSelectFirst_4D0E00();
void sub_4D0F30();
char* nox_xxx_getQuestMapFile_4D0F60();
void sub_4D11A0();
void sub_4D11D0();
void sub_4D1210(int a1);
int* sub_4D1250(int a1);
int sub_4D12A0(int a1);
void nox_xxx_mapSwitchLevel_4D12E0(int a1);
void sub_4D15C0();
int nox_xxx_scavengerTreasureMax_4D1600();
void sub_4D1610();
int nox_xxx_servResetPlayers_4D23C0();
void nox_xxx_mapLoad_4D2450(char* a1);
char* nox_xxx_netReportAllLatency_4D3050();
int sub_4D39F0(const char* a3);
void nox_xxx_tileInitdataClear_4D3C50(const void* a1);
unsigned char* sub_4D3C70();
uint32_t* sub_4D3C80(uint32_t* a1);
int nox_xxx_mapGenFixCoords_4D3D90(float2* a1, float2* a2);
int sub_4D3E30(float2* a1, float2* a2);
int sub_4D3FF0(int a1);
unsigned int sub_4D42E0(const char* a1);
char* nox_xxx_getRandMapName_4D4310();
int nox_xxx_mapGenStart_4D4320();
int nox_xxx_mapGenStep_4D44E0();
float* nox_xxx_mapgen_Doors_4D4790();
float* nox_xxx_mapGenMkSmallRoom_4D4F40(uint32_t* a1);
void sub_4D52F0();
int sub_4D5350(uint32_t* a1, int a2, int a3, int a4, int a5);
int nox_xxx_mapGenFillRoom_4D53B0(int a1, int a2, int a3, int a4, int a5);
int sub_4D5630(int a1, int a2, int a3, int a4, int a5);
int sub_4D5D20(uint32_t* a1);
unsigned int nox_xxx_mapGenMakeInfo_4D5DB0(int a1);
int nox_xxx_mapGenStartAlt_4D5F30();
int sub_4D6000(nox_object_t* a1);
int sub_4D60B0();
uint32_t* sub_4D60E0(int a1);
int sub_4D6130(int a1);
int sub_4D6170(int a1);
void sub_4D61B0(int a1);
int sub_4D61F0(int a1);
unsigned int sub_4D6540(int a1);
int sub_4D66E0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int sub_4D6770(int a1);
int sub_4D6880(int a1, int a2);
char* sub_4D6940();
char* sub_4D6950();
int nox_game_sendQuestStage_4D6960(int a1);
int sub_4D6A20(int a1, int a2);
int sub_4D6F30();
int nox_xxx_isQuest_4D6F50();
int nox_xxx_setQuest_4D6F60(int a1);
int sub_4D6F70();
int sub_4D6F80(int a1);
int sub_4D6FA0();
char* sub_4D70B0();
int nox_xxx_bookCreatureTest_4D70C0(int a1);
int sub_4D7100(int a1);
int sub_4D7150();
int sub_4D71E0(int a1);
unsigned int sub_4D71F0();
int sub_4D7280(int a1, char a2);
int sub_4D72B0(int a1);
int sub_4D72C0();
int sub_4D72D0(int a1);
int sub_4D7300();
int sub_4D7310();
void sub_4D7390(int a1);
int sub_4D7430();
int sub_4D7440(int a1);
int sub_4D7450(int a1, short a2);
void sub_4D7480(nox_object_t* a1);
int nox_server_questNextStageThreshold_4D74F0(int lvl);
char sub_4D7520(int a1);
int sub_4D75E0();
int sub_4D75F0(int a1);
void nox_server_checkWarpGate_4D7600();
int sub_4D76E0(int a1);
int sub_4D76F0();
int sub_4D79A0(char a1);
int sub_4D79C0(nox_object_t* a1);
int sub_4D7A60(int a1);
int sub_4D7A80();
int sub_4D7B40();
int sub_4D7B60(int a1);
int nox_xxx_netSendInterestingId_4D7BE0(int a1);
int sub_4D7C60();
int sub_4D7CC0();
int sub_4D7E50(nox_object_t* a1);
int sub_4D7EA0();
int nox_xxx_netCreatureCmd_4D7EE0(int player, char orderType);
int nox_xxx_netNotifyRate_4D7F10(int a1);
int nox_xxx_netReportObjectPoison_4D7F40(int a1, uint32_t* a2, char a3);
void nox_xxx_netAbilRepotState_4D8100(nox_object_t* a1, char a2, char a3);
void sub_4D81A0(int a1);
int nox_xxx_netReportAnimFrame_4D81F0(int a1, uint32_t* a2);
int nox_xxx_netReportXStatus_4D8230(int a1, uint32_t* a2);
int nox_xxx_netReportPlrStatus_4D8270(int a1);
int nox_xxx_netReportCharges_4D82B0(int a1, nox_object_t* item, char a3, char a4);
uint32_t* sub_4D82F0(int a1, uint32_t* a2);
int nox_xxx_netReportDequip_4D84C0(int a1, const nox_object_t* object);
uint32_t* nox_xxx_netReportEquip_4D8540(int a1, uint32_t* a2, int a3);
int nox_xxx_netReportDequip_4D8590(int a1, const nox_object_t* object);
int nox_xxx_netReportTotalHealth_4D85C0(int a1, uint32_t* a2);
int nox_xxx_netReportUnitCurrentHP_4D8620(int a1, uint32_t* a2);
int nox_xxx_netSendTeam_4D8670(int a1, uint32_t* a2);
char* nox_xxx_netSendPlrHealthToTeam_4D86E0(int a1);
short nox_xxx_netReportHealthDelta_4D8760(int a1, short a2, short a3);
int nox_xxx_itemReportHealth_4D87A0(int a1, nox_object_t* item);
int nox_xxx_netReportStamina_4D8800(int a1, int a2);
int sub_4D8840(int a1, int a2);
int sub_4D8870(int a1, int a2);
int nox_xxx_netReportTotalMana_4D88C0(int a1, int a2);
int nox_xxx_netReportMana_4D8930(int a1, int a2);
char nox_xxx_servSendStats_4D8990(int a1, int a2, char a3);
int nox_xxx_netReportArmorVal_4D8A30(int a1, int a2);
int nox_xxx_netReportPickup_4D8A60(int a1, nox_object_t* item);
int nox_xxx_netReportModifiablePickup_4D8AD0(int a1, nox_object_t* item);
int nox_xxx_netReportDrop_4D8B50(int a1, const nox_object_t* object);
int nox_xxx_netSendDMWinner_4D8B90(int a1, char a2);
int nox_xxx_netSendDMTeamWinner_4D8BF0(int a1, char a2);
int nox_xxx_netFlagballWinner_4D8C40(int a1);
int nox_xxx_netFlagWinner_4D8C40_4D8C80(int a1, char a2);
int nox_xxx_scavengerHuntReport_4D8CD0(int a1);
void nox_xxx_playerIncrementElimDeath_4D8D40(int a1);
int nox_xxx_changeScore_4D8E90(int a1, int a2);
int nox_xxx_playerSubLessons_4D8EC0(int a1, int a2);
int nox_xxx_netReportLesson_4D8EF0(nox_object_t* a1p);
int nox_xxx_netTimerStatus_4D8F50(int a1, int a2);
int nox_xxx_netReportEnchant_4D8F90(int a1, uint32_t* a2);
void nox_xxx_netReportObjHidden_4D8FD0(int a1, uint32_t* a2);
int nox_xxx_netReportUnitHeight_4D9020(int a1, int a2);
int sub_4D90E0(int a1, char a2);
int nox_xxx_earthquakeSend_4D9110(float* a1, int a2);
int nox_xxx_netReportAcquireCreature_4D91A0(int a1, int a2);
int nox_xxx_netFxShield_0_4D9200(int a1, int a2);
int nox_xxx_netMonitorCreature_4D9250(int a1, int a2);
int nox_xxx_netSendUnMonitorCrea_4D92A0(int a1, uint32_t* a2);
int nox_xxx_netReportTeamBase_4D92D0(int a1, int a2);
int nox_xxx_netReportStatsSpeed_4D9360(int a1, uint32_t* a2, char a3, int a4);
uint32_t* nox_xxx_netSendReportNPC_4D93A0(int a1, int a2);
int nox_xxx_netSendJournalAdd_4D9440(int a1, int a2);
int nox_xxx_netSendJournalRemove_4D94A0(int a1, const char* a2);
int nox_xxx_netSendJournalUpdate_4D9500(int a1, int a2);
int nox_xxx_netSendChapterEnd_4D9560(int a1, char a2, int a3);
int nox_xxx_netSendFlagStatus_4D95A0(int a1, char a2, char a3, char a4, short a5);
int nox_xxx_netSendBallStatus_4D95F0(int a1, char a2, short a3);
int nox_xxx_netReportSpellStat_4D9630(int a1, int a2, char a3);
int nox_xxx_netSendSecondaryWeapon_4D9670(int a1, uint32_t* a2, char a3);
int nox_xxx_netMsgLastQuiver_4D96B0(int a1, uint32_t* a2);
int nox_xxx_netMsgInventoryLoaded_4D96E0(int a1);
int nox_xxx_netFriendAddRemove_4D97A0(int a1, uint32_t* a2, int a3);
int sub_4D97E0(int a1);
int nox_xxx_netMsgFadeBeginPlayer(int pl, int a1, int a2);
void nox_xxx_playerReportAnything_4D9900(int a1);
int nox_xxx_netStatsMultiplier_4D9C20(nox_object_t* a1);
int sub_4D9CF0(int a1);
int sub_4D9D20(int a1, nox_object_t* a2);
int sub_4D9D60(int a1, int a2);
int sub_4D9DF0(int a1, int a2, char a3);
int sub_4D9E30(int a1, int a2, char a3);
int nox_xxx_netGauntlet_4D9E70(int a1);
int nox_xxx_netSendLineMessage_4D9EB0(int a1, wchar_t* a2, ...);
int nox_xxx_printToAll_4D9FD0(char a1, wchar_t* a2, ...);
int nox_xxx_netInformTextMsg_4DA0F0(int a1, int a2, int* a3);
int nox_xxx_netInformTextMsg2_4DA180(int a1, uint8_t* a2);
void nox_xxx_netPriMsgToPlayer_4DA2C0(nox_object_t* a1, const char* a2, char a3);
int nox_xxx_netPrintLineToAll_4DA390(const char* a1);
nox_object_t* nox_get_and_zero_server_objects_4DA3C0(void);
void nox_set_server_objects_4DA3E0(nox_object_t* p);
int nox_server_strcmpWithoutMapname_4DA3F0(const char* a1, const char* a2);
nox_object_t* nox_xxx_getObjectByScrName_4DA4F0(char* a1);
int sub_4DA5C0(int a1, const char* a2);
int sub_4DA660(int a1, const char* a2);
nox_object_t* nox_server_getFirstObject_4DA790();
nox_object_t* nox_server_getNextObject_4DA7A0(nox_object_t* obj);
nox_object_t* nox_xxx_getFirstPlayerUnit_4DA7C0();
nox_object_t* nox_xxx_getNextPlayerUnit_4DA7F0(const nox_object_t* obj);
nox_object_t* nox_xxx_getFirstUpdatable2Object_4DA840();
nox_object_t* nox_xxx_getNextUpdatable2Object_4DA850(nox_object_t* obj);
nox_object_t* nox_server_getFirstObjectUninited_4DA870();
nox_object_t* nox_server_getNextObjectUninited_4DA880(nox_object_t* obj);
nox_object_t* nox_xxx_getFirstUpdatableObject_4DA8A0();
nox_object_t* nox_xxx_getNextUpdatableObject_4DA8B0(nox_object_t* obj);
void nox_xxx_unitAddToUpdatable_4DA8D0(nox_object_t* obj);
void nox_xxx_unitRemoveFromUpdatable_4DA920(nox_object_t* a1);
uint32_t* nox_xxx_unitNewAddShadow_4DA9A0(nox_object_t* a1);
uint32_t* nox_xxx_action_4DA9F0(nox_object_t* a1);
void nox_xxx_createAt_4DAA50(nox_object_t* obj, nox_object_t* owner, float a3, float a4);
void nox_xxx_unitsNewAddToList_4DAC00();
void nox_xxx_servFinalizeDelObject_4DADE0(nox_object_t* item);
void nox_xxx_unitClearPendingMB_4DB030();
unsigned int sub_4DB130(const char* a1);
void sub_4DB170(int a1, void* a2, int a3);
int nox_xxx_gameGet_4DB1B0();
void* sub_4DB1C0();
void nox_xxx_gameSetSwitchSolo_4DB220(int a1);
int nox_xxx_gameIsSwitchToSolo_4DB240();
int nox_xxx_gameIsNotMultiplayer_4DB250();
void nox_savegame_rm_4DBE10(char* saveName, int rmDir);
int nox_client_countSaveFiles_4DC550();
int nox_client_countPlayerFiles02_4DC630();
int nox_client_countPlayerFiles04_4DC7D0();
int sub_4DCC10(nox_object_t* a1p);
int nox_xxx_mapLoadOrSaveMB_4DCC70(int a1);
int sub_4DCC90();
int nox_xxx_game_4DCCB0();
void sub_4DCFB0(nox_object_t* a1);
void sub_4DD0B0(nox_object_t* a1);
void* nox_xxx_playerSendMOTD_4DD140(int a1);
char* nox_xxx_gameServerReadyMB_4DD180(int a1);
int nox_xxx_playerNew_4DD320(int ind, unsigned char* data);
int nox_xxx_netGuiGameSettings_4DD9B0(char a1, const void* a2, int a3);
void nox_xxx_netNewPlayerMakePacket_4DDA90(unsigned char* buf, nox_playerInfo* pl);
void nox_xxx_servSendSettings_4DDB40(nox_object_t* punit);
void nox_xxx_netSendBySock_4DDDC0(int a1);
uint32_t* sub_4DDE10(int a1, int a2);
void nox_xxx_playerObserveMonster_4DDE80(nox_object_t* player, nox_object_t* unit);
void nox_xxx_playerObserveClear_4DDEF0(nox_object_t* player);
nox_object_t* nox_xxx_playerGetPossess_4DDF30(nox_object_t* a1);
int nox_xxx_netPlayerIncomingServ_4DDF60(int a1);
int nox_xxx_sendAllPlayerIDs_4DE270(int a1);
char* nox_xxx_newPlayerSendAllPlayers_4DE300(int a1);
int nox_xxx_servMinimapRevealFlag_4DE380(int a1);
uint32_t* sub_4DE410(int a1);
int sub_4DE4D0(char a1);
char nox_xxx_playerDisconnFinish_4DE530(int a1, char a2);
void sub_4DE790(int a1);
void nox_xxx_playerForceDisconnect_4DE7C0(int a1);
char* nox_xxx_playerCallDisconnect_4DEAB0(int a1, char a2);
void nox_xxx_playerDisconnByPlrID_4DEB00(int a1);
int nox_xxx_netGameSettings_4DEF00();
char* sub_4DF020();
int nox_xxx_wallSendDestroyed_4DF0A0(int a1, int a2);
int sub_4DF120(int a1);
int sub_4DF180(int a1);
int nox_xxx_wall_4DF1E0(int a1);
int* sub_4DF2A0(char a1);
void sub_4DF2E0(int a1);
int nox_xxx_netSendSimpleObject2_4DF360(int a1, int a2);
void sub_4DF3C0(nox_playerInfo* pl);
void* sub_4DF5E0(int a1, int a2);
int nox_xxx_netFn_UpdateStream_4DF630(int a1, char* a2, unsigned int a3, void* a4);
int nox_xxx_chkIsMsgTimestamp_4DF7F0(uint8_t* a1);
int sub_4DF810(char* a1, int a2, int a3);
int sub_4DF8C0(uint8_t* a1, int a2);
uint8_t* sub_4DF8F0(int a1, uint8_t* a2, int a3);
int sub_4DF9B0(int a1, int a2, int a3, int a4);
signed int sub_4DFAF0(void* a1, int a2, const void* a3, signed int a4);
uint32_t* sub_4DFB50(int a1, int a2);
uint32_t* sub_4DFB80(int a1, int a2);
int nox_xxx_enchantItemTestInventory_4DFBB0(int a1, char a2);
void nox_xxx_effectSpeedEngage_4DFC30(int a1, int a2);
void nox_xxx_effectSpeedDisengage_4DFCA0(int a1, int a2);
uint32_t* sub_4DFD10(int a1, int a2);
void nox_xxx_modifFireProtection_4DFD40(int a1, int a2, int a3);
uint32_t* nox_xxx_buff_4DFD80(int a1, int a2);
uint32_t* sub_4DFDB0(int a1, int a2);
uint32_t* nox_xxx_checkPoisonProtectEnch_4DFDE0(int a1, int a2);
uint32_t* sub_4DFE10(int a1, int a2);
double nox_xxx_checkFireProtect_4DFE40(uint32_t* a1);
double nox_xxx_checkElectrProtect_4DFF40(uint32_t* a1);
double nox_xxx_getPoisonDmg_4E0040(uint32_t* a1);
uint32_t* sub_4E0140(int a1, int a2);
void sub_4E0170(int a1, int a2);
void nox_xxx_effectRegeneration_4E01D0(int a1, int a2);
void nox_xxx_attribContinualReplen_4E02C0(int a1, uint32_t* a2);
float* sub_4E0370(int a1, int a2, int a3, int a4, int a5, float* a6);
float* sub_4E0380(int a1, int a2, int a3, int a4, int a5, float* a6);
int nox_xxx_inversionEffect_4E03D0(int a1, int a2, int a3, int a4, int a5, int* a6);
int nox_xxx_gripEffect_4E0480(int a1, int a2, int a3, int a4, int a5, int* a6);
float* nox_xxx_effectDamageMultiplier_4E04C0(int a1, int a2, int a3, int a4, float* a5);
void nox_xxx_stunEffect_4E04D0(int a1, int a2, int a3, int a4);
uint32_t* nox_xxx_fireEffect_4E0550(int a1, int a2, int a3, int a4);
int nox_xxx_fireRingEffect_4E05B0(int a1, int a2, int a3);
int nox_xxx_blueFREffect_4E05F0(int a1, int a2, int a3);
void nox_xxx_recoilEffect_4E0640(int a1, int a2, int a3, int a4);
void nox_xxx_confuseEffect_4E0670(int a1, int a2, int a3, int a4);
void nox_xxx_lightngEffect_4E06F0(int a1, int a2, int a3, int a4);
void nox_xxx_drainMEffect_4E0740(int a1, int a2, int a3, int a4, int* a5);
void nox_xxx_vampirismEffect_4E07C0(int a1, int a2, int a3, int a4, int* a5);
void nox_xxx_poisonEffect_4E0850(int a1, int a2, int a3, int a4);
void nox_xxx_sympathyEffect_4E08E0(int a1, int a2, int a3, int a4, int* a5);
int nox_xxx_itemCheckReadinessEffect_4E0960(int a1);
int nox_xxx_effectProjectileSpeed_4E09B0(int a1, int a2, int a3, int a4, int a5);
int nox_xxx_parseDamageTypeByName_4E0A00(const char* a1);
int nox_xxx_projectileReflect_4E0A70(int a1, int a2);
int nox_xxx_damageDefaultProc_4E0B30(int a1, int a2, int a3, int a4, int a5);
void nox_xxx_gameballOnPlayerDamage_4E1230(int a1, int a2, int a3);
int nox_xxx_itemApplyDefendEffect2_4E1320(int a1, int a2, int a3, int* a4, int a5);
int nox_xxx_itemApplyPreDamageEffect_4E13B0(int a1, int a2, int a3, int a4);
int sub_4E1400(int a1, uint32_t* a2);
int sub_4E1470(int a1);
int sub_4E14A0();
int sub_4E14B0(int a1, int a2, int a3, int a4, int a5);
int nox_xxx_damageArmor_4E1500(int a1, int a2, int a3, int a4, int a5);
void nox_xxx_playerDamageWeapon_4E1560(int a1, int a2, int a3, int a4, float a5, int a6);
int nox_xxx_itemDestroyed_4E1650(int a1, uint32_t* a2, unsigned short a3, unsigned short a4);
void nox_xxx_equipDamage_4E16D0(int a1, int a2, int a3, int a4, float a5, int a6);

#endif // NOX_PORT_GAME3_2
