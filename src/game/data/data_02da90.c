#include <ultra64.h>
#include "game/chr/chraicommands.h"
#include "game/game_0f09f0.h"
#include "game/game_102240.h"
#include "game/cheats.h"
#include "game/game_107fb0.h"
#include "game/game_10ccd0.h"
#include "game/camdraw.h"
#include "game/timing.h"
#include "game/game_173a00.h"
#include "game/utils.h"
#include "game/game_177e00.h"
#include "game/game_179060.h"
#include "game/game_17f930.h"
#include "game/game_1a3340.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_020df0.h"
#include "stagesetup.h"
#include "types.h"

// 2da90
struct mptrack g_MpTracks[NUM_MPTRACKS] = {
	// Audio ID, duration, name, unlock after stage
	/*0x00*/ { MUSIC_DARK_COMBAT,     160, L_MISC(124), -1 }, // "Dark Combat"
	/*0x01*/ { MUSIC_SKEDAR_MYSTERY,  170, L_MISC(125), -1 }, // "Skedar Mystery"
	/*0x02*/ { MUSIC_CI_OPERATIVE,    170, L_MISC(126), -1 }, // "CI Operative"
	/*0x03*/ { MUSIC_DATADYNE_ACTION, 180, L_MISC(127), -1 }, // "dataDyne Action"
	/*0x04*/ { MUSIC_MAIAN_TEARS,     200, L_MISC(128), -1 }, // "Maian Tears"
	/*0x05*/ { MUSIC_ALIEN_CONFLICT,  197, L_MISC(129), -1 }, // "Alien Conflict"
	/*0x06*/ { MUSIC_CI,              120, L_MISC(130), -1 }, // "Carrington Institute"
	/*0x07*/ { MUSIC_DEFECTION,       120, L_MISC(131), SOLOSTAGEINDEX_DEFECTION }, // "dD Central"
	/*0x08*/ { MUSIC_DEFECTION_X,     120, L_MISC(132), SOLOSTAGEINDEX_DEFECTION }, // "dD Central X"
	/*0x09*/ { MUSIC_INVESTIGATION,   120, L_MISC(133), SOLOSTAGEINDEX_INVESTIGATION }, // "dD Research"
	/*0x0a*/ { MUSIC_INVESTIGATION_X, 120, L_MISC(134), SOLOSTAGEINDEX_INVESTIGATION }, // "dD Research X"
	/*0x0b*/ { MUSIC_EXTRACTION,      120, L_MISC(135), SOLOSTAGEINDEX_EXTRACTION }, // "dD Extraction"
	/*0x0c*/ { MUSIC_EXTRACTION_X,    120, L_MISC(136), SOLOSTAGEINDEX_EXTRACTION }, // "dD Extraction X"
	/*0x0d*/ { MUSIC_VILLA,           120, L_MISC(137), SOLOSTAGEINDEX_VILLA }, // "Carrington Villa"
	/*0x0e*/ { MUSIC_VILLA_X,         120, L_MISC(138), SOLOSTAGEINDEX_VILLA }, // "Carrington Villa X"
	/*0x0f*/ { MUSIC_CHICAGO,         120, L_MISC(139), SOLOSTAGEINDEX_CHICAGO }, // "Chicago"
	/*0x10*/ { MUSIC_CHICAGO_X,       120, L_MISC(140), SOLOSTAGEINDEX_CHICAGO }, // "Chicago X"
	/*0x11*/ { MUSIC_G5,              120, L_MISC(141), SOLOSTAGEINDEX_G5BUILDING }, // "G5 Building"
	/*0x12*/ { MUSIC_G5_X,            120, L_MISC(142), SOLOSTAGEINDEX_G5BUILDING }, // "G5 Building X"
	/*0x13*/ { MUSIC_INFILTRATION,    120, L_MISC(143), SOLOSTAGEINDEX_INFILTRATION }, // "A51 Infiltration"
	/*0x14*/ { MUSIC_INFILTRATION_X,  120, L_MISC(144), SOLOSTAGEINDEX_INFILTRATION }, // "A51 Infiltration X"
	/*0x15*/ { MUSIC_RESCUE,          120, L_MISC(145), SOLOSTAGEINDEX_RESCUE }, // "A51 Rescue"
	/*0x16*/ { MUSIC_RESCUE_X,        120, L_MISC(146), SOLOSTAGEINDEX_RESCUE }, // "A51 Rescue X"
	/*0x17*/ { MUSIC_ESCAPE,          120, L_MISC(147), SOLOSTAGEINDEX_ESCAPE }, // "A51 Escape"
	/*0x18*/ { MUSIC_ESCAPE_X,        120, L_MISC(148), SOLOSTAGEINDEX_ESCAPE }, // "A51 Escape X"
	/*0x19*/ { MUSIC_AIRBASE,         120, L_MISC(149), SOLOSTAGEINDEX_AIRBASE }, // "Air Base"
	/*0x1a*/ { MUSIC_AIRBASE_X,       120, L_MISC(150), SOLOSTAGEINDEX_AIRBASE }, // "Air Base X"
	/*0x1b*/ { MUSIC_AIRFORCEONE,     120, L_MISC(151), SOLOSTAGEINDEX_AIRFORCEONE }, // "Air Force One"
	/*0x1c*/ { MUSIC_AIRFORCEONE_X,   120, L_MISC(152), SOLOSTAGEINDEX_AIRFORCEONE }, // "Air Force One X"
	/*0x1d*/ { MUSIC_CRASHSITE,       120, L_MISC(153), SOLOSTAGEINDEX_CRASHSITE }, // "Crash Site"
	/*0x1e*/ { MUSIC_CRASHSITE_X,     120, L_MISC(154), SOLOSTAGEINDEX_CRASHSITE }, // "Crash Site X"
	/*0x1f*/ { MUSIC_PELAGIC,         120, L_MISC(155), SOLOSTAGEINDEX_PELAGIC }, // "Pelagic II"
	/*0x20*/ { MUSIC_PELAGIC_X,       120, L_MISC(156), SOLOSTAGEINDEX_PELAGIC }, // "Pelagic II X"
	/*0x21*/ { MUSIC_DEEPSEA,         120, L_MISC(157), SOLOSTAGEINDEX_DEEPSEA }, // "Deep Sea"
	/*0x22*/ { MUSIC_DEEPSEA_X,       120, L_MISC(158), SOLOSTAGEINDEX_DEEPSEA }, // "Deep Sea X"
	/*0x23*/ { MUSIC_DEFENSE,         120, L_MISC(159), SOLOSTAGEINDEX_DEFENSE }, // "Institute Defense"
	/*0x24*/ { MUSIC_DEFENSE_X,       120, L_MISC(160), SOLOSTAGEINDEX_DEFENSE }, // "Institute Defense X"
	/*0x25*/ { MUSIC_ATTACKSHIP,      120, L_MISC(161), SOLOSTAGEINDEX_ATTACKSHIP }, // "Attack Ship"
	/*0x26*/ { MUSIC_ATTACKSHIP_X,    120, L_MISC(162), SOLOSTAGEINDEX_ATTACKSHIP }, // "Attack Ship X"
	/*0x27*/ { MUSIC_SKEDARRUINS,     120, L_MISC(163), SOLOSTAGEINDEX_SKEDARRUINS }, // "Skedar Ruins"
	/*0x28*/ { MUSIC_SKEDARRUINS_X,   120, L_MISC(164), SOLOSTAGEINDEX_SKEDARRUINS }, // "Skedar Ruins X"
	/*0x29*/ { MUSIC_CREDITS,         120, L_MISC(165), SOLOSTAGEINDEX_SKEDARRUINS }, // "End Credits"
};

