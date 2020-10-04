// must be before any includes
#define NOX_IN_MEMMAP
#include "memmap.h"

#include "client/drawable/drawdb.h"
#include "static.h"
#include "proto.h"

extern unsigned __int8 byte_581450[23472];
extern unsigned __int8 byte_5D4594[3844309];
extern unsigned __int8 byte_587000[316820];

extern nox_engine_flag nox_common_engineFlags;
extern int nox_enable_audio;
extern int nox_enable_threads;
extern int nox_video_dxFullScreen;
extern int nox_video_windowsPlatformVersion;
extern int nox_video_pauseThreadedDrawCursor;
extern int nox_video_drawCursorThreadOk;
extern int nox_video_allowCursorDrawThread;
extern int nox_video_cursorDrawIsThreaded;
extern int nox_client_mouseCursorType;
extern int nox_video_gammaValue;
extern HANDLE* nox_video_cursorDrawThreadHandle;

extern nox_server_netCodeCacheStruct nox_server_netCodeCache;

extern nox_missing_string* missing_strings;
extern nox_string_entry* string_entries;
extern size_t string_entries_cnt;

extern wchar_t file_buffer_w[4096 * 2];
extern char file_buffer[4096];

extern FILE* nox_file_1;
extern FILE* nox_file_2;
extern FILE* nox_file_3;
extern FILE* nox_file_4;
extern FILE* nox_file_5;
extern FILE* nox_video_bag_fileptr;
extern FILE* nox_file_7;
extern FILE* nox_file_8;
extern FILE* nox_file_9;
extern FILE* nox_file_10;
extern int nox_file_10_mode;
extern FILE* nox_file_log;
extern FILE* nox_file_net_log;

extern nox_memfile* nox_loaded_thing_bin;

extern int nox_win_width;
extern int nox_win_height;

extern int nox_win_width_1;
extern int nox_win_height_1;
extern int nox_win_depth_1;

extern int nox_win_width_2;
extern int nox_win_height_2;
extern int nox_win_depth_2;

extern int nox_max_width;
extern int nox_max_height;

extern void* nox_backbuffer1_pix;
extern void* nox_backbuffer_pix;
extern int nox_backbuffer_width;
extern int nox_backbuffer_height;
extern int nox_backbuffer_depth;
extern int nox_backbuffer_width32;
extern int nox_video_renderTargetFlags;
extern int nox_video_dxUnlockSurface;
extern int nox_video_dxFullScreen;

extern nox_alloc_class* nox_alloc_window;

extern nox_window* nox_win_unk1;
extern nox_window* nox_win_unk2;
extern nox_window* nox_win_unk3;
extern nox_window* nox_win_unk4;
extern nox_window* nox_win_unk5;

extern nox_window_yyy nox_windows_arr_1093036[7];

extern int nox_cheats_disabled;

extern nox_window* nox_win_main_menu;
extern nox_window* nox_win_main_bg;

extern int (*nox_draw_unk1)(void);

extern nox_video_mode nox_video_modes[];

extern const char* table_5184[];
extern table_26792_t table_26792[];
extern table_27008_t table_27008[];
extern table_27104_t table_27104[];
extern table_27168_t table_27168[];
extern table_28760_t table_28760[];
extern nox_parse_thing_draw_funcs_t nox_parse_thing_draw_funcs[];

// unresolved

extern obj_5D4594_3799572_t* ptr_5D4594_3799572;
extern obj_5D4594_3799572_t obj_5D4594_3799660;
extern obj_5D4594_3799572_t obj_5D4594_3800716;

extern _DWORD* dword_5D4594_251544;
extern obj_412ae0_t* byte_5D4594_251584[3];
extern int byte_5D4594_251596;

extern obj_5D4594_754088_t* ptr_5D4594_754088;
extern int ptr_5D4594_754088_cnt;

extern obj_5D4594_754088_t* ptr_5D4594_754092;
extern int ptr_5D4594_754092_cnt;

extern int obj_5D4594_754104_switch;

extern obj_5D4594_2650668_t** ptr_5D4594_2650668;

extern nox_mouse_state_t nox_input_buffer[256];
extern int nox_processing_input;

extern nox_mouse_state_t nox_mouse;
extern nox_mouse_state_t nox_mouse_prev;
extern _DWORD nox_mouse_prev_seq;
extern _DWORD nox_mouse_prev_seq_2;
extern mouse_pos_t nox_mouse_min;
extern mouse_pos_t nox_mouse_max;
extern mouse_pos_t nox_mouse_prev_left;
extern mouse_pos_t nox_mouse_prev_right;
extern mouse_pos_t nox_mouse_prev_middle;

extern nox_thing* nox_things_head;
extern nox_thing** nox_things_array;
extern int nox_things_count;

extern nox_alloc_class* nox_alloc_drawable;
extern nox_drawable* nox_drawable_head_unk1;
extern nox_drawable* nox_drawable_head_unk2;
extern nox_drawable* nox_drawable_head_unk3;
extern nox_drawable* nox_drawable_head_unk4;
extern int nox_drawable_count;

extern nox_drawable** nox_drawable_list_1;
extern int nox_drawable_list_1_size;

extern nox_drawable** nox_drawable_list_2;
extern int nox_drawable_list_2_size;

extern nox_drawable** nox_drawable_list_3;
extern int nox_drawable_list_3_size;

extern nox_drawable** nox_drawable_list_4;
extern int nox_drawable_list_4_size;

