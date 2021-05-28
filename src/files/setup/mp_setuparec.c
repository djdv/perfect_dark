//
// Ravine (MP)
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
	tag(0x00, 1)
	lift(0x0100, MODEL_RAVINELIFT, 0x00bc, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_ILLUMINATED | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_00100000 | OBJFLAG2_00200000, 0, 1000, 0x00bc, 0x00bb, 0x00ba, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000071c, 0x0010aaaa, 0x00000000)
	weapon(0x0200, MODEL_ROOFGUN, 0x00bd, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00c7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00c8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0200, 0x0000, 0x00be, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00c9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00ca, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0200, 0x0000, 0x00bf, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00cb, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00cc, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, 0x00c0, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00cd, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00ce, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, 0x00c1, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00cf, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d0, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, 0x00c2, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d1, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00c3, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d3, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d4, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00c4, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d5, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d6, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00c5, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, 0x00c6, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00d9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, 0x00da, OBJFLAG_00000001, 0, 0, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00db, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00dc, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00dd, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00de, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00df, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e0, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e1, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e2, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e3, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e4, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e5, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e6, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e7, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e8, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00e9, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00ea, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00eb, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00ec, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00ed, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, 0x00ee, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	endprops
};

s32 intro[] = {
	spawn(0x00b0)
	spawn(0x00b1)
	spawn(0x00b2)
	spawn(0x00b3)
	spawn(0x00b4)
	spawn(0x00b5)
	spawn(0x00b6)
	spawn(0x00b7)
	spawn(0x00b8)
	spawn(0x00b9)
	hill(0x0066)
	hill(0x008d)
	hill(0x0071)
	hill(0x007c)
	hill(0x005c)
	case(0, 0x009a)
	case_respawn(0, 0x0094)
	case_respawn(0, 0x0096)
	case_respawn(0, 0x0097)
	case_respawn(0, 0x0099)
	case_respawn(0, 0x0098)
	case_respawn(0, 0x0095)
	case(1, 0x00a1)
	case_respawn(1, 0x009b)
	case_respawn(1, 0x009c)
	case_respawn(1, 0x009d)
	case_respawn(1, 0x009e)
	case_respawn(1, 0x009f)
	case_respawn(1, 0x00a0)
	case(2, 0x00a8)
	case_respawn(2, 0x00a2)
	case_respawn(2, 0x00a3)
	case_respawn(2, 0x00a4)
	case_respawn(2, 0x00a5)
	case_respawn(2, 0x00a6)
	case_respawn(2, 0x00a7)
	case(3, 0x00af)
	case_respawn(3, 0x00a9)
	case_respawn(3, 0x00aa)
	case_respawn(3, 0x00ab)
	case_respawn(3, 0x00ac)
	case_respawn(3, 0x00ad)
	case_respawn(3, 0x00ae)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_start_lift[] = {
	activate_lift(1, 0x00)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_1b30[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_1b30,       0x1000 },
	{ func1001_start_lift, 0x1001 },
	{ NULL, 0 },
};