// 2db8c
struct mppreset g_MpPresets[NUM_MPPRESETS] = {
	{ L_MPWEAPONS(25), MPCONFIG_NOSHIELD   }, // "No Shield"
	{ L_MPWEAPONS(26), MPCONFIG_AUTOMATICS }, // "Automatics"
	{ L_MPWEAPONS(27), MPCONFIG_ROCKETS    }, // "Rocket Launcher"
	{ L_MPWEAPONS(28), MPCONFIG_SIMULANTS  }, // "Simulants"
	{ L_MPWEAPONS(29), MPCONFIG_SKEDARKING }, // "King of the Hill"
	{ L_MPWEAPONS(30), MPCONFIG_FARSIGHT   }, // "Complex FarSight"
	{ L_MPWEAPONS(31), MPCONFIG_BRIEFCASE  }, // "Hold the Briefcase"
	{ L_MPWEAPONS(32), MPCONFIG_PISTOLS    }, // "Pistol One-Hit Kills"
	{ L_MPWEAPONS(33), MPCONFIG_FLAGS      }, // "Capture the Case"
	{ L_MPWEAPONS(34), MPCONFIG_CLOAKING   }, // "Cloaking"
	{ L_MPWEAPONS(35), MPCONFIG_TEMPLE     }, // "Temple Explosives"
	{ L_MPWEAPONS(36), MPCONFIG_SLAYER     }, // "Slayer"
	{ L_MPWEAPONS(37), MPCONFIG_DRUGGUN    }, // "Tranquilizr"
	{ L_MPWEAPONS(38), MPCONFIG_SLOWMO     }, // "Slow Motion"
};