extern nox_drawable*** nox_drawable_2d_index;
extern int nox_drawable_2d_index_size;
extern BYTE** nox_pixbuffer_rows_3798784;
extern _DWORD dword_5d4594_1599636;
extern _DWORD dword_5d4594_3799540;
extern _DWORD dword_5d4594_4668;
extern _DWORD dword_5d4594_1046492;
extern void* dword_587000_133480;
extern _DWORD dword_5d4594_830224;
extern _DWORD dword_5d4594_814980;
extern _DWORD dword_5d4594_3804664;
extern _DWORD dword_5d4594_1045516;
extern _DWORD dword_5d4594_3804656;
extern _DWORD dword_5d4594_3804672;
extern _DWORD dword_5d4594_1045684;
extern _DWORD dword_5d4594_1307784;
extern _DWORD dword_5d4594_3798844;
extern _DWORD dword_5d4594_2650652;
extern _DWORD dword_5d4594_1217448;
extern _DWORD dword_5d4594_1320940;
extern _DWORD dword_5d4594_815004;
extern _DWORD dword_5d4594_815012;
extern _DWORD dword_5d4594_1062480;
extern _DWORD dword_5d4594_832484;
extern _DWORD dword_5d4594_3798796;
extern _DWORD dword_5d4594_825760;
extern _DWORD nox_client_renderGUI_80828;
extern _DWORD dword_5d4594_810632;
extern _DWORD dword_5d4594_787148;
extern _DWORD dword_5d4594_2386944;
extern _DWORD dword_5d4594_1064916;
extern _DWORD dword_5d4594_3801780;
extern _DWORD dword_5d4594_2516348;
extern void (*func_5d4594_3799536)(void);
extern _DWORD dword_5d4594_1063116;
extern _DWORD dword_5d4594_1090120;
extern _DWORD dword_5d4594_2516328;
extern _DWORD dword_5d4594_1189584;
extern _DWORD dword_5d4594_1049504;
extern _DWORD dword_5d4594_1046868;
extern _DWORD dword_5d4594_1082856;
extern _DWORD dword_5d4594_1193380;
extern _DWORD dword_587000_26048;
extern _DWORD dword_5d4594_3799624;
extern _DWORD dword_5d4594_1316972;
extern _DWORD dword_5d4594_1123524;
extern _DWORD dword_5d4594_1064192;
extern _DWORD dword_5d4594_1045604;
extern _DWORD dword_5d4594_2386176;
extern _DWORD dword_587000_197424;
extern _DWORD dword_5d4594_1064816;
extern _DWORD dword_5d4594_529316;
extern _DWORD dword_5d4594_1309820;
extern _DWORD dword_5d4594_1062508;
extern _DWORD dword_5d4594_1049864;
extern _DWORD dword_5d4594_829480;
extern _DWORD dword_5d4594_1062512;
extern _DWORD dword_5d4594_1217464;
extern _DWORD dword_5d4594_830248;
extern _DWORD dword_5d4594_1599656;
extern _DWORD dword_5d4594_1049500;
extern _DWORD dword_5d4594_3798840;
extern _DWORD dword_5d4594_1309812;
extern _DWORD dword_5d4594_754036;
extern void* dword_587000_155144;
extern _DWORD dword_5d4594_741676;
extern _DWORD dword_5d4594_1047516;
extern _DWORD dword_5d4594_1308084;
extern _DWORD dword_5d4594_815000;
extern _DWORD dword_5d4594_3798824;
extern _DWORD dword_5d4594_1307780;
extern _DWORD dword_5d4594_3798820;
extern _DWORD dword_5d4594_1193516;
extern _DWORD dword_5d4594_1090048;
extern _DWORD dword_5d4594_816364;
extern _DWORD dword_5d4594_1049508;
extern _DWORD dword_5d4594_1049796;
extern _DWORD dword_5d4594_829492;
extern _DWORD dword_5d4594_1098576;
extern _DWORD dword_5d4594_1321040;
extern _DWORD dword_5d4594_2487236;
extern void (*func_5d4594_3799432)(void);
extern _DWORD dword_5d4594_830124;
extern _DWORD dword_587000_87412;
extern _DWORD dword_5d4594_1548476;
extern _DWORD dword_5d4594_2660652;
extern _DWORD dword_5d4594_1045636;
extern _DWORD dword_587000_87404;
extern _DWORD dword_5d4594_3798804;
extern _DWORD dword_5d4594_832476;
extern _DWORD dword_5d4594_1570272;
extern _DWORD dword_5d4594_1305684;
extern _DWORD dword_5d4594_2386940;
extern _DWORD dword_5d4594_2523752;
extern _DWORD dword_5d4594_815132;
extern _DWORD dword_5d4594_1321228;
extern _DWORD dword_5d4594_815048;
extern _DWORD dword_5d4594_829488;
extern _DWORD dword_5d4594_1063636;
extern _DWORD dword_587000_197428;
extern _DWORD dword_587000_60352;
extern _DWORD dword_5d4594_833716;
extern _DWORD dword_5d4594_1319228;
extern _DWORD dword_5d4594_10956;
extern _DWORD dword_5d4594_1062456;
extern _DWORD dword_5d4594_816348;
extern _DWORD dword_5d4594_2650672;
extern _DWORD dword_5d4594_3798696;
extern _DWORD dword_5d4594_2523756;
extern _DWORD dword_5d4594_1307764;
extern _DWORD dword_5d4594_1098628;
extern _DWORD dword_5d4594_529340;
extern _DWORD dword_587000_149232;
extern _DWORD dword_5d4594_1046872;
extern _DWORD dword_5d4594_1046496;
extern _DWORD dword_5d4594_830108;
extern _DWORD dword_5d4594_1523028;
extern _DWORD dword_5d4594_1316708;
extern _DWORD dword_5d4594_1064888;
extern _DWORD dword_5d4594_3798636;
extern _DWORD dword_5d4594_251572;
extern void* nox_server_objects_uninited_1556860;
extern _DWORD dword_5d4594_1303452;
extern _DWORD dword_5d4594_2386224;
extern _DWORD dword_5d4594_815016;
extern _DWORD dword_5d4594_2386152;
extern _DWORD dword_5d4594_1311144;
extern _DWORD dword_5d4594_1569728;
extern _DWORD dword_5d4594_1197312;
extern _DWORD dword_5d4594_831236;
extern _DWORD dword_5d4594_3799484;
extern _DWORD dword_5d4594_1064296;
extern _DWORD dword_5d4594_1047540;
extern _DWORD dword_5d4594_814984;
extern _DWORD dword_5d4594_1320964;
extern _DWORD dword_5d4594_2523900;
extern _DWORD dword_5d4594_1049800;
extern _DWORD dword_5d4594_251568;
extern _DWORD dword_5d4594_1309720;
extern _DWORD dword_5d4594_1569752;
extern _DWORD dword_5d4594_1321244;
extern _DWORD dword_5d4594_1046936;
extern _DWORD dword_5d4594_2487908;
extern _DWORD dword_5d4594_831088;
extern _DWORD dword_5d4594_1107036;
extern _DWORD dword_5d4594_1321248;
extern _DWORD dword_5d4594_1599640;
extern _DWORD dword_5d4594_3798836;
extern _DWORD dword_5d4594_1565512;
extern _DWORD dword_5d4594_815028;
extern _DWORD dword_5d4594_816456;
extern _DWORD dword_5d4594_1301848;
extern _DWORD dword_5d4594_829508;
extern _DWORD dword_5d4594_1316712;
extern _DWORD dword_5d4594_1313800;
extern _DWORD dword_5d4594_1321232;
extern _DWORD dword_5d4594_815024;
extern _DWORD dword_5d4594_830104;
extern _DWORD nox_client_highResFrontWalls_80820;
extern _DWORD dword_5d4594_1045528;
extern _DWORD dword_5d4594_787156;
extern _DWORD dword_5d4594_1301792;
extern _DWORD nox_client_texturedFloors_154956;
extern _DWORD dword_5d4594_1313796;
extern _DWORD dword_5d4594_1522624;
extern _DWORD dword_5d4594_815020;
extern _DWORD dword_5d4594_1305680;
extern _DWORD dword_5d4594_810640;
extern _DWORD dword_5d4594_815032;
extern _DWORD dword_5d4594_1311148;
extern _DWORD dword_5d4594_787164;
extern _DWORD dword_5d4594_816440;
extern _DWORD dword_5d4594_1301800;
extern _DWORD dword_5d4594_1193360;
extern _DWORD dword_5d4594_1522628;
extern _DWORD dword_5d4594_3679320;
extern _DWORD dword_5d4594_1049520;
extern _DWORD dword_5d4594_1309748;
extern _DWORD dword_5d4594_816432;
extern _DWORD dword_5d4594_1599540;
extern _DWORD dword_5d4594_251548;
extern void* nox_server_objects_1556844;
extern _DWORD dword_5d4594_1045464;
extern _DWORD dword_5d4594_1045484;
extern _DWORD dword_5d4594_1049856;
extern _DWORD dword_5d4594_1064856;
extern _DWORD dword_5d4594_823692;
extern _DWORD dword_5d4594_3799524;
extern _DWORD dword_5d4594_1522600;
extern _DWORD dword_587000_132132;
extern _DWORD dword_5d4594_754056;
extern _DWORD dword_5d4594_1217456;
extern _DWORD dword_5d4594_1193348;
extern _DWORD dword_5d4594_1047520;
extern _DWORD dword_5d4594_3798632;
extern _DWORD dword_5d4594_534808;
extern _DWORD dword_5d4594_1197324;
extern _DWORD dword_5d4594_3821640;
extern _DWORD dword_5d4594_1599576;
extern _DWORD dword_5d4594_3821636;
extern _DWORD dword_5d4594_1599596;
extern _DWORD dword_5d4594_1045480;
extern _DWORD dword_5d4594_3807156;
extern _DWORD dword_5d4594_816452;
extern _DWORD dword_5d4594_2487556;
extern _DWORD dword_5d4594_833712;
extern _DWORD dword_5d4594_1307776;
extern _DWORD dword_5d4594_1599588;
extern _DWORD dword_5d4594_1064912;
extern _DWORD dword_5d4594_3798640;
extern _DWORD dword_5d4594_1523024;
extern _DWORD dword_5d4594_2618912;
extern _DWORD dword_5d4594_2516344;
extern _DWORD dword_5d4594_1046508;
extern _DWORD dword_5d4594_1123532;
extern _DWORD dword_5d4594_1193384;
extern _DWORD dword_5d4594_1045536;
extern _DWORD dword_587000_166704;
extern _DWORD dword_5d4594_1319256;
extern _DWORD dword_5d4594_251540;
extern _DWORD dword_5d4594_371692;
extern _DWORD dword_5d4594_3798832;
extern _DWORD dword_5d4594_1197320;
extern _DWORD dword_5d4594_3799492;
extern void* nox_alloc_pixelSpan_1301844;
extern _DWORD dword_5d4594_3798808;
extern _DWORD dword_5d4594_1062524;
extern _DWORD dword_5d4594_3835396;
extern _DWORD dword_5d4594_1062528;
extern _DWORD dword_5d4594_2388648;
extern _DWORD nox_client_highResFloors_154952;
extern _DWORD dword_5d4594_1312480;
extern _DWORD dword_5d4594_1522604;
extern _DWORD dword_5d4594_1096640;
extern _DWORD dword_5d4594_3798816;
extern _DWORD dword_5d4594_1045532;
extern _DWORD dword_5d4594_528256;
extern _DWORD dword_5d4594_1568024;
extern _DWORD dword_5d4594_1599564;
extern _DWORD dword_5d4594_1308088;
extern _DWORD dword_5d4594_3801804;
extern _DWORD dword_5d4594_816492;
extern _DWORD dword_5d4594_826028;
extern _DWORD dword_5d4594_2487524;
extern _DWORD dword_5d4594_1189592;
extern _DWORD dword_5d4594_1522612;
extern _DWORD dword_5d4594_814624;
extern _DWORD dword_5d4594_1599660;
extern _DWORD dword_5d4594_829484;
extern _DWORD dword_5d4594_3821964;
extern _DWORD dword_5d4594_1096516;
extern _DWORD dword_5d4594_833720;
extern _DWORD dword_5d4594_1045468;
extern _DWORD dword_5d4594_2487904;
extern void* dword_587000_127004;
extern void* nox_alloc_visitNode_2386184;
extern _DWORD dword_5d4594_815088;
extern _DWORD dword_5d4594_2495920;
extern _DWORD dword_5d4594_1046924;
extern _DWORD dword_5d4594_1312484;
extern _DWORD dword_5d4594_1189596;
extern _DWORD dword_5d4594_3798156;
extern _DWORD dword_587000_60356;
extern _DWORD dword_5d4594_3624;
extern _DWORD dword_5d4594_1217460;
extern _DWORD dword_5d4594_1307716;
extern _DWORD dword_587000_93156;
extern _DWORD dword_5d4594_830140;
extern _DWORD dword_5d4594_2523780;
extern _DWORD dword_5d4594_2650676;
extern _DWORD dword_5d4594_1321252;
extern _DWORD dword_5d4594_1522632;
extern _DWORD dword_5d4594_531648;
extern _DWORD dword_5d4594_787208;
extern _DWORD dword_5d4594_1045432;
extern _DWORD dword_5d4594_815044;
extern _DWORD dword_5d4594_831232;
extern _DWORD dword_5d4594_787152;
extern _DWORD dword_5d4594_816488;
extern _DWORD dword_5d4594_2487712;
extern void* nox_alloc_tradeItems_2386496;
extern _DWORD dword_5d4594_529328;
extern _DWORD dword_5d4594_2386180;
extern _DWORD dword_5d4594_3843628;
extern _DWORD dword_5d4594_2386212;
extern _DWORD dword_5d4594_3798720;
extern _DWORD dword_5d4594_1319060;
extern _DWORD dword_5d4594_1047548;
extern _DWORD dword_5d4594_816340;
extern _DWORD dword_5d4594_1049512;
extern _DWORD dword_5d4594_1311140;
extern void (*func_5d4594_3799544)(void);
extern _DWORD dword_587000_264364;
extern _DWORD dword_5d4594_1047932;
extern _DWORD dword_5d4594_2523912;
extern _DWORD dword_5d4594_816368;
extern _DWORD dword_5d4594_1062476;
extern _DWORD dword_5d4594_1090276;
extern _DWORD dword_5d4594_830116;
extern _DWORD dword_5d4594_1049496;
extern void* dword_587000_93164;
extern _DWORD dword_5d4594_1098624;
extern _DWORD dword_5d4594_1569672;
extern _DWORD dword_5d4594_3632;
extern _DWORD dword_5d4594_1321240;
extern _DWORD dword_5d4594_1197316;
extern _DWORD dword_5d4594_1599624;
extern _DWORD dword_5d4594_2386576;
extern _DWORD dword_5d4594_830148;
extern _DWORD dword_5d4594_1569756;
extern _DWORD dword_5d4594_1320968;
extern _DWORD dword_5d4594_2488604;
extern _QWORD qword_581450_9544;
extern _QWORD qword_581450_9568;
extern _QWORD qword_5d4594_1567940;
extern _QWORD qword_581450_10256;
extern _QWORD qword_581450_10392;
extern _QWORD qword_581450_9552;
extern _QWORD qword_581450_9512;
extern _QWORD qword_5d4594_815068;
extern _QWORD qword_5d4594_814956;
extern _QWORD qword_581450_10176;
extern _QWORD qword_5d4594_815724;
extern _DWORD dword_5d4594_1316408;
extern _DWORD dword_5d4594_1522620;
extern _DWORD dword_5d4594_2488660;
extern _DWORD dword_587000_292492;
extern _DWORD nox_client_translucentFrontWalls_805844;
extern _DWORD dword_5d4594_251608;
extern _DWORD dword_5d4594_1309732;
extern _DWORD dword_5d4594_251600;
extern _DWORD dword_5d4594_1321204;
extern _DWORD dword_5d4594_1599632;
extern _DWORD dword_5d4594_2386500;
extern _DWORD dword_5d4594_2649712;
extern _DWORD dword_5d4594_1307204;
extern _DWORD dword_5d4594_741284;
extern _DWORD dword_587000_312820;
extern _DWORD dword_5d4594_1046532;
extern _DWORD dword_5d4594_3798828;
extern _DWORD dword_5d4594_1309728;
extern _DWORD dword_5d4594_1312460;
extern _DWORD dword_5d4594_1309836;
extern _DWORD dword_5d4594_1320992;
extern _DWORD dword_5d4594_1599476;
extern _DWORD dword_5d4594_1321236;
extern _DWORD dword_5d4594_1047552;
extern _DWORD dword_587000_60044;
extern _DWORD dword_5d4594_251560;
extern _DWORD dword_5d4594_2513920;
extern _DWORD dword_5d4594_3484;
extern void* nox_alloc_screenParticles_806044;
extern _DWORD dword_5d4594_528252;
extern _DWORD dword_5d4594_754040;
extern _DWORD dword_5d4594_1309828;
extern nox_wnd_xxx* nox_wnd_xxx_1307308;
extern void* dword_587000_122852;
extern _DWORD dword_5d4594_1301776;
extern _DWORD dword_5d4594_1301836;
extern _DWORD dword_5d4594_251564;
extern _DWORD dword_587000_184452;
extern _DWORD dword_5d4594_1301832;
extern int nox_pitch_3801808;
extern _DWORD dword_5d4594_1550916;
extern _DWORD dword_5d4594_2487540;
extern void* dword_587000_81128;
extern _DWORD nox_client_drawFrontWalls_80812;
extern _DWORD dword_5d4594_2386572;
extern _DWORD dword_5d4594_251700;
extern _DWORD dword_5d4594_1193584;
extern _DWORD dword_5d4594_1599532;
extern _DWORD dword_5d4594_3798800;
extern _DWORD dword_5d4594_1522892;
extern _DWORD dword_5d4594_1307744;
extern _DWORD dword_5d4594_3798812;
extern _DWORD dword_5d4594_251552;
extern _DWORD dword_5d4594_1046952;
extern _DWORD dword_5d4594_832536;
extern _DWORD dword_5d4594_4808;
extern _DWORD dword_5d4594_3799508;
extern _DWORD dword_587000_87408;
extern _DWORD dword_5d4594_839888;
extern nox_screenParticle* nox_screenParticles_head;
extern _DWORD dword_5d4594_3844304;
extern _DWORD dword_5d4594_814988;
extern _DWORD dword_5d4594_816460;
extern _DWORD dword_5d4594_805836;
extern _DWORD dword_5d4594_2487560;
extern _DWORD dword_5d4594_251556;
extern _DWORD dword_587000_312804;
extern _DWORD dword_5d4594_251504;
extern _DWORD dword_5d4594_1599480;
extern _DWORD dword_5d4594_1062516;
extern _DWORD dword_5d4594_1301828;
extern _DWORD dword_5d4594_1599548;
extern _DWORD dword_5d4594_1316492;
extern _DWORD dword_5d4594_2491616;
extern _DWORD dword_5d4594_251744;
extern _DWORD dword_5d4594_815708;
extern _DWORD dword_587000_312816;
extern _DWORD dword_5d4594_3821968;
extern _DWORD dword_587000_312800;
extern _DWORD dword_5d4594_251508;
extern _DWORD dword_5d4594_1313792;
extern _DWORD dword_5d4594_810636;
extern _DWORD dword_5d4594_529324;
extern _DWORD dword_5d4594_1569664;
extern _DWORD dword_5d4594_3804668;
extern _DWORD dword_5d4594_2487248;
extern _DWORD dword_5d4594_1046516;
extern _DWORD dword_5d4594_1307768;
extern _DWORD dword_5d4594_2487984;
extern _DWORD dword_5d4594_1309780;
extern _DWORD dword_587000_311480;
extern _DWORD nox_client_lockHighResFloors_1193152;
extern _DWORD dword_587000_312784;
extern _DWORD dword_5d4594_1563660;
extern _DWORD dword_5d4594_1599692;
extern _DWORD dword_5d4594_2487532;
extern _DWORD dword_5d4594_1309716;
extern _DWORD dword_5d4594_1064900;
extern _DWORD dword_5d4594_805984;
extern nox_wnd_xxx* nox_wnd_xxx_815040;
extern _DWORD nox_server_connectionType_3596;
extern _DWORD dword_5d4594_1522616;
extern _DWORD nox_client_fadeObjects_80836;
extern nox_wnd_xxx* nox_wnd_xxx_815212;
extern _DWORD dword_5d4594_2386924;
extern _DWORD dword_5d4594_830872;
extern _DWORD dword_5d4594_1096508;
extern void* nox_wnd_xxx_1309740;
extern _DWORD dword_5d4594_1312472;
extern _DWORD dword_5d4594_1200804;
extern _DWORD dword_5d4594_1049484;
extern _DWORD dword_5d4594_1599712;
extern _DWORD dword_587000_312788;
extern _DWORD nox_client_translucentConsole_80824;
extern _DWORD dword_5d4594_1321216;
extern _DWORD dword_5d4594_787172;
extern _DWORD dword_5d4594_2386160;
extern _DWORD dword_5d4594_1193712;
extern _DWORD dword_587000_173332;
extern _DWORD dword_5d4594_1319232;
extern _DWORD dword_5d4594_1046656;
extern _DWORD dword_5d4594_3798716;
extern _DWORD dword_5d4594_3620;
extern _DWORD dword_5d4594_832532;
extern _DWORD dword_5d4594_2650680;
extern _DWORD dword_5d4594_588120;
extern _DWORD nox_client_renderGlow_805852;
extern _DWORD dword_5d4594_1047512;
extern _DWORD dword_5d4594_588084;
extern _DWORD dword_5d4594_2487848;
extern _DWORD dword_5d4594_1321044;
extern _DWORD dword_5d4594_816372;
extern _DWORD dword_5d4594_832492;
extern _DWORD dword_5d4594_1046504;
extern _DWORD dword_5d4594_1045508;
extern _DWORD dword_5d4594_825744;
extern void(__cdecl *func_587000_154940)(int2*, _DWORD, _DWORD);
extern _DWORD dword_5d4594_1217452;
extern _DWORD dword_5d4594_1193704;
extern _DWORD dword_5d4594_1319264;
extern _DWORD dword_5d4594_829504;
extern _DWORD dword_5d4594_251496;
extern _DWORD dword_5d4594_2487852;
extern _DWORD dword_5d4594_1046928;
extern _DWORD dword_5d4594_830264;
extern _DWORD dword_5d4594_1098580;
extern _DWORD dword_5d4594_831224;
extern _DWORD dword_5d4594_2487880;
extern _DWORD dword_5d4594_1522932;
extern _DWORD dword_5d4594_1309708;
extern BYTE* nox_pixbuffer_3798780;
extern _DWORD dword_5d4594_3804680;
extern _DWORD dword_5d4594_832504;
extern _DWORD dword_5d4594_830276;
extern _DWORD dword_5d4594_1203864;
extern _DWORD dword_5d4594_832508;
extern _DWORD dword_5d4594_1090100;
extern _DWORD dword_5d4594_3835356;
extern _DWORD nox_client_renderBubbles_80844;
extern _DWORD dword_5d4594_814996;
extern _DWORD dword_5d4594_1049532;
extern _DWORD dword_5d4594_1096512;
extern void* nox_alloc_chat_1197364;
extern _DWORD dword_5d4594_1046520;
extern _DWORD dword_5d4594_829512;
extern _DWORD dword_5d4594_832516;
extern _DWORD dword_587000_132136;
extern nox_screenParticle* dword_5d4594_806052;
extern _DWORD dword_5d4594_832496;
extern _DWORD dword_5d4594_832512;
extern void* nox_alloc_monsterListen_2386188;
extern _DWORD dword_5d4594_832524;
extern _DWORD dword_5d4594_1309776;
extern _DWORD dword_5d4594_811104;
extern void* nox_alloc_itemGroupElem_2523896;
extern _DWORD dword_5d4594_1599556;
extern _DWORD dword_5d4594_1599592;
extern _DWORD dword_5d4594_2487980;
extern _DWORD dword_5d4594_823776;
extern _DWORD dword_5d4594_1045688;
extern _DWORD dword_5d4594_3798648;
extern _DWORD dword_5d4594_832528;
extern _DWORD dword_5d4594_832500;
extern _DWORD dword_5d4594_832520;
extern _DWORD dword_5d4594_829516;
extern _DWORD dword_5d4594_787212;
extern _DWORD dword_5d4594_1307736;
extern _DWORD dword_5d4594_1046636;
extern _DWORD dword_5d4594_1046500;
extern _DWORD dword_5d4594_1599060;
extern _DWORD dword_5d4594_1189600;
extern _DWORD dword_5d4594_1193184;
extern _DWORD dword_587000_136184;
extern _DWORD dword_5d4594_1098592;
extern _DWORD dword_5d4594_2487552;
extern _DWORD dword_5d4594_1321032;
extern _DWORD dword_5d4594_251720;
extern _DWORD dword_5d4594_1301840;
extern nox_wnd_xxx* nox_wnd_xxx_1307748;
extern _DWORD dword_5d4594_1320932;
extern _DWORD dword_5d4594_1197332;
extern _DWORD dword_5d4594_1319056;
extern _DWORD dword_5d4594_1047528;
extern _DWORD dword_587000_202404;
extern _DWORD dword_5d4594_830864;
extern _DWORD dword_5d4594_1096500;
extern _DWORD dword_5d4594_608316;
extern _DWORD dword_5d4594_1064824;
extern _DWORD dword_5d4594_823700;
extern _DWORD dword_5d4594_3807160;
extern _DWORD dword_5d4594_1312476;
extern BYTE** nox_pixbuffer_rows_3798776;
extern _DWORD dword_5d4594_1046948;
extern _DWORD dword_5d4594_1046528;
extern _DWORD dword_5d4594_741364;
extern _DWORD dword_5d4594_1309784;
extern _DWORD dword_5d4594_1046932;
extern _DWORD dword_5d4594_1321224;
extern _DWORD dword_5d4594_588068;
extern _DWORD dword_587000_122848;
extern _DWORD dword_5d4594_1045460;
extern _DWORD dword_5d4594_831220;
extern _DWORD dword_5d4594_2513916;
extern _DWORD dword_587000_173328;
extern nox_wnd_xxx* nox_wnd_xxx_830244;
extern _DWORD dword_5d4594_3799556;
extern _DWORD dword_5d4594_741292;
extern _DWORD dword_5d4594_2523744;
extern _DWORD dword_5d4594_1203840;
extern _DWORD dword_5d4594_826032;
extern _DWORD dword_5d4594_2487708;
extern _DWORD dword_587000_154948;
extern _DWORD dword_5d4594_1548700;
extern _DWORD dword_5d4594_3799468;
extern _DWORD dword_5d4594_741332;
extern _DWORD dword_5d4594_3799476;
extern _DWORD dword_5d4594_1565616;
extern _DWORD dword_5d4594_816356;
extern _DWORD dword_5d4594_1203836;
extern _DWORD dword_587000_154960;
extern _DWORD dword_5d4594_1301780;
extern _DWORD dword_5d4594_1064864;
extern _DWORD dword_5d4594_1096252;
extern void* nox_alloc_objMem_1563344;
extern _DWORD dword_5d4594_741356;
extern _DWORD dword_5d4594_1303468;
extern _DWORD dword_5d4594_2487240;
extern _DWORD dword_5d4594_1064820;
extern void* nox_alloc_debugData_2523908;
extern _DWORD dword_5d4594_1197356;
extern nox_wnd_xxx* nox_wnd_xxx_829520;
extern _DWORD dword_5d4594_2388640;
extern _DWORD dword_5d4594_1097188;
extern _DWORD dword_5d4594_1045436;
extern _DWORD dword_5d4594_1321800;
extern _DWORD dword_5d4594_527684;
extern _DWORD dword_5d4594_1197336;
extern _DWORD dword_5d4594_1197352;
extern _DWORD dword_5d4594_826036;
extern _DWORD dword_5d4594_1064860;
extern _DWORD dword_587000_173336;
extern BYTE* nox_pixbuffer_3798788;
extern _DWORD dword_587000_93196;
extern _DWORD dword_5d4594_1046536;
extern _DWORD dword_5d4594_1062468;
extern _DWORD dword_587000_80832;
extern _DWORD dword_5d4594_1523036;
extern _DWORD dword_5d4594_839884;
extern _DWORD dword_5d4594_1303472;
extern _DWORD dword_5d4594_1197328;
extern _DWORD dword_5d4594_1090044;
extern _DWORD dword_5d4594_1305748;
extern _DWORD dword_5d4594_1046624;
extern _DWORD dword_5d4594_1308164;
extern _DWORD dword_5d4594_1096496;
extern _DWORD dword_5d4594_815704;
extern _DWORD dword_5d4594_816448;
extern void* nox_alloc_respawn_1568020;
extern void* nox_monsterListen_2386192;
extern void* nox_alloc_monsterList_2386220;
extern _DWORD dword_5d4594_2487912;
extern _DWORD dword_5d4594_252276;
extern _DWORD dword_5d4594_2489432;
extern _DWORD dword_5d4594_1567928;
extern _DWORD dword_5d4594_1307720;
extern _DWORD dword_5d4594_1048144;
extern _DWORD dword_5d4594_787144;
extern void* nox_alloc_springs_2386568;
extern _DWORD dword_587000_311372;
extern _DWORD dword_5d4594_2386920;
extern _DWORD dword_5d4594_1062452;
extern _DWORD dword_5d4594_1046576;
extern _DWORD dword_5d4594_2386564;
extern _DWORD dword_5d4594_830292;
extern _DWORD dword_5d4594_1563664;
extern void* nox_alloc_magicWall_1569748;
extern _DWORD dword_5d4594_1550912;
extern _DWORD dword_5d4594_1062488;
extern _DWORD dword_5d4594_2516356;
extern _DWORD dword_5d4594_1047936;
extern _DWORD dword_5d4594_1321208;
extern _DWORD dword_5d4594_2487620;
extern nox_wnd_xxx* nox_wnd_xxx_1308092;
extern _DWORD dword_5d4594_1309824;
extern _DWORD dword_5d4594_1308160;
extern void (*func_5d4594_3799488)(void);
extern _DWORD dword_5d4594_2614264;
extern _DWORD dword_5d4594_531656;
extern void* nox_alloc_tradeSession_2386492;
extern _DWORD dword_5d4594_1096288;
extern _DWORD dword_5d4594_3835352;
extern _DWORD dword_5d4594_1046956;
extern _DWORD dword_5d4594_1307292;
extern void* nox_alloc_groupInfo_2523892;
extern _DWORD dword_587000_145664;
extern _DWORD dword_5d4594_787180;
extern _DWORD dword_5d4594_787200;
extern _DWORD dword_5d4594_1316704;
extern nox_wnd_xxx* nox_wnd_xxx_1307732;
extern _DWORD dword_5d4594_3679316;
extern _DWORD dword_5d4594_1082864;
extern _DWORD dword_587000_93200;
extern _DWORD dword_5d4594_825736;
extern _DWORD dword_5d4594_1313540;
extern _DWORD dword_5d4594_1096284;
extern _DWORD dword_5d4594_2487624;
extern _DWORD dword_5d4594_1309832;
extern _DWORD dword_5d4594_2487576;
extern _DWORD dword_5d4594_1096644;
extern _DWORD dword_5d4594_3616;
extern _DWORD dword_5d4594_1309756;
extern _DWORD dword_5d4594_831084;
extern _DWORD dword_5d4594_825768;
extern _DWORD dword_5d4594_811372;
extern _DWORD dword_587000_111668;
extern _DWORD dword_5d4594_1309736;
extern _DWORD dword_5d4594_754044;
extern _DWORD dword_5d4594_1556112;
extern _DWORD dword_5d4594_1301812;
extern void* nox_alloc_friendList_1203860;
extern _DWORD dword_5d4594_2660032;
extern _DWORD dword_5d4594_1090040;
extern _DWORD dword_5d4594_3835348;
extern _DWORD dword_5d4594_1308;
extern _DWORD dword_5d4594_1045692;
extern _DWORD dword_5d4594_1046640;
extern _DWORD dword_5d4594_371264;
extern _DWORD dword_5d4594_1096504;
extern _DWORD dword_5d4594_1320972;
extern _DWORD dword_5d4594_1309768;
extern _DWORD dword_5d4594_830132;
extern _DWORD dword_5d4594_1563092;
extern _DWORD dword_5d4594_787184;
extern _DWORD dword_5d4594_1565516;
extern _DWORD dword_5d4594_1046596;
extern _DWORD dword_5d4594_1193668;
extern _DWORD dword_5d4594_1096260;
extern _DWORD dword_5d4594_529336;
extern _DWORD dword_5d4594_1308124;
extern _DWORD dword_587000_312808;
extern _DWORD dword_5d4594_2487652;
extern _DWORD dword_5d4594_2523776;
extern _DWORD dword_5d4594_741248;
extern _DWORD dword_5d4594_741252;
extern _DWORD dword_5d4594_3835388;
extern _DWORD dword_5d4594_1046648;
extern _DWORD dword_5d4594_1599064;
extern _DWORD dword_5d4594_831276;
extern _DWORD dword_5d4594_808568;
extern _DWORD dword_587000_145540;
extern _DWORD dword_5d4594_2386156;
extern _DWORD dword_5d4594_816376;
extern _DWORD dword_5d4594_1301816;
extern _DWORD dword_5d4594_2491552;
extern _DWORD dword_5d4594_528272;
extern _DWORD dword_5d4594_1045588;
extern _DWORD dword_5d4594_1599616;
extern _DWORD dword_5d4594_1319236;
extern _DWORD dword_5d4594_811100;
extern _DWORD dword_5d4594_815056;
extern _DWORD dword_5d4594_1308128;
extern _DWORD dword_5d4594_830208;
extern _DWORD dword_5d4594_1305800;
extern _DWORD dword_5d4594_1556148;
extern void* nox_alloc_spellDur_1569724;
extern _DWORD dword_587000_312792;
extern _DWORD dword_5d4594_1090176;
extern _DWORD dword_5d4594_1568260;
extern _DWORD dword_5d4594_814552;
extern _DWORD dword_5d4594_10984;
extern _DWORD dword_587000_145668;
extern _DWORD dword_587000_312824;
extern _DWORD dword_5d4594_3798728;
extern _DWORD dword_587000_180480;
extern _DWORD dword_587000_230092;
extern _DWORD dword_5d4594_1197372;
extern _DWORD dword_5d4594_251716;
extern _DWORD dword_5d4594_251708;
extern _DWORD dword_5d4594_1193648;
extern _DWORD dword_5d4594_1063120;
extern _DWORD dword_5d4594_1046540;
extern _DWORD dword_5d4594_1062496;
extern void* nox_alloc_vote_1599652;
extern _DWORD dword_5d4594_1049804;
extern _DWORD dword_5d4594_3799552;
extern _DWORD dword_5d4594_1090112;
extern _DWORD dword_5d4594_740004;
extern _DWORD dword_5d4594_1309764;
extern void* nox_alloc_execAbil_1569644;
extern _DWORD dword_5d4594_1097208;
extern _DWORD dword_5d4594_3807140;
extern _DWORD dword_5d4594_831092;
extern _DWORD dword_5d4594_2487676;
extern _DWORD dword_5d4594_1556852;
extern _DWORD dword_5d4594_741256;
extern _DWORD dword_5d4594_1049696;
extern _DWORD dword_587000_312828;
extern _DWORD dword_5d4594_1301824;
extern _DWORD dword_5d4594_1316476;
extern _DWORD dword_587000_80800;
extern _DWORD dword_5d4594_816092;
extern _DWORD dword_5d4594_825752;
extern _DWORD dword_5d4594_2488652;
extern void* nox_alloc_spawn_2386216;
extern _DWORD dword_5d4594_2487672;
extern _DWORD mox_alloc_magicEnt_1569668;
extern _DWORD dword_5d4594_1308156;
extern _DWORD dword_587000_312812;
extern _DWORD dword_5d4594_1193156;
extern _DWORD dword_5d4594_814992;
extern _DWORD dword_587000_66116;
extern _DWORD dword_5d4594_1563052;
extern _DWORD dword_5d4594_2487564;
extern _DWORD dword_5d4594_3804684;
extern _DWORD dword_5d4594_830972;
extern _DWORD dword_5d4594_1308120;
extern _DWORD dword_5d4594_2488608;
extern _DWORD dword_5d4594_1568868;
extern _DWORD dword_5d4594_1090108;
extern _DWORD dword_5d4594_1308108;
extern _DWORD dword_5d4594_3835312;
extern _DWORD dword_5d4594_1197308;
extern _DWORD dword_5d4594_1045584;
extern _DWORD dword_5d4594_814548;
extern _DWORD dword_5d4594_1303536;
extern _DWORD dword_5d4594_1082860;
extern _DWORD dword_5d4594_3798644;
extern _DWORD dword_5d4594_1308132;
extern _DWORD dword_5d4594_2386228;
extern _DWORD dword_5d4594_1308100;
extern _DWORD nox_server_sanctuaryHelp_54276;
extern _DWORD dword_5d4594_1045424;
extern _DWORD dword_5d4594_3805484;
extern _DWORD dword_5d4594_1193524;
extern void* nox_alloc_pendingOwn_2386916;
extern _DWORD dword_5d4594_2488640;
extern _DWORD dword_5d4594_3798712;
extern _DWORD dword_5d4594_741244;
extern _DWORD dword_5d4594_1193664;
extern _DWORD dword_5d4594_830204;
extern _DWORD dword_5d4594_1313740;
extern _DWORD dword_587000_237036;
extern _DWORD dword_587000_93944;
extern _DWORD dword_5d4594_823684;
extern _DWORD dword_5d4594_1062492;
extern _DWORD dword_5d4594_1193624;
extern _DWORD dword_587000_154968;
extern _DWORD dword_5d4594_1098604;
extern _DWORD nox_server_needInitNetCodeCache;
extern _DWORD dword_5d4594_1046600;
extern _DWORD dword_5d4594_1308116;
extern _DWORD dword_5d4594_1319248;
extern _DWORD dword_587000_312796;
extern _DWORD dword_5d4594_3807136;
extern _DWORD dword_5d4594_1193672;
extern _DWORD dword_5d4594_1046944;
extern _DWORD dword_5d4594_1556848;
extern _DWORD dword_5d4594_2487584;
extern _DWORD dword_5d4594_251712;
extern _DWORD dword_5d4594_371756;
extern nox_wnd_xxx* nox_wnd_xxx_1522608;
extern _DWORD dword_5d4594_531652;
extern _DWORD dword_5d4594_2487948;
extern void* nox_alloc_healthChange_1301772;
extern _DWORD dword_5d4594_1522596;
extern _DWORD dword_5d4594_1049536;
extern _DWORD dword_5d4594_1098616;
extern _DWORD dword_5d4594_1304;
extern _DWORD dword_5d4594_3807152;
extern _DWORD dword_5d4594_830256;
extern _DWORD dword_5d4594_1049996;
extern _DWORD dword_5d4594_1305788;
extern _DWORD dword_5d4594_1098600;
extern _DWORD dword_5d4594_1563088;
extern _DWORD dword_5d4594_2523760;
extern _DWORD dword_5d4594_1064868;
extern _DWORD dword_5d4594_1565520;
extern _DWORD dword_5d4594_1320988;
extern _DWORD dword_5d4594_811072;
extern _DWORD dword_5d4594_1599696;
extern _DWORD dword_587000_261388;
extern _DWORD dword_5d4594_251704;
extern _DWORD dword_5d4594_823708;
extern _DWORD dword_5d4594_830120;
extern _DWORD dword_5d4594_1084040;
extern _DWORD dword_5d4594_1200768;
extern _DWORD dword_5d4594_1523032;
extern _DWORD dword_5d4594_831256;
extern _DWORD dword_5d4594_1316436;
extern _DWORD dword_587000_145672;
extern _DWORD dword_5d4594_1046864;
extern _DWORD dword_5d4594_1523044;
extern _DWORD dword_5d4594_1046356;
extern _DWORD dword_5d4594_3799452;
extern _DWORD dword_5d4594_2386840;
extern _DWORD dword_5d4594_833732;
extern _DWORD dword_5d4594_2513932;
extern _DWORD dword_5d4594_1096280;
extern _DWORD dword_5d4594_1316472;
extern _DWORD dword_5d4594_1569652;
extern _DWORD dword_5d4594_1062560;
extern _DWORD dword_5d4594_2491544;
extern _DWORD dword_587000_183456;
extern _DWORD dword_5d4594_1097192;
extern _DWORD dword_5d4594_740072;
extern void (*func_5d4594_830216)(void);
extern _DWORD dword_587000_249172;
extern _DWORD dword_587000_80840;
extern _DWORD dword_5d4594_2487900;
extern _DWORD dword_5d4594_1064896;
extern _DWORD dword_5d4594_2489420;
extern _DWORD dword_5d4594_1565612;
extern _DWORD dword_5d4594_1096256;
extern _DWORD dword_5d4594_1046524;
extern _DWORD dword_587000_142328;
extern _DWORD dword_5d4594_2523764;
extern _DWORD dword_5d4594_534816;
extern _DWORD dword_5d4594_1193336;
extern _DWORD dword_5d4594_2489428;
extern _DWORD dword_5d4594_2487244;
extern _DWORD dword_5d4594_1090280;
extern _DWORD dword_5d4594_1200796;
extern _DWORD dword_5d4594_1313536;
extern _DWORD dword_5d4594_1308152;
extern _DWORD dword_5d4594_1098596;
extern _DWORD dword_5d4594_1047524;
extern _DWORD dword_5d4594_1311936;
extern _DWORD dword_5d4594_1563096;
extern _DWORD dword_5d4594_1062564;
extern _DWORD dword_5d4594_1309696;
extern _DWORD dword_5d4594_1308144;
extern _DWORD dword_5d4594_829500;
extern _DWORD dword_5d4594_833728;
extern _DWORD dword_5d4594_1090140;
extern _DWORD dword_5d4594_1049524;
extern _DWORD dword_5d4594_1305720;
extern _DWORD dword_5d4594_1316484;
extern _DWORD dword_5d4594_1320936;
extern _DWORD dword_5d4594_741680;
extern _DWORD dword_5d4594_1309704;
extern _DWORD dword_5d4594_808564;
extern _DWORD dword_5d4594_1193176;
extern _DWORD dword_5d4594_1045552;
extern _DWORD dword_587000_234176;
extern _DWORD dword_5d4594_1096264;
extern _DWORD dword_5d4594_1097196;
extern _DWORD dword_5d4594_831076;
extern _DWORD dword_5d4594_1321024;
extern _DWORD dword_5d4594_1523048;
extern _DWORD dword_5d4594_1308140;
extern _DWORD dword_5d4594_1203832;
extern _DWORD dword_5d4594_831244;
extern _DWORD dword_5d4594_2516372;
extern _DWORD dword_5d4594_1548704;
extern _DWORD dword_5d4594_1565632;
extern _DWORD dword_5d4594_1045520;
extern _DWORD dword_5d4594_1319268;
extern _DWORD dword_5d4594_1321520;
extern _DWORD dword_5d4594_741260;
extern _DWORD dword_5d4594_526276;
extern _DWORD dword_5d4594_1548732;
extern _DWORD dword_5d4594_1062556;
extern _DWORD dword_5d4594_1305712;
extern _DWORD dword_5d4594_1049992;
extern _DWORD dword_587000_171388;
extern _DWORD dword_587000_142316;
extern _DWORD dword_5d4594_1082868;
extern _DWORD dword_5d4594_810628;
extern _DWORD dword_5d4594_3798708;
extern _DWORD dword_5d4594_754144;
extern _DWORD dword_5d4594_1090436;
extern _DWORD dword_5d4594_1563044;
extern _DWORD dword_5d4594_2489460;
extern _DWORD dword_5d4594_805860;
extern _DWORD dword_5d4594_816412;
extern _DWORD dword_5d4594_1308148;
extern _DWORD dword_5d4594_1062484;
extern _DWORD dword_5d4594_528260;
extern _DWORD dword_5d4594_1090284;
extern _DWORD dword_5d4594_1301796;
extern _DWORD dword_5d4594_2487932;
extern _DWORD dword_5d4594_1305700;
extern _DWORD dword_5d4594_2487628;
extern _DWORD dword_5d4594_3592;
extern _DWORD dword_5d4594_1045544;
extern _DWORD dword_5d4594_1548480;
extern _DWORD dword_587000_178216;
extern _DWORD dword_5d4594_251480;
extern _DWORD dword_5d4594_739996;
extern _DWORD dword_5d4594_1045428;
extern _DWORD dword_5d4594_2487536;
extern _DWORD dword_5d4594_2523804;
extern _DWORD dword_587000_126996;
extern _DWORD dword_5d4594_1305716;
extern _DWORD dword_5d4594_787224;
extern _DWORD dword_5d4594_2487568;
extern _DWORD dword_5d4594_1045540;
extern _DWORD dword_5d4594_2487580;
extern _DWORD dword_5d4594_1309772;
extern _DWORD dword_5d4594_829544;
extern _DWORD dword_5d4594_1556856;
extern _DWORD dword_5d4594_1046360;
extern _DWORD dword_5d4594_1049976;
extern _DWORD dword_5d4594_830260;
extern _DWORD dword_5d4594_1563080;
extern _DWORD dword_5d4594_1563084;
extern _DWORD dword_5d4594_1193188;
extern _DWORD dword_5d4594_1064828;
extern _DWORD dword_5d4594_830228;
extern _DWORD dword_5d4594_830136;
extern _DWORD dword_5d4594_1565628;
extern _DWORD dword_5d4594_816444;
extern _DWORD dword_5d4594_1548736;
extern _DWORD nox_server_sendMotd_108752;
extern _DWORD dword_5d4594_1096276;
extern _DWORD dword_5d4594_3835392;
extern _DWORD dword_5d4594_1123520;
extern _DWORD dword_5d4594_2488720;
extern _DWORD dword_5d4594_1567988;
extern _DWORD dword_5d4594_1599068;
extern _DWORD dword_5d4594_1308112;
extern _DWORD dword_5d4594_832480;
extern _DWORD dword_5d4594_1568308;
extern _DWORD dword_5d4594_830192;
extern _DWORD dword_5d4594_1548664;
extern void* dword_587000_66120;
extern _DWORD dword_5d4594_1193576;
extern _DWORD dword_587000_129656;
extern _DWORD dword_587000_151528;
extern _DWORD dword_5d4594_1091364;
extern _DWORD dword_5d4594_1193132;
extern _DWORD dword_5d4594_2386928;
extern _DWORD dword_5d4594_599496;
extern _DWORD dword_5d4594_2516380;
extern _DWORD dword_5d4594_1599644;
extern _DWORD dword_5d4594_1563276;
extern _DWORD dword_5d4594_1082916;
extern _DWORD nox_server_resetQuestMinVotes_229988;
extern _DWORD dword_5d4594_741296;
extern _DWORD dword_5d4594_1062520;
extern _DWORD dword_5d4594_831260;
extern _DWORD dword_5d4594_3679312;
extern _DWORD dword_5d4594_1049516;
extern _DWORD dword_5d4594_2487992;
extern _DWORD dword_5d4594_1090292;
extern _DWORD dword_5d4594_3798676;
extern _DWORD dword_5d4594_527660;
extern _DWORD dword_5d4594_2489160;
extern _DWORD dword_5d4594_1522968;
extern _DWORD dword_587000_201380;
extern _DWORD dword_5d4594_2490508;
extern _DWORD dword_5d4594_1316456;
extern _DWORD dword_5d4594_1045640;
extern _DWORD dword_5d4594_830112;
extern _DWORD dword_5d4594_528264;
extern _DWORD dword_5d4594_1098620;
extern _DWORD dword_5d4594_1569736;
extern _DWORD dword_5d4594_1200776;
extern _DWORD dword_5d4594_1045548;
extern _DWORD dword_5d4594_1316412;
extern _DWORD dword_5d4594_3807116;
extern _DWORD dword_5d4594_815100;
extern _DWORD dword_5d4594_1321036;
extern _DWORD dword_5d4594_1064300;
extern _DWORD dword_5d4594_3798680;
extern _DWORD dword_5d4594_1049808;
extern _DWORD dword_5d4594_1568300;
extern _DWORD dword_5d4594_1569660;
extern _DWORD dword_5d4594_2386872;
extern _DWORD dword_5d4594_2386948;
extern _DWORD dword_5d4594_1563320;
extern _DWORD dword_5d4594_1313692;
extern _DWORD dword_5d4594_3799500;
extern _DWORD dword_5d4594_3798684;
extern _DWORD dword_5d4594_823696;
extern _DWORD dword_5d4594_1599688;
extern _DWORD dword_5d4594_2386164;
extern _DWORD dword_5d4594_1307724;
extern _DWORD nox_server_kickQuestPlayerMinVotes_229992;
extern _DWORD dword_5d4594_805872;
extern _DWORD dword_5d4594_1523040;
extern _DWORD dword_5d4594_1096432;
extern _DWORD dword_5d4594_1046512;
extern _DWORD dword_587000_145548;
extern _DWORD dword_5d4594_1096272;
extern _DWORD dword_5d4594_1097216;
extern _DWORD dword_5d4594_1096636;
extern _DWORD dword_5d4594_1522956;
extern _DWORD dword_587000_183460;
extern _DWORD dword_5d4594_1599628;
extern _DWORD dword_5d4594_1303508;
extern _DWORD dword_5d4594_2523904;
extern _DWORD dword_5d4594_1568288;
extern _DWORD dword_5d4594_2491704;
extern _DWORD dword_5d4594_1320948;
extern _DWORD dword_5d4594_787192;
extern _DWORD dword_5d4594_1568280;
extern _DWORD dword_5d4594_1556144;
extern _DWORD dword_587000_60068;
extern _DWORD dword_5d4594_1050008;
extern int (*func_5d4594_1311924)(void);
extern _DWORD dword_5d4594_3835372;
extern _DWORD dword_5d4594_1556136;
extern _DWORD dword_5d4594_2386168;
extern _DWORD dword_587000_109280;
extern _DWORD dword_5d4594_251728;
extern _DWORD dword_5d4594_527656;
extern _DWORD dword_5d4594_1046548;
extern _DWORD dword_5d4594_741652;
extern _DWORD dword_5d4594_1308096;
extern _DWORD dword_5d4594_600116;
extern _DWORD dword_5d4594_805980;
extern _DWORD dword_5d4594_2496472;
extern _DWORD dword_5d4594_2618900;
extern _DWORD dword_5d4594_2487884;
extern _DWORD dword_5d4594_1313564;
extern _DWORD dword_5d4594_1568028;
extern _DWORD dword_5d4594_815052;
extern _DWORD dword_5d4594_2386860;
extern _DWORD dword_5d4594_1548524;
extern int (__cdecl *func_587000_154944)(int, int);
extern _DWORD dword_5d4594_815060;
extern _DWORD dword_5d4594_2386560;
extern _DWORD dword_5d4594_1556316;
extern _DWORD dword_5d4594_830236;
extern _DWORD dword_5d4594_741648;
extern _DWORD dword_5d4594_1556128;
extern _DWORD dword_5d4594_2386548;
extern _DWORD dword_587000_60064;
extern _DWORD dword_5d4594_3798672;
extern _DWORD dword_5d4594_2491592;
extern _DWORD dword_5d4594_1090828;
extern _DWORD dword_5d4594_815096;
extern _DWORD dword_5d4594_529332;
extern _DWORD dword_5d4594_1313816;
extern _DWORD dword_5d4594_1193352;
extern _DWORD dword_5d4594_2488724;
extern _DWORD dword_5d4594_1548532;
extern _DWORD dword_5d4594_1045580;
extern _DWORD dword_5d4594_1567956;
extern _DWORD dword_5d4594_1313532;
extern _DWORD dword_5d4594_805820;
extern _DWORD dword_5d4594_1308104;
extern _DWORD dword_5d4594_1193568;
extern _DWORD dword_5d4594_2489436;
extern _DWORD dword_5d4594_10988;
extern _DWORD dword_5d4594_1320944;
extern _DWORD dword_587000_172880;
extern _DWORD dword_5d4594_823772;
extern _DWORD dword_5d4594_527988;
extern _DWORD dword_5d4594_1097212;
extern _DWORD dword_5d4594_2491588;
extern _DWORD dword_5d4594_3612;
extern _DWORD dword_5d4594_1046604;
extern _DWORD dword_5d4594_1316448;
extern _DWORD dword_5d4594_1193180;
extern _DWORD dword_5d4594_2523888;
extern _DWORD dword_5d4594_1563064;
extern _DWORD dword_5d4594_1313880;
extern _DWORD dword_5d4594_811896;
extern _DWORD dword_5d4594_830252;
extern _DWORD dword_5d4594_2491676;
extern _DWORD dword_5d4594_830196;
extern _DWORD dword_5d4594_1308136;
extern _DWORD dword_5d4594_1569656;
extern _DWORD dword_5d4594_831240;
extern _DWORD dword_5d4594_1301808;
extern _DWORD dword_5d4594_754048;
extern _DWORD dword_5d4594_1599708;
extern _DWORD dword_5d4594_2386852;
extern _DWORD dword_587000_292488;
extern _DWORD dword_587000_185504;
extern _DWORD dword_5d4594_2513924;
extern _DWORD dword_5d4594_3843632;
extern _DWORD dword_5d4594_2487856;
extern _DWORD dword_5d4594_1090180;
extern _DWORD dword_5d4594_1321196;
extern _DWORD dword_5d4594_815748;
extern _DWORD dword_5d4594_2488644;
extern _DWORD nox_profiled_805856;
extern _DWORD dword_5d4594_754060;
extern _DWORD dword_5d4594_1045556;
extern _DWORD dword_5d4594_1045420;
extern _DWORD dword_5d4594_739392;
extern _DWORD dword_5d4594_830268;
extern _DWORD dword_5d4594_3805492;
extern _DWORD dword_5d4594_2488728;
extern _DWORD dword_5d4594_1567960;
extern _DWORD dword_5d4594_1049844;
extern _DWORD dword_5d4594_830200;
extern _DWORD dword_5d4594_3835364;
extern _DWORD dword_5d4594_1313788;
extern _DWORD dword_5d4594_1304328;
extern _DWORD dword_5d4594_1047536;
extern _DWORD dword_5d4594_2516352;
extern _DWORD dword_5d4594_1549844;
extern _DWORD dword_5d4594_1084044;
extern _DWORD dword_5d4594_1313804;
extern _DWORD dword_587000_172872;
extern _DWORD dword_587000_205200;
extern _DWORD dword_5d4594_2386172;
extern _DWORD dword_5d4594_1046652;
extern _DWORD dword_5d4594_2487632;
extern _DWORD dword_5d4594_3835360;
extern _DWORD dword_5d4594_1098456;
extern _DWORD dword_5d4594_2487804;
extern _DWORD dword_5d4594_1062552;
extern _DWORD dword_5d4594_825764;
extern _DWORD dword_587000_123008;
extern _DWORD dword_5d4594_805988;
extern _DWORD dword_5d4594_830232;
extern _DWORD dword_5d4594_2488648;
extern _DWORD dword_5d4594_811904;
extern _DWORD dword_5d4594_534768;
extern _DWORD dword_5d4594_2491580;
extern _DWORD dword_5d4594_1200832;
extern _DWORD dword_5d4594_1305724;
extern _DWORD dword_5d4594_1319260;
extern void* nox_alloc_hit_2491548;
extern _DWORD dword_5d4594_3799560;
extern _DWORD dword_5d4594_829532;
extern _DWORD dword_5d4594_2488656;
extern _DWORD dword_5d4594_338300;
extern _DWORD dword_5d4594_2386552;
extern _DWORD dword_5d4594_830152;
extern _DWORD dword_5d4594_3835368;
extern _DWORD dword_5d4594_816436;
extern _DWORD dword_5d4594_527712;
extern _DWORD dword_5d4594_526284;
extern _DWORD dword_587000_80772;
extern _DWORD dword_587000_172876;
extern _DWORD dword_5d4594_1307792;
extern _DWORD dword_5d4594_830272;
extern _DWORD dword_5d4594_2496988;
extern _DWORD dword_587000_149360;
extern _DWORD dword_5d4594_2386836;
extern _DWORD dword_5d4594_3798688;
extern _DWORD dword_5d4594_371712;
extern _DWORD dword_5d4594_2490504;
extern _DWORD dword_5d4594_787188;
extern _DWORD dword_5d4594_1316452;
extern _DWORD dword_5d4594_1049692;
extern _DWORD dword_5d4594_1045596;
extern _DWORD dword_5d4594_2488620;
extern _DWORD dword_587000_122856;
extern _DWORD dword_5d4594_2491748;
extern _DWORD dword_5d4594_1047532;
extern _DWORD dword_5d4594_1045576;
extern _DWORD dword_5d4594_2487656;
extern _DWORD dword_587000_122956;
extern _DWORD dword_5d4594_2491716;
extern _DWORD dword_587000_180476;
extern _DWORD dword_5d4594_1046852;
extern _DWORD dword_5d4594_2386848;
extern _DWORD array_5D4594_1049872[9]; // size guessed from memset in sub_467980
extern char nox_workdir[1025];
extern char nox_savegame_name_1307752[9];
extern int4*(__cdecl* func_5D4594_1305696)(int, int, int, int, int);
extern void(__cdecl* func_5D4594_1305708)(_DWORD*, int, unsigned int);
extern int (*func_5D4594_816388)(void);
extern int (*func_5D4594_816392)(void);
extern void (*func_5D4594_830220)(void);
extern nox_server_xxx nox_server_xxx_1599716[256*256];
extern nox_playerInfo nox_playerinfo_arr[32];

