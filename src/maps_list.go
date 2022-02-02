package nox

/*
#include "defs.h"
void nox_common_list_clear_425760(nox_list_item_t* list);
extern nox_list_item_t nox_common_maplist;
void nox_common_scanAddMap(char* filename);
void nox_common_maplist_add_4D0760(nox_map_list_item* mp);
void* sub_425770(void* a1p);
*/
import "C"
import (
	"os"
	"unsafe"

	"nox/v1/common/alloc"
	"nox/v1/common/datapath"
	"nox/v1/common/fs"
	"nox/v1/common/maps"
	"nox/v1/common/memmap"
)

var soloAllowMP = os.Getenv("NOX_SOLO_MP") == "true"

func scanMaps() (maps.MapList, error) {
	return maps.Scan(datapath.Path(maps.Dir), &maps.ScanOptions{
		Solo: soloAllowMP,
	})
}

func nox_common_scanAllMaps_4D07F0() error {
	C.nox_common_list_clear_425760(&C.nox_common_maplist)
	list, err := scanMaps()
	if err != nil && len(list) == 0 {
		return err
	}
	for _, m := range list {
		nox_common_scanAddMap(m.Filename)
	}
	return nil
}

func nox_common_scanAddMap(filename string) {
	name := filename
	if len(name) > 9 {
		name = name[:8] // FIXME: can we split by path separator? extension?
	}
	if err := nox_common_checkMapFile(name); err != nil {
		gameLog.Println("map list:", err)
		return
	}
	mpp, _ := alloc.Malloc(unsafe.Sizeof(C.nox_map_list_item{}))
	mp := (*C.nox_map_list_item)(mpp)
	C.sub_425770(unsafe.Pointer(mp))
	StrCopy(&mp.name[0], 12, name)
	mp.field_6 = 1
	mp.field_7 = C.uint(memmap.Uint32(0x973F18, 3800))
	mp.field_8_0 = C.uchar(memmap.Uint8(0x973F18, 3804))
	mp.field_8_1 = C.uchar(memmap.Uint8(0x973F18, 3805))
	C.nox_common_maplist_add_4D0760(mp)
}

//export nox_xxx_checkHasSoloMaps_40ABD0
func nox_xxx_checkHasSoloMaps_40ABD0() C.bool {
	return C.bool(nox_xxx_checkHasSoloMaps())
}

func nox_xxx_checkHasSoloMaps() bool {
	_, err := fs.Stat(datapath.Maps("con01a", "con01a.map"))
	return err == nil
}