u32 var80087cbc = 0x00000000;
u32 var80087cc0 = 0x00000001;

// 2dce4
u32 g_TeamColours[] = {
	0xff000000, // Red
	0xffff0000, // Yellow
	0x0000ff00, // Blue
	0xff00ff00, // Magenta
	0x00ffff00, // Cyan
	0xff885500, // Orange
	0x8800ff00, // Pink
	0x88445500, // Brown
};

u16 var80087ce4[] = {
	0xf801, 0xf801,
	0xffc1, 0xffc1,
	0x003f, 0x003f,
	0xf83f, 0xf83f,
	0x07ff, 0x07ff,
	0xfc55, 0xfc55,
	0xfc63, 0xfc63,
	0x8a15, 0x8a15,
	0x0000, 0x0000,
	0x0000, 0x0000,
	0x0000, 0x0000,
};

u8 g_NumMpSimulantChrs = 0;

struct var80087d14 var80087d14[] = {
	{ 90, 0.26175770163536,  0.52351540327072,  600, 10, 0.69802051782608, 0.34901025891304,  1000 },
	{ 60, 0.12215359508991,  0.24430719017982,  360, 10, 0.49733963608742, 0.13960410654545,  1000 },
	{ 30, 0.069802053272724, 0.13960410654545,  180, 4,  0.34901025891304, 0.08725256472826,  1500 },
	{ 15, 0.026175770908594, 0.069802053272724, 90,  2,  0.24430719017982, 0.034901026636362, 2500 },
	{ 0,  0,                 0.034901026636362, 45,  1,  0.17450512945652, 0,                 4000 },
	{ 0,  0,                 0,                 0,   0,  0.13960410654545, 0,                 4000 },
	{ 0,  0,                 0,                 0,   0,  0,                0,                 0    },
};

// 2de14
u32 g_MpBotCommands[NUM_MPBOTCOMMANDS] = {
	L_MISC(175), // "Follow"
	L_MISC(176), // "Attack"
	L_MISC(177), // "Defend"
	L_MISC(178), // "Hold"
	L_MISC(179), // "Normal"
	L_MISC(180), // "Download"
	L_MISC(181), // "Get Case"
	L_MISC(182), // "Tag Box"
	L_MISC(209), // "Save Case"
	L_MISC(210), // "Def Hill"
	L_MISC(211), // "Hold Hill"
	L_MISC(212), // "Get Case"
	L_MISC(213), // "Pop Cap"
	L_MISC(214), // "Protect"
};