typedef struct mem_blob {
	uintptr_t base;
	uintptr_t size;
	unsigned __int8* ptr;
} mem_blob;

mem_blob blobs[] = { // keep them sorted!
#if 0
	{0x563002, sizeof(byte_563002), byte_563002},
	{0x563006, sizeof(byte_563006), byte_563006},
#endif
	{0x581450, sizeof(byte_581450), byte_581450},
	{0x587000, sizeof(byte_587000), byte_587000},
	{0x5D4594, sizeof(byte_5D4594), byte_5D4594},
	{0x9800B0, sizeof(asc_9800B0), asc_9800B0},
	{0x980858, sizeof(mix_dword_980858), mix_dword_980858},
};

size_t blobs_cnt = sizeof(blobs) / sizeof(mem_blob);

typedef struct mem_mapping {
	uintptr_t base;
	void* ptr;
	size_t size;
	bool invalid;
} mem_mapping;

mem_mapping mappings[] = {
	// overrides
	{0x5D4594 + 1396, (void*)nox_workdir, sizeof(nox_workdir), 1},
	{0x5D4594 + 816388, (void*)&func_5D4594_816388, sizeof(func_5D4594_816388), 1},
	{0x5D4594 + 816392, (void*)&func_5D4594_816392, sizeof(func_5D4594_816392), 1},
	{0x5D4594 + 830220, (void*)&func_5D4594_830220, sizeof(func_5D4594_830220), 1},
	{0x5D4594 + 1305708, (void*)&func_5D4594_1305708, sizeof(func_5D4594_1305708), 1},
	{0x5D4594 + 1305696, (void*)&func_5D4594_1305696, sizeof(func_5D4594_1305696), 1},
	{0x5D4594 + 1307752, (void*)nox_savegame_name_1307752, sizeof(nox_savegame_name_1307752), 1},
	{0x5D4594 + 2386848, (void*)&dword_5d4594_2386848, sizeof(dword_5d4594_2386848), 1},
	{0x5D4594 + 1046852, (void*)&dword_5d4594_1046852, sizeof(dword_5d4594_1046852), 1},
	{0x587000 + 180476, (void*)&dword_587000_180476, sizeof(dword_587000_180476), 1},
	{0x5D4594 + 2491716, (void*)&dword_5d4594_2491716, sizeof(dword_5d4594_2491716), 1},
	{0x587000 + 122956, (void*)&dword_587000_122956, sizeof(dword_587000_122956), 1},
	{0x5D4594 + 2487656, (void*)&dword_5d4594_2487656, sizeof(dword_5d4594_2487656), 1},
	{0x5D4594 + 1045576, (void*)&dword_5d4594_1045576, sizeof(dword_5d4594_1045576), 1},
	{0x5D4594 + 1047532, (void*)&dword_5d4594_1047532, sizeof(dword_5d4594_1047532), 1},
	{0x5D4594 + 2491748, (void*)&dword_5d4594_2491748, sizeof(dword_5d4594_2491748), 1},
	{0x587000 + 122856, (void*)&dword_587000_122856, sizeof(dword_587000_122856), 1},
	{0x5D4594 + 2488620, (void*)&dword_5d4594_2488620, sizeof(dword_5d4594_2488620), 1},
	{0x5D4594 + 1045596, (void*)&dword_5d4594_1045596, sizeof(dword_5d4594_1045596), 1},
	{0x5D4594 + 1049692, (void*)&dword_5d4594_1049692, sizeof(dword_5d4594_1049692), 1},
	{0x5D4594 + 1316452, (void*)&dword_5d4594_1316452, sizeof(dword_5d4594_1316452), 1},
	{0x5D4594 + 787188, (void*)&dword_5d4594_787188, sizeof(dword_5d4594_787188), 1},
	{0x5D4594 + 2490504, (void*)&dword_5d4594_2490504, sizeof(dword_5d4594_2490504), 1},
	{0x5D4594 + 371712, (void*)&dword_5d4594_371712, sizeof(dword_5d4594_371712), 1},
	{0x5D4594 + 3798688, (void*)&dword_5d4594_3798688, sizeof(dword_5d4594_3798688), 1},
	{0x5D4594 + 2386836, (void*)&dword_5d4594_2386836, sizeof(dword_5d4594_2386836), 1},
	{0x587000 + 149360, (void*)&dword_587000_149360, sizeof(dword_587000_149360), 1},
	{0x5D4594 + 2496988, (void*)&dword_5d4594_2496988, sizeof(dword_5d4594_2496988), 1},
	{0x5D4594 + 830272, (void*)&dword_5d4594_830272, sizeof(dword_5d4594_830272), 1},
	{0x5D4594 + 1307792, (void*)&dword_5d4594_1307792, sizeof(dword_5d4594_1307792), 1},
	{0x587000 + 172876, (void*)&dword_587000_172876, sizeof(dword_587000_172876), 1},
	{0x587000 + 80772, (void*)&dword_587000_80772, sizeof(dword_587000_80772), 1},
	{0x5D4594 + 526284, (void*)&dword_5d4594_526284, sizeof(dword_5d4594_526284), 1},
	{0x5D4594 + 527712, (void*)&dword_5d4594_527712, sizeof(dword_5d4594_527712), 1},
	{0x5D4594 + 816436, (void*)&dword_5d4594_816436, sizeof(dword_5d4594_816436), 1},
	{0x5D4594 + 3835368, (void*)&dword_5d4594_3835368, sizeof(dword_5d4594_3835368), 1},
	{0x5D4594 + 830152, (void*)&dword_5d4594_830152, sizeof(dword_5d4594_830152), 1},
	{0x5D4594 + 2386552, (void*)&dword_5d4594_2386552, sizeof(dword_5d4594_2386552), 1},
	{0x5D4594 + 338300, (void*)&dword_5d4594_338300, sizeof(dword_5d4594_338300), 1},
	{0x5D4594 + 2488656, (void*)&dword_5d4594_2488656, sizeof(dword_5d4594_2488656), 1},
	{0x5D4594 + 829532, (void*)&dword_5d4594_829532, sizeof(dword_5d4594_829532), 1},
	{0x5D4594 + 3799560, (void*)&dword_5d4594_3799560, sizeof(dword_5d4594_3799560), 1},
	{0x5D4594 + 2491548, (void*)&nox_alloc_hit_2491548, sizeof(nox_alloc_hit_2491548), 1},
	{0x5D4594 + 1319260, (void*)&dword_5d4594_1319260, sizeof(dword_5d4594_1319260), 1},
	{0x5D4594 + 1305724, (void*)&dword_5d4594_1305724, sizeof(dword_5d4594_1305724), 1},
	{0x5D4594 + 1200832, (void*)&dword_5d4594_1200832, sizeof(dword_5d4594_1200832), 1},
	{0x5D4594 + 2491580, (void*)&dword_5d4594_2491580, sizeof(dword_5d4594_2491580), 1},
	{0x5D4594 + 534768, (void*)&dword_5d4594_534768, sizeof(dword_5d4594_534768), 1},
	{0x5D4594 + 811904, (void*)&dword_5d4594_811904, sizeof(dword_5d4594_811904), 1},
	{0x5D4594 + 2488648, (void*)&dword_5d4594_2488648, sizeof(dword_5d4594_2488648), 1},
	{0x5D4594 + 830232, (void*)&dword_5d4594_830232, sizeof(dword_5d4594_830232), 1},
	{0x5D4594 + 805988, (void*)&dword_5d4594_805988, sizeof(dword_5d4594_805988), 1},
	{0x587000 + 123008, (void*)&dword_587000_123008, sizeof(dword_587000_123008), 1},
	{0x5D4594 + 825764, (void*)&dword_5d4594_825764, sizeof(dword_5d4594_825764), 1},
	{0x5D4594 + 1062552, (void*)&dword_5d4594_1062552, sizeof(dword_5d4594_1062552), 1},
	{0x5D4594 + 2487804, (void*)&dword_5d4594_2487804, sizeof(dword_5d4594_2487804), 1},
	{0x5D4594 + 1098456, (void*)&dword_5d4594_1098456, sizeof(dword_5d4594_1098456), 1},
	{0x5D4594 + 3835360, (void*)&dword_5d4594_3835360, sizeof(dword_5d4594_3835360), 1},
	{0x5D4594 + 2487632, (void*)&dword_5d4594_2487632, sizeof(dword_5d4594_2487632), 1},
	{0x5D4594 + 1046652, (void*)&dword_5d4594_1046652, sizeof(dword_5d4594_1046652), 1},
	{0x5D4594 + 2386172, (void*)&dword_5d4594_2386172, sizeof(dword_5d4594_2386172), 1},
	{0x587000 + 205200, (void*)&dword_587000_205200, sizeof(dword_587000_205200), 1},
	{0x587000 + 172872, (void*)&dword_587000_172872, sizeof(dword_587000_172872), 1},
	{0x5D4594 + 1313804, (void*)&dword_5d4594_1313804, sizeof(dword_5d4594_1313804), 1},
	{0x5D4594 + 1084044, (void*)&dword_5d4594_1084044, sizeof(dword_5d4594_1084044), 1},
	{0x5D4594 + 1549844, (void*)&dword_5d4594_1549844, sizeof(dword_5d4594_1549844), 1},
	{0x5D4594 + 2516352, (void*)&dword_5d4594_2516352, sizeof(dword_5d4594_2516352), 1},
	{0x5D4594 + 1047536, (void*)&dword_5d4594_1047536, sizeof(dword_5d4594_1047536), 1},
	{0x5D4594 + 1304328, (void*)&dword_5d4594_1304328, sizeof(dword_5d4594_1304328), 1},
	{0x5D4594 + 1313788, (void*)&dword_5d4594_1313788, sizeof(dword_5d4594_1313788), 1},
	{0x5D4594 + 3835364, (void*)&dword_5d4594_3835364, sizeof(dword_5d4594_3835364), 1},
	{0x5D4594 + 830200, (void*)&dword_5d4594_830200, sizeof(dword_5d4594_830200), 1},
	{0x5D4594 + 1049844, (void*)&dword_5d4594_1049844, sizeof(dword_5d4594_1049844), 1},
	{0x5D4594 + 1567960, (void*)&dword_5d4594_1567960, sizeof(dword_5d4594_1567960), 1},
	{0x5D4594 + 2488728, (void*)&dword_5d4594_2488728, sizeof(dword_5d4594_2488728), 1},
	{0x5D4594 + 3805492, (void*)&dword_5d4594_3805492, sizeof(dword_5d4594_3805492), 1},
	{0x5D4594 + 830268, (void*)&dword_5d4594_830268, sizeof(dword_5d4594_830268), 1},
	{0x5D4594 + 739392, (void*)&dword_5d4594_739392, sizeof(dword_5d4594_739392), 1},
	{0x5D4594 + 1045420, (void*)&dword_5d4594_1045420, sizeof(dword_5d4594_1045420), 1},
	{0x5D4594 + 1045556, (void*)&dword_5d4594_1045556, sizeof(dword_5d4594_1045556), 1},
	{0x5D4594 + 754060, (void*)&dword_5d4594_754060, sizeof(dword_5d4594_754060), 1},
	{0x5D4594 + 805856, (void*)&nox_profiled_805856, sizeof(nox_profiled_805856), 1},
	{0x5D4594 + 2488644, (void*)&dword_5d4594_2488644, sizeof(dword_5d4594_2488644), 1},
	{0x5D4594 + 815748, (void*)&dword_5d4594_815748, sizeof(dword_5d4594_815748), 1},
	{0x5D4594 + 1321196, (void*)&dword_5d4594_1321196, sizeof(dword_5d4594_1321196), 1},
	{0x5D4594 + 1090180, (void*)&dword_5d4594_1090180, sizeof(dword_5d4594_1090180), 1},
	{0x5D4594 + 2487856, (void*)&dword_5d4594_2487856, sizeof(dword_5d4594_2487856), 1},
	{0x5D4594 + 3843632, (void*)&dword_5d4594_3843632, sizeof(dword_5d4594_3843632), 1},
	{0x5D4594 + 2513924, (void*)&dword_5d4594_2513924, sizeof(dword_5d4594_2513924), 1},
	{0x587000 + 185504, (void*)&dword_587000_185504, sizeof(dword_587000_185504), 1},
	{0x587000 + 292488, (void*)&dword_587000_292488, sizeof(dword_587000_292488), 1},
	{0x5D4594 + 2386852, (void*)&dword_5d4594_2386852, sizeof(dword_5d4594_2386852), 1},
	{0x5D4594 + 1599708, (void*)&dword_5d4594_1599708, sizeof(dword_5d4594_1599708), 1},
	{0x5D4594 + 754048, (void*)&dword_5d4594_754048, sizeof(dword_5d4594_754048), 1},
	{0x5D4594 + 1301808, (void*)&dword_5d4594_1301808, sizeof(dword_5d4594_1301808), 1},
	{0x5D4594 + 831240, (void*)&dword_5d4594_831240, sizeof(dword_5d4594_831240), 1},
	{0x5D4594 + 1569656, (void*)&dword_5d4594_1569656, sizeof(dword_5d4594_1569656), 1},
	{0x5D4594 + 1308136, (void*)&dword_5d4594_1308136, sizeof(dword_5d4594_1308136), 1},
	{0x5D4594 + 830196, (void*)&dword_5d4594_830196, sizeof(dword_5d4594_830196), 1},
	{0x5D4594 + 2491676, (void*)&dword_5d4594_2491676, sizeof(dword_5d4594_2491676), 1},
	{0x5D4594 + 830252, (void*)&dword_5d4594_830252, sizeof(dword_5d4594_830252), 1},
	{0x5D4594 + 811896, (void*)&dword_5d4594_811896, sizeof(dword_5d4594_811896), 1},
	{0x5D4594 + 1313880, (void*)&dword_5d4594_1313880, sizeof(dword_5d4594_1313880), 1},
	{0x5D4594 + 1563064, (void*)&dword_5d4594_1563064, sizeof(dword_5d4594_1563064), 1},
	{0x5D4594 + 2523888, (void*)&dword_5d4594_2523888, sizeof(dword_5d4594_2523888), 1},
	{0x5D4594 + 1193180, (void*)&dword_5d4594_1193180, sizeof(dword_5d4594_1193180), 1},
	{0x5D4594 + 1316448, (void*)&dword_5d4594_1316448, sizeof(dword_5d4594_1316448), 1},
	{0x5D4594 + 1046604, (void*)&dword_5d4594_1046604, sizeof(dword_5d4594_1046604), 1},
	{0x5D4594 + 3612, (void*)&dword_5d4594_3612, sizeof(dword_5d4594_3612), 1},
	{0x5D4594 + 2491588, (void*)&dword_5d4594_2491588, sizeof(dword_5d4594_2491588), 1},
	{0x5D4594 + 1097212, (void*)&dword_5d4594_1097212, sizeof(dword_5d4594_1097212), 1},
	{0x5D4594 + 527988, (void*)&dword_5d4594_527988, sizeof(dword_5d4594_527988), 1},
	{0x5D4594 + 823772, (void*)&dword_5d4594_823772, sizeof(dword_5d4594_823772), 1},
	{0x587000 + 172880, (void*)&dword_587000_172880, sizeof(dword_587000_172880), 1},
	{0x5D4594 + 1320944, (void*)&dword_5d4594_1320944, sizeof(dword_5d4594_1320944), 1},
	{0x5D4594 + 10988, (void*)&dword_5d4594_10988, sizeof(dword_5d4594_10988), 1},
	{0x5D4594 + 2489436, (void*)&dword_5d4594_2489436, sizeof(dword_5d4594_2489436), 1},
	{0x5D4594 + 1193568, (void*)&dword_5d4594_1193568, sizeof(dword_5d4594_1193568), 1},
	{0x5D4594 + 1308104, (void*)&dword_5d4594_1308104, sizeof(dword_5d4594_1308104), 1},
	{0x5D4594 + 805820, (void*)&dword_5d4594_805820, sizeof(dword_5d4594_805820), 1},
	{0x5D4594 + 1313532, (void*)&dword_5d4594_1313532, sizeof(dword_5d4594_1313532), 1},
	{0x5D4594 + 1567956, (void*)&dword_5d4594_1567956, sizeof(dword_5d4594_1567956), 1},
	{0x5D4594 + 1045580, (void*)&dword_5d4594_1045580, sizeof(dword_5d4594_1045580), 1},
	{0x5D4594 + 1548532, (void*)&dword_5d4594_1548532, sizeof(dword_5d4594_1548532), 1},
	{0x5D4594 + 2488724, (void*)&dword_5d4594_2488724, sizeof(dword_5d4594_2488724), 1},
	{0x5D4594 + 1193352, (void*)&dword_5d4594_1193352, sizeof(dword_5d4594_1193352), 1},
	{0x5D4594 + 1313816, (void*)&dword_5d4594_1313816, sizeof(dword_5d4594_1313816), 1},
	{0x5D4594 + 529332, (void*)&dword_5d4594_529332, sizeof(dword_5d4594_529332), 1},
	{0x5D4594 + 815096, (void*)&dword_5d4594_815096, sizeof(dword_5d4594_815096), 1},
	{0x5D4594 + 1090828, (void*)&dword_5d4594_1090828, sizeof(dword_5d4594_1090828), 1},
	{0x5D4594 + 2491592, (void*)&dword_5d4594_2491592, sizeof(dword_5d4594_2491592), 1},
	{0x5D4594 + 3798672, (void*)&dword_5d4594_3798672, sizeof(dword_5d4594_3798672), 1},
	{0x587000 + 60064, (void*)&dword_587000_60064, sizeof(dword_587000_60064), 1},
	{0x5D4594 + 2386548, (void*)&dword_5d4594_2386548, sizeof(dword_5d4594_2386548), 1},
	{0x5D4594 + 1556128, (void*)&dword_5d4594_1556128, sizeof(dword_5d4594_1556128), 1},
	{0x5D4594 + 741648, (void*)&dword_5d4594_741648, sizeof(dword_5d4594_741648), 1},
	{0x5D4594 + 830236, (void*)&dword_5d4594_830236, sizeof(dword_5d4594_830236), 1},
	{0x5D4594 + 1556316, (void*)&dword_5d4594_1556316, sizeof(dword_5d4594_1556316), 1},
	{0x5D4594 + 2386560, (void*)&dword_5d4594_2386560, sizeof(dword_5d4594_2386560), 1},
	{0x5D4594 + 815060, (void*)&dword_5d4594_815060, sizeof(dword_5d4594_815060), 1},
	{0x587000 + 154944, (void*)&func_587000_154944, sizeof(func_587000_154944), 1},
	{0x5D4594 + 1548524, (void*)&dword_5d4594_1548524, sizeof(dword_5d4594_1548524), 1},
	{0x5D4594 + 2386860, (void*)&dword_5d4594_2386860, sizeof(dword_5d4594_2386860), 1},
	{0x5D4594 + 815052, (void*)&dword_5d4594_815052, sizeof(dword_5d4594_815052), 1},
	{0x5D4594 + 1568028, (void*)&dword_5d4594_1568028, sizeof(dword_5d4594_1568028), 1},
	{0x5D4594 + 1313564, (void*)&dword_5d4594_1313564, sizeof(dword_5d4594_1313564), 1},
	{0x5D4594 + 2487884, (void*)&dword_5d4594_2487884, sizeof(dword_5d4594_2487884), 1},
	{0x5D4594 + 2618900, (void*)&dword_5d4594_2618900, sizeof(dword_5d4594_2618900), 1},
	{0x5D4594 + 2496472, (void*)&dword_5d4594_2496472, sizeof(dword_5d4594_2496472), 1},
	{0x5D4594 + 805980, (void*)&dword_5d4594_805980, sizeof(dword_5d4594_805980), 1},
	{0x5D4594 + 600116, (void*)&dword_5d4594_600116, sizeof(dword_5d4594_600116), 1},
	{0x5D4594 + 1308096, (void*)&dword_5d4594_1308096, sizeof(dword_5d4594_1308096), 1},
	{0x5D4594 + 741652, (void*)&dword_5d4594_741652, sizeof(dword_5d4594_741652), 1},
	{0x5D4594 + 1046548, (void*)&dword_5d4594_1046548, sizeof(dword_5d4594_1046548), 1},
	{0x5D4594 + 527656, (void*)&dword_5d4594_527656, sizeof(dword_5d4594_527656), 1},
	{0x5D4594 + 251728, (void*)&dword_5d4594_251728, sizeof(dword_5d4594_251728), 1},
	{0x587000 + 109280, (void*)&dword_587000_109280, sizeof(dword_587000_109280), 1},
	{0x5D4594 + 2386168, (void*)&dword_5d4594_2386168, sizeof(dword_5d4594_2386168), 1},
	{0x5D4594 + 1556136, (void*)&dword_5d4594_1556136, sizeof(dword_5d4594_1556136), 1},
	{0x5D4594 + 3835372, (void*)&dword_5d4594_3835372, sizeof(dword_5d4594_3835372), 1},
	{0x5D4594 + 1311924, (void*)&func_5d4594_1311924, sizeof(func_5d4594_1311924), 1},
	{0x5D4594 + 1050008, (void*)&dword_5d4594_1050008, sizeof(dword_5d4594_1050008), 1},
	{0x587000 + 60068, (void*)&dword_587000_60068, sizeof(dword_587000_60068), 1},
	{0x5D4594 + 1556144, (void*)&dword_5d4594_1556144, sizeof(dword_5d4594_1556144), 1},
	{0x5D4594 + 1568280, (void*)&dword_5d4594_1568280, sizeof(dword_5d4594_1568280), 1},
	{0x5D4594 + 787192, (void*)&dword_5d4594_787192, sizeof(dword_5d4594_787192), 1},
	{0x5D4594 + 1320948, (void*)&dword_5d4594_1320948, sizeof(dword_5d4594_1320948), 1},
	{0x5D4594 + 2491704, (void*)&dword_5d4594_2491704, sizeof(dword_5d4594_2491704), 1},
	{0x5D4594 + 1568288, (void*)&dword_5d4594_1568288, sizeof(dword_5d4594_1568288), 1},
	{0x5D4594 + 2523904, (void*)&dword_5d4594_2523904, sizeof(dword_5d4594_2523904), 1},
	{0x5D4594 + 1303508, (void*)&dword_5d4594_1303508, sizeof(dword_5d4594_1303508), 1},
	{0x5D4594 + 1599628, (void*)&dword_5d4594_1599628, sizeof(dword_5d4594_1599628), 1},
	{0x587000 + 183460, (void*)&dword_587000_183460, sizeof(dword_587000_183460), 1},
	{0x5D4594 + 1522956, (void*)&dword_5d4594_1522956, sizeof(dword_5d4594_1522956), 1},
	{0x5D4594 + 1096636, (void*)&dword_5d4594_1096636, sizeof(dword_5d4594_1096636), 1},
	{0x5D4594 + 1097216, (void*)&dword_5d4594_1097216, sizeof(dword_5d4594_1097216), 1},
	{0x5D4594 + 1096272, (void*)&dword_5d4594_1096272, sizeof(dword_5d4594_1096272), 1},
	{0x587000 + 145548, (void*)&dword_587000_145548, sizeof(dword_587000_145548), 1},
	{0x5D4594 + 1046512, (void*)&dword_5d4594_1046512, sizeof(dword_5d4594_1046512), 1},
	{0x5D4594 + 1096432, (void*)&dword_5d4594_1096432, sizeof(dword_5d4594_1096432), 1},
	{0x5D4594 + 1523040, (void*)&dword_5d4594_1523040, sizeof(dword_5d4594_1523040), 1},
	{0x5D4594 + 805872, (void*)&dword_5d4594_805872, sizeof(dword_5d4594_805872), 1},
	{0x587000 + 229992, (void*)&nox_server_kickQuestPlayerMinVotes_229992, sizeof(nox_server_kickQuestPlayerMinVotes_229992), 1},
	{0x5D4594 + 1307724, (void*)&dword_5d4594_1307724, sizeof(dword_5d4594_1307724), 1},
	{0x5D4594 + 2386164, (void*)&dword_5d4594_2386164, sizeof(dword_5d4594_2386164), 1},
	{0x5D4594 + 1599688, (void*)&dword_5d4594_1599688, sizeof(dword_5d4594_1599688), 1},
	{0x5D4594 + 823696, (void*)&dword_5d4594_823696, sizeof(dword_5d4594_823696), 1},
	{0x5D4594 + 3798684, (void*)&dword_5d4594_3798684, sizeof(dword_5d4594_3798684), 1},
	{0x5D4594 + 3799500, (void*)&dword_5d4594_3799500, sizeof(dword_5d4594_3799500), 1},
	{0x5D4594 + 1313692, (void*)&dword_5d4594_1313692, sizeof(dword_5d4594_1313692), 1},
	{0x5D4594 + 1563320, (void*)&dword_5d4594_1563320, sizeof(dword_5d4594_1563320), 1},
	{0x5D4594 + 2386948, (void*)&dword_5d4594_2386948, sizeof(dword_5d4594_2386948), 1},
	{0x5D4594 + 2386872, (void*)&dword_5d4594_2386872, sizeof(dword_5d4594_2386872), 1},
	{0x5D4594 + 1569660, (void*)&dword_5d4594_1569660, sizeof(dword_5d4594_1569660), 1},
	{0x5D4594 + 1568300, (void*)&dword_5d4594_1568300, sizeof(dword_5d4594_1568300), 1},
	{0x5D4594 + 1049808, (void*)&dword_5d4594_1049808, sizeof(dword_5d4594_1049808), 1},
	{0x5D4594 + 3798680, (void*)&dword_5d4594_3798680, sizeof(dword_5d4594_3798680), 1},
	{0x5D4594 + 1064300, (void*)&dword_5d4594_1064300, sizeof(dword_5d4594_1064300), 1},
	{0x5D4594 + 1321036, (void*)&dword_5d4594_1321036, sizeof(dword_5d4594_1321036), 1},
	{0x5D4594 + 815100, (void*)&dword_5d4594_815100, sizeof(dword_5d4594_815100), 1},
	{0x5D4594 + 3807116, (void*)&dword_5d4594_3807116, sizeof(dword_5d4594_3807116), 1},
	{0x5D4594 + 1316412, (void*)&dword_5d4594_1316412, sizeof(dword_5d4594_1316412), 1},
	{0x5D4594 + 1045548, (void*)&dword_5d4594_1045548, sizeof(dword_5d4594_1045548), 1},
	{0x5D4594 + 1200776, (void*)&dword_5d4594_1200776, sizeof(dword_5d4594_1200776), 1},
	{0x5D4594 + 1569736, (void*)&dword_5d4594_1569736, sizeof(dword_5d4594_1569736), 1},
	{0x5D4594 + 1098620, (void*)&dword_5d4594_1098620, sizeof(dword_5d4594_1098620), 1},
	{0x5D4594 + 528264, (void*)&dword_5d4594_528264, sizeof(dword_5d4594_528264), 1},
	{0x5D4594 + 830112, (void*)&dword_5d4594_830112, sizeof(dword_5d4594_830112), 1},
	{0x5D4594 + 1045640, (void*)&dword_5d4594_1045640, sizeof(dword_5d4594_1045640), 1},
	{0x5D4594 + 1316456, (void*)&dword_5d4594_1316456, sizeof(dword_5d4594_1316456), 1},
	{0x5D4594 + 2490508, (void*)&dword_5d4594_2490508, sizeof(dword_5d4594_2490508), 1},
	{0x587000 + 201380, (void*)&dword_587000_201380, sizeof(dword_587000_201380), 1},
	{0x5D4594 + 1522968, (void*)&dword_5d4594_1522968, sizeof(dword_5d4594_1522968), 1},
	{0x5D4594 + 2489160, (void*)&dword_5d4594_2489160, sizeof(dword_5d4594_2489160), 1},
	{0x5D4594 + 527660, (void*)&dword_5d4594_527660, sizeof(dword_5d4594_527660), 1},
	{0x5D4594 + 3798676, (void*)&dword_5d4594_3798676, sizeof(dword_5d4594_3798676), 1},
	{0x5D4594 + 1090292, (void*)&dword_5d4594_1090292, sizeof(dword_5d4594_1090292), 1},
	{0x5D4594 + 2487992, (void*)&dword_5d4594_2487992, sizeof(dword_5d4594_2487992), 1},
	{0x5D4594 + 1049516, (void*)&dword_5d4594_1049516, sizeof(dword_5d4594_1049516), 1},
	{0x5D4594 + 3679312, (void*)&dword_5d4594_3679312, sizeof(dword_5d4594_3679312), 1},
	{0x5D4594 + 831260, (void*)&dword_5d4594_831260, sizeof(dword_5d4594_831260), 1},
	{0x5D4594 + 1062520, (void*)&dword_5d4594_1062520, sizeof(dword_5d4594_1062520), 1},
	{0x5D4594 + 741296, (void*)&dword_5d4594_741296, sizeof(dword_5d4594_741296), 1},
	{0x587000 + 229988, (void*)&nox_server_resetQuestMinVotes_229988, sizeof(nox_server_resetQuestMinVotes_229988), 1},
	{0x5D4594 + 1082916, (void*)&dword_5d4594_1082916, sizeof(dword_5d4594_1082916), 1},
	{0x5D4594 + 1563276, (void*)&dword_5d4594_1563276, sizeof(dword_5d4594_1563276), 1},
	{0x5D4594 + 1599644, (void*)&dword_5d4594_1599644, sizeof(dword_5d4594_1599644), 1},
	{0x5D4594 + 2516380, (void*)&dword_5d4594_2516380, sizeof(dword_5d4594_2516380), 1},
	{0x5D4594 + 599496, (void*)&dword_5d4594_599496, sizeof(dword_5d4594_599496), 1},
	{0x5D4594 + 2386928, (void*)&dword_5d4594_2386928, sizeof(dword_5d4594_2386928), 1},
	{0x5D4594 + 1193132, (void*)&dword_5d4594_1193132, sizeof(dword_5d4594_1193132), 1},
	{0x5D4594 + 1091364, (void*)&dword_5d4594_1091364, sizeof(dword_5d4594_1091364), 1},
	{0x587000 + 151528, (void*)&dword_587000_151528, sizeof(dword_587000_151528), 1},
	{0x587000 + 129656, (void*)&dword_587000_129656, sizeof(dword_587000_129656), 1},
	{0x5D4594 + 1193576, (void*)&dword_5d4594_1193576, sizeof(dword_5d4594_1193576), 1},
	{0x587000 + 66120, (void*)&dword_587000_66120, sizeof(dword_587000_66120), 1},
	{0x5D4594 + 1548664, (void*)&dword_5d4594_1548664, sizeof(dword_5d4594_1548664), 1},
	{0x5D4594 + 830192, (void*)&dword_5d4594_830192, sizeof(dword_5d4594_830192), 1},
	{0x5D4594 + 1568308, (void*)&dword_5d4594_1568308, sizeof(dword_5d4594_1568308), 1},
	{0x5D4594 + 832480, (void*)&dword_5d4594_832480, sizeof(dword_5d4594_832480), 1},
	{0x5D4594 + 1308112, (void*)&dword_5d4594_1308112, sizeof(dword_5d4594_1308112), 1},
	{0x5D4594 + 1599068, (void*)&dword_5d4594_1599068, sizeof(dword_5d4594_1599068), 1},
	{0x5D4594 + 1567988, (void*)&dword_5d4594_1567988, sizeof(dword_5d4594_1567988), 1},
	{0x5D4594 + 2488720, (void*)&dword_5d4594_2488720, sizeof(dword_5d4594_2488720), 1},
	{0x5D4594 + 1123520, (void*)&dword_5d4594_1123520, sizeof(dword_5d4594_1123520), 1},
	{0x5D4594 + 3835392, (void*)&dword_5d4594_3835392, sizeof(dword_5d4594_3835392), 1},
	{0x5D4594 + 1096276, (void*)&dword_5d4594_1096276, sizeof(dword_5d4594_1096276), 1},
	{0x587000 + 108752, (void*)&nox_server_sendMotd_108752, sizeof(nox_server_sendMotd_108752), 1},
	{0x5D4594 + 1548736, (void*)&dword_5d4594_1548736, sizeof(dword_5d4594_1548736), 1},
	{0x5D4594 + 816444, (void*)&dword_5d4594_816444, sizeof(dword_5d4594_816444), 1},
	{0x5D4594 + 1565628, (void*)&dword_5d4594_1565628, sizeof(dword_5d4594_1565628), 1},
	{0x5D4594 + 830136, (void*)&dword_5d4594_830136, sizeof(dword_5d4594_830136), 1},
	{0x5D4594 + 830228, (void*)&dword_5d4594_830228, sizeof(dword_5d4594_830228), 1},
	{0x5D4594 + 1064828, (void*)&dword_5d4594_1064828, sizeof(dword_5d4594_1064828), 1},
	{0x5D4594 + 1193188, (void*)&dword_5d4594_1193188, sizeof(dword_5d4594_1193188), 1},
	{0x5D4594 + 1563084, (void*)&dword_5d4594_1563084, sizeof(dword_5d4594_1563084), 1},
	{0x5D4594 + 1563080, (void*)&dword_5d4594_1563080, sizeof(dword_5d4594_1563080), 1},
	{0x5D4594 + 830260, (void*)&dword_5d4594_830260, sizeof(dword_5d4594_830260), 1},
	{0x5D4594 + 1049976, (void*)&dword_5d4594_1049976, sizeof(dword_5d4594_1049976), 1},
	{0x5D4594 + 1046360, (void*)&dword_5d4594_1046360, sizeof(dword_5d4594_1046360), 1},
	{0x5D4594 + 1556856, (void*)&dword_5d4594_1556856, sizeof(dword_5d4594_1556856), 1},
	{0x5D4594 + 829544, (void*)&dword_5d4594_829544, sizeof(dword_5d4594_829544), 1},
	{0x5D4594 + 1309772, (void*)&dword_5d4594_1309772, sizeof(dword_5d4594_1309772), 1},
	{0x5D4594 + 2487580, (void*)&dword_5d4594_2487580, sizeof(dword_5d4594_2487580), 1},
	{0x5D4594 + 1045540, (void*)&dword_5d4594_1045540, sizeof(dword_5d4594_1045540), 1},
	{0x5D4594 + 2487568, (void*)&dword_5d4594_2487568, sizeof(dword_5d4594_2487568), 1},
	{0x5D4594 + 787224, (void*)&dword_5d4594_787224, sizeof(dword_5d4594_787224), 1},
	{0x5D4594 + 1305716, (void*)&dword_5d4594_1305716, sizeof(dword_5d4594_1305716), 1},
	{0x587000 + 126996, (void*)&dword_587000_126996, sizeof(dword_587000_126996), 1},
	{0x5D4594 + 2523804, (void*)&dword_5d4594_2523804, sizeof(dword_5d4594_2523804), 1},
	{0x5D4594 + 2487536, (void*)&dword_5d4594_2487536, sizeof(dword_5d4594_2487536), 1},
	{0x5D4594 + 1045428, (void*)&dword_5d4594_1045428, sizeof(dword_5d4594_1045428), 1},
	{0x5D4594 + 739996, (void*)&dword_5d4594_739996, sizeof(dword_5d4594_739996), 1},
	{0x5D4594 + 251480, (void*)&dword_5d4594_251480, sizeof(dword_5d4594_251480), 1},
	{0x587000 + 178216, (void*)&dword_587000_178216, sizeof(dword_587000_178216), 1},
	{0x5D4594 + 1548480, (void*)&dword_5d4594_1548480, sizeof(dword_5d4594_1548480), 1},
	{0x5D4594 + 1045544, (void*)&dword_5d4594_1045544, sizeof(dword_5d4594_1045544), 1},
	{0x5D4594 + 3592, (void*)&dword_5d4594_3592, sizeof(dword_5d4594_3592), 1},
	{0x5D4594 + 2487628, (void*)&dword_5d4594_2487628, sizeof(dword_5d4594_2487628), 1},
	{0x5D4594 + 1305700, (void*)&dword_5d4594_1305700, sizeof(dword_5d4594_1305700), 1},
	{0x5D4594 + 2487932, (void*)&dword_5d4594_2487932, sizeof(dword_5d4594_2487932), 1},
	{0x5D4594 + 1301796, (void*)&dword_5d4594_1301796, sizeof(dword_5d4594_1301796), 1},
	{0x5D4594 + 1090284, (void*)&dword_5d4594_1090284, sizeof(dword_5d4594_1090284), 1},
	{0x5D4594 + 528260, (void*)&dword_5d4594_528260, sizeof(dword_5d4594_528260), 1},
	{0x5D4594 + 1062484, (void*)&dword_5d4594_1062484, sizeof(dword_5d4594_1062484), 1},
	{0x5D4594 + 1308148, (void*)&dword_5d4594_1308148, sizeof(dword_5d4594_1308148), 1},
	{0x5D4594 + 816412, (void*)&dword_5d4594_816412, sizeof(dword_5d4594_816412), 1},
	{0x5D4594 + 805860, (void*)&dword_5d4594_805860, sizeof(dword_5d4594_805860), 1},
	{0x5D4594 + 2489460, (void*)&dword_5d4594_2489460, sizeof(dword_5d4594_2489460), 1},
	{0x5D4594 + 1563044, (void*)&dword_5d4594_1563044, sizeof(dword_5d4594_1563044), 1},
	{0x5D4594 + 1090436, (void*)&dword_5d4594_1090436, sizeof(dword_5d4594_1090436), 1},
	{0x5D4594 + 754144, (void*)&dword_5d4594_754144, sizeof(dword_5d4594_754144), 1},
	{0x5D4594 + 3798708, (void*)&dword_5d4594_3798708, sizeof(dword_5d4594_3798708), 1},
	{0x5D4594 + 810628, (void*)&dword_5d4594_810628, sizeof(dword_5d4594_810628), 1},
	{0x5D4594 + 1082868, (void*)&dword_5d4594_1082868, sizeof(dword_5d4594_1082868), 1},
	{0x587000 + 142316, (void*)&dword_587000_142316, sizeof(dword_587000_142316), 1},
	{0x587000 + 171388, (void*)&dword_587000_171388, sizeof(dword_587000_171388), 1},
	{0x5D4594 + 1049992, (void*)&dword_5d4594_1049992, sizeof(dword_5d4594_1049992), 1},
	{0x5D4594 + 1305712, (void*)&dword_5d4594_1305712, sizeof(dword_5d4594_1305712), 1},
	{0x5D4594 + 1062556, (void*)&dword_5d4594_1062556, sizeof(dword_5d4594_1062556), 1},
	{0x5D4594 + 1548732, (void*)&dword_5d4594_1548732, sizeof(dword_5d4594_1548732), 1},
	{0x5D4594 + 526276, (void*)&dword_5d4594_526276, sizeof(dword_5d4594_526276), 1},
	{0x5D4594 + 741260, (void*)&dword_5d4594_741260, sizeof(dword_5d4594_741260), 1},
	{0x5D4594 + 1321520, (void*)&dword_5d4594_1321520, sizeof(dword_5d4594_1321520), 1},
	{0x5D4594 + 1319268, (void*)&dword_5d4594_1319268, sizeof(dword_5d4594_1319268), 1},
	{0x5D4594 + 1045520, (void*)&dword_5d4594_1045520, sizeof(dword_5d4594_1045520), 1},
	{0x5D4594 + 1565632, (void*)&dword_5d4594_1565632, sizeof(dword_5d4594_1565632), 1},
	{0x5D4594 + 1548704, (void*)&dword_5d4594_1548704, sizeof(dword_5d4594_1548704), 1},
	{0x5D4594 + 2516372, (void*)&dword_5d4594_2516372, sizeof(dword_5d4594_2516372), 1},
	{0x5D4594 + 831244, (void*)&dword_5d4594_831244, sizeof(dword_5d4594_831244), 1},
	{0x5D4594 + 1203832, (void*)&dword_5d4594_1203832, sizeof(dword_5d4594_1203832), 1},
	{0x5D4594 + 1308140, (void*)&dword_5d4594_1308140, sizeof(dword_5d4594_1308140), 1},
	{0x5D4594 + 1523048, (void*)&dword_5d4594_1523048, sizeof(dword_5d4594_1523048), 1},
	{0x5D4594 + 1321024, (void*)&dword_5d4594_1321024, sizeof(dword_5d4594_1321024), 1},
	{0x5D4594 + 831076, (void*)&dword_5d4594_831076, sizeof(dword_5d4594_831076), 1},
	{0x5D4594 + 1097196, (void*)&dword_5d4594_1097196, sizeof(dword_5d4594_1097196), 1},
	{0x5D4594 + 1096264, (void*)&dword_5d4594_1096264, sizeof(dword_5d4594_1096264), 1},
	{0x587000 + 234176, (void*)&dword_587000_234176, sizeof(dword_587000_234176), 1},
	{0x5D4594 + 1045552, (void*)&dword_5d4594_1045552, sizeof(dword_5d4594_1045552), 1},
	{0x5D4594 + 1193176, (void*)&dword_5d4594_1193176, sizeof(dword_5d4594_1193176), 1},
	{0x5D4594 + 808564, (void*)&dword_5d4594_808564, sizeof(dword_5d4594_808564), 1},
	{0x5D4594 + 1309704, (void*)&dword_5d4594_1309704, sizeof(dword_5d4594_1309704), 1},
	{0x5D4594 + 741680, (void*)&dword_5d4594_741680, sizeof(dword_5d4594_741680), 1},
	{0x5D4594 + 1320936, (void*)&dword_5d4594_1320936, sizeof(dword_5d4594_1320936), 1},
	{0x5D4594 + 1316484, (void*)&dword_5d4594_1316484, sizeof(dword_5d4594_1316484), 1},
	{0x5D4594 + 1305720, (void*)&dword_5d4594_1305720, sizeof(dword_5d4594_1305720), 1},
	{0x5D4594 + 1049524, (void*)&dword_5d4594_1049524, sizeof(dword_5d4594_1049524), 1},
	{0x5D4594 + 1090140, (void*)&dword_5d4594_1090140, sizeof(dword_5d4594_1090140), 1},
	{0x5D4594 + 833728, (void*)&dword_5d4594_833728, sizeof(dword_5d4594_833728), 1},
	{0x5D4594 + 829500, (void*)&dword_5d4594_829500, sizeof(dword_5d4594_829500), 1},
	{0x5D4594 + 1308144, (void*)&dword_5d4594_1308144, sizeof(dword_5d4594_1308144), 1},
	{0x5D4594 + 1309696, (void*)&dword_5d4594_1309696, sizeof(dword_5d4594_1309696), 1},
	{0x5D4594 + 1062564, (void*)&dword_5d4594_1062564, sizeof(dword_5d4594_1062564), 1},
	{0x5D4594 + 1563096, (void*)&dword_5d4594_1563096, sizeof(dword_5d4594_1563096), 1},
	{0x5D4594 + 1311936, (void*)&dword_5d4594_1311936, sizeof(dword_5d4594_1311936), 1},
	{0x5D4594 + 1047524, (void*)&dword_5d4594_1047524, sizeof(dword_5d4594_1047524), 1},
	{0x5D4594 + 1098596, (void*)&dword_5d4594_1098596, sizeof(dword_5d4594_1098596), 1},
	{0x5D4594 + 1308152, (void*)&dword_5d4594_1308152, sizeof(dword_5d4594_1308152), 1},
	{0x5D4594 + 1313536, (void*)&dword_5d4594_1313536, sizeof(dword_5d4594_1313536), 1},
	{0x5D4594 + 1200796, (void*)&dword_5d4594_1200796, sizeof(dword_5d4594_1200796), 1},
	{0x5D4594 + 1090280, (void*)&dword_5d4594_1090280, sizeof(dword_5d4594_1090280), 1},
	{0x5D4594 + 2487244, (void*)&dword_5d4594_2487244, sizeof(dword_5d4594_2487244), 1},
	{0x5D4594 + 2489428, (void*)&dword_5d4594_2489428, sizeof(dword_5d4594_2489428), 1},
	{0x5D4594 + 1193336, (void*)&dword_5d4594_1193336, sizeof(dword_5d4594_1193336), 1},
	{0x5D4594 + 534816, (void*)&dword_5d4594_534816, sizeof(dword_5d4594_534816), 1},
	{0x5D4594 + 2523764, (void*)&dword_5d4594_2523764, sizeof(dword_5d4594_2523764), 1},
	{0x587000 + 142328, (void*)&dword_587000_142328, sizeof(dword_587000_142328), 1},
	{0x5D4594 + 1046524, (void*)&dword_5d4594_1046524, sizeof(dword_5d4594_1046524), 1},
	{0x5D4594 + 1096256, (void*)&dword_5d4594_1096256, sizeof(dword_5d4594_1096256), 1},
	{0x5D4594 + 1565612, (void*)&dword_5d4594_1565612, sizeof(dword_5d4594_1565612), 1},
	{0x5D4594 + 2489420, (void*)&dword_5d4594_2489420, sizeof(dword_5d4594_2489420), 1},
	{0x5D4594 + 1064896, (void*)&dword_5d4594_1064896, sizeof(dword_5d4594_1064896), 0},
	{0x5D4594 + 2487900, (void*)&dword_5d4594_2487900, sizeof(dword_5d4594_2487900), 1},
	{0x587000 + 80840, (void*)&dword_587000_80840, sizeof(dword_587000_80840), 1},
	{0x587000 + 249172, (void*)&dword_587000_249172, sizeof(dword_587000_249172), 1},
	{0x5D4594 + 830216, (void*)&func_5d4594_830216, sizeof(func_5d4594_830216), 1},
	{0x5D4594 + 740072, (void*)&dword_5d4594_740072, sizeof(dword_5d4594_740072), 1},
	{0x5D4594 + 1097192, (void*)&dword_5d4594_1097192, sizeof(dword_5d4594_1097192), 1},
	{0x587000 + 183456, (void*)&dword_587000_183456, sizeof(dword_587000_183456), 1},
	{0x5D4594 + 2491544, (void*)&dword_5d4594_2491544, sizeof(dword_5d4594_2491544), 1},
	{0x5D4594 + 1062560, (void*)&dword_5d4594_1062560, sizeof(dword_5d4594_1062560), 1},
	{0x5D4594 + 1569652, (void*)&dword_5d4594_1569652, sizeof(dword_5d4594_1569652), 1},
	{0x5D4594 + 1316472, (void*)&dword_5d4594_1316472, sizeof(dword_5d4594_1316472), 1},
	{0x5D4594 + 1096280, (void*)&dword_5d4594_1096280, sizeof(dword_5d4594_1096280), 1},
	{0x5D4594 + 2513932, (void*)&dword_5d4594_2513932, sizeof(dword_5d4594_2513932), 1},
	{0x5D4594 + 833732, (void*)&dword_5d4594_833732, sizeof(dword_5d4594_833732), 1},
	{0x5D4594 + 2386840, (void*)&dword_5d4594_2386840, sizeof(dword_5d4594_2386840), 1},
	{0x5D4594 + 3799452, (void*)&dword_5d4594_3799452, sizeof(dword_5d4594_3799452), 1},
	{0x5D4594 + 1046356, (void*)&dword_5d4594_1046356, sizeof(dword_5d4594_1046356), 1},
	{0x5D4594 + 1523044, (void*)&dword_5d4594_1523044, sizeof(dword_5d4594_1523044), 1},
	{0x5D4594 + 1046864, (void*)&dword_5d4594_1046864, sizeof(dword_5d4594_1046864), 1},
	{0x587000 + 145672, (void*)&dword_587000_145672, sizeof(dword_587000_145672), 1},
	{0x5D4594 + 1316436, (void*)&dword_5d4594_1316436, sizeof(dword_5d4594_1316436), 1},
	{0x5D4594 + 831256, (void*)&dword_5d4594_831256, sizeof(dword_5d4594_831256), 1},
	{0x5D4594 + 1523032, (void*)&dword_5d4594_1523032, sizeof(dword_5d4594_1523032), 1},
	{0x5D4594 + 1200768, (void*)&dword_5d4594_1200768, sizeof(dword_5d4594_1200768), 1},
	{0x5D4594 + 1084040, (void*)&dword_5d4594_1084040, sizeof(dword_5d4594_1084040), 1},
	{0x5D4594 + 830120, (void*)&dword_5d4594_830120, sizeof(dword_5d4594_830120), 1},
	{0x5D4594 + 823708, (void*)&dword_5d4594_823708, sizeof(dword_5d4594_823708), 1},
	{0x5D4594 + 251704, (void*)&dword_5d4594_251704, sizeof(dword_5d4594_251704), 1},
	{0x587000 + 261388, (void*)&dword_587000_261388, sizeof(dword_587000_261388), 1},
	{0x5D4594 + 1599696, (void*)&dword_5d4594_1599696, sizeof(dword_5d4594_1599696), 1},
	{0x5D4594 + 811072, (void*)&dword_5d4594_811072, sizeof(dword_5d4594_811072), 1},
	{0x5D4594 + 1320988, (void*)&dword_5d4594_1320988, sizeof(dword_5d4594_1320988), 1},
	{0x5D4594 + 1565520, (void*)&dword_5d4594_1565520, sizeof(dword_5d4594_1565520), 1},
	{0x5D4594 + 1064868, (void*)&dword_5d4594_1064868, sizeof(dword_5d4594_1064868), 1},
	{0x5D4594 + 2523760, (void*)&dword_5d4594_2523760, sizeof(dword_5d4594_2523760), 1},
	{0x5D4594 + 1563088, (void*)&dword_5d4594_1563088, sizeof(dword_5d4594_1563088), 1},
	{0x5D4594 + 1098600, (void*)&dword_5d4594_1098600, sizeof(dword_5d4594_1098600), 1},
	{0x5D4594 + 1305788, (void*)&dword_5d4594_1305788, sizeof(dword_5d4594_1305788), 1},
	{0x5D4594 + 1049996, (void*)&dword_5d4594_1049996, sizeof(dword_5d4594_1049996), 1},
	{0x5D4594 + 830256, (void*)&dword_5d4594_830256, sizeof(dword_5d4594_830256), 1},
	{0x5D4594 + 3807152, (void*)&dword_5d4594_3807152, sizeof(dword_5d4594_3807152), 1},
	{0x5D4594 + 1304, (void*)&dword_5d4594_1304, sizeof(dword_5d4594_1304), 1},
	{0x5D4594 + 1098616, (void*)&dword_5d4594_1098616, sizeof(dword_5d4594_1098616), 1},
	{0x5D4594 + 1049536, (void*)&dword_5d4594_1049536, sizeof(dword_5d4594_1049536), 1},
	{0x5D4594 + 1522596, (void*)&dword_5d4594_1522596, sizeof(dword_5d4594_1522596), 1},
	{0x5D4594 + 1301772, (void*)&nox_alloc_healthChange_1301772, sizeof(nox_alloc_healthChange_1301772), 1},
	{0x5D4594 + 2487948, (void*)&dword_5d4594_2487948, sizeof(dword_5d4594_2487948), 1},
	{0x5D4594 + 531652, (void*)&dword_5d4594_531652, sizeof(dword_5d4594_531652), 1},
	{0x5D4594 + 1522608, (void*)&nox_wnd_xxx_1522608, sizeof(nox_wnd_xxx_1522608), 1},
	{0x5D4594 + 371756, (void*)&dword_5d4594_371756, sizeof(dword_5d4594_371756), 1},
	{0x5D4594 + 251712, (void*)&dword_5d4594_251712, sizeof(dword_5d4594_251712), 1},
	{0x5D4594 + 2487584, (void*)&dword_5d4594_2487584, sizeof(dword_5d4594_2487584), 1},
	{0x5D4594 + 1556848, (void*)&dword_5d4594_1556848, sizeof(dword_5d4594_1556848), 1},
	{0x5D4594 + 1046944, (void*)&dword_5d4594_1046944, sizeof(dword_5d4594_1046944), 1},
	{0x5D4594 + 1193672, (void*)&dword_5d4594_1193672, sizeof(dword_5d4594_1193672), 1},
	{0x5D4594 + 3807136, (void*)&dword_5d4594_3807136, sizeof(dword_5d4594_3807136), 1},
	{0x587000 + 312796, (void*)&dword_587000_312796, sizeof(dword_587000_312796), 1},
	{0x5D4594 + 1319248, (void*)&dword_5d4594_1319248, sizeof(dword_5d4594_1319248), 1},
	{0x5D4594 + 1308116, (void*)&dword_5d4594_1308116, sizeof(dword_5d4594_1308116), 1},
	{0x5D4594 + 1046600, (void*)&dword_5d4594_1046600, sizeof(dword_5d4594_1046600), 1},
	{0x587000 + 205696, (void*)&nox_server_needInitNetCodeCache, sizeof(nox_server_needInitNetCodeCache), 1},
	{0x5D4594 + 1098604, (void*)&dword_5d4594_1098604, sizeof(dword_5d4594_1098604), 1},
	{0x587000 + 154968, (void*)&dword_587000_154968, sizeof(dword_587000_154968), 1},
	{0x5D4594 + 1193624, (void*)&dword_5d4594_1193624, sizeof(dword_5d4594_1193624), 1},
	{0x5D4594 + 1062492, (void*)&dword_5d4594_1062492, sizeof(dword_5d4594_1062492), 1},
	{0x5D4594 + 823684, (void*)&dword_5d4594_823684, sizeof(dword_5d4594_823684), 1},
	{0x587000 + 93944, (void*)&dword_587000_93944, sizeof(dword_587000_93944), 1},
	{0x587000 + 237036, (void*)&dword_587000_237036, sizeof(dword_587000_237036), 1},
	{0x5D4594 + 1313740, (void*)&dword_5d4594_1313740, sizeof(dword_5d4594_1313740), 1},
	{0x5D4594 + 830204, (void*)&dword_5d4594_830204, sizeof(dword_5d4594_830204), 1},
	{0x5D4594 + 1193664, (void*)&dword_5d4594_1193664, sizeof(dword_5d4594_1193664), 1},
	{0x5D4594 + 741244, (void*)&dword_5d4594_741244, sizeof(dword_5d4594_741244), 1},
	{0x5D4594 + 3798712, (void*)&dword_5d4594_3798712, sizeof(dword_5d4594_3798712), 1},
	{0x5D4594 + 2488640, (void*)&dword_5d4594_2488640, sizeof(dword_5d4594_2488640), 1},
	{0x5D4594 + 2386916, (void*)&nox_alloc_pendingOwn_2386916, sizeof(nox_alloc_pendingOwn_2386916), 1},
	{0x5D4594 + 1193524, (void*)&dword_5d4594_1193524, sizeof(dword_5d4594_1193524), 1},
	{0x5D4594 + 3805484, (void*)&dword_5d4594_3805484, sizeof(dword_5d4594_3805484), 1},
	{0x5D4594 + 1045424, (void*)&dword_5d4594_1045424, sizeof(dword_5d4594_1045424), 1},
	{0x587000 + 54276, (void*)&nox_server_sanctuaryHelp_54276, sizeof(nox_server_sanctuaryHelp_54276), 1},
	{0x5D4594 + 1308100, (void*)&dword_5d4594_1308100, sizeof(dword_5d4594_1308100), 1},
	{0x5D4594 + 2386228, (void*)&dword_5d4594_2386228, sizeof(dword_5d4594_2386228), 1},
	{0x5D4594 + 1308132, (void*)&dword_5d4594_1308132, sizeof(dword_5d4594_1308132), 1},
	{0x5D4594 + 3798644, (void*)&dword_5d4594_3798644, sizeof(dword_5d4594_3798644), 1},
	{0x5D4594 + 1082860, (void*)&dword_5d4594_1082860, sizeof(dword_5d4594_1082860), 1},
	{0x5D4594 + 1303536, (void*)&dword_5d4594_1303536, sizeof(dword_5d4594_1303536), 1},
	{0x5D4594 + 814548, (void*)&dword_5d4594_814548, sizeof(dword_5d4594_814548), 1},
	{0x5D4594 + 1045584, (void*)&dword_5d4594_1045584, sizeof(dword_5d4594_1045584), 1},
	{0x5D4594 + 1197308, (void*)&dword_5d4594_1197308, sizeof(dword_5d4594_1197308), 1},
	{0x5D4594 + 3835312, (void*)&dword_5d4594_3835312, sizeof(dword_5d4594_3835312), 1},
	{0x5D4594 + 1308108, (void*)&dword_5d4594_1308108, sizeof(dword_5d4594_1308108), 1},
	{0x5D4594 + 1090108, (void*)&dword_5d4594_1090108, sizeof(dword_5d4594_1090108), 1},
	{0x5D4594 + 1568868, (void*)&dword_5d4594_1568868, sizeof(dword_5d4594_1568868), 1},
	{0x5D4594 + 2488608, (void*)&dword_5d4594_2488608, sizeof(dword_5d4594_2488608), 1},
	{0x5D4594 + 1308120, (void*)&dword_5d4594_1308120, sizeof(dword_5d4594_1308120), 1},
	{0x5D4594 + 830972, (void*)&dword_5d4594_830972, sizeof(dword_5d4594_830972), 1},
	{0x5D4594 + 3804684, (void*)&dword_5d4594_3804684, sizeof(dword_5d4594_3804684), 1},
	{0x5D4594 + 2487564, (void*)&dword_5d4594_2487564, sizeof(dword_5d4594_2487564), 1},
	{0x5D4594 + 1563052, (void*)&dword_5d4594_1563052, sizeof(dword_5d4594_1563052), 1},
	{0x587000 + 66116, (void*)&dword_587000_66116, sizeof(dword_587000_66116), 1},
	{0x5D4594 + 814992, (void*)&dword_5d4594_814992, sizeof(dword_5d4594_814992), 1},
	{0x5D4594 + 1193156, (void*)&dword_5d4594_1193156, sizeof(dword_5d4594_1193156), 1},
	{0x587000 + 312812, (void*)&dword_587000_312812, sizeof(dword_587000_312812), 1},
	{0x5D4594 + 1308156, (void*)&dword_5d4594_1308156, sizeof(dword_5d4594_1308156), 1},
	{0x5D4594 + 1569668, (void*)&mox_alloc_magicEnt_1569668, sizeof(mox_alloc_magicEnt_1569668), 1},
	{0x5D4594 + 2487672, (void*)&dword_5d4594_2487672, sizeof(dword_5d4594_2487672), 1},
	{0x5D4594 + 2386216, (void*)&nox_alloc_spawn_2386216, sizeof(nox_alloc_spawn_2386216), 1},
	{0x5D4594 + 2488652, (void*)&dword_5d4594_2488652, sizeof(dword_5d4594_2488652), 1},
	{0x5D4594 + 825752, (void*)&dword_5d4594_825752, sizeof(dword_5d4594_825752), 1},
	{0x5D4594 + 816092, (void*)&dword_5d4594_816092, sizeof(dword_5d4594_816092), 1},
	{0x587000 + 80800, (void*)&dword_587000_80800, sizeof(dword_587000_80800), 1},
	{0x5D4594 + 1316476, (void*)&dword_5d4594_1316476, sizeof(dword_5d4594_1316476), 1},
	{0x5D4594 + 1301824, (void*)&dword_5d4594_1301824, sizeof(dword_5d4594_1301824), 1},
	{0x587000 + 312828, (void*)&dword_587000_312828, sizeof(dword_587000_312828), 1},
	{0x5D4594 + 1049696, (void*)&dword_5d4594_1049696, sizeof(dword_5d4594_1049696), 1},
	{0x5D4594 + 741256, (void*)&dword_5d4594_741256, sizeof(dword_5d4594_741256), 1},
	{0x5D4594 + 1556852, (void*)&dword_5d4594_1556852, sizeof(dword_5d4594_1556852), 1},
	{0x5D4594 + 2487676, (void*)&dword_5d4594_2487676, sizeof(dword_5d4594_2487676), 1},
	{0x5D4594 + 831092, (void*)&dword_5d4594_831092, sizeof(dword_5d4594_831092), 1},
	{0x5D4594 + 3807140, (void*)&dword_5d4594_3807140, sizeof(dword_5d4594_3807140), 1},
	{0x5D4594 + 1097208, (void*)&dword_5d4594_1097208, sizeof(dword_5d4594_1097208), 1},
	{0x5D4594 + 1569644, (void*)&nox_alloc_execAbil_1569644, sizeof(nox_alloc_execAbil_1569644), 1},
	{0x5D4594 + 1309764, (void*)&dword_5d4594_1309764, sizeof(dword_5d4594_1309764), 1},
	{0x5D4594 + 740004, (void*)&dword_5d4594_740004, sizeof(dword_5d4594_740004), 1},
	{0x5D4594 + 1090112, (void*)&dword_5d4594_1090112, sizeof(dword_5d4594_1090112), 1},
	{0x5D4594 + 3799552, (void*)&dword_5d4594_3799552, sizeof(dword_5d4594_3799552), 1},
	{0x5D4594 + 1049804, (void*)&dword_5d4594_1049804, sizeof(dword_5d4594_1049804), 1},
	{0x5D4594 + 1599652, (void*)&nox_alloc_vote_1599652, sizeof(nox_alloc_vote_1599652), 1},
	{0x5D4594 + 1062496, (void*)&dword_5d4594_1062496, sizeof(dword_5d4594_1062496), 1},
	{0x5D4594 + 1046540, (void*)&dword_5d4594_1046540, sizeof(dword_5d4594_1046540), 1},
	{0x5D4594 + 1063120, (void*)&dword_5d4594_1063120, sizeof(dword_5d4594_1063120), 1},
	{0x5D4594 + 1193648, (void*)&dword_5d4594_1193648, sizeof(dword_5d4594_1193648), 1},
	{0x5D4594 + 251708, (void*)&dword_5d4594_251708, sizeof(dword_5d4594_251708), 1},
	{0x5D4594 + 251716, (void*)&dword_5d4594_251716, sizeof(dword_5d4594_251716), 1},
	{0x5D4594 + 1197372, (void*)&dword_5d4594_1197372, sizeof(dword_5d4594_1197372), 1},
	{0x587000 + 230092, (void*)&dword_587000_230092, sizeof(dword_587000_230092), 1},
	{0x587000 + 180480, (void*)&dword_587000_180480, sizeof(dword_587000_180480), 1},
	{0x5D4594 + 3798728, (void*)&dword_5d4594_3798728, sizeof(dword_5d4594_3798728), 1},
	{0x587000 + 312824, (void*)&dword_587000_312824, sizeof(dword_587000_312824), 1},
	{0x587000 + 145668, (void*)&dword_587000_145668, sizeof(dword_587000_145668), 1},
	{0x5D4594 + 10984, (void*)&dword_5d4594_10984, sizeof(dword_5d4594_10984), 1},
	{0x5D4594 + 814552, (void*)&dword_5d4594_814552, sizeof(dword_5d4594_814552), 1},
	{0x5D4594 + 1568260, (void*)&dword_5d4594_1568260, sizeof(dword_5d4594_1568260), 1},
	{0x5D4594 + 1090176, (void*)&dword_5d4594_1090176, sizeof(dword_5d4594_1090176), 1},
	{0x587000 + 312792, (void*)&dword_587000_312792, sizeof(dword_587000_312792), 1},
	{0x5D4594 + 1569724, (void*)&nox_alloc_spellDur_1569724, sizeof(nox_alloc_spellDur_1569724), 1},
	{0x5D4594 + 1556148, (void*)&dword_5d4594_1556148, sizeof(dword_5d4594_1556148), 1},
	{0x5D4594 + 1305800, (void*)&dword_5d4594_1305800, sizeof(dword_5d4594_1305800), 1},
	{0x5D4594 + 830208, (void*)&dword_5d4594_830208, sizeof(dword_5d4594_830208), 1},
	{0x5D4594 + 1308128, (void*)&dword_5d4594_1308128, sizeof(dword_5d4594_1308128), 1},
	{0x5D4594 + 815056, (void*)&dword_5d4594_815056, sizeof(dword_5d4594_815056), 1},
	{0x5D4594 + 811100, (void*)&dword_5d4594_811100, sizeof(dword_5d4594_811100), 1},
	{0x5D4594 + 1319236, (void*)&dword_5d4594_1319236, sizeof(dword_5d4594_1319236), 1},
	{0x5D4594 + 1599616, (void*)&dword_5d4594_1599616, sizeof(dword_5d4594_1599616), 1},
	{0x5D4594 + 1045588, (void*)&dword_5d4594_1045588, sizeof(dword_5d4594_1045588), 1},
	{0x5D4594 + 528272, (void*)&dword_5d4594_528272, sizeof(dword_5d4594_528272), 1},
	{0x5D4594 + 2491552, (void*)&dword_5d4594_2491552, sizeof(dword_5d4594_2491552), 1},
	{0x5D4594 + 1301816, (void*)&dword_5d4594_1301816, sizeof(dword_5d4594_1301816), 1},
	{0x5D4594 + 816376, (void*)&dword_5d4594_816376, sizeof(dword_5d4594_816376), 1},
	{0x5D4594 + 2386156, (void*)&dword_5d4594_2386156, sizeof(dword_5d4594_2386156), 1},
	{0x587000 + 145540, (void*)&dword_587000_145540, sizeof(dword_587000_145540), 1},
	{0x5D4594 + 808568, (void*)&dword_5d4594_808568, sizeof(dword_5d4594_808568), 1},
	{0x5D4594 + 831276, (void*)&dword_5d4594_831276, sizeof(dword_5d4594_831276), 1},
	{0x5D4594 + 1599064, (void*)&dword_5d4594_1599064, sizeof(dword_5d4594_1599064), 1},
	{0x5D4594 + 1046648, (void*)&dword_5d4594_1046648, sizeof(dword_5d4594_1046648), 1},
	{0x5D4594 + 3835388, (void*)&dword_5d4594_3835388, sizeof(dword_5d4594_3835388), 1},
	{0x5D4594 + 741252, (void*)&dword_5d4594_741252, sizeof(dword_5d4594_741252), 1},
	{0x5D4594 + 741248, (void*)&dword_5d4594_741248, sizeof(dword_5d4594_741248), 1},
	{0x5D4594 + 2523776, (void*)&dword_5d4594_2523776, sizeof(dword_5d4594_2523776), 1},
	{0x5D4594 + 2487652, (void*)&dword_5d4594_2487652, sizeof(dword_5d4594_2487652), 1},
	{0x587000 + 312808, (void*)&dword_587000_312808, sizeof(dword_587000_312808), 1},
	{0x5D4594 + 1308124, (void*)&dword_5d4594_1308124, sizeof(dword_5d4594_1308124), 1},
	{0x5D4594 + 529336, (void*)&dword_5d4594_529336, sizeof(dword_5d4594_529336), 1},
	{0x5D4594 + 1096260, (void*)&dword_5d4594_1096260, sizeof(dword_5d4594_1096260), 1},
	{0x5D4594 + 1193668, (void*)&dword_5d4594_1193668, sizeof(dword_5d4594_1193668), 1},
	{0x5D4594 + 1046596, (void*)&dword_5d4594_1046596, sizeof(dword_5d4594_1046596), 1},
	{0x5D4594 + 1565516, (void*)&dword_5d4594_1565516, sizeof(dword_5d4594_1565516), 1},
	{0x5D4594 + 787184, (void*)&dword_5d4594_787184, sizeof(dword_5d4594_787184), 1},
	{0x5D4594 + 1563092, (void*)&dword_5d4594_1563092, sizeof(dword_5d4594_1563092), 1},
	{0x5D4594 + 830132, (void*)&dword_5d4594_830132, sizeof(dword_5d4594_830132), 1},
	{0x5D4594 + 1309768, (void*)&dword_5d4594_1309768, sizeof(dword_5d4594_1309768), 1},
	{0x5D4594 + 1320972, (void*)&dword_5d4594_1320972, sizeof(dword_5d4594_1320972), 1},
	{0x5D4594 + 1096504, (void*)&dword_5d4594_1096504, sizeof(dword_5d4594_1096504), 1},
	{0x5D4594 + 371264, (void*)&dword_5d4594_371264, sizeof(dword_5d4594_371264), 1},
	{0x5D4594 + 1046640, (void*)&dword_5d4594_1046640, sizeof(dword_5d4594_1046640), 1},
	{0x5D4594 + 1045692, (void*)&dword_5d4594_1045692, sizeof(dword_5d4594_1045692), 1},
	{0x5D4594 + 1308, (void*)&dword_5d4594_1308, sizeof(dword_5d4594_1308), 1},
	{0x5D4594 + 3835348, (void*)&dword_5d4594_3835348, sizeof(dword_5d4594_3835348), 1},
	{0x5D4594 + 1090040, (void*)&dword_5d4594_1090040, sizeof(dword_5d4594_1090040), 1},
	{0x5D4594 + 2660032, (void*)&dword_5d4594_2660032, sizeof(dword_5d4594_2660032), 1},
	{0x5D4594 + 1203860, (void*)&nox_alloc_friendList_1203860, sizeof(nox_alloc_friendList_1203860), 1},
	{0x5D4594 + 1301812, (void*)&dword_5d4594_1301812, sizeof(dword_5d4594_1301812), 1},
	{0x5D4594 + 1556112, (void*)&dword_5d4594_1556112, sizeof(dword_5d4594_1556112), 1},
	{0x5D4594 + 754044, (void*)&dword_5d4594_754044, sizeof(dword_5d4594_754044), 1},
	{0x5D4594 + 1309736, (void*)&dword_5d4594_1309736, sizeof(dword_5d4594_1309736), 1},
	{0x587000 + 111668, (void*)&dword_587000_111668, sizeof(dword_587000_111668), 1},
	{0x5D4594 + 811372, (void*)&dword_5d4594_811372, sizeof(dword_5d4594_811372), 1},
	{0x5D4594 + 825768, (void*)&dword_5d4594_825768, sizeof(dword_5d4594_825768), 1},
	{0x5D4594 + 831084, (void*)&dword_5d4594_831084, sizeof(dword_5d4594_831084), 1},
	{0x5D4594 + 1309756, (void*)&dword_5d4594_1309756, sizeof(dword_5d4594_1309756), 1},
	{0x5D4594 + 3616, (void*)&dword_5d4594_3616, sizeof(dword_5d4594_3616), 1},
	{0x5D4594 + 1096644, (void*)&dword_5d4594_1096644, sizeof(dword_5d4594_1096644), 1},
	{0x5D4594 + 2487576, (void*)&dword_5d4594_2487576, sizeof(dword_5d4594_2487576), 1},
	{0x5D4594 + 1309832, (void*)&dword_5d4594_1309832, sizeof(dword_5d4594_1309832), 1},
	{0x5D4594 + 2487624, (void*)&dword_5d4594_2487624, sizeof(dword_5d4594_2487624), 1},
	{0x5D4594 + 1096284, (void*)&dword_5d4594_1096284, sizeof(dword_5d4594_1096284), 1},
	{0x5D4594 + 1313540, (void*)&dword_5d4594_1313540, sizeof(dword_5d4594_1313540), 1},
	{0x5D4594 + 825736, (void*)&dword_5d4594_825736, sizeof(dword_5d4594_825736), 1},
	{0x587000 + 93200, (void*)&dword_587000_93200, sizeof(dword_587000_93200), 1},
	{0x5D4594 + 1082864, (void*)&dword_5d4594_1082864, sizeof(dword_5d4594_1082864), 1},
	{0x5D4594 + 3679316, (void*)&dword_5d4594_3679316, sizeof(dword_5d4594_3679316), 1},
	{0x5D4594 + 1307732, (void*)&nox_wnd_xxx_1307732, sizeof(nox_wnd_xxx_1307732), 1},
	{0x5D4594 + 1316704, (void*)&dword_5d4594_1316704, sizeof(dword_5d4594_1316704), 1},
	{0x5D4594 + 787200, (void*)&dword_5d4594_787200, sizeof(dword_5d4594_787200), 1},
	{0x5D4594 + 787180, (void*)&dword_5d4594_787180, sizeof(dword_5d4594_787180), 1},
	{0x587000 + 145664, (void*)&dword_587000_145664, sizeof(dword_587000_145664), 1},
	{0x5D4594 + 2523892, (void*)&nox_alloc_groupInfo_2523892, sizeof(nox_alloc_groupInfo_2523892), 1},
	{0x5D4594 + 1307292, (void*)&dword_5d4594_1307292, sizeof(dword_5d4594_1307292), 1},
	{0x5D4594 + 1046956, (void*)&dword_5d4594_1046956, sizeof(dword_5d4594_1046956), 1},
	{0x5D4594 + 3835352, (void*)&dword_5d4594_3835352, sizeof(dword_5d4594_3835352), 1},
	{0x5D4594 + 1096288, (void*)&dword_5d4594_1096288, sizeof(dword_5d4594_1096288), 1},
	{0x5D4594 + 2386492, (void*)&nox_alloc_tradeSession_2386492, sizeof(nox_alloc_tradeSession_2386492), 1},
	{0x5D4594 + 531656, (void*)&dword_5d4594_531656, sizeof(dword_5d4594_531656), 1},
	{0x5D4594 + 2614264, (void*)&dword_5d4594_2614264, sizeof(dword_5d4594_2614264), 1},
	{0x5D4594 + 3799488, (void*)&func_5d4594_3799488, sizeof(func_5d4594_3799488), 1},
	{0x5D4594 + 1308160, (void*)&dword_5d4594_1308160, sizeof(dword_5d4594_1308160), 1},
	{0x5D4594 + 1309824, (void*)&dword_5d4594_1309824, sizeof(dword_5d4594_1309824), 1},
	{0x5D4594 + 1308092, (void*)&nox_wnd_xxx_1308092, sizeof(nox_wnd_xxx_1308092), 1},
	{0x5D4594 + 2487620, (void*)&dword_5d4594_2487620, sizeof(dword_5d4594_2487620), 1},
	{0x5D4594 + 1321208, (void*)&dword_5d4594_1321208, sizeof(dword_5d4594_1321208), 1},
	{0x5D4594 + 1047936, (void*)&dword_5d4594_1047936, sizeof(dword_5d4594_1047936), 1},
	{0x5D4594 + 2516356, (void*)&dword_5d4594_2516356, sizeof(dword_5d4594_2516356), 1},
	{0x5D4594 + 1062488, (void*)&dword_5d4594_1062488, sizeof(dword_5d4594_1062488), 1},
	{0x5D4594 + 1550912, (void*)&dword_5d4594_1550912, sizeof(dword_5d4594_1550912), 1},
	{0x5D4594 + 1569748, (void*)&nox_alloc_magicWall_1569748, sizeof(nox_alloc_magicWall_1569748), 1},
	{0x5D4594 + 1563664, (void*)&dword_5d4594_1563664, sizeof(dword_5d4594_1563664), 1},
	{0x5D4594 + 830292, (void*)&dword_5d4594_830292, sizeof(dword_5d4594_830292), 1},
	{0x5D4594 + 2386564, (void*)&dword_5d4594_2386564, sizeof(dword_5d4594_2386564), 1},
	{0x5D4594 + 1046576, (void*)&dword_5d4594_1046576, sizeof(dword_5d4594_1046576), 1},
	{0x5D4594 + 1062452, (void*)&dword_5d4594_1062452, sizeof(dword_5d4594_1062452), 1},
	{0x5D4594 + 2386920, (void*)&dword_5d4594_2386920, sizeof(dword_5d4594_2386920), 1},
	{0x587000 + 311372, (void*)&dword_587000_311372, sizeof(dword_587000_311372), 1},
	{0x5D4594 + 2386568, (void*)&nox_alloc_springs_2386568, sizeof(nox_alloc_springs_2386568), 1},
	{0x5D4594 + 787144, (void*)&dword_5d4594_787144, sizeof(dword_5d4594_787144), 1},
	{0x5D4594 + 1048144, (void*)&dword_5d4594_1048144, sizeof(dword_5d4594_1048144), 1},
	{0x5D4594 + 1307720, (void*)&dword_5d4594_1307720, sizeof(dword_5d4594_1307720), 1},
	{0x5D4594 + 1567928, (void*)&dword_5d4594_1567928, sizeof(dword_5d4594_1567928), 1},
	{0x5D4594 + 2489432, (void*)&dword_5d4594_2489432, sizeof(dword_5d4594_2489432), 1},
	{0x5D4594 + 252276, (void*)&dword_5d4594_252276, sizeof(dword_5d4594_252276), 1},
	{0x5D4594 + 2487912, (void*)&dword_5d4594_2487912, sizeof(dword_5d4594_2487912), 1},
	{0x5D4594 + 2386220, (void*)&nox_alloc_monsterList_2386220, sizeof(nox_alloc_monsterList_2386220), 1},
	{0x5D4594 + 2386192, (void*)&nox_monsterListen_2386192, sizeof(nox_monsterListen_2386192), 1},
	{0x5D4594 + 1568020, (void*)&nox_alloc_respawn_1568020, sizeof(nox_alloc_respawn_1568020), 1},
	{0x5D4594 + 816448, (void*)&dword_5d4594_816448, sizeof(dword_5d4594_816448), 1},
	{0x5D4594 + 815704, (void*)&dword_5d4594_815704, sizeof(dword_5d4594_815704), 1},
	{0x5D4594 + 1096496, (void*)&dword_5d4594_1096496, sizeof(dword_5d4594_1096496), 1},
	{0x5D4594 + 1308164, (void*)&dword_5d4594_1308164, sizeof(dword_5d4594_1308164), 1},
	{0x5D4594 + 1046624, (void*)&dword_5d4594_1046624, sizeof(dword_5d4594_1046624), 1},
	{0x5D4594 + 1305748, (void*)&dword_5d4594_1305748, sizeof(dword_5d4594_1305748), 1},
	{0x5D4594 + 1090044, (void*)&dword_5d4594_1090044, sizeof(dword_5d4594_1090044), 1},
	{0x5D4594 + 1197328, (void*)&dword_5d4594_1197328, sizeof(dword_5d4594_1197328), 1},
	{0x5D4594 + 1303472, (void*)&dword_5d4594_1303472, sizeof(dword_5d4594_1303472), 1},
	{0x5D4594 + 839884, (void*)&dword_5d4594_839884, sizeof(dword_5d4594_839884), 1},
	{0x5D4594 + 1523036, (void*)&dword_5d4594_1523036, sizeof(dword_5d4594_1523036), 1},
	{0x587000 + 80832, (void*)&dword_587000_80832, sizeof(dword_587000_80832), 1},
	{0x5D4594 + 1062468, (void*)&dword_5d4594_1062468, sizeof(dword_5d4594_1062468), 1},
	{0x5D4594 + 1046536, (void*)&dword_5d4594_1046536, sizeof(dword_5d4594_1046536), 1},
	{0x587000 + 93196, (void*)&dword_587000_93196, sizeof(dword_587000_93196), 1},
	{0x5D4594 + 3798788, (void*)&nox_pixbuffer_3798788, sizeof(nox_pixbuffer_3798788), 1},
	{0x587000 + 173336, (void*)&dword_587000_173336, sizeof(dword_587000_173336), 1},
	{0x5D4594 + 1064860, (void*)&dword_5d4594_1064860, sizeof(dword_5d4594_1064860), 1},
	{0x5D4594 + 826036, (void*)&dword_5d4594_826036, sizeof(dword_5d4594_826036), 1},
	{0x5D4594 + 1197352, (void*)&dword_5d4594_1197352, sizeof(dword_5d4594_1197352), 1},
	{0x5D4594 + 1197336, (void*)&dword_5d4594_1197336, sizeof(dword_5d4594_1197336), 1},
	{0x5D4594 + 527684, (void*)&dword_5d4594_527684, sizeof(dword_5d4594_527684), 1},
	{0x5D4594 + 1321800, (void*)&dword_5d4594_1321800, sizeof(dword_5d4594_1321800), 1},
	{0x5D4594 + 1045436, (void*)&dword_5d4594_1045436, sizeof(dword_5d4594_1045436), 1},
	{0x5D4594 + 1097188, (void*)&dword_5d4594_1097188, sizeof(dword_5d4594_1097188), 1},
	{0x5D4594 + 2388640, (void*)&dword_5d4594_2388640, sizeof(dword_5d4594_2388640), 1},
	{0x5D4594 + 829520, (void*)&nox_wnd_xxx_829520, sizeof(nox_wnd_xxx_829520), 1},
	{0x5D4594 + 1197356, (void*)&dword_5d4594_1197356, sizeof(dword_5d4594_1197356), 1},
	{0x5D4594 + 2523908, (void*)&nox_alloc_debugData_2523908, sizeof(nox_alloc_debugData_2523908), 1},
	{0x5D4594 + 1064820, (void*)&dword_5d4594_1064820, sizeof(dword_5d4594_1064820), 1},
	{0x5D4594 + 2487240, (void*)&dword_5d4594_2487240, sizeof(dword_5d4594_2487240), 1},
	{0x5D4594 + 1303468, (void*)&dword_5d4594_1303468, sizeof(dword_5d4594_1303468), 1},
	{0x5D4594 + 741356, (void*)&dword_5d4594_741356, sizeof(dword_5d4594_741356), 1},
	{0x5D4594 + 1563344, (void*)&nox_alloc_objMem_1563344, sizeof(nox_alloc_objMem_1563344), 1},
	{0x5D4594 + 1096252, (void*)&dword_5d4594_1096252, sizeof(dword_5d4594_1096252), 1},
	{0x5D4594 + 1064864, (void*)&dword_5d4594_1064864, sizeof(dword_5d4594_1064864), 1},
	{0x5D4594 + 1301780, (void*)&dword_5d4594_1301780, sizeof(dword_5d4594_1301780), 1},
	{0x587000 + 154960, (void*)&dword_587000_154960, sizeof(dword_587000_154960), 1},
	{0x5D4594 + 1203836, (void*)&dword_5d4594_1203836, sizeof(dword_5d4594_1203836), 1},
	{0x5D4594 + 816356, (void*)&dword_5d4594_816356, sizeof(dword_5d4594_816356), 1},
	{0x5D4594 + 1565616, (void*)&dword_5d4594_1565616, sizeof(dword_5d4594_1565616), 1},
	{0x5D4594 + 3799476, (void*)&dword_5d4594_3799476, sizeof(dword_5d4594_3799476), 1},
	{0x5D4594 + 741332, (void*)&dword_5d4594_741332, sizeof(dword_5d4594_741332), 1},
	{0x5D4594 + 3799468, (void*)&dword_5d4594_3799468, sizeof(dword_5d4594_3799468), 1},
	{0x5D4594 + 1548700, (void*)&dword_5d4594_1548700, sizeof(dword_5d4594_1548700), 1},
	{0x587000 + 154948, (void*)&dword_587000_154948, sizeof(dword_587000_154948), 1},
	{0x5D4594 + 2487708, (void*)&dword_5d4594_2487708, sizeof(dword_5d4594_2487708), 1},
	{0x5D4594 + 826032, (void*)&dword_5d4594_826032, sizeof(dword_5d4594_826032), 1},
	{0x5D4594 + 1203840, (void*)&dword_5d4594_1203840, sizeof(dword_5d4594_1203840), 1},
	{0x5D4594 + 2523744, (void*)&dword_5d4594_2523744, sizeof(dword_5d4594_2523744), 1},
	{0x5D4594 + 741292, (void*)&dword_5d4594_741292, sizeof(dword_5d4594_741292), 1},
	{0x5D4594 + 3799556, (void*)&dword_5d4594_3799556, sizeof(dword_5d4594_3799556), 1},
	{0x5D4594 + 830244, (void*)&nox_wnd_xxx_830244, sizeof(nox_wnd_xxx_830244), 1},
	{0x587000 + 173328, (void*)&dword_587000_173328, sizeof(dword_587000_173328), 1},
	{0x5D4594 + 2513916, (void*)&dword_5d4594_2513916, sizeof(dword_5d4594_2513916), 1},
	{0x5D4594 + 831220, (void*)&dword_5d4594_831220, sizeof(dword_5d4594_831220), 1},
	{0x5D4594 + 1045460, (void*)&dword_5d4594_1045460, sizeof(dword_5d4594_1045460), 1},
	{0x587000 + 122848, (void*)&dword_587000_122848, sizeof(dword_587000_122848), 1},
	{0x5D4594 + 588068, (void*)&dword_5d4594_588068, sizeof(dword_5d4594_588068), 1},
	{0x5D4594 + 1321224, (void*)&dword_5d4594_1321224, sizeof(dword_5d4594_1321224), 1},
	{0x5D4594 + 1046932, (void*)&dword_5d4594_1046932, sizeof(dword_5d4594_1046932), 1},
	{0x5D4594 + 1309784, (void*)&dword_5d4594_1309784, sizeof(dword_5d4594_1309784), 1},
	{0x5D4594 + 741364, (void*)&dword_5d4594_741364, sizeof(dword_5d4594_741364), 1},
	{0x5D4594 + 1046528, (void*)&dword_5d4594_1046528, sizeof(dword_5d4594_1046528), 1},
	{0x5D4594 + 1046948, (void*)&dword_5d4594_1046948, sizeof(dword_5d4594_1046948), 1},
	{0x5D4594 + 3798776, (void*)&nox_pixbuffer_rows_3798776, sizeof(nox_pixbuffer_rows_3798776), 1},
	{0x5D4594 + 1312476, (void*)&dword_5d4594_1312476, sizeof(dword_5d4594_1312476), 1},
	{0x5D4594 + 3807160, (void*)&dword_5d4594_3807160, sizeof(dword_5d4594_3807160), 1},
	{0x5D4594 + 823700, (void*)&dword_5d4594_823700, sizeof(dword_5d4594_823700), 1},
	{0x5D4594 + 1064824, (void*)&dword_5d4594_1064824, sizeof(dword_5d4594_1064824), 1},
	{0x5D4594 + 608316, (void*)&dword_5d4594_608316, sizeof(dword_5d4594_608316), 1},
	{0x5D4594 + 1096500, (void*)&dword_5d4594_1096500, sizeof(dword_5d4594_1096500), 1},
	{0x5D4594 + 830864, (void*)&dword_5d4594_830864, sizeof(dword_5d4594_830864), 1},
	{0x587000 + 202404, (void*)&dword_587000_202404, sizeof(dword_587000_202404), 1},
	{0x5D4594 + 1047528, (void*)&dword_5d4594_1047528, sizeof(dword_5d4594_1047528), 1},
	{0x5D4594 + 1319056, (void*)&dword_5d4594_1319056, sizeof(dword_5d4594_1319056), 1},
	{0x5D4594 + 1197332, (void*)&dword_5d4594_1197332, sizeof(dword_5d4594_1197332), 1},
	{0x5D4594 + 1320932, (void*)&dword_5d4594_1320932, sizeof(dword_5d4594_1320932), 1},
	{0x5D4594 + 1307748, (void*)&nox_wnd_xxx_1307748, sizeof(nox_wnd_xxx_1307748), 1},
	{0x5D4594 + 1301840, (void*)&dword_5d4594_1301840, sizeof(dword_5d4594_1301840), 1},
	{0x5D4594 + 251720, (void*)&dword_5d4594_251720, sizeof(dword_5d4594_251720), 1},
	{0x5D4594 + 1321032, (void*)&dword_5d4594_1321032, sizeof(dword_5d4594_1321032), 1},
	{0x5D4594 + 2487552, (void*)&dword_5d4594_2487552, sizeof(dword_5d4594_2487552), 1},
	{0x5D4594 + 1098592, (void*)&dword_5d4594_1098592, sizeof(dword_5d4594_1098592), 1},
	{0x587000 + 136184, (void*)&dword_587000_136184, sizeof(dword_587000_136184), 1},
	{0x5D4594 + 1193184, (void*)&dword_5d4594_1193184, sizeof(dword_5d4594_1193184), 1},
	{0x5D4594 + 1189600, (void*)&dword_5d4594_1189600, sizeof(dword_5d4594_1189600), 1},
	{0x5D4594 + 1599060, (void*)&dword_5d4594_1599060, sizeof(dword_5d4594_1599060), 1},
	{0x5D4594 + 1046500, (void*)&dword_5d4594_1046500, sizeof(dword_5d4594_1046500), 1},
	{0x5D4594 + 1046636, (void*)&dword_5d4594_1046636, sizeof(dword_5d4594_1046636), 1},
	{0x5D4594 + 1307736, (void*)&dword_5d4594_1307736, sizeof(dword_5d4594_1307736), 1},
	{0x5D4594 + 787212, (void*)&dword_5d4594_787212, sizeof(dword_5d4594_787212), 1},
	{0x5D4594 + 829516, (void*)&dword_5d4594_829516, sizeof(dword_5d4594_829516), 1},
	{0x5D4594 + 832520, (void*)&dword_5d4594_832520, sizeof(dword_5d4594_832520), 1},
	{0x5D4594 + 832500, (void*)&dword_5d4594_832500, sizeof(dword_5d4594_832500), 1},
	{0x5D4594 + 832528, (void*)&dword_5d4594_832528, sizeof(dword_5d4594_832528), 1},
	{0x5D4594 + 3798648, (void*)&dword_5d4594_3798648, sizeof(dword_5d4594_3798648), 1},
	{0x5D4594 + 1045688, (void*)&dword_5d4594_1045688, sizeof(dword_5d4594_1045688), 1},
	{0x5D4594 + 823776, (void*)&dword_5d4594_823776, sizeof(dword_5d4594_823776), 1},
	{0x5D4594 + 2487980, (void*)&dword_5d4594_2487980, sizeof(dword_5d4594_2487980), 1},
	{0x5D4594 + 1599592, (void*)&dword_5d4594_1599592, sizeof(dword_5d4594_1599592), 1},
	{0x5D4594 + 1599556, (void*)&dword_5d4594_1599556, sizeof(dword_5d4594_1599556), 1},
	{0x5D4594 + 2523896, (void*)&nox_alloc_itemGroupElem_2523896, sizeof(nox_alloc_itemGroupElem_2523896), 1},
	{0x5D4594 + 811104, (void*)&dword_5d4594_811104, sizeof(dword_5d4594_811104), 1},
	{0x5D4594 + 1309776, (void*)&dword_5d4594_1309776, sizeof(dword_5d4594_1309776), 1},
	{0x5D4594 + 832524, (void*)&dword_5d4594_832524, sizeof(dword_5d4594_832524), 1},
	{0x5D4594 + 2386188, (void*)&nox_alloc_monsterListen_2386188, sizeof(nox_alloc_monsterListen_2386188), 1},
	{0x5D4594 + 832512, (void*)&dword_5d4594_832512, sizeof(dword_5d4594_832512), 1},
	{0x5D4594 + 832496, (void*)&dword_5d4594_832496, sizeof(dword_5d4594_832496), 1},
	{0x5D4594 + 806052, (void*)&dword_5d4594_806052, sizeof(dword_5d4594_806052), 1},
	{0x587000 + 132136, (void*)&dword_587000_132136, sizeof(dword_587000_132136), 1},
	{0x5D4594 + 832516, (void*)&dword_5d4594_832516, sizeof(dword_5d4594_832516), 1},
	{0x5D4594 + 829512, (void*)&dword_5d4594_829512, sizeof(dword_5d4594_829512), 1},
	{0x5D4594 + 1046520, (void*)&dword_5d4594_1046520, sizeof(dword_5d4594_1046520), 1},
	{0x5D4594 + 1197364, (void*)&nox_alloc_chat_1197364, sizeof(nox_alloc_chat_1197364), 1},
	{0x5D4594 + 1096512, (void*)&dword_5d4594_1096512, sizeof(dword_5d4594_1096512), 1},
	{0x5D4594 + 1049532, (void*)&dword_5d4594_1049532, sizeof(dword_5d4594_1049532), 1},
	{0x5D4594 + 814996, (void*)&dword_5d4594_814996, sizeof(dword_5d4594_814996), 1},
	{0x587000 + 80844, (void*)&nox_client_renderBubbles_80844, sizeof(nox_client_renderBubbles_80844), 1},
	{0x5D4594 + 3835356, (void*)&dword_5d4594_3835356, sizeof(dword_5d4594_3835356), 1},
	{0x5D4594 + 1090100, (void*)&dword_5d4594_1090100, sizeof(dword_5d4594_1090100), 1},
	{0x5D4594 + 832508, (void*)&dword_5d4594_832508, sizeof(dword_5d4594_832508), 1},
	{0x5D4594 + 1203864, (void*)&dword_5d4594_1203864, sizeof(dword_5d4594_1203864), 1},
	{0x5D4594 + 830276, (void*)&dword_5d4594_830276, sizeof(dword_5d4594_830276), 1},
	{0x5D4594 + 832504, (void*)&dword_5d4594_832504, sizeof(dword_5d4594_832504), 1},
	{0x5D4594 + 3804680, (void*)&dword_5d4594_3804680, sizeof(dword_5d4594_3804680), 1},
	{0x5D4594 + 3798780, (void*)&nox_pixbuffer_3798780, sizeof(nox_pixbuffer_3798780), 1},
	{0x5D4594 + 1309708, (void*)&dword_5d4594_1309708, sizeof(dword_5d4594_1309708), 1},
	{0x5D4594 + 1522932, (void*)&dword_5d4594_1522932, sizeof(dword_5d4594_1522932), 1},
	{0x5D4594 + 2487880, (void*)&dword_5d4594_2487880, sizeof(dword_5d4594_2487880), 1},
	{0x5D4594 + 831224, (void*)&dword_5d4594_831224, sizeof(dword_5d4594_831224), 1},
	{0x5D4594 + 1098580, (void*)&dword_5d4594_1098580, sizeof(dword_5d4594_1098580), 1},
	{0x5D4594 + 830264, (void*)&dword_5d4594_830264, sizeof(dword_5d4594_830264), 1},
	{0x5D4594 + 1046928, (void*)&dword_5d4594_1046928, sizeof(dword_5d4594_1046928), 1},
	{0x5D4594 + 2487852, (void*)&dword_5d4594_2487852, sizeof(dword_5d4594_2487852), 1},
	{0x5D4594 + 251496, (void*)&dword_5d4594_251496, sizeof(dword_5d4594_251496), 1},
	{0x5D4594 + 829504, (void*)&dword_5d4594_829504, sizeof(dword_5d4594_829504), 1},
	{0x5D4594 + 1319264, (void*)&dword_5d4594_1319264, sizeof(dword_5d4594_1319264), 1},
	{0x5D4594 + 1193704, (void*)&dword_5d4594_1193704, sizeof(dword_5d4594_1193704), 1},
	{0x5D4594 + 1217452, (void*)&dword_5d4594_1217452, sizeof(dword_5d4594_1217452), 1},
	{0x587000 + 154940, (void*)&func_587000_154940, sizeof(func_587000_154940), 1},
	{0x5D4594 + 825744, (void*)&dword_5d4594_825744, sizeof(dword_5d4594_825744), 1},
	{0x5D4594 + 1045508, (void*)&dword_5d4594_1045508, sizeof(dword_5d4594_1045508), 1},
	{0x5D4594 + 1046504, (void*)&dword_5d4594_1046504, sizeof(dword_5d4594_1046504), 1},
	{0x5D4594 + 832492, (void*)&dword_5d4594_832492, sizeof(dword_5d4594_832492), 1},
	{0x5D4594 + 816372, (void*)&dword_5d4594_816372, sizeof(dword_5d4594_816372), 1},
	{0x5D4594 + 1321044, (void*)&dword_5d4594_1321044, sizeof(dword_5d4594_1321044), 1},
	{0x5D4594 + 2487848, (void*)&dword_5d4594_2487848, sizeof(dword_5d4594_2487848), 1},
	{0x5D4594 + 588084, (void*)&dword_5d4594_588084, sizeof(dword_5d4594_588084), 1},
	{0x5D4594 + 1047512, (void*)&dword_5d4594_1047512, sizeof(dword_5d4594_1047512), 1},
	{0x5D4594 + 805852, (void*)&nox_client_renderGlow_805852, sizeof(nox_client_renderGlow_805852), 1},
	{0x5D4594 + 588120, (void*)&dword_5d4594_588120, sizeof(dword_5d4594_588120), 1},
	{0x5D4594 + 2650680, (void*)&dword_5d4594_2650680, sizeof(dword_5d4594_2650680), 1},
	{0x5D4594 + 832532, (void*)&dword_5d4594_832532, sizeof(dword_5d4594_832532), 1},
	{0x5D4594 + 3620, (void*)&dword_5d4594_3620, sizeof(dword_5d4594_3620), 1},
	{0x5D4594 + 3798716, (void*)&dword_5d4594_3798716, sizeof(dword_5d4594_3798716), 1},
	{0x5D4594 + 1046656, (void*)&dword_5d4594_1046656, sizeof(dword_5d4594_1046656), 1},
	{0x5D4594 + 1319232, (void*)&dword_5d4594_1319232, sizeof(dword_5d4594_1319232), 1},
	{0x587000 + 173332, (void*)&dword_587000_173332, sizeof(dword_587000_173332), 1},
	{0x5D4594 + 1193712, (void*)&dword_5d4594_1193712, sizeof(dword_5d4594_1193712), 1},
	{0x5D4594 + 2386160, (void*)&dword_5d4594_2386160, sizeof(dword_5d4594_2386160), 1},
	{0x5D4594 + 787172, (void*)&dword_5d4594_787172, sizeof(dword_5d4594_787172), 1},
	{0x5D4594 + 1321216, (void*)&dword_5d4594_1321216, sizeof(dword_5d4594_1321216), 1},
	{0x587000 + 80824, (void*)&nox_client_translucentConsole_80824, sizeof(nox_client_translucentConsole_80824), 1},
	{0x587000 + 312788, (void*)&dword_587000_312788, sizeof(dword_587000_312788), 1},
	{0x5D4594 + 1599712, (void*)&dword_5d4594_1599712, sizeof(dword_5d4594_1599712), 1},
	{0x5D4594 + 1049484, (void*)&dword_5d4594_1049484, sizeof(dword_5d4594_1049484), 1},
	{0x5D4594 + 1200804, (void*)&dword_5d4594_1200804, sizeof(dword_5d4594_1200804), 1},
	{0x5D4594 + 1312472, (void*)&dword_5d4594_1312472, sizeof(dword_5d4594_1312472), 1},
	{0x5D4594 + 1309740, (void*)&nox_wnd_xxx_1309740, sizeof(nox_wnd_xxx_1309740), 1},
	{0x5D4594 + 1096508, (void*)&dword_5d4594_1096508, sizeof(dword_5d4594_1096508), 1},
	{0x5D4594 + 830872, (void*)&dword_5d4594_830872, sizeof(dword_5d4594_830872), 1},
	{0x5D4594 + 2386924, (void*)&dword_5d4594_2386924, sizeof(dword_5d4594_2386924), 1},
	{0x5D4594 + 815212, (void*)&nox_wnd_xxx_815212, sizeof(nox_wnd_xxx_815212), 1},
	{0x587000 + 80836, (void*)&nox_client_fadeObjects_80836, sizeof(nox_client_fadeObjects_80836), 1},
	{0x5D4594 + 1522616, (void*)&dword_5d4594_1522616, sizeof(dword_5d4594_1522616), 1},
	{0x5D4594 + 3596, (void*)&nox_server_connectionType_3596, sizeof(nox_server_connectionType_3596), 1},
	{0x5D4594 + 815040, (void*)&nox_wnd_xxx_815040, sizeof(nox_wnd_xxx_815040), 1},
	{0x5D4594 + 805984, (void*)&dword_5d4594_805984, sizeof(dword_5d4594_805984), 1},
	{0x5D4594 + 1064900, (void*)&dword_5d4594_1064900, sizeof(dword_5d4594_1064900), 1},
	{0x5D4594 + 1309716, (void*)&dword_5d4594_1309716, sizeof(dword_5d4594_1309716), 1},
	{0x5D4594 + 2487532, (void*)&dword_5d4594_2487532, sizeof(dword_5d4594_2487532), 1},
	{0x5D4594 + 1599692, (void*)&dword_5d4594_1599692, sizeof(dword_5d4594_1599692), 1},
	{0x5D4594 + 1563660, (void*)&dword_5d4594_1563660, sizeof(dword_5d4594_1563660), 1},
	{0x587000 + 312784, (void*)&dword_587000_312784, sizeof(dword_587000_312784), 1},
	{0x5D4594 + 1193152, (void*)&nox_client_lockHighResFloors_1193152, sizeof(nox_client_lockHighResFloors_1193152), 1},
	{0x587000 + 311480, (void*)&dword_587000_311480, sizeof(dword_587000_311480), 1},
	{0x5D4594 + 1309780, (void*)&dword_5d4594_1309780, sizeof(dword_5d4594_1309780), 1},
	{0x5D4594 + 2487984, (void*)&dword_5d4594_2487984, sizeof(dword_5d4594_2487984), 1},
	{0x5D4594 + 1307768, (void*)&dword_5d4594_1307768, sizeof(dword_5d4594_1307768), 1},
	{0x5D4594 + 1046516, (void*)&dword_5d4594_1046516, sizeof(dword_5d4594_1046516), 1},
	{0x5D4594 + 2487248, (void*)&dword_5d4594_2487248, sizeof(dword_5d4594_2487248), 1},
	{0x5D4594 + 3804668, (void*)&dword_5d4594_3804668, sizeof(dword_5d4594_3804668), 1},
	{0x5D4594 + 1569664, (void*)&dword_5d4594_1569664, sizeof(dword_5d4594_1569664), 1},
	{0x5D4594 + 529324, (void*)&dword_5d4594_529324, sizeof(dword_5d4594_529324), 1},
	{0x5D4594 + 810636, (void*)&dword_5d4594_810636, sizeof(dword_5d4594_810636), 1},
	{0x5D4594 + 1313792, (void*)&dword_5d4594_1313792, sizeof(dword_5d4594_1313792), 1},
	{0x5D4594 + 251508, (void*)&dword_5d4594_251508, sizeof(dword_5d4594_251508), 1},
	{0x587000 + 312800, (void*)&dword_587000_312800, sizeof(dword_587000_312800), 1},
	{0x5D4594 + 3821968, (void*)&dword_5d4594_3821968, sizeof(dword_5d4594_3821968), 1},
	{0x587000 + 312816, (void*)&dword_587000_312816, sizeof(dword_587000_312816), 1},
	{0x5D4594 + 815708, (void*)&dword_5d4594_815708, sizeof(dword_5d4594_815708), 1},
	{0x5D4594 + 251744, (void*)&dword_5d4594_251744, sizeof(dword_5d4594_251744), 1},
	{0x5D4594 + 2491616, (void*)&dword_5d4594_2491616, sizeof(dword_5d4594_2491616), 1},
	{0x5D4594 + 1316492, (void*)&dword_5d4594_1316492, sizeof(dword_5d4594_1316492), 1},
	{0x5D4594 + 1599548, (void*)&dword_5d4594_1599548, sizeof(dword_5d4594_1599548), 1},
	{0x5D4594 + 1301828, (void*)&dword_5d4594_1301828, sizeof(dword_5d4594_1301828), 1},
	{0x5D4594 + 1062516, (void*)&dword_5d4594_1062516, sizeof(dword_5d4594_1062516), 1},
	{0x5D4594 + 1599480, (void*)&dword_5d4594_1599480, sizeof(dword_5d4594_1599480), 1},
	{0x5D4594 + 251504, (void*)&dword_5d4594_251504, sizeof(dword_5d4594_251504), 1},
	{0x587000 + 312804, (void*)&dword_587000_312804, sizeof(dword_587000_312804), 1},
	{0x5D4594 + 251556, (void*)&dword_5d4594_251556, sizeof(dword_5d4594_251556), 1},
	{0x5D4594 + 2487560, (void*)&dword_5d4594_2487560, sizeof(dword_5d4594_2487560), 1},
	{0x5D4594 + 805836, (void*)&dword_5d4594_805836, sizeof(dword_5d4594_805836), 1},
	{0x5D4594 + 816460, (void*)&dword_5d4594_816460, sizeof(dword_5d4594_816460), 1},
	{0x5D4594 + 814988, (void*)&dword_5d4594_814988, sizeof(dword_5d4594_814988), 1},
	{0x5D4594 + 3844304, (void*)&dword_5d4594_3844304, sizeof(dword_5d4594_3844304), 1},
	{0x5D4594 + 806048, (void*)&nox_screenParticles_head, sizeof(nox_screenParticles_head), 1},
	{0x5D4594 + 839888, (void*)&dword_5d4594_839888, sizeof(dword_5d4594_839888), 1},
	{0x587000 + 87408, (void*)&dword_587000_87408, sizeof(dword_587000_87408), 1},
	{0x5D4594 + 3799508, (void*)&dword_5d4594_3799508, sizeof(dword_5d4594_3799508), 1},
	{0x5D4594 + 4808, (void*)&dword_5d4594_4808, sizeof(dword_5d4594_4808), 1},
	{0x5D4594 + 832536, (void*)&dword_5d4594_832536, sizeof(dword_5d4594_832536), 1},
	{0x5D4594 + 1046952, (void*)&dword_5d4594_1046952, sizeof(dword_5d4594_1046952), 1},
	{0x5D4594 + 251552, (void*)&dword_5d4594_251552, sizeof(dword_5d4594_251552), 1},
	{0x5D4594 + 3798812, (void*)&dword_5d4594_3798812, sizeof(dword_5d4594_3798812), 1},
	{0x5D4594 + 1307744, (void*)&dword_5d4594_1307744, sizeof(dword_5d4594_1307744), 1},
	{0x5D4594 + 1522892, (void*)&dword_5d4594_1522892, sizeof(dword_5d4594_1522892), 1},
	{0x5D4594 + 3798800, (void*)&dword_5d4594_3798800, sizeof(dword_5d4594_3798800), 1},
	{0x5D4594 + 1599532, (void*)&dword_5d4594_1599532, sizeof(dword_5d4594_1599532), 1},
	{0x5D4594 + 1193584, (void*)&dword_5d4594_1193584, sizeof(dword_5d4594_1193584), 1},
	{0x5D4594 + 251700, (void*)&dword_5d4594_251700, sizeof(dword_5d4594_251700), 1},
	{0x5D4594 + 2386572, (void*)&dword_5d4594_2386572, sizeof(dword_5d4594_2386572), 1},
	{0x587000 + 80812, (void*)&nox_client_drawFrontWalls_80812, sizeof(nox_client_drawFrontWalls_80812), 1},
	{0x587000 + 81128, (void*)&dword_587000_81128, sizeof(dword_587000_81128), 1},
	{0x5D4594 + 2487540, (void*)&dword_5d4594_2487540, sizeof(dword_5d4594_2487540), 1},
	{0x5D4594 + 1550916, (void*)&dword_5d4594_1550916, sizeof(dword_5d4594_1550916), 1},
	{0x5D4594 + 3801808, (void*)&nox_pitch_3801808, sizeof(nox_pitch_3801808), 1},
	{0x5D4594 + 1301832, (void*)&dword_5d4594_1301832, sizeof(dword_5d4594_1301832), 1},
	{0x587000 + 184452, (void*)&dword_587000_184452, sizeof(dword_587000_184452), 1},
	{0x5D4594 + 251564, (void*)&dword_5d4594_251564, sizeof(dword_5d4594_251564), 1},
	{0x5D4594 + 1301836, (void*)&dword_5d4594_1301836, sizeof(dword_5d4594_1301836), 1},
	{0x5D4594 + 1301776, (void*)&dword_5d4594_1301776, sizeof(dword_5d4594_1301776), 1},
	{0x587000 + 122852, (void*)&dword_587000_122852, sizeof(dword_587000_122852), 1},
	{0x5D4594 + 1307308, (void*)&nox_wnd_xxx_1307308, sizeof(nox_wnd_xxx_1307308), 1},
	{0x5D4594 + 1309828, (void*)&dword_5d4594_1309828, sizeof(dword_5d4594_1309828), 1},
	{0x5D4594 + 754040, (void*)&dword_5d4594_754040, sizeof(dword_5d4594_754040), 1},
	{0x5D4594 + 528252, (void*)&dword_5d4594_528252, sizeof(dword_5d4594_528252), 1},
	{0x5D4594 + 806044, (void*)&nox_alloc_screenParticles_806044, sizeof(nox_alloc_screenParticles_806044), 1},
	{0x5D4594 + 3484, (void*)&dword_5d4594_3484, sizeof(dword_5d4594_3484), 1},
	{0x5D4594 + 2513920, (void*)&dword_5d4594_2513920, sizeof(dword_5d4594_2513920), 1},
	{0x5D4594 + 251560, (void*)&dword_5d4594_251560, sizeof(dword_5d4594_251560), 1},
	{0x587000 + 60044, (void*)&dword_587000_60044, sizeof(dword_587000_60044), 1},
	{0x5D4594 + 1047552, (void*)&dword_5d4594_1047552, sizeof(dword_5d4594_1047552), 1},
	{0x5D4594 + 1321236, (void*)&dword_5d4594_1321236, sizeof(dword_5d4594_1321236), 1},
	{0x5D4594 + 1599476, (void*)&dword_5d4594_1599476, sizeof(dword_5d4594_1599476), 1},
	{0x5D4594 + 1320992, (void*)&dword_5d4594_1320992, sizeof(dword_5d4594_1320992), 1},
	{0x5D4594 + 1309836, (void*)&dword_5d4594_1309836, sizeof(dword_5d4594_1309836), 1},
	{0x5D4594 + 1312460, (void*)&dword_5d4594_1312460, sizeof(dword_5d4594_1312460), 1},
	{0x5D4594 + 1309728, (void*)&dword_5d4594_1309728, sizeof(dword_5d4594_1309728), 1},
	{0x5D4594 + 3798828, (void*)&dword_5d4594_3798828, sizeof(dword_5d4594_3798828), 1},
	{0x5D4594 + 1046532, (void*)&dword_5d4594_1046532, sizeof(dword_5d4594_1046532), 1},
	{0x587000 + 312820, (void*)&dword_587000_312820, sizeof(dword_587000_312820), 1},
	{0x5D4594 + 741284, (void*)&dword_5d4594_741284, sizeof(dword_5d4594_741284), 1},
	{0x5D4594 + 1307204, (void*)&dword_5d4594_1307204, sizeof(dword_5d4594_1307204), 1},
	{0x5D4594 + 2649712, (void*)&dword_5d4594_2649712, sizeof(dword_5d4594_2649712), 1},
	{0x5D4594 + 2386500, (void*)&dword_5d4594_2386500, sizeof(dword_5d4594_2386500), 1},
	{0x5D4594 + 1599632, (void*)&dword_5d4594_1599632, sizeof(dword_5d4594_1599632), 1},
	{0x5D4594 + 1321204, (void*)&dword_5d4594_1321204, sizeof(dword_5d4594_1321204), 1},
	{0x5D4594 + 251600, (void*)&dword_5d4594_251600, sizeof(dword_5d4594_251600), 1},
	{0x5D4594 + 1309732, (void*)&dword_5d4594_1309732, sizeof(dword_5d4594_1309732), 1},
	{0x5D4594 + 251608, (void*)&dword_5d4594_251608, sizeof(dword_5d4594_251608), 1},
	{0x5D4594 + 805844, (void*)&nox_client_translucentFrontWalls_805844, sizeof(nox_client_translucentFrontWalls_805844), 1},
	{0x587000 + 292492, (void*)&dword_587000_292492, sizeof(dword_587000_292492), 1},
	{0x5D4594 + 2488660, (void*)&dword_5d4594_2488660, sizeof(dword_5d4594_2488660), 1},
	{0x5D4594 + 1522620, (void*)&dword_5d4594_1522620, sizeof(dword_5d4594_1522620), 1},
	{0x5D4594 + 1316408, (void*)&dword_5d4594_1316408, sizeof(dword_5d4594_1316408), 1},
	{0x5D4594 + 815724, (void*)&qword_5d4594_815724, sizeof(qword_5d4594_815724), 1},
	{0x581450 + 10176, (void*)&qword_581450_10176, sizeof(qword_581450_10176), 1},
	{0x5D4594 + 814956, (void*)&qword_5d4594_814956, sizeof(qword_5d4594_814956), 1},
	{0x5D4594 + 815068, (void*)&qword_5d4594_815068, sizeof(qword_5d4594_815068), 1},
	{0x581450 + 9512, (void*)&qword_581450_9512, sizeof(qword_581450_9512), 1},
	{0x581450 + 9552, (void*)&qword_581450_9552, sizeof(qword_581450_9552), 1},
	{0x581450 + 10392, (void*)&qword_581450_10392, sizeof(qword_581450_10392), 1},
	{0x581450 + 10256, (void*)&qword_581450_10256, sizeof(qword_581450_10256), 1},
	{0x5D4594 + 1567940, (void*)&qword_5d4594_1567940, sizeof(qword_5d4594_1567940), 1},
	{0x581450 + 9568, (void*)&qword_581450_9568, sizeof(qword_581450_9568), 1},
	{0x581450 + 9544, (void*)&qword_581450_9544, sizeof(qword_581450_9544), 1},
	{0x5D4594 + 2488604, (void*)&dword_5d4594_2488604, sizeof(dword_5d4594_2488604), 1},
	{0x5D4594 + 1320968, (void*)&dword_5d4594_1320968, sizeof(dword_5d4594_1320968), 1},
	{0x5D4594 + 1569756, (void*)&dword_5d4594_1569756, sizeof(dword_5d4594_1569756), 1},
	{0x5D4594 + 830148, (void*)&dword_5d4594_830148, sizeof(dword_5d4594_830148), 1},
	{0x5D4594 + 2386576, (void*)&dword_5d4594_2386576, sizeof(dword_5d4594_2386576), 1},
	{0x5D4594 + 1599624, (void*)&dword_5d4594_1599624, sizeof(dword_5d4594_1599624), 1},
	{0x5D4594 + 1197316, (void*)&dword_5d4594_1197316, sizeof(dword_5d4594_1197316), 1},
	{0x5D4594 + 1321240, (void*)&dword_5d4594_1321240, sizeof(dword_5d4594_1321240), 1},
	{0x5D4594 + 3632, (void*)&dword_5d4594_3632, sizeof(dword_5d4594_3632), 1},
	{0x5D4594 + 1569672, (void*)&dword_5d4594_1569672, sizeof(dword_5d4594_1569672), 1},
	{0x5D4594 + 1098624, (void*)&dword_5d4594_1098624, sizeof(dword_5d4594_1098624), 1},
	{0x587000 + 93164, (void*)&dword_587000_93164, sizeof(dword_587000_93164), 1},
	{0x5D4594 + 1049496, (void*)&dword_5d4594_1049496, sizeof(dword_5d4594_1049496), 1},
	{0x5D4594 + 830116, (void*)&dword_5d4594_830116, sizeof(dword_5d4594_830116), 1},
	{0x5D4594 + 1090276, (void*)&dword_5d4594_1090276, sizeof(dword_5d4594_1090276), 1},
	{0x5D4594 + 1062476, (void*)&dword_5d4594_1062476, sizeof(dword_5d4594_1062476), 1},
	{0x5D4594 + 816368, (void*)&dword_5d4594_816368, sizeof(dword_5d4594_816368), 1},
	{0x5D4594 + 2523912, (void*)&dword_5d4594_2523912, sizeof(dword_5d4594_2523912), 1},
	{0x5D4594 + 1047932, (void*)&dword_5d4594_1047932, sizeof(dword_5d4594_1047932), 1},
	{0x587000 + 264364, (void*)&dword_587000_264364, sizeof(dword_587000_264364), 1},
	{0x5D4594 + 3799544, (void*)&func_5d4594_3799544, sizeof(func_5d4594_3799544), 1},
	{0x5D4594 + 1311140, (void*)&dword_5d4594_1311140, sizeof(dword_5d4594_1311140), 1},
	{0x5D4594 + 1049512, (void*)&dword_5d4594_1049512, sizeof(dword_5d4594_1049512), 1},
	{0x5D4594 + 816340, (void*)&dword_5d4594_816340, sizeof(dword_5d4594_816340), 1},
	{0x5D4594 + 1047548, (void*)&dword_5d4594_1047548, sizeof(dword_5d4594_1047548), 1},
	{0x5D4594 + 1319060, (void*)&dword_5d4594_1319060, sizeof(dword_5d4594_1319060), 1},
	{0x5D4594 + 3798720, (void*)&dword_5d4594_3798720, sizeof(dword_5d4594_3798720), 1},
	{0x5D4594 + 2386212, (void*)&dword_5d4594_2386212, sizeof(dword_5d4594_2386212), 1},
	{0x5D4594 + 3843628, (void*)&dword_5d4594_3843628, sizeof(dword_5d4594_3843628), 0}, // TODO
	{0x5D4594 + 2386180, (void*)&dword_5d4594_2386180, sizeof(dword_5d4594_2386180), 1},
	{0x5D4594 + 529328, (void*)&dword_5d4594_529328, sizeof(dword_5d4594_529328), 1},
	{0x5D4594 + 2386496, (void*)&nox_alloc_tradeItems_2386496, sizeof(nox_alloc_tradeItems_2386496), 1},
	{0x5D4594 + 2487712, (void*)&dword_5d4594_2487712, sizeof(dword_5d4594_2487712), 1},
	{0x5D4594 + 816488, (void*)&dword_5d4594_816488, sizeof(dword_5d4594_816488), 1},
	{0x5D4594 + 787152, (void*)&dword_5d4594_787152, sizeof(dword_5d4594_787152), 1},
	{0x5D4594 + 831232, (void*)&dword_5d4594_831232, sizeof(dword_5d4594_831232), 1},
	{0x5D4594 + 815044, (void*)&dword_5d4594_815044, sizeof(dword_5d4594_815044), 1},
	{0x5D4594 + 1045432, (void*)&dword_5d4594_1045432, sizeof(dword_5d4594_1045432), 1},
	{0x5D4594 + 787208, (void*)&dword_5d4594_787208, sizeof(dword_5d4594_787208), 1},
	{0x5D4594 + 531648, (void*)&dword_5d4594_531648, sizeof(dword_5d4594_531648), 1},
	{0x5D4594 + 1522632, (void*)&dword_5d4594_1522632, sizeof(dword_5d4594_1522632), 1},
	{0x5D4594 + 1321252, (void*)&dword_5d4594_1321252, sizeof(dword_5d4594_1321252), 1},
	{0x5D4594 + 2650676, (void*)&dword_5d4594_2650676, sizeof(dword_5d4594_2650676), 1},
	{0x5D4594 + 2523780, (void*)&dword_5d4594_2523780, sizeof(dword_5d4594_2523780), 1},
	{0x5D4594 + 830140, (void*)&dword_5d4594_830140, sizeof(dword_5d4594_830140), 1},
	{0x587000 + 93156, (void*)&dword_587000_93156, sizeof(dword_587000_93156), 1},
	{0x5D4594 + 1307716, (void*)&dword_5d4594_1307716, sizeof(dword_5d4594_1307716), 1},
	{0x5D4594 + 1217460, (void*)&dword_5d4594_1217460, sizeof(dword_5d4594_1217460), 1},
	{0x5D4594 + 3624, (void*)&dword_5d4594_3624, sizeof(dword_5d4594_3624), 1},
	{0x587000 + 60356, (void*)&dword_587000_60356, sizeof(dword_587000_60356), 1},
	{0x5D4594 + 3798156, (void*)&dword_5d4594_3798156, sizeof(dword_5d4594_3798156), 1},
	{0x5D4594 + 1189596, (void*)&dword_5d4594_1189596, sizeof(dword_5d4594_1189596), 1},
	{0x5D4594 + 1312484, (void*)&dword_5d4594_1312484, sizeof(dword_5d4594_1312484), 1},
	{0x5D4594 + 1046924, (void*)&dword_5d4594_1046924, sizeof(dword_5d4594_1046924), 1},
	{0x5D4594 + 2495920, (void*)&dword_5d4594_2495920, sizeof(dword_5d4594_2495920), 1},
	{0x5D4594 + 815088, (void*)&dword_5d4594_815088, sizeof(dword_5d4594_815088), 1},
	{0x5D4594 + 2386184, (void*)&nox_alloc_visitNode_2386184, sizeof(nox_alloc_visitNode_2386184), 1},
	{0x587000 + 127004, (void*)&dword_587000_127004, sizeof(dword_587000_127004), 1},
	{0x5D4594 + 2487904, (void*)&dword_5d4594_2487904, sizeof(dword_5d4594_2487904), 1},
	{0x5D4594 + 1045468, (void*)&dword_5d4594_1045468, sizeof(dword_5d4594_1045468), 1},
	{0x5D4594 + 833720, (void*)&dword_5d4594_833720, sizeof(dword_5d4594_833720), 1},
	{0x5D4594 + 1096516, (void*)&dword_5d4594_1096516, sizeof(dword_5d4594_1096516), 1},
	{0x5D4594 + 3821964, (void*)&dword_5d4594_3821964, sizeof(dword_5d4594_3821964), 1},
	{0x5D4594 + 829484, (void*)&dword_5d4594_829484, sizeof(dword_5d4594_829484), 1},
	{0x5D4594 + 1599660, (void*)&dword_5d4594_1599660, sizeof(dword_5d4594_1599660), 1},
	{0x5D4594 + 814624, (void*)&dword_5d4594_814624, sizeof(dword_5d4594_814624), 1},
	{0x5D4594 + 1522612, (void*)&dword_5d4594_1522612, sizeof(dword_5d4594_1522612), 1},
	{0x5D4594 + 1189592, (void*)&dword_5d4594_1189592, sizeof(dword_5d4594_1189592), 1},
	{0x5D4594 + 2487524, (void*)&dword_5d4594_2487524, sizeof(dword_5d4594_2487524), 1},
	{0x5D4594 + 826028, (void*)&dword_5d4594_826028, sizeof(dword_5d4594_826028), 1},
	{0x5D4594 + 816492, (void*)&dword_5d4594_816492, sizeof(dword_5d4594_816492), 1},
	{0x5D4594 + 3801804, (void*)&dword_5d4594_3801804, sizeof(dword_5d4594_3801804), 1},
	{0x5D4594 + 1308088, (void*)&dword_5d4594_1308088, sizeof(dword_5d4594_1308088), 1},
	{0x5D4594 + 1599564, (void*)&dword_5d4594_1599564, sizeof(dword_5d4594_1599564), 1},
	{0x5D4594 + 1568024, (void*)&dword_5d4594_1568024, sizeof(dword_5d4594_1568024), 1},
	{0x5D4594 + 528256, (void*)&dword_5d4594_528256, sizeof(dword_5d4594_528256), 1},
	{0x5D4594 + 1045532, (void*)&dword_5d4594_1045532, sizeof(dword_5d4594_1045532), 1},
	{0x5D4594 + 3798816, (void*)&dword_5d4594_3798816, sizeof(dword_5d4594_3798816), 1},
	{0x5D4594 + 1096640, (void*)&dword_5d4594_1096640, sizeof(dword_5d4594_1096640), 1},
	{0x5D4594 + 1522604, (void*)&dword_5d4594_1522604, sizeof(dword_5d4594_1522604), 1},
	{0x5D4594 + 1312480, (void*)&dword_5d4594_1312480, sizeof(dword_5d4594_1312480), 1},
	{0x587000 + 154952, (void*)&nox_client_highResFloors_154952, sizeof(nox_client_highResFloors_154952), 1},
	{0x5D4594 + 2388648, (void*)&dword_5d4594_2388648, sizeof(dword_5d4594_2388648), 1},
	{0x5D4594 + 1062528, (void*)&dword_5d4594_1062528, sizeof(dword_5d4594_1062528), 1},
	{0x5D4594 + 3835396, (void*)&dword_5d4594_3835396, sizeof(dword_5d4594_3835396), 1},
	{0x5D4594 + 1062524, (void*)&dword_5d4594_1062524, sizeof(dword_5d4594_1062524), 1},
	{0x5D4594 + 3798808, (void*)&dword_5d4594_3798808, sizeof(dword_5d4594_3798808), 1},
	{0x5D4594 + 1301844, (void*)&nox_alloc_pixelSpan_1301844, sizeof(nox_alloc_pixelSpan_1301844), 1},
	{0x5D4594 + 3799492, (void*)&dword_5d4594_3799492, sizeof(dword_5d4594_3799492), 1},
	{0x5D4594 + 1197320, (void*)&dword_5d4594_1197320, sizeof(dword_5d4594_1197320), 1},
	{0x5D4594 + 3798832, (void*)&dword_5d4594_3798832, sizeof(dword_5d4594_3798832), 1},
	{0x5D4594 + 371692, (void*)&dword_5d4594_371692, sizeof(dword_5d4594_371692), 1},
	{0x5D4594 + 251540, (void*)&dword_5d4594_251540, sizeof(dword_5d4594_251540), 1},
	{0x5D4594 + 1319256, (void*)&dword_5d4594_1319256, sizeof(dword_5d4594_1319256), 1},
	{0x587000 + 166704, (void*)&dword_587000_166704, sizeof(dword_587000_166704), 1},
	{0x5D4594 + 1045536, (void*)&dword_5d4594_1045536, sizeof(dword_5d4594_1045536), 1},
	{0x5D4594 + 1193384, (void*)&dword_5d4594_1193384, sizeof(dword_5d4594_1193384), 1},
	{0x5D4594 + 1123532, (void*)&dword_5d4594_1123532, sizeof(dword_5d4594_1123532), 1},
	{0x5D4594 + 1046508, (void*)&dword_5d4594_1046508, sizeof(dword_5d4594_1046508), 1},
	{0x5D4594 + 2516344, (void*)&dword_5d4594_2516344, sizeof(dword_5d4594_2516344), 1},
	{0x5D4594 + 2618912, (void*)&dword_5d4594_2618912, sizeof(dword_5d4594_2618912), 1},
	{0x5D4594 + 1523024, (void*)&dword_5d4594_1523024, sizeof(dword_5d4594_1523024), 1},
	{0x5D4594 + 3798640, (void*)&dword_5d4594_3798640, sizeof(dword_5d4594_3798640), 1},
	{0x5D4594 + 1064912, (void*)&dword_5d4594_1064912, sizeof(dword_5d4594_1064912), 1},
	{0x5D4594 + 1599588, (void*)&dword_5d4594_1599588, sizeof(dword_5d4594_1599588), 1},
	{0x5D4594 + 1307776, (void*)&dword_5d4594_1307776, sizeof(dword_5d4594_1307776), 1},
	{0x5D4594 + 833712, (void*)&dword_5d4594_833712, sizeof(dword_5d4594_833712), 1},
	{0x5D4594 + 2487556, (void*)&dword_5d4594_2487556, sizeof(dword_5d4594_2487556), 1},
	{0x5D4594 + 816452, (void*)&dword_5d4594_816452, sizeof(dword_5d4594_816452), 1},
	{0x5D4594 + 3807156, (void*)&dword_5d4594_3807156, sizeof(dword_5d4594_3807156), 1},
	{0x5D4594 + 1045480, (void*)&dword_5d4594_1045480, sizeof(dword_5d4594_1045480), 1},
	{0x5D4594 + 1599596, (void*)&dword_5d4594_1599596, sizeof(dword_5d4594_1599596), 1},
	{0x5D4594 + 3821636, (void*)&dword_5d4594_3821636, sizeof(dword_5d4594_3821636), 1},
	{0x5D4594 + 1599576, (void*)&dword_5d4594_1599576, sizeof(dword_5d4594_1599576), 1},
	{0x5D4594 + 3821640, (void*)&dword_5d4594_3821640, sizeof(dword_5d4594_3821640), 1},
	{0x5D4594 + 1197324, (void*)&dword_5d4594_1197324, sizeof(dword_5d4594_1197324), 1},
	{0x5D4594 + 534808, (void*)&dword_5d4594_534808, sizeof(dword_5d4594_534808), 1},
	{0x5D4594 + 3798632, (void*)&dword_5d4594_3798632, sizeof(dword_5d4594_3798632), 1},
	{0x5D4594 + 1047520, (void*)&dword_5d4594_1047520, sizeof(dword_5d4594_1047520), 1},
	{0x5D4594 + 1193348, (void*)&dword_5d4594_1193348, sizeof(dword_5d4594_1193348), 1},
	{0x5D4594 + 1217456, (void*)&dword_5d4594_1217456, sizeof(dword_5d4594_1217456), 1},
	{0x5D4594 + 754056, (void*)&dword_5d4594_754056, sizeof(dword_5d4594_754056), 1},
	{0x587000 + 132132, (void*)&dword_587000_132132, sizeof(dword_587000_132132), 1},
	{0x5D4594 + 1522600, (void*)&dword_5d4594_1522600, sizeof(dword_5d4594_1522600), 1},
	{0x5D4594 + 3799524, (void*)&dword_5d4594_3799524, sizeof(dword_5d4594_3799524), 1},
	{0x5D4594 + 823692, (void*)&dword_5d4594_823692, sizeof(dword_5d4594_823692), 1},
	{0x5D4594 + 1064856, (void*)&dword_5d4594_1064856, sizeof(dword_5d4594_1064856), 1},
	{0x5D4594 + 1049856, (void*)&dword_5d4594_1049856, sizeof(dword_5d4594_1049856), 1},
	{0x5D4594 + 1045484, (void*)&dword_5d4594_1045484, sizeof(dword_5d4594_1045484), 1},
	{0x5D4594 + 1045464, (void*)&dword_5d4594_1045464, sizeof(dword_5d4594_1045464), 1},
	{0x5D4594 + 1556844, (void*)&nox_server_objects_1556844, sizeof(nox_server_objects_1556844), 1},
	{0x5D4594 + 251548, (void*)&dword_5d4594_251548, sizeof(dword_5d4594_251548), 1},
	{0x5D4594 + 1599540, (void*)&dword_5d4594_1599540, sizeof(dword_5d4594_1599540), 1},
	{0x5D4594 + 816432, (void*)&dword_5d4594_816432, sizeof(dword_5d4594_816432), 1},
	{0x5D4594 + 1309748, (void*)&dword_5d4594_1309748, sizeof(dword_5d4594_1309748), 1},
	{0x5D4594 + 1049520, (void*)&dword_5d4594_1049520, sizeof(dword_5d4594_1049520), 1},
	{0x5D4594 + 3679320, (void*)&dword_5d4594_3679320, sizeof(dword_5d4594_3679320), 1},
	{0x5D4594 + 1522628, (void*)&dword_5d4594_1522628, sizeof(dword_5d4594_1522628), 1},
	{0x5D4594 + 1193360, (void*)&dword_5d4594_1193360, sizeof(dword_5d4594_1193360), 1},
	{0x5D4594 + 1301800, (void*)&dword_5d4594_1301800, sizeof(dword_5d4594_1301800), 1},
	{0x5D4594 + 816440, (void*)&dword_5d4594_816440, sizeof(dword_5d4594_816440), 1},
	{0x5D4594 + 787164, (void*)&dword_5d4594_787164, sizeof(dword_5d4594_787164), 1},
	{0x5D4594 + 1311148, (void*)&dword_5d4594_1311148, sizeof(dword_5d4594_1311148), 1},
	{0x5D4594 + 815032, (void*)&dword_5d4594_815032, sizeof(dword_5d4594_815032), 1},
	{0x5D4594 + 810640, (void*)&dword_5d4594_810640, sizeof(dword_5d4594_810640), 1},
	{0x5D4594 + 1305680, (void*)&dword_5d4594_1305680, sizeof(dword_5d4594_1305680), 1},
	{0x5D4594 + 815020, (void*)&dword_5d4594_815020, sizeof(dword_5d4594_815020), 1},
	{0x5D4594 + 1522624, (void*)&dword_5d4594_1522624, sizeof(dword_5d4594_1522624), 1},
	{0x5D4594 + 1313796, (void*)&dword_5d4594_1313796, sizeof(dword_5d4594_1313796), 1},
	{0x587000 + 154956, (void*)&nox_client_texturedFloors_154956, sizeof(nox_client_texturedFloors_154956), 1},
	{0x5D4594 + 1301792, (void*)&dword_5d4594_1301792, sizeof(dword_5d4594_1301792), 1},
	{0x5D4594 + 787156, (void*)&dword_5d4594_787156, sizeof(dword_5d4594_787156), 1},
	{0x5D4594 + 1045528, (void*)&dword_5d4594_1045528, sizeof(dword_5d4594_1045528), 1},
	{0x587000 + 80820, (void*)&nox_client_highResFrontWalls_80820, sizeof(nox_client_highResFrontWalls_80820), 1},
	{0x5D4594 + 830104, (void*)&dword_5d4594_830104, sizeof(dword_5d4594_830104), 1},
	{0x5D4594 + 815024, (void*)&dword_5d4594_815024, sizeof(dword_5d4594_815024), 1},
	{0x5D4594 + 1321232, (void*)&dword_5d4594_1321232, sizeof(dword_5d4594_1321232), 1},
	{0x5D4594 + 1313800, (void*)&dword_5d4594_1313800, sizeof(dword_5d4594_1313800), 1},
	{0x5D4594 + 1316712, (void*)&dword_5d4594_1316712, sizeof(dword_5d4594_1316712), 1},
	{0x5D4594 + 829508, (void*)&dword_5d4594_829508, sizeof(dword_5d4594_829508), 1},
	{0x5D4594 + 1301848, (void*)&dword_5d4594_1301848, sizeof(dword_5d4594_1301848), 1},
	{0x5D4594 + 816456, (void*)&dword_5d4594_816456, sizeof(dword_5d4594_816456), 1},
	{0x5D4594 + 815028, (void*)&dword_5d4594_815028, sizeof(dword_5d4594_815028), 1},
	{0x5D4594 + 1565512, (void*)&dword_5d4594_1565512, sizeof(dword_5d4594_1565512), 1},
	{0x5D4594 + 3798836, (void*)&dword_5d4594_3798836, sizeof(dword_5d4594_3798836), 1},
	{0x5D4594 + 1599640, (void*)&dword_5d4594_1599640, sizeof(dword_5d4594_1599640), 1},
	{0x5D4594 + 1321248, (void*)&dword_5d4594_1321248, sizeof(dword_5d4594_1321248), 1},
	{0x5D4594 + 1107036, (void*)&dword_5d4594_1107036, sizeof(dword_5d4594_1107036), 1},
	{0x5D4594 + 831088, (void*)&dword_5d4594_831088, sizeof(dword_5d4594_831088), 1},
	{0x5D4594 + 2487908, (void*)&dword_5d4594_2487908, sizeof(dword_5d4594_2487908), 1},
	{0x5D4594 + 1046936, (void*)&dword_5d4594_1046936, sizeof(dword_5d4594_1046936), 1},
	{0x5D4594 + 1321244, (void*)&dword_5d4594_1321244, sizeof(dword_5d4594_1321244), 1},
	{0x5D4594 + 1569752, (void*)&dword_5d4594_1569752, sizeof(dword_5d4594_1569752), 1},
	{0x5D4594 + 1309720, (void*)&dword_5d4594_1309720, sizeof(dword_5d4594_1309720), 1},
	{0x5D4594 + 251568, (void*)&dword_5d4594_251568, sizeof(dword_5d4594_251568), 1},
	{0x5D4594 + 1049800, (void*)&dword_5d4594_1049800, sizeof(dword_5d4594_1049800), 1},
	{0x5D4594 + 2523900, (void*)&dword_5d4594_2523900, sizeof(dword_5d4594_2523900), 1},
	{0x5D4594 + 1320964, (void*)&dword_5d4594_1320964, sizeof(dword_5d4594_1320964), 1},
	{0x5D4594 + 814984, (void*)&dword_5d4594_814984, sizeof(dword_5d4594_814984), 1},
	{0x5D4594 + 1047540, (void*)&dword_5d4594_1047540, sizeof(dword_5d4594_1047540), 1},
	{0x5D4594 + 1064296, (void*)&dword_5d4594_1064296, sizeof(dword_5d4594_1064296), 1},
	{0x5D4594 + 3799484, (void*)&dword_5d4594_3799484, sizeof(dword_5d4594_3799484), 1},
	{0x5D4594 + 831236, (void*)&dword_5d4594_831236, sizeof(dword_5d4594_831236), 1},
	{0x5D4594 + 1197312, (void*)&dword_5d4594_1197312, sizeof(dword_5d4594_1197312), 1},
	{0x5D4594 + 1569728, (void*)&dword_5d4594_1569728, sizeof(dword_5d4594_1569728), 1},
	{0x5D4594 + 1311144, (void*)&dword_5d4594_1311144, sizeof(dword_5d4594_1311144), 1},
	{0x5D4594 + 2386152, (void*)&dword_5d4594_2386152, sizeof(dword_5d4594_2386152), 1},
	{0x5D4594 + 815016, (void*)&dword_5d4594_815016, sizeof(dword_5d4594_815016), 1},
	{0x5D4594 + 2386224, (void*)&dword_5d4594_2386224, sizeof(dword_5d4594_2386224), 1},
	{0x5D4594 + 1303452, (void*)&dword_5d4594_1303452, sizeof(dword_5d4594_1303452), 1},
	{0x5D4594 + 1556860, (void*)&nox_server_objects_uninited_1556860, sizeof(nox_server_objects_uninited_1556860), 1},
	{0x5D4594 + 251572, (void*)&dword_5d4594_251572, sizeof(dword_5d4594_251572), 1},
	{0x5D4594 + 3798636, (void*)&dword_5d4594_3798636, sizeof(dword_5d4594_3798636), 1},
	{0x5D4594 + 1064888, (void*)&dword_5d4594_1064888, sizeof(dword_5d4594_1064888), 1},
	{0x5D4594 + 1316708, (void*)&dword_5d4594_1316708, sizeof(dword_5d4594_1316708), 1},
	{0x5D4594 + 1523028, (void*)&dword_5d4594_1523028, sizeof(dword_5d4594_1523028), 1},
	{0x5D4594 + 830108, (void*)&dword_5d4594_830108, sizeof(dword_5d4594_830108), 1},
	{0x5D4594 + 1046496, (void*)&dword_5d4594_1046496, sizeof(dword_5d4594_1046496), 1},
	{0x5D4594 + 1046872, (void*)&dword_5d4594_1046872, sizeof(dword_5d4594_1046872), 1},
	{0x587000 + 149232, (void*)&dword_587000_149232, sizeof(dword_587000_149232), 1},
	{0x5D4594 + 529340, (void*)&dword_5d4594_529340, sizeof(dword_5d4594_529340), 1},
	{0x5D4594 + 1098628, (void*)&dword_5d4594_1098628, sizeof(dword_5d4594_1098628), 1},
	{0x5D4594 + 1307764, (void*)&dword_5d4594_1307764, sizeof(dword_5d4594_1307764), 1},
	{0x5D4594 + 2523756, (void*)&dword_5d4594_2523756, sizeof(dword_5d4594_2523756), 1},
	{0x5D4594 + 3798696, (void*)&dword_5d4594_3798696, sizeof(dword_5d4594_3798696), 1},
	{0x5D4594 + 2650672, (void*)&dword_5d4594_2650672, sizeof(dword_5d4594_2650672), 1},
	{0x5D4594 + 816348, (void*)&dword_5d4594_816348, sizeof(dword_5d4594_816348), 1},
	{0x5D4594 + 1062456, (void*)&dword_5d4594_1062456, sizeof(dword_5d4594_1062456), 1},
	{0x5D4594 + 10956, (void*)&dword_5d4594_10956, sizeof(dword_5d4594_10956), 1},
	{0x5D4594 + 1319228, (void*)&dword_5d4594_1319228, sizeof(dword_5d4594_1319228), 1},
	{0x5D4594 + 833716, (void*)&dword_5d4594_833716, sizeof(dword_5d4594_833716), 1},
	{0x587000 + 60352, (void*)&dword_587000_60352, sizeof(dword_587000_60352), 1},
	{0x587000 + 197428, (void*)&dword_587000_197428, sizeof(dword_587000_197428), 1},
	{0x5D4594 + 1063636, (void*)&dword_5d4594_1063636, sizeof(dword_5d4594_1063636), 1},
	{0x5D4594 + 829488, (void*)&dword_5d4594_829488, sizeof(dword_5d4594_829488), 1},
	{0x5D4594 + 815048, (void*)&dword_5d4594_815048, sizeof(dword_5d4594_815048), 1},
	{0x5D4594 + 1321228, (void*)&dword_5d4594_1321228, sizeof(dword_5d4594_1321228), 1},
	{0x5D4594 + 815132, (void*)&dword_5d4594_815132, sizeof(dword_5d4594_815132), 1},
	{0x5D4594 + 2523752, (void*)&dword_5d4594_2523752, sizeof(dword_5d4594_2523752), 1},
	{0x5D4594 + 2386940, (void*)&dword_5d4594_2386940, sizeof(dword_5d4594_2386940), 1},
	{0x5D4594 + 1305684, (void*)&dword_5d4594_1305684, sizeof(dword_5d4594_1305684), 1},
	{0x5D4594 + 1570272, (void*)&dword_5d4594_1570272, sizeof(dword_5d4594_1570272), 1},
	{0x5D4594 + 832476, (void*)&dword_5d4594_832476, sizeof(dword_5d4594_832476), 1},
	{0x5D4594 + 3798804, (void*)&dword_5d4594_3798804, sizeof(dword_5d4594_3798804), 1},
	{0x587000 + 87404, (void*)&dword_587000_87404, sizeof(dword_587000_87404), 1},
	{0x5D4594 + 1045636, (void*)&dword_5d4594_1045636, sizeof(dword_5d4594_1045636), 1},
	{0x5D4594 + 2660652, (void*)&dword_5d4594_2660652, sizeof(dword_5d4594_2660652), 1},
	{0x5D4594 + 1548476, (void*)&dword_5d4594_1548476, sizeof(dword_5d4594_1548476), 1},
	{0x587000 + 87412, (void*)&dword_587000_87412, sizeof(dword_587000_87412), 1},
	{0x5D4594 + 830124, (void*)&dword_5d4594_830124, sizeof(dword_5d4594_830124), 1},
	{0x5D4594 + 3799432, (void*)&func_5d4594_3799432, sizeof(func_5d4594_3799432), 1},
	{0x5D4594 + 2487236, (void*)&dword_5d4594_2487236, sizeof(dword_5d4594_2487236), 1},
	{0x5D4594 + 1321040, (void*)&dword_5d4594_1321040, sizeof(dword_5d4594_1321040), 1},
	{0x5D4594 + 1098576, (void*)&dword_5d4594_1098576, sizeof(dword_5d4594_1098576), 1},
	{0x5D4594 + 829492, (void*)&dword_5d4594_829492, sizeof(dword_5d4594_829492), 1},
	{0x5D4594 + 1049796, (void*)&dword_5d4594_1049796, sizeof(dword_5d4594_1049796), 1},
	{0x5D4594 + 1049508, (void*)&dword_5d4594_1049508, sizeof(dword_5d4594_1049508), 1},
	{0x5D4594 + 816364, (void*)&dword_5d4594_816364, sizeof(dword_5d4594_816364), 1},
	{0x5D4594 + 1090048, (void*)&dword_5d4594_1090048, sizeof(dword_5d4594_1090048), 1},
	{0x5D4594 + 1193516, (void*)&dword_5d4594_1193516, sizeof(dword_5d4594_1193516), 1},
	{0x5D4594 + 3798820, (void*)&dword_5d4594_3798820, sizeof(dword_5d4594_3798820), 1},
	{0x5D4594 + 1307780, (void*)&dword_5d4594_1307780, sizeof(dword_5d4594_1307780), 1},
	{0x5D4594 + 3798824, (void*)&dword_5d4594_3798824, sizeof(dword_5d4594_3798824), 1},
	{0x5D4594 + 815000, (void*)&dword_5d4594_815000, sizeof(dword_5d4594_815000), 1},
	{0x5D4594 + 1308084, (void*)&dword_5d4594_1308084, sizeof(dword_5d4594_1308084), 1},
	{0x5D4594 + 1047516, (void*)&dword_5d4594_1047516, sizeof(dword_5d4594_1047516), 1},
	{0x5D4594 + 741676, (void*)&dword_5d4594_741676, sizeof(dword_5d4594_741676), 1},
	{0x587000 + 155144, (void*)&dword_587000_155144, sizeof(dword_587000_155144), 1},
	{0x5D4594 + 754036, (void*)&dword_5d4594_754036, sizeof(dword_5d4594_754036), 1},
	{0x5D4594 + 1309812, (void*)&dword_5d4594_1309812, sizeof(dword_5d4594_1309812), 1},
	{0x5D4594 + 3798840, (void*)&dword_5d4594_3798840, sizeof(dword_5d4594_3798840), 1},
	{0x5D4594 + 1049500, (void*)&dword_5d4594_1049500, sizeof(dword_5d4594_1049500), 1},
	{0x5D4594 + 1599656, (void*)&dword_5d4594_1599656, sizeof(dword_5d4594_1599656), 1},
	{0x5D4594 + 830248, (void*)&dword_5d4594_830248, sizeof(dword_5d4594_830248), 1},
	{0x5D4594 + 1217464, (void*)&dword_5d4594_1217464, sizeof(dword_5d4594_1217464), 1},
	{0x5D4594 + 1062512, (void*)&dword_5d4594_1062512, sizeof(dword_5d4594_1062512), 1},
	{0x5D4594 + 829480, (void*)&dword_5d4594_829480, sizeof(dword_5d4594_829480), 1},
	{0x5D4594 + 1049864, (void*)&dword_5d4594_1049864, sizeof(dword_5d4594_1049864), 1},
	{0x5D4594 + 1062508, (void*)&dword_5d4594_1062508, sizeof(dword_5d4594_1062508), 1},
	{0x5D4594 + 1309820, (void*)&dword_5d4594_1309820, sizeof(dword_5d4594_1309820), 1},
	{0x5D4594 + 529316, (void*)&dword_5d4594_529316, sizeof(dword_5d4594_529316), 1},
	{0x5D4594 + 1064816, (void*)&dword_5d4594_1064816, sizeof(dword_5d4594_1064816), 1},
	{0x587000 + 197424, (void*)&dword_587000_197424, sizeof(dword_587000_197424), 1},
	{0x5D4594 + 2386176, (void*)&dword_5d4594_2386176, sizeof(dword_5d4594_2386176), 1},
	{0x5D4594 + 1045604, (void*)&dword_5d4594_1045604, sizeof(dword_5d4594_1045604), 1},
	{0x5D4594 + 1064192, (void*)&dword_5d4594_1064192, sizeof(dword_5d4594_1064192), 1},
	{0x5D4594 + 1123524, (void*)&dword_5d4594_1123524, sizeof(dword_5d4594_1123524), 1},
	{0x5D4594 + 1316972, (void*)&dword_5d4594_1316972, sizeof(dword_5d4594_1316972), 1},
	{0x5D4594 + 3799624, (void*)&dword_5d4594_3799624, sizeof(dword_5d4594_3799624), 1},
	{0x587000 + 26048, (void*)&dword_587000_26048, sizeof(dword_587000_26048), 1},
	{0x5D4594 + 1193380, (void*)&dword_5d4594_1193380, sizeof(dword_5d4594_1193380), 1},
	{0x5D4594 + 1082856, (void*)&dword_5d4594_1082856, sizeof(dword_5d4594_1082856), 1},
	{0x5D4594 + 1046868, (void*)&dword_5d4594_1046868, sizeof(dword_5d4594_1046868), 1},
	{0x5D4594 + 1049504, (void*)&dword_5d4594_1049504, sizeof(dword_5d4594_1049504), 1},
	{0x5D4594 + 1189584, (void*)&dword_5d4594_1189584, sizeof(dword_5d4594_1189584), 1},
	{0x5D4594 + 2516328, (void*)&dword_5d4594_2516328, sizeof(dword_5d4594_2516328), 1},
	{0x5D4594 + 1090120, (void*)&dword_5d4594_1090120, sizeof(dword_5d4594_1090120), 1},
	{0x5D4594 + 1063116, (void*)&dword_5d4594_1063116, sizeof(dword_5d4594_1063116), 1},
	{0x5D4594 + 3799536, (void*)&func_5d4594_3799536, sizeof(func_5d4594_3799536), 1},
	{0x5D4594 + 2516348, (void*)&dword_5d4594_2516348, sizeof(dword_5d4594_2516348), 1},
	{0x5D4594 + 3801780, (void*)&dword_5d4594_3801780, sizeof(dword_5d4594_3801780), 1},
	{0x5D4594 + 1064916, (void*)&dword_5d4594_1064916, sizeof(dword_5d4594_1064916), 1},
	{0x5D4594 + 2386944, (void*)&dword_5d4594_2386944, sizeof(dword_5d4594_2386944), 1},
	{0x5D4594 + 787148, (void*)&dword_5d4594_787148, sizeof(dword_5d4594_787148), 1},
	{0x5D4594 + 810632, (void*)&dword_5d4594_810632, sizeof(dword_5d4594_810632), 1},
	{0x587000 + 80828, (void*)&nox_client_renderGUI_80828, sizeof(nox_client_renderGUI_80828), 1},
	{0x5D4594 + 825760, (void*)&dword_5d4594_825760, sizeof(dword_5d4594_825760), 1},
	{0x5D4594 + 3798796, (void*)&dword_5d4594_3798796, sizeof(dword_5d4594_3798796), 1},
	{0x5D4594 + 832484, (void*)&dword_5d4594_832484, sizeof(dword_5d4594_832484), 1},
	{0x5D4594 + 1062480, (void*)&dword_5d4594_1062480, sizeof(dword_5d4594_1062480), 1},
	{0x5D4594 + 815012, (void*)&dword_5d4594_815012, sizeof(dword_5d4594_815012), 1},
	{0x5D4594 + 815004, (void*)&dword_5d4594_815004, sizeof(dword_5d4594_815004), 1},
	{0x5D4594 + 1320940, (void*)&dword_5d4594_1320940, sizeof(dword_5d4594_1320940), 1},
	{0x5D4594 + 1217448, (void*)&dword_5d4594_1217448, sizeof(dword_5d4594_1217448), 1},
	{0x5D4594 + 2650652, (void*)&dword_5d4594_2650652, sizeof(dword_5d4594_2650652), 1},
	{0x5D4594 + 3798844, (void*)&dword_5d4594_3798844, sizeof(dword_5d4594_3798844), 1},
	{0x5D4594 + 1307784, (void*)&dword_5d4594_1307784, sizeof(dword_5d4594_1307784), 1},
	{0x5D4594 + 1045684, (void*)&dword_5d4594_1045684, sizeof(dword_5d4594_1045684), 1},
	{0x5D4594 + 3804672, (void*)&dword_5d4594_3804672, sizeof(dword_5d4594_3804672), 1},
	{0x5D4594 + 3804656, (void*)&dword_5d4594_3804656, sizeof(dword_5d4594_3804656), 1},
	{0x5D4594 + 1045516, (void*)&dword_5d4594_1045516, sizeof(dword_5d4594_1045516), 1},
	{0x5D4594 + 3804664, (void*)&dword_5d4594_3804664, sizeof(dword_5d4594_3804664), 1},
	{0x5D4594 + 814980, (void*)&dword_5d4594_814980, sizeof(dword_5d4594_814980), 1},
	{0x5D4594 + 830224, (void*)&dword_5d4594_830224, sizeof(dword_5d4594_830224), 1},
	{0x587000 + 133480, (void*)&dword_587000_133480, sizeof(dword_587000_133480), 1},
	{0x5D4594 + 1046492, (void*)&dword_5d4594_1046492, sizeof(dword_5d4594_1046492), 1},
	{0x5D4594 + 4668, (void*)&dword_5d4594_4668, sizeof(dword_5d4594_4668), 1},
	{0x5D4594 + 3799540, (void*)&dword_5d4594_3799540, sizeof(dword_5d4594_3799540), 1},
	{0x5D4594 + 1599636, (void*)&dword_5d4594_1599636, sizeof(dword_5d4594_1599636), 1},
	{0x5D4594 + 3798784, (void*)&nox_pixbuffer_rows_3798784, sizeof(nox_pixbuffer_rows_3798784), 1},
	{0x5D4594 + 260, (void*)&nox_loaded_thing_bin, sizeof(nox_loaded_thing_bin), 1},
	{0x5D4594 + 1296, (void*)&nox_file_10, sizeof(nox_file_10), 1},
	{0x5D4594 + 1300, (void*)&nox_file_10_mode, sizeof(nox_file_10_mode), 1},
	{0x5D4594 + 226904, (void*)file_buffer_w, sizeof(file_buffer_w), 1},
	{0x5D4594 + 247384, (void*)file_buffer, sizeof(file_buffer), 1},
	{0x5D4594 + 251488, (void*)&nox_file_1, sizeof(nox_file_1), 1},
	{0x5D4594 + 251492, (void*)&string_entries_cnt, sizeof(string_entries_cnt), 1},
	{0x5D4594 + 251500, (void*)&string_entries, sizeof(string_entries), 1},
	{0x5D4594 + 251520, (void*)&missing_strings, sizeof(missing_strings), 1},
	{0x5D4594 + 252264, (void*)&nox_file_4, sizeof(nox_file_4), 1},
	{0x5D4594 + 252268, (void*)&nox_file_5, sizeof(nox_file_5), 1},
	{0x5D4594 + 252272, (void*)&nox_file_net_log, sizeof(nox_file_net_log), 1},
	{0x5D4594 + 527688, (void*)&nox_file_2, sizeof(nox_file_2), 1},
	{0x5D4594 + 739988, (void*)&nox_file_3, sizeof(nox_file_3), 1},
	{0x5D4594 + 787204, (void*)&nox_video_bag_fileptr, sizeof(nox_video_bag_fileptr), 1},
	{0x5D4594 + 839880, (void*)&nox_file_log, sizeof(nox_file_log), 1},
	{0x5D4594 + 1309760, (void*)&nox_file_9, sizeof(nox_file_9), 1},
	{0x5D4594 + 1599584, (void*)&nox_file_8, sizeof(nox_file_8), 1},
	{0x5D4594 + 1599620, (void*)&nox_file_7, sizeof(nox_file_7), 1},
	{0x5D4594 + 3805496, (void*)&nox_win_width, sizeof(nox_win_width), 1},
	{0x5D4594 + 3807120, (void*)&nox_win_height, sizeof(nox_win_height), 1},
	{0x5D4594 + 251544, (void*)&dword_5D4594_251544, sizeof(dword_5D4594_251544), 1},
	{0x5D4594 + 251584, (void*)byte_5D4594_251584, sizeof(byte_5D4594_251584), 1},
	{0x5D4594 + 251596, (void*)&byte_5D4594_251596, sizeof(byte_5D4594_251596), 1},
	{0x5D4594 + 754088, (void*)&ptr_5D4594_754088, sizeof(ptr_5D4594_754088), 1},
	{0x5D4594 + 754092, (void*)&ptr_5D4594_754092, sizeof(ptr_5D4594_754092), 1},
	{0x5D4594 + 754096, (void*)&ptr_5D4594_754088_cnt, sizeof(ptr_5D4594_754088_cnt), 1},
	{0x5D4594 + 754100, (void*)&ptr_5D4594_754092_cnt, sizeof(ptr_5D4594_754092_cnt), 1},
	{0x5D4594 + 754104, (void*)&obj_5D4594_754104_switch, sizeof(obj_5D4594_754104_switch), 1},
	{0x5D4594 + 791324, (void*)nox_input_buffer, sizeof(nox_input_buffer), 1},
	{0x5D4594 + 805832, (void*)&nox_processing_input, sizeof(nox_processing_input), 1},
	{0x5D4594 + 805660, (void*)&nox_mouse, sizeof(nox_mouse), 1},
	{0x5D4594 + 805716, (void*)&nox_mouse_prev, sizeof(nox_mouse_prev), 1},
	{0x5D4594 + 805772, (void*)&nox_mouse_min, sizeof(nox_mouse_min), 1},
	{0x5D4594 + 805780, (void*)&nox_mouse_prev_left, sizeof(nox_mouse_prev_left), 1},
	{0x5D4594 + 805788, (void*)&nox_mouse_prev_right, sizeof(nox_mouse_prev_right), 1},
	{0x5D4594 + 805796, (void*)&nox_mouse_prev_middle, sizeof(nox_mouse_prev_middle), 1},
	{0x5D4594 + 805812, (void*)&nox_mouse_prev_seq, sizeof(nox_mouse_prev_seq), 1},
	{0x5D4594 + 805828, (void*)&nox_mouse_prev_seq_2, sizeof(nox_mouse_prev_seq_2), 1},
	{0x5D4594 + 830604, (void*)&nox_things_head, sizeof(nox_things_head), 1},
	{0x5D4594 + 830608, (void*)&nox_things_array, sizeof(nox_things_array), 1},
	{0x5D4594 + 830612, (void*)&nox_things_count, sizeof(nox_things_count), 1},
	{0x5D4594 + 1096472, (void*)&nox_drawable_list_3, sizeof(nox_drawable_list_3), 1},
	{0x5D4594 + 1096476, (void*)&nox_drawable_list_3_size, sizeof(nox_drawable_list_3_size), 1},
	{0x5D4594 + 1096480, (void*)&nox_drawable_list_2, sizeof(nox_drawable_list_2), 1},
	{0x5D4594 + 1096484, (void*)&nox_drawable_list_2_size, sizeof(nox_drawable_list_2_size), 1},
	{0x5D4594 + 1096488, (void*)&nox_drawable_list_4, sizeof(nox_drawable_list_4), 1},
	{0x5D4594 + 1096492, (void*)&nox_drawable_list_4_size, sizeof(nox_drawable_list_4_size), 1},
	{0x5D4594 + 1046568, (void*)&nox_drawable_head_unk2, sizeof(nox_drawable_head_unk2), 1},
	{0x5D4594 + 1046572, (void*)&nox_drawable_head_unk1, sizeof(nox_drawable_head_unk1), 1},
	{0x5D4594 + 1046580, (void*)&nox_drawable_head_unk3, sizeof(nox_drawable_head_unk3), 1},
	{0x5D4594 + 1046584, (void*)&nox_drawable_head_unk4, sizeof(nox_drawable_head_unk4), 1},
	{0x5D4594 + 1046588, (void*)&nox_drawable_count, sizeof(nox_drawable_count), 1},
	{0x5D4594 + 1046592, (void*)&nox_alloc_drawable, sizeof(nox_alloc_drawable), 1},
	{0x5D4594 + 1046860, (void*)&nox_win_unk1, sizeof(nox_win_unk1), 1},
	{0x5D4594 + 1062460, (void*)&nox_win_unk5, sizeof(nox_win_unk5), 1},
	{0x5D4594 + 1064892, (void*)&nox_win_unk4, sizeof(nox_win_unk4), 1},
	{0x5D4594 + 1064904, (void*)&nox_win_unk3, sizeof(nox_win_unk3), 1},
	{0x5D4594 + 1064908, (void*)&nox_win_unk2, sizeof(nox_win_unk2), 1},
	{0x5D4594 + 1064884, (void*)&nox_alloc_window, sizeof(nox_alloc_window), 1},
	{0x5D4594 + 1193492, (void*)&nox_backbuffer1_pix, sizeof(nox_backbuffer1_pix), 1},
	{0x5D4594 + 1096464, (void*)&nox_drawable_list_1, sizeof(nox_drawable_list_1), 1},
	{0x5D4594 + 1096468, (void*)&nox_drawable_list_1_size, sizeof(nox_drawable_list_1_size), 1},
	{0x5D4594 + 1301784, (void*)&nox_drawable_2d_index, sizeof(nox_drawable_2d_index), 1},
	{0x5D4594 + 1301788, (void*)&nox_drawable_2d_index_size, sizeof(nox_drawable_2d_index_size), 1},
	{0x5D4594 + 1307296, (void*)&nox_win_main_menu, sizeof(nox_win_main_menu), 1},
	{0x5D4594 + 1307300, (void*)&nox_win_main_bg, sizeof(nox_win_main_bg), 1},
	{0x5D4594 + 3798752, (void*)&nox_backbuffer_pix, sizeof(nox_backbuffer_pix), 1},
	{0x5D4594 + 3801784, (void*)&nox_backbuffer_width, sizeof(nox_backbuffer_width), 1},
	{0x5D4594 + 3801788, (void*)&nox_backbuffer_height, sizeof(nox_backbuffer_height), 1},
	{0x5D4594 + 3799568, (void*)&nox_backbuffer_depth, sizeof(nox_backbuffer_depth), 1},
	{0x5D4594 + 3801800, (void*)&nox_backbuffer_width32, sizeof(nox_backbuffer_width32), 1},
	{0x5D4594 + 3799572, (void*)&ptr_5D4594_3799572, sizeof(ptr_5D4594_3799572), 1},
	{0x5D4594 + 3799660, (void*)&obj_5D4594_3799660, sizeof(obj_5D4594_3799660), 1},
	{0x5D4594 + 3800716, (void*)&obj_5D4594_3800716, sizeof(obj_5D4594_3800716), 1},
	{0x5D4594 + 816396, (void*)&nox_draw_unk1, sizeof(nox_draw_unk1), 1},
	{0x5D4594 + 2650668, (void*)&ptr_5D4594_2650668, sizeof(ptr_5D4594_2650668), 1},
	{0x5D4594 + 2650636, (void*)&nox_common_engineFlags, sizeof(nox_common_engineFlags), 1},
	{0x5D4594 + 3600, (void*)&nox_common_gameFlags, sizeof(nox_common_gameFlags), 1},
	{0x5D4594 + 3532, (void*)&nox_server_gameSettingsUpdated, sizeof(nox_server_gameSettingsUpdated), 1},
	{0x5D4594 + 3801772, (void*)&nox_video_renderTargetFlags, sizeof(nox_video_renderTargetFlags), 1},
	{0x5D4594 + 805868, (void*)&nox_video_dxUnlockSurface, sizeof(nox_video_dxUnlockSurface), 1},
	{0x5D4594 + 1193676, (void*)&nox_video_pauseThreadedDrawCursor, sizeof(nox_video_pauseThreadedDrawCursor), 1},
	{0x5D4594 + 1193660, (void*)&nox_video_drawCursorThreadOk, sizeof(nox_video_drawCursorThreadOk), 1},
	{0x5D4594 + 1193680, (void*)&nox_video_allowCursorDrawThread, sizeof(nox_video_allowCursorDrawThread), 1},
	{0x5D4594 + 3798724, (void*)&nox_video_cursorDrawIsThreaded, sizeof(nox_video_cursorDrawIsThreaded), 1},
	{0x5D4594 + 1097200, (void*)&nox_client_mouseCursorType, sizeof(nox_client_mouseCursorType), 1},
	{0x5D4594 + 1193656, (void*)&nox_video_cursorDrawThreadHandle, sizeof(nox_video_cursorDrawThreadHandle), 1},
	{0x5D4594 + 3799620, (void*)&nox_video_windowsPlatformVersion, sizeof(nox_video_windowsPlatformVersion), 1},
	{0x5D4594 + 1568036, (void*)&nox_server_netCodeCache, sizeof(nox_server_netCodeCache), 1},
	{0x5D4594 + 1049872, (void*)&array_5D4594_1049872, sizeof(array_5D4594_1049872), 1},
	{0x5D4594 + 1093036, (void*)&nox_windows_arr_1093036, sizeof(nox_windows_arr_1093036), 1},
	{0x5D4594 + 1599716, (void*)&nox_server_xxx_1599716, sizeof(nox_server_xxx_1599716), 1},
	{0x5D4594 + 371780, (void*)&nox_playerinfo_arr, sizeof(nox_playerinfo_arr), 1},

	{0x587000 + 80, (void*)&nox_enable_audio, sizeof(nox_enable_audio), 1},
	{0x587000 + 180, (void*)&nox_version_string_180, sizeof(nox_version_string_180), 1},
	{0x587000 + 5184, (void*)table_5184, sizeof(void*) * 1023, 1},         // TODO
	{0x587000 + 26792, (void*)table_26792, sizeof(table_26792_t) * 17, 1}, // TODO
	{0x587000 + 27008, (void*)table_27008, sizeof(table_27008_t) * 7, 1},  // TODO
	{0x587000 + 27104, (void*)table_27104, sizeof(table_27104_t) * 4, 1},  // TODO
	{0x587000 + 27168, (void*)table_27168, sizeof(table_27168_t) * 12, 1}, // TODO
	{0x587000 + 28760, (void*)table_28760, sizeof(table_28760_t) * 17, 1}, // TODO
	{0x587000 + 80764, (void*)&nox_mouse_max, sizeof(nox_mouse_max), 1},
	{0x587000 + 80804, (void*)&nox_enable_threads, sizeof(nox_enable_threads), 1},
	{0x587000 + 80856, (void*)&nox_max_width, sizeof(nox_max_width), 1},
	{0x587000 + 80860, (void*)&nox_max_height, sizeof(nox_max_height), 1},
	{0x587000 + 91780, (void*)&nox_win_width_1, sizeof(nox_win_width_1), 1},
	{0x587000 + 91784, (void*)&nox_win_height_1, sizeof(nox_win_height_1), 1},
	{0x587000 + 91788, (void*)&nox_win_depth_1, sizeof(nox_win_depth_1), 1},
	{0x587000 + 91792, (void*)&nox_win_width_2, sizeof(nox_win_width_2), 1},
	{0x587000 + 91796, (void*)&nox_win_height_2, sizeof(nox_win_height_2), 1},
	{0x587000 + 91800, (void*)&nox_win_depth_2, sizeof(nox_win_depth_2), 1},
	{0x587000 + 91804, (void*)nox_video_modes, sizeof(nox_video_mode) * 3, 1},
	{0x587000 + 94464, (void*)&nox_cheats_disabled, sizeof(nox_cheats_disabled), 1},
	{0x587000 + 102944, (void*)&nox_version_string_102944, sizeof(nox_version_string_102944), 1},
	{0x587000 + 116008, (void*)&nox_parse_thing_draw_funcs, sizeof(nox_parse_thing_draw_funcs_t) * 69, 1}, // TODO
	{0x587000 + 122104, (void*)&nox_parse_thing_funcs, sizeof(nox_parse_thing_funcs_t) * 21, 1},           // TODO
	{0x587000 + 80848, (void*)&nox_video_dxFullScreen, sizeof(nox_video_dxFullScreen), 1},
	{0x587000 + 84400, (void*)&nox_video_gammaValue, sizeof(nox_video_gammaValue), 1},
};

