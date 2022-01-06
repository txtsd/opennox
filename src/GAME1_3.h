#ifndef NOX_PORT_GAME1_3
#define NOX_PORT_GAME1_3

#include "defs.h"

int map_download_loop(int first);
void nox_client_xxx_switchChatMap_43B510();
void sub_43B670();
int sub_43B6D0();
unsigned short* sub_43BC10(wchar_t* a1, unsigned char a2);
int nox_sprintAddrPort_43BC80(const char* addr, unsigned short port, char* dst);
int sub_43BD90(int a1);
int sub_43BDB0();
void nox_game_decStateInd_43BDC0();
void nox_game_addStateCode_43BDD0(int a1);
int nox_game_getStateCode_43BE10();
int sub_43BE30();
void sub_43BE40(int a1);
int sub_43BE50_get_video_mode_id();
wchar_t* get_video_mode_string(int v1);
nox_video_mode* sub_43BE80_video_mode_by_id(int a1);
void nox_xxx_gameGetScreenBoundaries_43BEB0_get_video_mode(int* w, int* h, int* d);
void nox_xxx_gameResizeScreen_43BEF0_set_video_mode(int w, int h, int d);
int nox_xxx_video_43BF10_upd_video_mode(int defaults);
int nox_xxx_cliWaitForJoinData_43BFE0();
int nox_xxx_gameStateWait_43C020();
int sub_43C060();
int nox_game_switchStates_43C0A0();
void nox_game_checkStateSwitch_43C1E0();
void nox_game_checkStateOptions_43C220();
void nox_game_checkStateWol_43C260();
void nox_game_checkStateMenu_43C2F0();
void nox_gui_doAnimation_43C380();
nox_gui_animation* nox_gui_getAnimationHead_43C500();
int sub_43C510(int a1);
nox_gui_animation* nox_gui_findAnimationForDest_43C520(int a1);
nox_gui_animation* nox_gui_newAnimation_43C540();
void nox_gui_freeAnimation_43C570(nox_gui_animation* p);
nox_gui_animation* nox_gui_makeAnimation_43C5B0(nox_window* win, int x1, int y1, int x2, int y2, int in_dx, int in_dy,
												int out_dx, int out_dy);