u32 var80087e2c = 0x00000000;
u32 var80087e30 = 0x00000000;
u32 var80087e34 = 0x00000000;
u32 var80087e38 = 0x00000000;
u32 var80087e3c = 0x00000000;
u32 var80087e40 = 0x00000000;
u32 var80087e44 = 0x00000000;
u32 var80087e48 = 0x00000000;
u32 var80087e4c = 0x00000000;
u32 var80087e50 = 0x00000000;
u32 var80087e54 = 0x42f00000;
u32 var80087e58 = 0x461c4000;
u32 var80087e5c = 0x43960000;
u32 var80087e60 = 0x43e10000;
u32 var80087e64 = 0x458ca000;
u32 var80087e68 = 0x43960000;
u32 var80087e6c = 0x44160000;
u32 var80087e70 = 0x458ca000;
u32 var80087e74 = 0x44160000;
u32 var80087e78 = 0x44960000;
u32 var80087e7c = 0x458ca000;
u32 var80087e80 = 0x43160000;
u32 var80087e84 = 0x437a0000;
u32 var80087e88 = 0x458ca000;
u32 var80087e8c = 0x447a0000;
u32 var80087e90 = 0x44fa0000;
u32 var80087e94 = 0x453b8000;
u32 var80087e98 = 0x00000000;
u32 var80087e9c = 0x437a0000;
u32 var80087ea0 = 0x461c4000;
u32 var80087ea4 = 0x43e10000;
u32 var80087ea8 = 0x442f0000;
u32 var80087eac = 0x458ca000;
u32 var80087eb0 = 0x00000000;
u32 var80087eb4 = 0x08800000;
u32 var80087eb8 = 0x00000000;
u32 var80087ebc = 0x00000000;
u32 var80087ec0 = 0x0d0d0d0d;
u32 var80087ec4 = 0xc0000000;
u32 var80087ec8 = 0x00000000;
u32 var80087ecc = 0x00000000;
u32 var80087ed0 = 0x383c5458;
u32 var80087ed4 = 0xc400001e;
u32 var80087ed8 = 0x0000000a;
u32 var80087edc = 0x00002000;
u32 var80087ee0 = 0x343c5058;
u32 var80087ee4 = 0xc400001e;
u32 var80087ee8 = 0x0000000a;
u32 var80087eec = 0x00002000;
u32 var80087ef0 = 0x3c3c5858;
u32 var80087ef4 = 0xc400001e;
u32 var80087ef8 = 0x0000000a;
u32 var80087efc = 0x00002000;
u32 var80087f00 = 0x4c586878;
u32 var80087f04 = 0xc480001e;
u32 var80087f08 = 0x001e000a;
u32 var80087f0c = 0x000a2000;
u32 var80087f10 = 0x40585c78;
u32 var80087f14 = 0xc480001e;
u32 var80087f18 = 0x001e000a;
u32 var80087f1c = 0x000a2000;
u32 var80087f20 = 0x484c6478;
u32 var80087f24 = 0xc480001e;
u32 var80087f28 = 0x001e000a;
u32 var80087f2c = 0x000a4000;
u32 var80087f30 = 0x444c6078;
u32 var80087f34 = 0xc400001e;
u32 var80087f38 = 0x00000008;
u32 var80087f3c = 0x00006000;
u32 var80087f40 = 0xb4bcb8bc;
u32 var80087f44 = 0xc4000014;
u32 var80087f48 = 0x00000006;
u32 var80087f4c = 0x00006000;
u32 var80087f50 = 0x74808898;
u32 var80087f54 = 0xc8800064;
u32 var80087f58 = 0x0064001e;
u32 var80087f5c = 0x001e4000;
u32 var80087f60 = 0x7880848c;
u32 var80087f64 = 0xc8800096;
u32 var80087f68 = 0x00960032;
u32 var80087f6c = 0x00324000;
u32 var80087f70 = 0x98b00000;
u32 var80087f74 = 0xc8800064;
u32 var80087f78 = 0x00460019;
u32 var80087f7c = 0x000f4000;
u32 var80087f80 = 0xacbc0000;
u32 var80087f84 = 0x8880012c;
u32 var80087f88 = 0x00000028;
u32 var80087f8c = 0x00004000;
u32 var80087f90 = 0x808c0000;
u32 var80087f94 = 0xc8800064;
u32 var80087f98 = 0x0000001e;
u32 var80087f9c = 0x00006000;
u32 var80087fa0 = 0x7c940000;
u32 var80087fa4 = 0xc880005a;
u32 var80087fa8 = 0x0000001e;
u32 var80087fac = 0x00002000;
u32 var80087fb0 = 0x9cb40000;
u32 var80087fb4 = 0x88800096;
u32 var80087fb8 = 0x00000028;
u32 var80087fbc = 0x00004000;
u32 var80087fc0 = 0x94b00000;
u32 var80087fc4 = 0x88800078;
u32 var80087fc8 = 0x00000028;
u32 var80087fcc = 0x00004000;
u32 var80087fd0 = 0xa4bc0000;
u32 var80087fd4 = 0xc8c00078;
u32 var80087fd8 = 0x0014001e;
u32 var80087fdc = 0x00062000;
u32 var80087fe0 = 0x8c9c0000;
u32 var80087fe4 = 0xc4400012;
u32 var80087fe8 = 0x00120008;
u32 var80087fec = 0x0008d000;
u32 var80087ff0 = 0x90b00000;
u32 var80087ff4 = 0xc8000190;
u32 var80087ff8 = 0x00000050;
u32 var80087ffc = 0x00006000;
u32 var80088000 = 0x1c280000;
u32 var80088004 = 0x8880001e;
u32 var80088008 = 0x001e000a;
u32 var8008800c = 0x000a4000;
u32 var80088010 = 0xbcbc0000;
u32 var80088014 = 0x8d400010;
u32 var80088018 = 0x00000004;
u32 var8008801c = 0x00004000;
u32 var80088020 = 0xb0bc0000;
u32 var80088024 = 0xccc00014;
u32 var80088028 = 0x00140004;
u32 var8008802c = 0x00044000;
u32 var80088030 = 0xa0bc0000;
u32 var80088034 = 0xccc00002;
u32 var80088038 = 0x00020001;
u32 var8008803c = 0x00014000;
u32 var80088040 = 0xa8bc0000;
u32 var80088044 = 0xccc00002;
u32 var80088048 = 0x00020001;
u32 var8008804c = 0x00016000;
u32 var80088050 = 0x14281828;
u32 var80088054 = 0xc0800000;
u32 var80088058 = 0x00050000;
u32 var8008805c = 0x00012000;
u32 var80088060 = 0x6cb00000;
u32 var80088064 = 0xc880000f;
u32 var80088068 = 0x000f0005;
u32 var8008806c = 0x00059000;
u32 var80088070 = 0x30bc0000;
u32 var80088074 = 0xc8000014;
u32 var80088078 = 0x00180006;
u32 var8008807c = 0x00082000;
u32 var80088080 = 0x70700000;
u32 var80088084 = 0xc8000000;
u32 var80088088 = 0x00000000;
u32 var8008808c = 0x00002000;
u32 var80088090 = 0x24ac0000;
u32 var80088094 = 0xddc00006;
u32 var80088098 = 0x00060002;
u32 var8008809c = 0x00022000;
u32 var800880a0 = 0x20bc0000;
u32 var800880a4 = 0xddc00003;
u32 var800880a8 = 0x00030001;
u32 var800880ac = 0x00012000;
u32 var800880b0 = 0x0c0c0000;
u32 var800880b4 = 0x1c800005;
u32 var800880b8 = 0x00050001;
u32 var800880bc = 0x00012000;
u32 var800880c0 = 0x28b00000;
u32 var800880c4 = 0x1c800005;
u32 var800880c8 = 0x00050001;
u32 var800880cc = 0x00012000;
u32 var800880d0 = 0x2c9c0000;
u32 var800880d4 = 0x88800005;
u32 var800880d8 = 0x00050002;
u32 var800880dc = 0x00022000;
u32 var800880e0 = 0x08080000;
u32 var800880e4 = 0x08800000;
u32 var800880e8 = 0x00000000;
u32 var800880ec = 0x00002000;
u32 var800880f0 = 0x00000000;
u32 var800880f4 = 0x08800000;
u32 var800880f8 = 0x00000000;
u32 var800880fc = 0x00002000;
u32 var80088100 = 0x00000000;
u32 var80088104 = 0x08800000;
u32 var80088108 = 0x00000000;
u32 var8008810c = 0x00002000;
u32 var80088110 = 0x00000000;
u32 var80088114 = 0x08800000;
u32 var80088118 = 0x00000000;
u32 var8008811c = 0x00002000;
u32 var80088120 = 0x00000000;
u32 var80088124 = 0x08800000;
u32 var80088128 = 0x00000000;
u32 var8008812c = 0x00002000;
u32 var80088130 = 0x00000000;
u32 var80088134 = 0x08800000;
u32 var80088138 = 0x00000000;
u32 var8008813c = 0x00002000;
u32 var80088140 = 0x00000000;
u32 var80088144 = 0x08800000;
u32 var80088148 = 0x00000000;
u32 var8008814c = 0x00002000;
u32 var80088150 = 0x00000000;
u32 var80088154 = 0x08800000;
u32 var80088158 = 0x00000000;
u32 var8008815c = 0x00002000;
u32 var80088160 = 0x00000000;
u32 var80088164 = 0x08800000;
u32 var80088168 = 0x00000000;
u32 var8008816c = 0x00002000;
u32 var80088170 = 0x00000000;
u32 var80088174 = 0x08800000;
u32 var80088178 = 0x00000000;
u32 var8008817c = 0x00002000;
u32 var80088180 = 0x00000000;
u32 var80088184 = 0x08800000;
u32 var80088188 = 0x00000000;
u32 var8008818c = 0x00002000;
u32 var80088190 = 0x00000000;
u32 var80088194 = 0x08800000;
u32 var80088198 = 0x00000000;
u32 var8008819c = 0x00002000;
u32 var800881a0 = 0x04040000;
u32 var800881a4 = 0x08800000;
u32 var800881a8 = 0x00000000;
u32 var800881ac = 0x00002000;
u32 var800881b0 = 0x00000000;
u32 var800881b4 = 0x08800000;
u32 var800881b8 = 0x00000000;
u32 var800881bc = 0x00002000;
u32 var800881c0 = 0xdada0000;
u32 var800881c4 = 0x088004b0;
u32 var800881c8 = 0x00000000;
u32 var800881cc = 0x00002000;
u32 var800881d0 = 0x00000000;
u32 var800881d4 = 0x08800000;
u32 var800881d8 = 0x00000000;
u32 var800881dc = 0x00002000;
u32 var800881e0 = 0x00000000;
u32 var800881e4 = 0x08800000;
u32 var800881e8 = 0x00000000;
u32 var800881ec = 0x00002000;
u32 var800881f0 = 0x00000000;
u32 var800881f4 = 0x08800000;
u32 var800881f8 = 0x00000000;
u32 var800881fc = 0x00002000;
u32 var80088200 = 0x00000000;
u32 var80088204 = 0x08800000;
u32 var80088208 = 0x00000000;
u32 var8008820c = 0x00002000;
u32 var80088210 = 0x00000000;
u32 var80088214 = 0x08800000;
u32 var80088218 = 0x00000000;
u32 var8008821c = 0x00002000;
u32 var80088220 = 0x00000000;
u32 var80088224 = 0x08800000;
u32 var80088228 = 0x00000000;
u32 var8008822c = 0x00002000;
u32 var80088230 = 0x00000000;
u32 var80088234 = 0x08800000;
u32 var80088238 = 0x00000000;
u32 var8008823c = 0x00002000;
u32 var80088240 = 0x00000000;
u32 var80088244 = 0x08800000;
u32 var80088248 = 0x00000000;
u32 var8008824c = 0x00002000;
u32 var80088250 = 0x00000000;
u32 var80088254 = 0x08800000;
u32 var80088258 = 0x00000000;
u32 var8008825c = 0x00002000;
u32 var80088260 = 0x00000000;
u32 var80088264 = 0x08800000;
u32 var80088268 = 0x00000000;
u32 var8008826c = 0x00002000;
u32 var80088270 = 0x00000000;
u32 var80088274 = 0x08800000;
u32 var80088278 = 0x00000000;
u32 var8008827c = 0x00002000;
u32 var80088280 = 0x00000000;
u32 var80088284 = 0x08800000;
u32 var80088288 = 0x00000000;
u32 var8008828c = 0x00002000;
u32 var80088290 = 0x00000000;
u32 var80088294 = 0x08800000;
u32 var80088298 = 0x00000000;
u32 var8008829c = 0x00002000;
u32 var800882a0 = 0x00000000;
u32 var800882a4 = 0x08800000;
u32 var800882a8 = 0x00000000;
u32 var800882ac = 0x00002000;
u32 var800882b0 = 0x00000000;
u32 var800882b4 = 0x08800000;
u32 var800882b8 = 0x00000000;
u32 var800882bc = 0x00002000;
u32 var800882c0 = 0x00000000;
u32 var800882c4 = 0x08800000;
u32 var800882c8 = 0x00000000;
u32 var800882cc = 0x00002000;
u32 var800882d0 = 0x00000000;
u32 var800882d4 = 0x08800000;
u32 var800882d8 = 0x00000000;
u32 var800882dc = 0x00002000;
u32 var800882e0 = 0x00000000;
u32 var800882e4 = 0x08800000;
u32 var800882e8 = 0x00000000;
u32 var800882ec = 0x00002000;
u32 var800882f0 = 0x00000000;
u32 var800882f4 = 0x08800000;
u32 var800882f8 = 0x00000000;
u32 var800882fc = 0x00002000;
u32 var80088300 = 0x00000000;
u32 var80088304 = 0x08800000;
u32 var80088308 = 0x00000000;
u32 var8008830c = 0x00002000;
u32 var80088310 = 0x00000000;
u32 var80088314 = 0x08800000;
u32 var80088318 = 0x00000000;
u32 var8008831c = 0x00002000;
u32 var80088320 = 0x00000000;
u32 var80088324 = 0x08800000;
u32 var80088328 = 0x00000000;
u32 var8008832c = 0x00002000;
u32 var80088330 = 0x00000000;
u32 var80088334 = 0x08800000;
u32 var80088338 = 0x00000000;
u32 var8008833c = 0x00002000;
u32 var80088340 = 0x00000000;
u32 var80088344 = 0x08800000;
u32 var80088348 = 0x00000000;
u32 var8008834c = 0x00002000;
u32 var80088350 = 0x00000000;
u32 var80088354 = 0x08800000;
u32 var80088358 = 0x00000000;
u32 var8008835c = 0x00002000;
u32 var80088360 = 0x00000000;
u32 var80088364 = 0x08800000;
u32 var80088368 = 0x00000000;
u32 var8008836c = 0x00002000;
u32 var80088370 = 0x00000000;
u32 var80088374 = 0x08800000;
u32 var80088378 = 0x00000000;
u32 var8008837c = 0x00002000;
u32 var80088380 = 0x00000000;
u32 var80088384 = 0x08800000;
u32 var80088388 = 0x00000000;
u32 var8008838c = 0x00002000;
u32 var80088390 = 0x00000000;
u32 var80088394 = 0x08800000;
u32 var80088398 = 0x00000000;
u32 var8008839c = 0x00002000;
u32 var800883a0 = 0x00000000;
u32 var800883a4 = 0x08800000;
u32 var800883a8 = 0x00000000;
u32 var800883ac = 0x00002000;
u32 var800883b0 = 0x00000000;
u32 var800883b4 = 0x08800000;
u32 var800883b8 = 0x00000000;
u32 var800883bc = 0x00002000;
u32 var800883c0 = 0x00000000;
u32 var800883c4 = 0x08800000;
u32 var800883c8 = 0x00000000;
u32 var800883cc = 0x00002000;
u32 var800883d0 = 0x00000000;
u32 var800883d4 = 0x08800000;
u32 var800883d8 = 0x00000000;
u32 var800883dc = 0x00002000;
u32 var800883e0 = 0x00000000;
u32 var800883e4 = 0x08800000;
u32 var800883e8 = 0x00000000;
u32 var800883ec = 0x00002000;
u32 var800883f0 = 0x00000000;
u32 var800883f4 = 0x08800000;
u32 var800883f8 = 0x00000000;
u32 var800883fc = 0x00002000;
u32 var80088400 = 0x00000000;
u32 var80088404 = 0x08800000;
u32 var80088408 = 0x00000000;
u32 var8008840c = 0x00002000;
u32 var80088410 = 0x00000000;
u32 var80088414 = 0x08800000;
u32 var80088418 = 0x00000000;
u32 var8008841c = 0x00002000;
u32 var80088420 = 0x00000000;
u32 var80088424 = 0x08800000;
u32 var80088428 = 0x00000000;
u32 var8008842c = 0x00002000;
u32 var80088430 = 0x00000000;
u32 var80088434 = 0x08800000;
u32 var80088438 = 0x00000000;
u32 var8008843c = 0x00002000;
u32 var80088440 = 0x00000000;
u32 var80088444 = 0x08800000;
u32 var80088448 = 0x00000000;
u32 var8008844c = 0x00002000;
u32 var80088450 = 0x00000000;
u32 var80088454 = 0x08800000;
u32 var80088458 = 0x00000000;
u32 var8008845c = 0x00002000;
u32 var80088460 = 0xdcdc0000;
u32 var80088464 = 0x08800000;
u32 var80088468 = 0x00000000;
u32 var8008846c = 0x00002000;
u32 var80088470 = 0x00000000;
u32 var80088474 = 0x08800000;
u32 var80088478 = 0x00000000;
u32 var8008847c = 0x00002000;
u32 var80088480 = 0x00000000;
u32 var80088484 = 0x08800000;
u32 var80088488 = 0x00000000;
u32 var8008848c = 0x00002000;