size_t mappings_cnt = sizeof(mappings) / sizeof(mem_mapping);

uint8_t* getMem(uintptr_t addr) {
	// overlay first
	for (int i = 0; i < mappings_cnt; i++) {
		mem_mapping* m = &mappings[i];
		if (addr >= m->base && addr < m->base + (uintptr_t)m->size) {
			if (m->invalid)
				break;
			addr -= m->base;
			return &((_BYTE*)m->ptr)[addr];
		}
	}
	// fallback to blobs
	for (int i = 0; i < blobs_cnt; i++) {
		mem_blob* m = &blobs[i];
		if (addr >= m->base && addr < m->base + (uintptr_t)m->size) {
			addr -= m->base;
			return &(m->ptr[addr]);
		}
	}
	fprintf(stderr, "Invalid memory access! Requested = %x\n", addr);
	DebugBreak();
	return 0;
}

#ifdef NOX_LOG_MEM
FILE* mem_log = 0;

void ensureMemLog() {
	if (mem_log != 0)
		return;
	mem_log = fopen("../memlog.json", "wb");
}

void dumpMemMap(void) {
	ensureMemLog();
	for (int i = 0; i < blobs_cnt; i++) {
		mem_blob* p = &blobs[i];
		fprintf(mem_log, "{\"type\":\"blob\",\"base\":%d,\"size\":%d}\n", p->base, p->size);
	}
	for (int i = 0; i < mappings_cnt; i++) {
		mem_mapping* p = &mappings[i];
		fprintf(mem_log, "{\"type\":\"memmap\",\"addr\":%d,\"size\":%d}\n", p->base, p->size);
	}
}