int sub_43C650();
int sub_43C6E0();
int nox_client_isConnected_43C700();
int sub_43C710();
int nox_xxx_gameSetCliConnected_43C720(int a1);
int nox_xxx_netGet_43C750();
int sub_43C760();
int sub_43C790();
int sub_43C7A0(int a1);
int nox_xxx_netAddNetStruct4Host_43C7B0(char* cp, int hostshort, int a3, signed int* a4);
int nox_xxx_netHandleCliPacket_43C860(int a1, unsigned char* a2, int a3, void* a4);
int nox_xxx_clientSendInput_43C8F0(int a1, int a2, int a3);
int nox_xxx_netSendClientReady_43C9F0();
int nox_xxx_netKeepAliveSocket_43CA20();
int nox_xxx_netRequestMap_43CA50();
int nox_xxx_netMapReceived_43CA80();
int nox_xxx_cliSendCancelMap_43CAB0();
int nox_xxx_netSendIncomingClient_43CB00();
int nox_xxx_cliSendOutgoingClient_43CB50();
int sub_43CBB0();
int sub_43CC60(int a1);
int sub_43CC80();
void sub_43CCA0();
void sub_43CEB0();
int sub_43CF40();
int sub_43CF70();
int nox_xxx_servNetInitialPacketsCheck_43CFD0();
int nox_xxx_servNetInitialPacketsUntilCRC_43CFF0();
void sub_43D2D0();
void sub_43D3C0(int a1, int a2);
void sub_43D440();
void sub_43D650();
void sub_43D680();
void sub_43D6A0();
int nox_xxx_musicStartPlay_43D6C0(int* a1);
int sub_43D8E0();
void sub_43D970();
void sub_43D990();
void sub_43D9B0(int a1, int a2);
void sub_43D9E0(int4* a1);
int sub_43DA80();
void sub_43DAD0();
void sub_43DB10();
int sub_43DB20();
int sub_43DB30(int a1);
char* sub_43DB40(int a1);
int sub_43DB60();
void sub_43DBA0();
int sub_43DBD0();
int sub_43DBE0();
void sub_43DC00();
int sub_43DC10();
int sub_43DC30();
int sub_43DC40();
int sub_43DC80();
void sub_43DCC0();
int sub_43DD10(int* a1);
void sub_43DD70(int a1, int a2);
void sub_43DDA0();
void nox_xxx_setContinueMenuOrHost_43DDD0(int v);
void nox_xxx_setFrameLimit_43DDE0(int a1);
int nox_return_1_43DE10();
#ifdef NOX_CGO
void nox_game_SetCliDrawFunc(void* a1);
int sub_43DE40(void* a1);
#else  // NOX_CGO
void nox_game_SetCliDrawFunc(int (*fnc)(void));
int sub_43DE40(int (*a1)(void));
#endif // NOX_CGO
void nox_game_exit_xxx_43DE60();
uint32_t* nox_xxx_gui_43E1A0(int a1);
int sub_43E200();
int sub_43E230();
void mainloop_43E290();
int nox_xxx_debugSub_43E8B0();
int sub_43E8C0(int a1);
void sub_43E8E0(int a1);
void sub_43E910(int a1);
int sub_43E940(void* a1);
int sub_43E9C0();
void sub_43E9D0(unsigned int a1);
void sub_43E9F0();
int sub_43EA20(void* a1);
int sub_43EA90(int a1, int a2);
int sub_43EAD0(int a1);
int sub_43EC10();
int sub_43EC30(void* a1);
int sub_43ECB0(void* a1);
int sub_43ED00(uint32_t* a1);
int sub_43EE00(int a1);
int sub_43EFD0(int a1);
int sub_43F010(void* a1);
int sub_43F030(int a1);
int sub_43F050();
int sub_43F060(uint32_t* a1);
int sub_43F0D0();
int sub_43F0E0(uint32_t* a1);
int sub_43F130();
void sub_43F140(int a1);
int sub_43F1A0();
int nox_xxx_fontLoadMB_43F1C0();
void nox_xxx_FontDestroy_43F2E0();
int nox_xxx_guiFontHeightMB_43F320(void* a1);
int nox_xxx_Font_43F340(int* a1);
void* nox_xxx_guiFontPtrByName_43F360(char* a1);
void* nox_xxx_FontLoadFile_43F3B0(char* a1);
int sub_43F620(void* lpMem);
void nox_draw_enableTextSmoothing_43F670(int a1);
int nox_draw_setBold_43F680(int a1);
int sub_43F690(int a1, int a2, int a3, int a4);
int nox_xxx_drawString_43F6E0(void* a1, wchar_t* a2, int a3, int a4);
int nox_draw_drawStringHL_43F730(void* a1, wchar_t* a2, int a3, int a4);
int nox_xxx_drawStringStyle_43F7B0(void* a1, wchar_t* a2, int a3, int a4);
int nox_xxx_drawGetStringSize_43F840(void* a1, wchar_t* a2, int* a3, int* a4, int a5);
int nox_draw_getFontAdvance_43F9E0(void* a1, wchar_t* a2, int a3);
int nox_xxx_bookGetStringSize_43FA80(void* a1, wchar_t* a2, int* a3, int* a4, int a5);
int nox_xxx_drawStringWrap_43FAF0(void* a1, wchar_t* str, int a3, int a4, int a5, int a6);
int nox_xxx_drawStringWrapHL_43FD00(void* a1, wchar_t* a2, int a3, int a4, int a5, int a6);
int nox_xxx_bookDrawString_43FA80_43FD80(void* a1, wchar_t* a2, int a3, int a4, int a5, int a6);
int nox_draw_setTabWidth_43FE20(int a1);
void* nox_xxx_FontGetChar_43FE30(void* font, unsigned short a2);
int nox_xxx_StringDraw_43FE90(void* font, short a2, int xLeft, int yTop);
int sub_440360(int a1, int a2, int xLeft, int yTop);
int nox_xxx_guiDrawString_4407F0(void* a1, wchar_t* a2, int a3, int a4);
void nox_xxx_Font_440840(void* lpMem);
int nox_xxx_fontLoad_440870(int a1);
short sub_4408A0(uint16_t* a1);
short sub_4408C0(uint8_t* a1);
int sub_4408E0();
void nox_client_clearScreen_440900();
int nox_xxx_netServerCmd_440950(char a1, wchar_t* a2);
void nox_xxx_netServerCmd_440950_empty();
int sub_440AC0(wchar_t* a1);
void sub_4417E0(wchar_t* a1, const char* a2);
int nox_xxx_doExecrul_4438A0(int a1);
void sub_4443B0(unsigned char a1);
wchar_t* sub_444410(int a1);
void nox_setProfiledMode_4445C0();
int nox_xxx____crtGetStringTypeA_0_444830();
int nox_client_drawInitAll_4449D0(int w, int h, int depth, int flags);
void sub_444D00();
void sub_444D30();
void sub_444D50(nox_render_data_t* a1);
void sub_444D70(nox_render_data_t* a1);
int sub_445440();
wchar_t* sub_445450();
int nox_xxx_drawMessageLines_445530();
int nox_xxx_guiChatMode_4456E0(int* a1);
int nox_xxx_guiChatShowHide_445730(int a1);
int sub_445750();
int sub_445770();
void nox_xxx_quitDialogYes_445B20();
int nox_xxx_quitDialogNo_445B30();
void sub_445BA0();
int sub_445BB0();
int nox_xxx_wndDrawQuitMenu_445BC0(uint32_t* a1);
void sub_445C00();
void sub_445C20();
uint32_t* sub_445FF0();
int sub_446030();
int sub_446050();
void sub_446060();
void sub_446070();
int sub_446090();
int sub_4460A0(int a1);
int sub_4460B0();
int nox_client_quit_4460C0();
int sub_446140();
int nox_xxx_serverIsClosing_446180();
unsigned int nox_gui_xxx_check_446360();
void sub_446380();
int nox_motd_4463E0(int a1);
void* sub_446490(int a1);
void* sub_4464D0(int a1, uint32_t* a2);
int sub_4464F0(int a1, uint32_t* a2);
void sub_446520(int a1, const void* a2, int a3);
int sub_446580(int a1);
int nox_xxx_guiMotdLoad_4465C0();
int sub_4466C0(int a1, int a2, int a3, int a4);
char* sub_4466F0(char* a1, uint8_t* a2);
uint8_t* nox_xxx_motdAddSomeTextMB_446730(uint8_t* a1);
int sub_446780();
void nox_xxx_motd_4467F0();
int sub_446940(int a1);
int sub_446950();
wchar_t* sub_4469D0(int a1);
int sub_446A90();
char* sub_446BC0(int a1);
int sub_446C10(int a1, int a2);
int sub_446C70();
int sub_446C90();
wchar_t* sub_446CC0(int a1);
void sub_446D50();
void sub_446D80(char* a1);
char* sub_446E20(char* a1, uint8_t* a2);
wchar_t* sub_446E60();
char* sub_446EB0();
char* sub_446F40(int a1);
const wchar_t* sub_4471A0(const char* a1, int a2, int a3, int a4);
const wchar_t* sub_447250(const char* a1, int a2, int a3, int a4);
int sub_447310(int a1, int a2);
void sub_447380(const char* a1, char* a2);
unsigned int sub_447410(char* a1);
int sub_4475E0();
void sub_447600();
int sub_447BD0();
int sub_447BF0(uint32_t* a1, int a2, unsigned int a3, int a4);
int sub_447C70(int a1, int a2, int a3, int a4);
int sub_447CC0(int a1, unsigned int a2, int* a3, int a4);
int sub_448140(int yTop);
int sub_448240(uint32_t* a1, uint8_t* a2);
int sub_4482D0(int a1, int a2, int a3, int a4, uint16_t* a5);
int sub_448340(int a1, unsigned int a2);
void sub_448380();
int sub_4483A0(int a1, int a2);
int sub_448450();
int sub_448490();
void sub_4484D0(wchar_t* a1, int a2, int a3);
int sub_448550(int a1);
void sub_448570(const char* a1, char a2, int a3);
int sub_448620(int a1);
int sub_448650(uint8_t* a1, wchar_t* a2);
int sub_448680(wchar_t* a1, char* a2);
int sub_448F00(uint32_t* a1, int a2, int a3, int a4);
int sub_448F60(uint32_t* a1, int a2, int a3, int a4);
int sub_448FC0(int a1, int a2);
int sub_449280();
int sub_4493D0(int a1, int a2, int* a3, int a4);
void sub_4494A0();
int nox_xxx_guiServerListLoad_449530();
int sub_449BE0(int a1, int a2, int a3, int a4);
int sub_449C30(uint32_t* a1, int a2, int a3, int a4);
int nox_xxx_windowDlgProc_449CA0(int a1, int a2, int* a3, int a4);
int sub_449E00(int a1);
int sub_449E30(int a1);
int sub_449E60(char a1);
void sub_449EA0(int a1);
int sub_44A0B0(int a1);
int sub_44A200(int a1);
int sub_44A340(int a1, int a2);
void sub_44A360(int a1);
void sub_44A400();
int sub_44A4A0();
int sub_44A4B0();
int sub_44A4D0(int a1);
int sub_44A4E0();
char* sub_44A520(int a1);
int sub_44AA40();
int sub_44AA70();
int sub_44AAC0();
int sub_44AAD0(uint32_t* a1, int a2, int a3, int a4);
int sub_44AB30(int a1, unsigned int a2, int* a3, int a4);
int sub_44AF70();
uint32_t* sub_44AFB0(int a1, int a2, int a3);
void nox_xxx____setargv_4_44B000();
int sub_44B0F0(int a1, int a2, int* a3, int a4);
int sub_44B940(uint32_t* a1, int a2, nox_memfile* f);
int nox_xxx_parse_Armor_44BA60(const char* a1);
int sub_44BAC0(const char* a1);
int sub_44BB20(const char* a1);

int nox_xxx_setGameState_43DDF0(int (*a1)(void));
void sub_446AD0(int (*fnc)(void));
uint32_t* nox_xxx_dialogMsgBoxCreate_449A10(nox_window* win, wchar_t* a2, wchar_t* text, int a4, void (*a5)(void),
											void (*a6)(void));

#endif // NOX_PORT_GAME1_3
