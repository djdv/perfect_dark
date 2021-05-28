//
// Grid (MP)
//

#include "stagesetup.h"

s32 intro[];
u32 props[];
struct path paths[];
struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, 0x00ac, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00b7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00b8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00ad, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00b9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00ba, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00ae, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00bb, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00bc, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00af, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00bd, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00be, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b0, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00bf, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c0, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b1, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c1, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b3, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c5, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c6, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b4, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b5, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00c9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00ca, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00b6, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00cb, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, 0x00cc, OBJFLAG_00000001, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d0, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d1, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d2, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d3, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d4, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d5, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d6, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d7, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d8, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, 0x00d9, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_00000800 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0000, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0001, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0002, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0003, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0004, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0005, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0006, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0007, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, 0x0008, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_04000000, 0, 0, 1000)

#if VERSION >= VERSION_NTSC_1_0
	door(0x0100, MODEL_DOOR2A_G5, 0x0080, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000020, 0x00000258, 0x00000000, 0x00000001, 0x00000000)
#else
	door(0x0100, MODEL_DOOR2A_G5, 0x0080, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000001, 0x00000300)
#endif

	door(0x0100, MODEL_DOOR2A_G5, 0x0081, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000020, 0x00000258, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DOOR2A_G5, 0x0082, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, 0x0083, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, 0x0084, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, 0x0085, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	tag(0x01, 1)
	lift(0x0100, MODEL_MATRIX_LIFT, 0x00ce, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x00ce, 0x00cf, -1, -1, 0x00000001, 0x00000003, 0x00000000, 0x00000000, 0x0000071c, 0x0010aaaa, 0x16000000)
	door(0x0100, MODEL_DOOR2A_G5, 0x007c, OBJFLAG_ILLUMINATED | OBJFLAG_04000000, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0x00000001, 0x00001200)
	door(0x0100, MODEL_DOOR2A_G5, 0x007d, OBJFLAG_ILLUMINATED | OBJFLAG_04000000, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DOOR2A_G5, 0x007e, OBJFLAG_ILLUMINATED | OBJFLAG_04000000, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0x00000001, 0x00001200)
	door(0x0100, MODEL_DOOR2A_G5, 0x007f, OBJFLAG_ILLUMINATED | OBJFLAG_04000000, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0xffffffff, 0x00000000)
	lift_door(-4, -5, 0)
	lift_door(-4, -6, 0)
	lift_door(-4, -7, 1)
	lift_door(-4, -8, 1)
	endprops
};

s32 intro[] = {
	spawn(0x00a2)
	spawn(0x00a3)
	spawn(0x00a4)
	spawn(0x00a5)
	spawn(0x00a6)
	spawn(0x00a7)
	spawn(0x00a8)
	spawn(0x00a9)
	spawn(0x00aa)
	spawn(0x00ab)
	case(0, 0x0086)
	case_respawn(0, 0x0087)
	case_respawn(0, 0x0088)
	case_respawn(0, 0x0089)
	case_respawn(0, 0x008a)
	case_respawn(0, 0x008b)
	case_respawn(0, 0x008c)
	case(1, 0x0093)
	case_respawn(1, 0x008d)
	case_respawn(1, 0x008e)
	case_respawn(1, 0x008f)
	case_respawn(1, 0x0090)
	case_respawn(1, 0x0091)
	case_respawn(1, 0x0092)
	case(2, 0x009a)
	case_respawn(2, 0x0094)
	case_respawn(2, 0x0095)
	case_respawn(2, 0x0096)
	case_respawn(2, 0x0097)
	case_respawn(2, 0x0098)
	case_respawn(2, 0x0099)
	case(3, 0x00a1)
	case_respawn(3, 0x009b)
	case_respawn(3, 0x009c)
	case_respawn(3, 0x009d)
	case_respawn(3, 0x009e)
	case_respawn(3, 0x009f)
	case_respawn(3, 0x00a0)
	hill(0x0073)
	hill(0x0013)
	hill(0x006b)
	hill(0x0060)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_start_lift[] = {
	activate_lift(1, 0x01)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_2400[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_2400,       0x1000 },
	{ func1001_start_lift, 0x1001 },
	{ NULL, 0 },
};