typedef struct{
	uintptr_t base;
	uintptr_t off;
} blobOff;

blobOff inBlob(void* ptr) {
	blobOff out;
	out.base = 0;
	out.off = 0;
	for (int i = 0; i < blobs_cnt; i++) {
		mem_blob m = blobs[i];
		if (&(m.ptr[0]) <= ptr && ptr <= &(m.ptr[m.size-1])) {
			out.base = m.base;
			out.off = (uintptr_t)ptr - (uintptr_t)&(m.ptr[0]);
			break;
		}
	}
	return out;
}

void logReadOn(const char* fnc, blobOff bo, int sz) {
	ensureMemLog();
	fprintf(mem_log, "{\"type\":\"read\",\"func\":\"%s\",\"base\":%d,\"off\":%d,\"size\":%d}\n", fnc, bo.base, bo.off, sz);
}

void maybeLogRead(const char* fnc, void* ptr, int sz) {
	blobOff bo = inBlob(ptr);
	if (bo.base == 0) {
		return;
	}
	logReadOn(fnc, bo, sz);
}

void maybeLogWrite(const char* fnc, void* ptr, int sz) {
	blobOff bo = inBlob(ptr);
	if (bo.base == 0) {
		return;
	}
	ensureMemLog();
	fprintf(mem_log, "{\"type\":\"write\",\"func\":\"%s\",\"base\":%d,\"off\":%d,\"size\":%d}\n", fnc, bo.base, bo.off, sz);
}

void nox_memset(const char* fnc, void* ptr, int v, int sz) {
	maybeLogWrite(fnc, ptr, sz);
	memset(ptr, v, sz);
}

void nox_memcpy(const char* fnc, void* dst, void* src, int sz) {
	maybeLogRead(fnc, src, sz);
	maybeLogWrite(fnc, dst, sz);
	memcpy(dst, src, sz);
}

int nox_strlen(const char* fnc, const char* src) {
	int sz = strlen(src);
	maybeLogRead(fnc, src, sz);
	return sz;
}

int nox_strcpy(const char* fnc, char* dst, const char* src) {
	int sz = strlen(src);
	maybeLogRead(fnc, src, sz);
	maybeLogWrite(fnc, dst, sz);
	return strcpy(dst, src);
}

size_t nox_fread(const char* fnc, void* ptr, size_t size, size_t count, FILE* stream) {
	maybeLogWrite(fnc, ptr, size*count);
	return fread(ptr, size, count, stream);
}

size_t nox_fwrite(const char* fnc, void* ptr, size_t size, size_t count, FILE* stream) {
	maybeLogRead(fnc, ptr, size*count);
	return fwrite(ptr, size, count, stream);
}

uint8_t seenBuf_581450[sizeof(byte_581450)/8+1] = {0};
uint8_t seenBuf_587000[sizeof(byte_587000)/8+1] = {0};
uint8_t seenBuf_5D4594[sizeof(byte_5D4594)/8+1] = {0};

bool seenAccess(uintptr_t base, uintptr_t off) {
	uint8_t* p = 0;
	if (base == 0x581450)
		p = seenBuf_581450;
	else if (base == 0x587000)
		p = seenBuf_587000;
	else if (base == 0x5D4594)
		p = seenBuf_5D4594;
	else
		return true; // ignore

	int i = off/8;
	int j = off%8;

	uint8_t v = p[i];
	uint8_t mask = 1 << j;

	if (v & mask)
		return true;

	v |= mask;
	p[i] = v;
	return false;
}

void maybeLogAccess(const char* fnc, uintptr_t base, uintptr_t off, uintptr_t sz) {
	if (seenAccess(base, off))
		return;
	blobOff bo;
	bo.base = base;
	bo.off = off;
	logReadOn(fnc, bo, sz);
}
#endif // NOX_LOG_MEM

#ifndef NOX_LOG_MEM
void* mem_getPtrSize(uintptr_t base, uintptr_t off, uintptr_t size) {
#else
void* mem_getPtrSize(const char* fnc, uintptr_t base, uintptr_t off, uintptr_t size) {
	maybeLogAccess(fnc, base, off, size);
#endif
	switch (base) {
	case 0x581450:
		return &byte_581450[off];
	case 0x5D4594:
		return &byte_5D4594[off];
	case 0x587000:
		return &byte_587000[off];
	}
	fprintf(stderr, "Invalid memory access! Requested = %x+%x[%d]\n", base, off, size);
	DebugBreak();
	return 0;
}

// defined in the header, emits the signature; we need an implementation now
#undef MEM_FUNC_PTR

#ifndef NOX_LOG_MEM
void* mem_getPtr(uintptr_t base, uintptr_t off) { return mem_getPtrSize(base, off, MEMLOG_UNK_SIZE); }
#define MEM_FUNC_PTR(T, NAME, SIZE) T* NAME(uintptr_t base, uintptr_t off) { return (T*)mem_getPtrSize(base, off, SIZE); }
#else
void* mem_getPtr(const char* fnc, uintptr_t base, uintptr_t off) { return mem_getPtrSize(fnc, base, off, MEMLOG_UNK_SIZE); }
#define MEM_FUNC_PTR(T, NAME, SIZE) T* NAME(const char* fnc, uintptr_t base, uintptr_t off) { return (T*)mem_getPtrSize(fnc, base, off, SIZE); }
#endif

MEM_FUNC_PTR(uint8_t, mem_getU8Ptr, 1)
MEM_FUNC_PTR( int8_t, mem_getI8Ptr, 1)
MEM_FUNC_PTR(uint16_t, mem_getU16Ptr, 2)
MEM_FUNC_PTR( int16_t, mem_getI16Ptr, 2)
MEM_FUNC_PTR(uint32_t, mem_getU32Ptr, 4)
MEM_FUNC_PTR( int32_t, mem_getI32Ptr, 4)
MEM_FUNC_PTR(uint64_t, mem_getU64Ptr, 8)
MEM_FUNC_PTR( int64_t, mem_getI64Ptr, 8)
MEM_FUNC_PTR(float, mem_getFloatPtr, 4)
MEM_FUNC_PTR(double, mem_getDoublePtr, 8)
