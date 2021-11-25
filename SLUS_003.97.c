typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong u_long;

typedef ushort u_short;

typedef uchar u_char;

typedef struct MATRIX MATRIX, *PMATRIX;

struct MATRIX {
    short m[3][3];
    long t[3];
};

typedef struct VECTOR VECTOR, *PVECTOR;

struct VECTOR {
    long vx;
    long vy;
    long vz;
    long pad;
};

typedef struct SVECTOR SVECTOR, *PSVECTOR;

struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short pad;
};

typedef struct CVECTOR CVECTOR, *PCVECTOR;

struct CVECTOR {
    u_char r;
    u_char g;
    u_char b;
    u_char cd;
};

typedef struct GsDOBJ2 GsDOBJ2, *PGsDOBJ2;

typedef struct _GsCOORDINATE2 _GsCOORDINATE2, *P_GsCOORDINATE2;

typedef struct _GsCOORDINATE2 GsCOORDINATE2;

typedef struct GsCOORD2PARAM GsCOORD2PARAM, *PGsCOORD2PARAM;

struct GsCOORD2PARAM {
    struct VECTOR scale;
    struct SVECTOR rotate;
    struct VECTOR trans;
};

struct _GsCOORDINATE2 {
    ulong flg;
    struct MATRIX coord;
    struct MATRIX workm;
    struct GsCOORD2PARAM * param;
    struct _GsCOORDINATE2 * super;
    struct _GsCOORDINATE2 * sub;
};

struct GsDOBJ2 {
    ulong attribute;
    GsCOORDINATE2 * coord2;
    ulong * tmd;
    ulong id;
};

typedef struct GsRVIEW2 GsRVIEW2, *PGsRVIEW2;

struct GsRVIEW2 {
    long vpx;
    long vpy;
    long vpz;
    long vrx;
    long vry;
    long vrz;
    long rz;
    GsCOORDINATE2 * super;
};

typedef struct TMD_P_F4G TMD_P_F4G, *PTMD_P_F4G;

struct TMD_P_F4G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char dummy3;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
    u_short dummy4;
};

typedef struct VERT VERT, *PVERT;

struct VERT {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
};

typedef struct GsOT GsOT, *PGsOT;

typedef struct GsOT_TAG GsOT_TAG, *PGsOT_TAG;

struct GsOT {
    ulong length;
    struct GsOT_TAG * org;
    ulong offset;
    ulong point;
    struct GsOT_TAG * tag;
};

struct GsOT_TAG {
    uint p:24;
    uchar num:8;
};

typedef struct GsIMAGE GsIMAGE, *PGsIMAGE;

struct GsIMAGE {
    ulong pmode;
    short px;
    short py;
    ushort pw;
    ushort ph;
    ulong * pixel;
    short cx;
    short cy;
    ushort cw;
    ushort ch;
    ulong * clut;
};

typedef struct TMD_P_F3G TMD_P_F3G, *PTMD_P_F3G;

struct TMD_P_F3G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
};

typedef struct TMD_P_G3G TMD_P_G3G, *PTMD_P_G3G;

struct TMD_P_G3G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
};

typedef struct GsF_LIGHT GsF_LIGHT, *PGsF_LIGHT;

struct GsF_LIGHT {
    int vx;
    int vy;
    int vz;
    uchar r;
    uchar g;
    uchar b;
};

typedef uchar PACKET;

typedef struct GsFOGPARAM GsFOGPARAM, *PGsFOGPARAM;

struct GsFOGPARAM {
    short dqa;
    long dqb;
    uchar rfc;
    uchar gfc;
    uchar bfc;
};

typedef struct TMD_P_G4G TMD_P_G4G, *PTMD_P_G4G;

struct TMD_P_G4G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char dummy3;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
    u_short n3;
    u_short v3;
};

typedef struct DECDCTENV DECDCTENV, *PDECDCTENV;

struct DECDCTENV {
    u_char iq_y[64];
    u_char iq_c[64];
    short dct[64];
};

typedef struct CdlLOC CdlLOC, *PCdlLOC;

struct CdlLOC {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
};

typedef struct CdlATV CdlATV, *PCdlATV;

struct CdlATV {
    u_char val0;
    u_char val1;
    u_char val2;
    u_char val3;
};

typedef struct StHEADER StHEADER, *PStHEADER;

struct StHEADER {
    u_short id;
    u_short type;
    u_short secCount;
    u_short nSectors;
    u_long frameCount;
    u_long frameSize;
    u_short width;
    u_short height;
    u_long dummy1;
    u_long dummy2;
    struct CdlLOC loc;
};

typedef struct CdlFILE CdlFILE, *PCdlFILE;

struct CdlFILE {
    struct CdlLOC pos;
    u_long size;
    char name[16];
};

typedef void (* CdlCB)(u_char, u_char *);

typedef struct TILE_8 TILE_8, *PTILE_8;

struct TILE_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct POLY_G3 POLY_G3, *PPOLY_G3;

struct POLY_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
};

typedef struct POLY_F3 POLY_F3, *PPOLY_F3;

struct POLY_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
};

typedef struct POLY_F4 POLY_F4, *PPOLY_F4;

struct POLY_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
};

typedef struct POLY_GT3 POLY_GT3, *PPOLY_GT3;

struct POLY_GT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
};

typedef struct POLY_FT4 POLY_FT4, *PPOLY_FT4;

struct POLY_FT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad2;
};

typedef struct POLY_FT3 POLY_FT3, *PPOLY_FT3;

struct POLY_FT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
};

typedef struct DR_MODE DR_MODE, *PDR_MODE;

struct DR_MODE {
    u_long tag;
    u_long code[2];
};

typedef struct LINE_F3 LINE_F3, *PLINE_F3;

struct LINE_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    u_long pad;
};

typedef struct DR_ENV DR_ENV, *PDR_ENV;

struct DR_ENV {
    u_long tag;
    u_long code[15];
};

typedef struct DR_OFFSET DR_OFFSET, *PDR_OFFSET;

struct DR_OFFSET {
    u_long tag;
    u_long code[2];
};

typedef struct RECT RECT, *PRECT;

struct RECT {
    short x;
    short y;
    short w;
    short h;
};

typedef struct POLY_G4 POLY_G4, *PPOLY_G4;

struct POLY_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char pad3;
    short x3;
    short y3;
};

typedef struct TILE_16 TILE_16, *PTILE_16;

struct TILE_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct SPRT_16 SPRT_16, *PSPRT_16;

struct SPRT_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct LINE_G2 LINE_G2, *PLINE_G2;

struct LINE_G2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
};

typedef struct TILE TILE, *PTILE;

struct TILE {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short w;
    short h;
};

typedef struct DISPENV DISPENV, *PDISPENV;

struct DISPENV {
    struct RECT disp;
    struct RECT screen;
    u_char isinter;
    u_char isrgb24;
    u_char pad0;
    u_char pad1;
};

typedef struct DR_PRIO DR_PRIO, *PDR_PRIO;

struct DR_PRIO {
    u_long tag;
    u_long code[2];
};

typedef struct DR_AREA DR_AREA, *PDR_AREA;

struct DR_AREA {
    u_long tag;
    u_long code[2];
};

typedef struct LINE_F4 LINE_F4, *PLINE_F4;

struct LINE_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
    u_long pad;
};

typedef struct SPRT_8 SPRT_8, *PSPRT_8;

struct SPRT_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct SPRT SPRT, *PSPRT;

struct SPRT {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short w;
    short h;
};

typedef struct LINE_F2 LINE_F2, *PLINE_F2;

struct LINE_F2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
};

typedef struct DR_TPAGE DR_TPAGE, *PDR_TPAGE;

struct DR_TPAGE {
    u_long tag;
    u_long code[1];
};

typedef struct DR_LOAD DR_LOAD, *PDR_LOAD;

struct DR_LOAD {
    u_long tag;
    u_long code[3];
    u_long p[13];
};

typedef struct LINE_G3 LINE_G3, *PLINE_G3;

struct LINE_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_long pad;
};

typedef struct DR_TWIN DR_TWIN, *PDR_TWIN;

struct DR_TWIN {
    u_long tag;
    u_long code[2];
};

typedef struct DR_MOVE DR_MOVE, *PDR_MOVE;

struct DR_MOVE {
    u_long tag;
    u_long code[5];
};

typedef struct TILE_1 TILE_1, *PTILE_1;

struct TILE_1 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct LINE_G4 LINE_G4, *PLINE_G4;

struct LINE_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_long pad;
};

typedef struct DRAWENV DRAWENV, *PDRAWENV;

struct DRAWENV {
    struct RECT clip;
    short ofs[2];
    struct RECT tw;
    u_short tpage;
    u_char dtd;
    u_char dfe;
    u_char isbg;
    u_char r0;
    u_char g0;
    u_char b0;
    struct DR_ENV dr_env;
};

typedef struct POLY_GT4 POLY_GT4, *PPOLY_GT4;

struct POLY_GT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad3;
};

typedef ulong size_t;

typedef struct SpuExtAttr SpuExtAttr, *PSpuExtAttr;

typedef struct SpuVolume SpuVolume, *PSpuVolume;

struct SpuVolume {
    short left;
    short right;
};

struct SpuExtAttr {
    struct SpuVolume volume;
    long reverb;
    long mix;
};

typedef struct SpuCommonAttr SpuCommonAttr, *PSpuCommonAttr;

struct SpuCommonAttr {
    ulong mask;
    struct SpuVolume mvol;
    struct SpuVolume mvolmode;
    struct SpuVolume mvolx;
    struct SpuExtAttr cd;
    struct SpuExtAttr ext;
};

typedef struct MovieInfo MovieInfo, *PMovieInfo;

struct MovieInfo {
    char * fileName;
    int is24bit;
    int startFrame;
    int endFrame;
    int posX;
    int posY;
    int scrWidth;
    int scrHeight;
};

typedef struct DECENV DECENV, *PDECENV;

struct DECENV {
    u_long * vlcbuf[2];
    int vlcid;
    u_short * imgbuf[2];
    int imgid;
    struct RECT rect[2];
    int rectid;
    struct RECT slice;
    int isdone;
    int is24bit;
};




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  __main();
  GsInitGraph(320,240,0,1,0);
  SetSp(&oldSp);
  SetMemSize(2);
  ResetCallback();
  CdInit();
  ResetGraph(0);
  SetGraphDebug(0);
  InitPAD(&pad1,34,&pad2,34);
  StartPAD();
  iVar6 = 0;
  puVar9 = &DAT_800632a0;
  puVar8 = &DAT_8003bd08;
  puVar7 = &DAT_80063260;
  DAT_8006322c = 0;
  DAT_80063230 = 0xff;
  _volume = 0xff;
  DAT_80063240 = 0xff;
  DAT_80063238 = 2;
  DAT_800633e0 = 0xffffffff;
  DAT_8006323c = 0;
  DAT_80063250 = 0;
  DAT_80063254 = 0;
  DAT_80063244 = 0;
  DAT_80063460 = 0;
  DAT_80063464 = 0;
  DAT_8006324c = 1;
  DAT_80063248 = 0x4b0;
  DAT_8006345c = 1;
  DAT_80063258 = 0;
  DAT_8006325c = 0;
  do {
    iVar5 = 0;
    puVar2 = puVar8;
    puVar3 = puVar7;
    puVar4 = puVar9;
    do {
      iVar5 = iVar5 + 1;
      *puVar3 = *puVar2;
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 4);
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 4;
  } while (iVar6 < 4);
  iVar6 = 0xf;
  puVar7 = &DAT_8006331c;
  do {
    *puVar7 = 1;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar6);
  iVar6 = 0x10;
  puVar7 = &DAT_80063320;
  do {
    *puVar7 = 0;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 < 0x40);
  iVar6 = 0x16;
  puVar7 = &DAT_8006343c;
  do {
    *puVar7 = 0;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar6);
  iVar6 = 0xf;
  puVar7 = &DAT_800634a4;
  DAT_800633e4 = 1;
  DAT_800633e8 = 1;
  DAT_80063404 = 1;
  DAT_80063408 = 1;
  DAT_8006340c = 1;
  DAT_80063410 = 1;
  DAT_80063414 = 1;
  DAT_80063430 = 1;
  do {
    *puVar7 = 1;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar6);
  findFileOnCD(&PTR_s__OVERLAYS_LS_BLK_1_80039998,1);
  FUN_80014534(&DAT_80065ee4,94,47,0);
  legalScreens();
  VSyncCallback(cb_vsync);
  VSync(-1);
  cacheFileLookups();
  FUN_80017150(&DAT_80065ee4);
  VSync(1);
  FUN_80017300(&DAT_80065ee4);
  playMovie(0);
  DAT_80063254 = 5;
  do {
    SetSp(&oldSp);
    if (DAT_80063254 == 5) {
      FUN_800182bc();
      SsSetSerialAttr(SS_SERIAL_A,SS_MIX,SS_SON);
      SsSetSerialVol(SS_SERIAL_A,volume,volume);
      FUN_800186c0(_volume);
      FUN_80017300(&DAT_80065ee4);
      playMovie(1);
      DAT_80063254 = 0;
    }
    FUN_80014534(&DAT_80065ee4,160,160,1);
    VSyncCallback(cb_vsync);
    DAT_80039958 = &UNK_801feffc;
                    // Start menu stuff
    FUN_80014d30(&wmenu_bin);
    FUN_8001726c(DAT_80039958,&DAT_80065ee4);
    SwEnterCriticalSection();
    FlushCache();
    SwExitCriticalSection();
    initMenu();
    FUN_8001474c(&DAT_80065ee4);
    DAT_8003997c = &UNK_801feffc;
    FUN_80014d30(&wgame_bin);
    FUN_8001726c(DAT_8003997c,&DAT_80065ee4);
    SwEnterCriticalSection();
    FlushCache();
    SwExitCriticalSection();
    initGame();
    DAT_80054d04 = 0;
    ResetGraph(1);
    GsInitGraph(320,240,0,1,0);
  } while( true );
}



void cb_vsync(void)

{
  short sVar1;
  char cVar2;
  char cVar3;
  
  DAT_80054d8c = DAT_80054d8c + DAT_80054d64;
  if (0x100 - DAT_80054d64 < DAT_80054d8c) {
    DAT_80054d8c = 0;
    DAT_80054d94 = DAT_80054d94 + DAT_80054d50;
    if (0x100 - DAT_80054d50 < DAT_80054d94) {
      DAT_80054d94 = 0;
      DAT_80054d40 = 0;
    }
  }
  DAT_80054d40 = DAT_80054d40 + 1;
  if (0x3d < DAT_80054d40) {
    DAT_80054d94 = 0;
    DAT_80054d8c = 0;
    DAT_80054d40 = 0;
  }
  quad_poly.tpage = 0x10;
  quad_poly.clut = 0x3fc0;
  quad_poly.r0 = '\x7f';
  quad_poly.g0 = '\x7f';
  quad_poly.b0 = '\x7f';
  sVar1 = (short)(DAT_80054d64 / 2);
  quad_poly.x0 = (short)DAT_80054d68 - sVar1;
  quad_poly.x1 = (short)DAT_80054d68 + sVar1;
  sVar1 = (short)(DAT_80054d74 / 2);
  quad_poly.y0 = (short)DAT_80054d6c - sVar1;
  quad_poly.y2 = (short)DAT_80054d6c + sVar1;
  quad_poly.u1 = (u_char)DAT_80054d8c + (char)DAT_80054d64 + 0xff;
  quad_poly.u2 = (u_char)DAT_80054d8c;
  quad_poly.u0 = (u_char)DAT_80054d8c;
  cVar2 = (char)DAT_80054d94 + (char)(DAT_80054d50 / 2);
  cVar3 = (char)(DAT_80054d74 / 2);
  quad_poly._2 = cVar2 - cVar3;
  quad_poly.v2 = cVar2 + cVar3;
  quad_poly.y1 = quad_poly.y0;
  quad_poly._3 = quad_poly._2;
  quad_poly.x2 = quad_poly.x0;
  quad_poly.x3 = quad_poly.x1;
  quad_poly.y3 = quad_poly.y2;
  quad_poly.u3 = quad_poly.u1;
  quad_poly.v3 = quad_poly.v2;
  DrawSync(0);
  DrawPrim(&quad_poly);
  return;
}



void FUN_80014534(u_long *source,undefined4 param_2,undefined4 param_3,int param_4)

{
  RECT dest;
  
  FUN_80017150(source);
  GsDefDispBuff(0,0,0,0);
  DrawSync(0);
  ResetGraph(1);
  GsSwapDispBuff();
  DAT_800399a0 = source;
  FUN_80014d30(&PTR_s__OVERLAYS_LS_BLK_1_80039998);
  dest.y = 254;
  dest.w = 144;
  dest.x = 0;
  dest.h = 258;
  LoadImage(&dest,source);
  if (param_4 != 0) {
    quad_poly.tpage = 0x11;
    quad_poly.clut = 0x3f80;
    quad_poly.y3 = 0xef;
    quad_poly.y2 = 0xef;
    quad_poly.u3 = 0xff;
    quad_poly.u1 = 0xff;
    quad_poly.v3 = 0xef;
    quad_poly.v2 = 0xef;
    quad_poly.x2 = 0;
    quad_poly.x0 = 0;
    quad_poly.x3 = 0x100;
    quad_poly.x1 = 0x100;
    quad_poly.y1 = 0;
    quad_poly.y0 = 0;
    quad_poly.u2 = '\0';
    quad_poly.u0 = '\0';
    quad_poly._3 = '\0';
    quad_poly._2 = '\0';
    quad_poly.r0 = '\x7f';
    quad_poly.g0 = '\x7f';
    quad_poly.b0 = '\x7f';
    DrawPrim(&quad_poly);
    DrawSync(0);
    quad_poly.tpage = 0x12;
    quad_poly.x3 = 0x13f;
    quad_poly.x1 = 0x13f;
    quad_poly.x2 = 0x100;
    quad_poly.x0 = 0x100;
    quad_poly.u3 = '@';
    quad_poly.u1 = '@';
    DrawPrim(&quad_poly);
    DrawSync(0);
  }
  DAT_80054d50 = 0x20;
  DAT_80054d64 = 0x20;
  DAT_80054d74 = 0x10;
  DAT_80054d68 = param_2;
  DAT_80054d6c = param_3;
  SetPolyFT4(&quad_poly);
  return;
}



// WARNING: Removing unreachable block (ram,0x800147cc)

void FUN_8001474c(u_long *source)

{
  int iVar1;
  RECT recp;
  GsIMAGE image;
  
  GsDefDispBuff(0,0,0,0);
  DrawSync(0);
  ResetGraph(1);
  GsSwapDispBuff();
  FUN_80014534(source,36,31,0);
  if (DAT_80063254 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 16;
  }
  (&DAT_80039958)[(iVar1 + 3) * 9] = source;
  FUN_80014d30(&PTR_s__OVERLAYS_LS_BLK_1_80039998 + (iVar1 + 1) * 9);
  GsGetTimInfo(source + 1,&image);
  recp.x = 64;
  recp.w = 160;
  recp.y = 256;
  recp.h = 240;
  LoadImage(&recp,image.pixel);
  recp.y = 254;
  recp.x = 0;
  recp.w = 256;
  recp.h = 1;
  LoadImage(&recp,image.clut);
  SetPolyFT4(&quad_poly);
  quad_poly.tpage = 0x91;
  quad_poly.clut = 0x3f80;
  quad_poly.y3 = 0xef;
  quad_poly.y2 = 0xef;
  quad_poly.u3 = 0xff;
  quad_poly.u1 = 0xff;
  quad_poly.v3 = 0xef;
  quad_poly.v2 = 0xef;
  quad_poly.x2 = 0;
  quad_poly.x0 = 0;
  quad_poly.x3 = 256;
  quad_poly.x1 = 256;
  quad_poly.y1 = 0;
  quad_poly.y0 = 0;
  quad_poly.u2 = '\0';
  quad_poly.u0 = '\0';
  quad_poly._3 = '\0';
  quad_poly._2 = '\0';
  quad_poly.r0 = '\x7f';
  quad_poly.g0 = '\x7f';
  quad_poly.b0 = '\x7f';
  VSync(1);
  DrawPrim(&quad_poly);
  DrawSync(0);
  quad_poly.tpage = 0x93;
  quad_poly.x3 = 0x13f;
  quad_poly.x1 = 0x13f;
  quad_poly.x2 = 256;
  quad_poly.x0 = 256;
  quad_poly.u3 = '@';
  quad_poly.u1 = '@';
  DrawPrim(&quad_poly);
  DrawSync(0);
  VSync(1);
  VSyncCallback(cb_vsync);
  return;
}



void legalScreens(void)

{
  RECT recp;
  GsIMAGE image;
  
  GsDefDispBuff(0,0,0,0);
  DrawSync(0);
  ResetGraph(1);
  GsSwapDispBuff();
  DAT_80039c70 = &DAT_8007e584;
  findFileOnCD(&screens_legal_dat,1);
  readFileFromCD(&screens_legal_dat,1);
  FUN_8001726c(DAT_80039c70,&DAT_80065ee4);
  GsGetTimInfo(&someTim,&image);
  recp.x = 64;
  recp.w = 80;
  recp.y = 256;
  recp.h = 240;
  LoadImage(&recp,image.pixel);
  recp.y = 254;
  recp.x = 0;
  recp.w = 256;
  recp.h = 1;
  LoadImage(&recp,image.clut);
  SetPolyFT4(&quad_poly);
  quad_poly.clut = 0x3f80;
  quad_poly.y3 = 0xef;
  quad_poly.y2 = 0xef;
  quad_poly.v3 = 0xef;
  quad_poly.v2 = 0xef;
  quad_poly.tpage = 0x11;
  quad_poly.x2 = 0;
  quad_poly.x0 = 0;
  quad_poly.x3 = 0xff;
  quad_poly.x1 = 0xff;
  quad_poly.y1 = 0;
  quad_poly.y0 = 0;
  quad_poly.u2 = '\0';
  quad_poly.u0 = '\0';
  quad_poly.u3 = 0xff;
  quad_poly.u1 = 0xff;
  quad_poly._3 = '\0';
  quad_poly._2 = '\0';
  quad_poly.r0 = '\x7f';
  quad_poly.g0 = '\x7f';
  quad_poly.b0 = '\x7f';
  VSync(1);
  DrawPrim(&quad_poly);
  DrawSync(0);
  quad_poly.tpage = 0x12;
  quad_poly.x3 = 0x13f;
  quad_poly.x1 = 0x13f;
  quad_poly.x2 = 0x100;
  quad_poly.x0 = 0x100;
  quad_poly.u3 = '@';
  quad_poly.u1 = '@';
  DrawPrim(&quad_poly);
  DrawSync(0);
  VSync(1);
  quad_poly.tpage = 0x11;
  quad_poly.x2 = 0xff;
  quad_poly.x0 = 0xff;
  quad_poly.x3 = 0x100;
  quad_poly.x1 = 0x100;
  quad_poly.u3 = 0xff;
  quad_poly.u2 = 0xff;
  quad_poly.u1 = 0xff;
  quad_poly.u0 = 0xff;
  DrawPrim(&quad_poly);
  DrawSync(0);
  VSync(1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible UT_ROFF.OBJ/SsUtReverbOff

void SpuInit(void)

{
  VSyncCallback((f *)0x0);
  return;
}



void cacheFileLookups(void)

{
  undefined **ppuVar1;
  uint uVar2;
  
  uVar2 = 0;
  ppuVar1 = &wmenu_bin;
  do {
    findFileOnCD(ppuVar1,1);
    uVar2 = uVar2 + 1;
    ppuVar1 = ppuVar1 + 9;
  } while (uVar2 < 0xfe);
  return;
}



void FUN_80014d08(int param_1)

{
  CdControl('\x02',(u_char *)(param_1 + 0xc),(u_char *)0x0);
  return;
}



void FUN_80014d30(char **file)

{
  bool bVar1;
  int result;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char **ppcVar7;
  
  bVar1 = false;
  uVar6 = 0;
  ppcVar7 = (char **)&DAT_8003995c;
  iVar5 = 0;
  do {
    result = strcmp(*(char **)((int)&wmenu_bin + iVar5),*file);
    if (result == 0) {
      pcVar2 = ppcVar7[1];
      pcVar3 = ppcVar7[2];
      pcVar4 = ppcVar7[3];
      file[3] = *ppcVar7;
      file[4] = pcVar2;
      file[5] = pcVar3;
      file[6] = pcVar4;
      pcVar2 = ppcVar7[5];
      file[7] = ppcVar7[4];
      file[8] = pcVar2;
      bVar1 = true;
      printf("Found %s in the quick table.\n",*file);
      break;
    }
    ppcVar7 = ppcVar7 + 9;
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x24;
  } while (uVar6 < 0xfe);
  if (!bVar1) {
    findFileOnCD(file,1);
    printf("DID NOT FIND %s in the quick table.\n",*file);
  }
  readFileFromCD(file,1);
  return;
}



void findFileOnCD(int file,int param_2)

{
  CdlFILE *result;
  int iVar1;
  char **ppcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      ppcVar2 = (char **)(file + (iVar1 >> 0x10) * 0x24);
      result = CdSearchFile((CdlFILE *)(ppcVar2 + 3),*ppcVar2);
      iVar3 = iVar3 + 1;
      if (result == (CdlFILE *)0x0) {
        printf("Can\'t find file: %s \n",*ppcVar2);
        return;
      }
      iVar1 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < param_2);
  }
  return;
}



void readFileFromCD(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = 0;
      iVar3 = (short)iVar4 * 0x24 + param_1;
      do {
        iVar2 = *(int *)(iVar3 + 0x10);
        CdControl('\x02',(u_char *)(iVar3 + 0xc),(u_char *)0x0);
        CdRead(iVar2 + 0x7ffU >> 0xb,*(u_long **)(iVar3 + 8),0x80);
        while (iVar2 = CdReadSync(1,(u_char *)0x0), 0 < iVar2) {
          VSync(0);
        }
        iVar1 = iVar1 + 1;
      } while ((iVar2 != 0) && (iVar1 * 0x10000 >> 0x10 < 10));
      iVar4 = iVar4 + 1;
    } while (iVar4 * 0x10000 >> 0x10 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80015068(short param_1,short param_2,short param_3,short param_4,uint param_5,void *param_6
                 )

{
  _DAT_80063a4a = param_2 + 0x100;
  _DAT_80063a50 = param_1 + param_3;
  _DAT_80063a5a = _DAT_80063a4a + param_4;
  if ((param_5 & 0x80) == 0) {
    DAT_80063a44 = 0x7f - (byte)param_5;
  }
  else {
    DAT_80063a44 = (byte)param_5 & 0x7f;
  }
  _DAT_80063a56 = ((short)((int)(param_5 & 0x80) >> 7) + 1) * 0x20 | 0x100;
  _DAT_80063a4e = 0;
  DAT_80063a65 = 0xfe;
  DAT_80063a5d = 0xfe;
  DAT_80063a55 = 0xfe;
  DAT_80063a4d = 0xfe;
  DAT_80063a64 = 0xfe;
  DAT_80063a5c = 0xfe;
  DAT_80063a54 = 0xfe;
  DAT_80063a4c = 0xfe;
  DAT_80063a45 = DAT_80063a44;
  DAT_80063a46 = DAT_80063a44;
  _DAT_80063a48 = param_1;
  _DAT_80063a52 = _DAT_80063a4a;
  _DAT_80063a58 = param_1;
  _DAT_80063a60 = _DAT_80063a50;
  _DAT_80063a62 = _DAT_80063a5a;
  SetPolyFT4((POLY_FT4 *)&UNK_80063a40);
  SetSemiTrans(&UNK_80063a40,1);
  AddPrim(param_6,&UNK_80063a40);
  return;
}



void FUN_8001520c(void)

{
  RECT local_18;
  u_long local_10 [2];
  
  local_18.x = 0xfe;
  local_18.y = 0xfe;
  local_18.w = 1;
  local_18.h = 1;
  local_10[0] = 0xffff;
  LoadImage(&local_18,local_10);
  return;
}



uint FUN_80015270(void)

{
  uint uVar1;
  
  uVar1 = ~CONCAT13(DAT_800636d2,CONCAT12(DAT_800636d3,CONCAT11(DAT_80063596,DAT_80063597)));
  if (pad1 == -1) {
    uVar1 = uVar1 & 0xffff0000;
  }
  if (pad2 == -1) {
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}



undefined4 FUN_80015314(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 == 0) {
    uVar1 = 0xff;
    if (pad1 == '\0') {
      uVar1 = 1;
    }
    else {
      if (pad1 == -1) {
        uVar1 = 0;
      }
    }
  }
  else {
    if (((param_1 == 1) && (pad2 != '\0')) && (uVar1 = 0xff, pad2 == -1)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8001537c(void)

{
  uint uVar1;
  
  DAT_80054ce0 = _DAT_80054d7c;
  _DAT_80054d7c = FUN_80015270();
  if (DAT_80054d04 != 0) {
    uVar1 = 0;
    if ((_DAT_80054d7c & 0x10) != 0) {
      uVar1 = *(uint *)(&DAT_8003bd48 + (&DAT_80063260)[DAT_80063258 * 4] * 4);
    }
    if ((_DAT_80054d7c & 0x20) != 0) {
      uVar1 = uVar1 | *(uint *)(&DAT_8003bd48 + (&DAT_80063264)[DAT_80063258 * 4] * 4);
    }
    if ((_DAT_80054d7c & 0x40) != 0) {
      uVar1 = uVar1 | *(uint *)(&DAT_8003bd48 + *(int *)(&DAT_80063268 + DAT_80063258 * 0x10) * 4);
    }
    if ((_DAT_80054d7c & 0x80) != 0) {
      uVar1 = uVar1 | *(uint *)(&DAT_8003bd48 + *(int *)(&DAT_8006326c + DAT_80063258 * 0x10) * 4);
    }
    if ((_DAT_80054d7c & 0x100000) != 0) {
      uVar1 = uVar1 | *(int *)(&DAT_8003bd48 + (&DAT_80063260)[DAT_8006325c * 4] * 4) << 0x10;
    }
    if ((_DAT_80054d7c & 0x200000) != 0) {
      uVar1 = uVar1 | *(int *)(&DAT_8003bd48 + (&DAT_80063264)[DAT_8006325c * 4] * 4) << 0x10;
    }
    if ((_DAT_80054d7c & 0x400000) != 0) {
      uVar1 = uVar1 | *(int *)(&DAT_8003bd48 + *(int *)(&DAT_80063268 + DAT_8006325c * 0x10) * 4) <<
                      0x10;
    }
    if ((_DAT_80054d7c & 0x800000) != 0) {
      uVar1 = uVar1 | *(int *)(&DAT_8003bd48 + *(int *)(&DAT_8006326c + DAT_8006325c * 0x10) * 4) <<
                      0x10;
    }
    _DAT_80054d7c = _DAT_80054d7c & 0xff0fff0f | uVar1;
  }
  DAT_80054cdc = (DAT_80054ce0 ^ _DAT_80054d7c) & _DAT_80054d7c;
  DAT_80054d18 = DAT_80054d18 + 1;
  DAT_80054d10 = 0;
  DAT_80054d54 = DAT_80054d54 + 1;
  DAT_80054d80 = DAT_80054d80 + 1;
  DAT_80054d44 = DAT_80054d44 + 1;
  DAT_80054d58 = DAT_80054d58 + 1;
  DAT_80054d1c = DAT_80054d1c + 1;
  DAT_80054d84 = DAT_80054d84 + 1;
  DAT_80054d4c = DAT_80054d4c + 1;
  if ((DAT_80054cdc & 0x1000) != 0) {
    if (DAT_80054d18 < 0xf) {
      DAT_80054d10 = 0x1000;
    }
    DAT_80054d18 = 0;
  }
  if ((DAT_80054cdc & 0x4000) != 0) {
    if (DAT_80054d54 < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x4000;
    }
    DAT_80054d54 = 0;
  }
  if ((DAT_80054cdc & 0x8000) != 0) {
    if (DAT_80054d44 < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x8000;
    }
    DAT_80054d44 = 0;
  }
  if ((DAT_80054cdc & 0x2000) != 0) {
    if (DAT_80054d80 < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x2000;
    }
    DAT_80054d80 = 0;
  }
  if ((DAT_80054cdc & 0x10000000) != 0) {
    if (DAT_80054d1c < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x10000000;
    }
    DAT_80054d1c = 0;
  }
  if ((DAT_80054cdc & 0x40000000) != 0) {
    if (DAT_80054d58 < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x40000000;
    }
    DAT_80054d58 = 0;
  }
  if ((int)DAT_80054cdc < 0) {
    if (DAT_80054d4c < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x80000000;
    }
    DAT_80054d4c = 0;
  }
  if ((DAT_80054cdc & 0x20000000) != 0) {
    if (DAT_80054d84 < 0xf) {
      DAT_80054d10 = DAT_80054d10 | 0x20000000;
    }
    DAT_80054d84 = 0;
  }
  return;
}



void FUN_80015834(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  DAT_80054d78 = FUN_800260c4();
  FUN_80015b28(param_2);
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x184)) {
    do {
      puVar1 = (undefined4 *)(param_2 + 8);
      param_2 = param_2 + 0x10;
      FUN_800158e0(*puVar1,param_4,(&_gp_1)[param_1]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_3 + 0x184));
  }
  FUN_800260b4(DAT_80054d78);
  return;
}



void FUN_800158e0(int param_1,int param_2,undefined param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(param_1 + 0x14);
  if (0 < iVar9) {
    puVar8 = (undefined *)((int)DAT_80054d78 + 7);
    puVar7 = (undefined2 *)(*(int *)(param_1 + 0x10) + 0xc);
    do {
      iVar9 = iVar9 + -1;
      uVar2 = (&DAT_8005740c)[(uint)(ushort)puVar7[3] * 2];
      *(undefined4 *)(puVar8 + 1) = uVar2;
      uVar3 = (&DAT_8005740c)[(uint)(ushort)puVar7[5] * 2];
      *(undefined4 *)(puVar8 + 0xd) = uVar3;
      uVar4 = (&DAT_8005740c)[(uint)(ushort)puVar7[7] * 2];
      *(undefined4 *)(puVar8 + 0x19) = uVar4;
      setCopReg(2,0x6000,uVar2);
      setCopReg(2,0x7000,uVar4);
      setCopReg(2,0x6800,uVar3);
      copFunction(2,0x1400006);
      *(undefined4 *)(puVar8 + -3) = (&DAT_800589f4)[(ushort)puVar7[2]];
      iVar10 = getCopReg(2,0x18);
      if (-1 < iVar10) {
        setCopReg(2,0x8800,(&DAT_80057410)[(uint)(ushort)puVar7[3] * 2]);
        setCopReg(2,0x9000,(&DAT_80057410)[(uint)(ushort)puVar7[5] * 2]);
        setCopReg(2,0x9800,(&DAT_80057410)[(uint)(ushort)puVar7[7] * 2]);
        copFunction(2,0x158002d);
        *(undefined4 *)(puVar8 + 9) = (&DAT_800589f4)[(ushort)puVar7[4]];
        iVar10 = getCopReg(2,0x9800);
        *(undefined4 *)(puVar8 + 0x15) = (&DAT_800589f4)[(ushort)puVar7[6]];
        *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar7 + -4);
        uVar6 = (uint)DAT_80054d78 & 0xffffff;
        *(undefined4 *)(puVar8 + 0x11) = *(undefined4 *)(puVar7 + -2);
        uVar1 = *puVar7;
        *puVar8 = param_3;
        *(undefined2 *)(puVar8 + 0x1d) = uVar1;
        puVar8 = puVar8 + 0x28;
        puVar5 = (uint *)((iVar10 >> 2) * 4 + *(int *)(param_2 + 4));
        *DAT_80054d78 = *puVar5 & 0xffffff | 0x9000000;
        DAT_80054d78 = DAT_80054d78 + 10;
        *puVar5 = *puVar5 & 0xff000000 | uVar6;
      }
      puVar7 = puVar7 + 0xe;
    } while (0 < iVar9);
  }
  return;
}



void FUN_80015b28(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_v1;
  undefined4 uVar5;
  MATRIX *pMVar6;
  MATRIX *pMVar7;
  undefined4 *puVar8;
  short *psVar9;
  short *psVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  MATRIX MStack112;
  MATRIX MStack80;
  int local_30;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar11 = (undefined4 *)*puVar3;
  sVar1 = *(short *)((int)puVar11 + 6);
  puVar14 = (undefined4 *)puVar3[2];
  iVar18 = puVar3[1];
  pMVar7 = &MStack112;
  local_30 = param_1;
  GsGetLws(*(GsCOORDINATE2 **)(sVar1 * 0x10 + param_1 + 4),&MStack112,&MStack80);
  GsSetLightMatrix(&MStack112);
  GsSetLsMatrix(&MStack80);
  pMVar6 = (MATRIX *)&local_78;
  local_78 = 0x7f;
  local_77 = 0x7f;
  local_76 = 0x7f;
  local_75 = 0;
  FUN_80023da8(pMVar6);
  if (0 < iVar18) {
    uVar5 = extraout_v1;
    puVar3 = &DAT_8005740c;
    psVar9 = (short *)((int)puVar11 + 6);
    iVar13 = (int)sVar1;
    puVar16 = &DAT_800589f4;
    do {
      if (*psVar9 != iVar13) goto LAB_80015de8;
      if ((psVar9[4] == iVar13) && (psVar9[8] == iVar13)) {
        setCopReg(2,in_zero,*puVar14);
        setCopReg(2,in_at,puVar14[1]);
        setCopReg(2,puVar14 + 4,puVar14[2]);
        setCopReg(2,uVar5,puVar14[3]);
        setCopReg(2,pMVar6,puVar14[4]);
        setCopReg(2,pMVar7,puVar14[5]);
        copFunction(2,0x118043f);
        uVar2 = getCopReg(2,0x14);
        *puVar16 = uVar2;
        uVar2 = getCopReg(2,0x15);
        puVar16[1] = uVar2;
        uVar2 = getCopReg(2,0x16);
        puVar16[2] = uVar2;
        setCopReg(2,in_zero,*puVar11);
        setCopReg(2,in_at,puVar11[1]);
        setCopReg(2,puVar11 + 4,puVar11[2]);
        setCopReg(2,uVar5,puVar11[3]);
        setCopReg(2,pMVar6,puVar11[4]);
        setCopReg(2,pMVar7,puVar11[5]);
        copFunction(2,0x280030);
        uVar2 = getCopReg(2,0xc);
        *puVar3 = uVar2;
        uVar2 = getCopReg(2,0xd);
        puVar3[2] = uVar2;
        uVar2 = getCopReg(2,0xe);
        puVar3[4] = uVar2;
        uVar2 = getCopReg(2,0x11);
        puVar3[1] = uVar2;
        uVar2 = getCopReg(2,0x12);
        puVar3[3] = uVar2;
        uVar2 = getCopReg(2,0x13);
        puVar3[5] = uVar2;
        puVar8 = puVar3 + 6;
        puVar17 = puVar16 + 3;
        psVar10 = psVar9 + 0xc;
        puVar12 = puVar11 + 6;
        puVar15 = puVar14 + 6;
        iVar19 = iVar18 + -3;
        iVar4 = iVar13;
      }
      else {
        if (*psVar9 == iVar13) {
          setCopReg(2,in_zero,*puVar14);
          setCopReg(2,in_at,puVar14[1]);
          copFunction(2,0x108041b);
          uVar2 = getCopReg(2,0x16);
          *puVar16 = uVar2;
          setCopReg(2,in_zero,*puVar11);
          setCopReg(2,in_at,puVar11[1]);
          copFunction(2,0x180001);
          uVar2 = getCopReg(2,0xe);
          *puVar3 = uVar2;
          uVar2 = getCopReg(2,0x13);
          puVar3[1] = uVar2;
          puVar8 = puVar3 + 2;
          puVar17 = puVar16 + 1;
          psVar10 = psVar9 + 4;
          puVar12 = puVar11 + 2;
          puVar15 = puVar14 + 2;
          iVar4 = (int)*psVar10;
          iVar19 = iVar18 + -1;
          if (iVar4 == iVar13) {
            setCopReg(2,in_zero,*puVar15);
            setCopReg(2,in_at,puVar14[3]);
            copFunction(2,0x108041b);
            uVar2 = getCopReg(2,0x16);
            *puVar17 = uVar2;
            setCopReg(2,in_zero,*puVar12);
            setCopReg(2,in_at,puVar11[3]);
            copFunction(2,0x180001);
            uVar2 = getCopReg(2,0xe);
            *puVar8 = uVar2;
            uVar2 = getCopReg(2,0x13);
            puVar3[3] = uVar2;
            puVar3 = puVar3 + 4;
            puVar16 = puVar16 + 2;
            psVar9 = psVar9 + 8;
            puVar11 = puVar11 + 4;
            puVar14 = puVar14 + 4;
            iVar18 = iVar18 + -2;
            goto LAB_80015de8;
          }
        }
        else {
LAB_80015de8:
          iVar4 = (int)*psVar9;
          puVar8 = puVar3;
          psVar10 = psVar9;
          puVar12 = puVar11;
          puVar15 = puVar14;
          puVar17 = puVar16;
          iVar19 = iVar18;
        }
        pMVar7 = &MStack112;
        GsGetLws(*(GsCOORDINATE2 **)(iVar4 * 0x10 + local_30 + 4),&MStack112,&MStack80);
        GsSetLightMatrix(&MStack112);
        pMVar6 = &MStack80;
        GsSetLsMatrix(&MStack80);
      }
      puVar3 = puVar8;
      psVar9 = psVar10;
      puVar11 = puVar12;
      iVar13 = iVar4;
      puVar14 = puVar15;
      puVar16 = puVar17;
      iVar18 = iVar19;
    } while (0 < iVar19);
  }
  return;
}



void FUN_80015e58(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_zero;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = param_2;
  puVar3 = (uint *)FUN_800260c4();
  puVar9 = (uint *)(param_3 + 0x78U | (param_3 + 0x28) * 0x100);
  uVar14 = (uint)puVar9 | (param_3 + 0x28) * 0x10000;
  uVar8 = param_3 + 0x40U | (param_3 + 0x14) * 0x100;
  uVar13 = uVar8 | (param_3 + 0x14) * 0x10000;
  iVar12 = 0;
  puVar11 = (undefined *)((int)puVar3 + 7);
  do {
    *(uint *)(puVar11 + 5) = uVar14;
    *(uint *)(puVar11 + -3) = uVar14;
    *(uint *)(puVar11 + 0x15) = uVar13;
    *(uint *)(puVar11 + 0xd) = uVar13;
    puVar4 = (undefined4 *)(param_2 + *(short *)((int)&DAT_801ef150 + iVar12) * 8);
    puVar5 = (undefined4 *)(param_2 + *(short *)((int)&DAT_801ef152 + iVar12) * 8);
    puVar6 = (undefined4 *)(param_2 + *(short *)((int)&DAT_801ef154 + iVar12) * 8);
    setCopReg(2,in_zero,*puVar4);
    setCopReg(2,&UNK_801f0000 + iVar12,puVar4[1]);
    setCopReg(2,puVar6,*puVar5);
    setCopReg(2,uVar8,puVar5[1]);
    setCopReg(2,puVar9,*puVar6);
    setCopReg(2,uVar10,puVar6[1]);
    copFunction(2,0x280030);
    uVar8 = getCopReg(2,0xc);
    puVar3[2] = uVar8;
    uVar8 = getCopReg(2,0xd);
    puVar3[4] = uVar8;
    uVar8 = getCopReg(2,0xe);
    puVar3[6] = uVar8;
    iVar7 = getCopReg(2,0x11);
    iVar1 = getCopReg(2,0x12);
    uVar8 = getCopReg(2,0x13);
    puVar4 = (undefined4 *)(param_2 + *(short *)((int)&DAT_801ef156 + iVar12) * 8);
    setCopReg(2,in_zero,*puVar4);
    setCopReg(2,&UNK_801f0000 + iVar12,puVar4[1]);
    copFunction(2,0x180001);
    uVar2 = getCopReg(2,0xe);
    puVar3[8] = uVar2;
    puVar9 = (uint *)getCopReg(2,0x13);
    iVar7 = (int)(iVar7 + iVar1 + uVar8 + (int)puVar9) >> 4;
    if (0 < iVar7) {
      *puVar11 = 0x38;
      puVar11 = puVar11 + 0x24;
      puVar9 = (uint *)(param_1 + iVar7 * 4);
      uVar10 = (uint)puVar3 & 0xffffff;
      *puVar3 = *puVar9 & 0xffffff | 0x8000000;
      puVar3 = puVar3 + 9;
      uVar8 = 0xff000000;
      *puVar9 = *puVar9 & 0xff000000 | uVar10;
    }
    iVar12 = iVar12 + 8;
  } while (iVar12 < 0x3c0);
  FUN_800260b4(puVar3);
  return;
}



void FUN_80016080(short param_1,short param_2,short param_3,short param_4,u_char param_5,
                 u_char param_6,u_char param_7)

{
  POLY_FT4 *p;
  
  p = (POLY_FT4 *)FUN_800260c4();
  param_2 = param_2 + 0x100;
  p->x2 = param_1;
  p->x0 = param_1;
  p->y1 = param_2;
  p->y0 = param_2;
  p->tpage = 0x140;
  p->x3 = param_1 + param_3;
  p->x1 = param_1 + param_3;
  p->y3 = param_2 + param_4;
  p->y2 = param_2 + param_4;
  p->r0 = param_5;
  p->g0 = param_6;
  p->b0 = param_7;
  p->clut = 0;
  p->v3 = 0xfe;
  p->v2 = 0xfe;
  p->_3 = 0xfe;
  p->_2 = 0xfe;
  p->u3 = 0xfe;
  p->u2 = 0xfe;
  p->u1 = 0xfe;
  p->u0 = 0xfe;
  SetPolyFT4(p);
  SetSemiTrans(p,1);
  AddPrim(DAT_80054d24,p);
  FUN_800260b4(p + 1);
  return;
}



void FUN_800161a4(short param_1,short param_2,short param_3,short param_4,u_char param_5,
                 u_char param_6,u_char param_7,u_char param_8,u_short param_9,u_short param_10,
                 u_char param_11,u_char param_12,u_char param_13)

{
  POLY_FT4 *p;
  
  p = (POLY_FT4 *)FUN_800260c4();
  p->x2 = param_1;
  p->x0 = param_1;
  p->y1 = param_2 + 0x100;
  p->y0 = param_2 + 0x100;
  p->x3 = param_3;
  p->x1 = param_3;
  p->tpage = param_9;
  p->clut = param_10;
  p->y3 = param_4 + 0x100;
  p->y2 = param_4 + 0x100;
  p->u2 = param_5;
  p->u0 = param_5;
  p->_3 = param_6;
  p->_2 = param_6;
  p->u3 = param_7;
  p->u1 = param_7;
  p->r0 = param_11;
  p->g0 = param_12;
  p->v3 = param_8;
  p->v2 = param_8;
  p->b0 = param_13;
  SetPolyFT4(p);
  AddPrim(DAT_80054d24,p);
  FUN_800260b4(p + 1);
  return;
}



void FUN_800162ec(short param_1,short param_2,short param_3,short param_4,u_char param_5,
                 u_char param_6,u_char param_7)

{
  POLY_F4 *pPVar1;
  POLY_F4 *pPVar2;
  
  pPVar2 = (POLY_F4 *)FUN_800260c4();
  DAT_80054cec = pPVar2;
  pPVar2->r0 = param_5;
  pPVar1 = DAT_80054cec;
  param_2 = param_2 + 0x100;
  pPVar2->x2 = param_1;
  pPVar2->x0 = param_1;
  pPVar2->y1 = param_2;
  pPVar2->y0 = param_2;
  pPVar2->x3 = param_1 + param_3;
  pPVar2->x1 = param_1 + param_3;
  pPVar2->y3 = param_2 + param_4;
  pPVar2->y2 = param_2 + param_4;
  pPVar1->g0 = param_6;
  DAT_80054cec->b0 = param_7;
  SetPolyF4(DAT_80054cec);
  pPVar1 = DAT_80054cec;
  DAT_80054cec = DAT_80054cec + 1;
  AddPrim(DAT_80054d24,pPVar1);
  FUN_800260b4(DAT_80054cec);
  return;
}



void FUN_800163e8(undefined param_1,undefined param_2,undefined param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 == 0) && (DAT_80054cf0 < 0x23)) {
    (&DAT_800635b8)[DAT_80054cf0 * 8] = param_1;
    (&DAT_800635b9)[DAT_80054cf0 * 8] = param_2;
    (&DAT_800635ba)[DAT_80054cf0 * 8] = param_3;
    EnterCriticalSection();
    uVar2 = GetRCnt(1);
    iVar1 = DAT_80054cf0 * 2;
    DAT_80054cf0 = DAT_80054cf0 + 1;
    (&DAT_800635bc)[iVar1] = uVar2;
    ExitCriticalSection();
  }
  return;
}



void FUN_800164a4(int param_1,undefined param_2,undefined param_3,undefined param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 == 0) {
    iVar2 = param_1 * 8;
    if (param_1 == 0) {
      EnterCriticalSection();
      DAT_80054d34 = GetRCnt(1);
      ExitCriticalSection();
    }
    else {
      (&DAT_8006372c)[iVar2] = param_2;
      (&DAT_8006372d)[iVar2] = param_3;
      (&DAT_8006372e)[iVar2] = param_4;
      EnterCriticalSection();
      iVar2 = GetRCnt(1);
      ExitCriticalSection();
      iVar1 = iVar2 - DAT_80054d34;
      DAT_80054d34 = iVar2;
      (&DAT_80063730)[param_1 * 2] = iVar1 + (&DAT_80063730)[param_1 * 2];
    }
    if (DAT_80054da8 < param_1) {
      DAT_80054da8 = param_1;
    }
  }
  return;
}



void FUN_8001659c(undefined4 param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_48;
  int local_38;
  int local_30;
  
  DAT_80054d24 = param_1;
  FUN_800163e8(0x14,0x14,0x14,0);
  iVar15 = 0;
  local_48 = 0;
  iVar13 = (&DAT_800635bc)[(DAT_80054cf0 + -1) * 2];
  iVar9 = 0;
  DAT_80054d98 = iVar13;
  if (0 < DAT_80054cf0) {
    puVar10 = &DAT_800635ba;
    puVar12 = &DAT_800635b9;
    puVar11 = &DAT_800635b8;
    local_38 = 0x1e;
    iVar14 = 0x10;
    local_30 = 0x1f;
    do {
      iVar6 = *(int *)(&UNK_800635ac + iVar14);
      if (iVar9 != 0) {
        iVar6 = iVar6 - *(int *)(&UNK_800635a4 + iVar14);
      }
      iVar6 = (iVar6 + 1) * 0x94;
      if (iVar13 == 0) {
        trap(0x1c00);
      }
      if ((iVar13 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      iVar7 = iVar15 + 0xa9;
      iVar14 = iVar14 + 8;
      iVar9 = iVar9 + 1;
      iVar15 = iVar15 + -(iVar6 / 0x418);
      iVar4 = -(iVar6 / iVar13);
      FUN_800162ec(0x11,iVar7,3,-(iVar6 / 0x418),*puVar11,*puVar12,*puVar10);
      iVar6 = local_48 + 0xa9;
      local_48 = local_48 + iVar4;
      FUN_800162ec(0x18,iVar6,3,iVar4,*puVar11,*puVar12,*puVar10);
      uVar1 = *puVar11;
      puVar11 = puVar11 + 8;
      uVar2 = *puVar12;
      puVar12 = puVar12 + 8;
      uVar3 = *puVar10;
      puVar10 = puVar10 + 8;
      FUN_800162ec(local_30,0xa9,3,iVar4,uVar1,uVar2,uVar3);
      FUN_800162ec(local_38,0xaa,5,0xffffff6a,0x80,0x80,0x80);
      local_38 = local_38 + 7;
      local_30 = local_30 + 7;
    } while (iVar9 < DAT_80054cf0);
  }
  FUN_800162ec(0x10,0xaa,5,0xffffffdc,0x80,0x80,0x80);
  FUN_800162ec(0x10,0x85,5,0xffffffdc,0x80,0x80,0x80);
  FUN_800162ec(0x10,0x5f,5,0xffffffdc,0x80,0x80,0x80);
  FUN_800162ec(0x10,0x3a,5,0xffffffdc,0x80,0x80,0x80);
  FUN_800162ec(0x10,0xaa,5,0xffffff6a,0x80,0,0);
  FUN_800162ec(0x17,0xaa,5,0xffffff6a,0x80,0x80,0x80);
  iVar13 = 0;
  iVar15 = 0;
  iVar9 = 1;
  local_48 = 0;
  if (0 < DAT_80054da8) {
    iVar14 = 8;
    do {
      iVar9 = iVar9 + 1;
      iVar13 = iVar13 + *(int *)((int)&DAT_80063730 + iVar14);
      iVar14 = iVar14 + 8;
    } while (iVar9 <= DAT_80054da8);
  }
  iVar9 = 1;
  if (iVar13 == 0) {
    iVar13 = 1;
  }
  if (0 < DAT_80054da8) {
    puVar5 = &DAT_8006372e;
    puVar11 = &DAT_80063735;
    puVar10 = &DAT_80063734;
    iVar14 = 8;
    do {
      puVar5 = puVar5 + 8;
      iVar6 = (*(int *)((int)&DAT_80063730 + iVar14) + 1) * 0x94;
      if (iVar13 == 0) {
        trap(0x1c00);
      }
      if ((iVar13 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = -(iVar6 / iVar13);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x3ff;
      }
      iVar7 = iVar15 + 0xa9;
      iVar15 = iVar15 + -(iVar6 >> 10);
      iVar14 = iVar14 + 8;
      iVar8 = iVar9 + 2;
      iVar9 = iVar9 + 1;
      FUN_800162ec((DAT_80054cf0 + 2) * 7 + 0x11,iVar7,3,-(iVar6 >> 10),*puVar10,*puVar11,*puVar5);
      iVar6 = local_48 + 0xa9;
      local_48 = local_48 + iVar4;
      FUN_800162ec((DAT_80054cf0 + 3) * 7 + 0x11,iVar6,3,iVar4,*puVar10,*puVar11,*puVar5);
      uVar1 = *puVar10;
      puVar10 = puVar10 + 8;
      uVar2 = *puVar11;
      puVar11 = puVar11 + 8;
      FUN_800162ec((iVar8 + DAT_80054cf0 + 1) * 7 + 0x11,0xa9,3,iVar4,uVar1,uVar2,*puVar5);
      FUN_800162ec((iVar8 + DAT_80054cf0 + 1) * 7 + 0x10,0xaa,5,0xffffff6a,0xff,0xff,0xff);
    } while (iVar9 <= DAT_80054da8);
  }
  FUN_800162ec((DAT_80054cf0 + 2) * 7 + 0x10,0xaa,5,0xffffff6a,0xff,0xff,0xff);
  FUN_800162ec((DAT_80054cf0 + 3) * 7 + 0x10,0xaa,5,0xffffff6a,0xff,0xff,0xff);
  EnterCriticalSection();
  ResetRCnt(1);
  ExitCriticalSection();
  DAT_80054cf0 = 0;
  if (-1 < DAT_80054da8) {
    iVar9 = 0;
    do {
      *(undefined4 *)((int)&DAT_80063730 + iVar9) = 0;
      iVar9 = iVar9 + 8;
    } while (iVar9 <= DAT_80054da8 << 3);
  }
  DAT_80054da8 = 0;
  return;
}



void FUN_80016b6c(int param_1)

{
  RECT local_30;
  GsIMAGE local_28;
  
  GsGetTimInfo((ulong *)(param_1 + 4),&local_28);
  local_30.x = local_28.px;
  local_30.y = local_28.py;
  local_30.w = local_28.pw;
  local_30.h = local_28.ph;
  LoadImage(&local_30,local_28.pixel);
  if ((local_28.pmode >> 3 & 1) != 0) {
    local_30.x = local_28.cx;
    local_30.y = local_28.cy;
    local_30.w = local_28.cw;
    local_30.h = local_28.ch;
    LoadImage(&local_30,local_28.clut);
  }
  return;
}



void FUN_80016bfc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined auStack23 [6];
  char local_11 [9];
  
  iVar3 = 7;
  local_11[1] = 0;
  if (param_3 == 0) {
    local_11[0] = '0';
    iVar3 = 6;
  }
  else {
    pcVar2 = local_11;
    do {
      iVar3 = iVar3 + -1;
      iVar1 = param_3 / 10;
      *pcVar2 = (char)param_3 + (char)iVar1 * -10 + '0';
      pcVar2 = pcVar2 + -1;
      param_3 = iVar1;
    } while (iVar1 != 0);
  }
  FUN_80016c94(0,auStack23 + iVar3,param_1,param_2);
  return;
}



void FUN_80016c94(void *param_1,byte *param_2,short param_3,short param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  u_char uVar4;
  u_short uVar5;
  int iVar6;
  POLY_FT4 *p;
  short sVar7;
  byte *pbVar8;
  uint uVar9;
  u_char uVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = 0;
  iVar12 = 0;
  bVar1 = *param_2;
  pbVar8 = param_2;
  while (bVar1 != 0) {
    pbVar8 = pbVar8 + 1;
    iVar12 = iVar12 + 1;
    bVar1 = *pbVar8;
  }
  param_4 = param_4 + 0x100;
  pbVar8 = param_2;
  if (0 < iVar12) {
    do {
      uVar9 = (uint)*pbVar8;
      if (uVar9 - 0x41 < 0x1a) {
        iVar6 = *pbVar8 - 0x41;
LAB_80016dac:
        iVar6 = iVar6 << 4;
LAB_80016db0:
        uVar10 = (&DAT_80039540)[iVar6];
        cVar2 = (&DAT_80039544)[iVar6];
        p = (POLY_FT4 *)FUN_800260c4();
        uVar4 = cVar2 + '\x01';
        p->u2 = uVar10;
        p->u0 = uVar10;
        p->_3 = uVar4;
        p->_2 = uVar4;
        cVar3 = (&DAT_80039548)[iVar6];
        sVar7 = param_3 + (short)iVar11;
        p->u3 = uVar10 + cVar3;
        p->u1 = uVar10 + cVar3;
        cVar3 = (&DAT_8003954c)[iVar6];
        p->x2 = sVar7;
        p->x0 = sVar7;
        p->y1 = param_4;
        p->y0 = param_4;
        uVar10 = cVar2 + cVar3 + '\x01';
        p->v3 = uVar10;
        p->v2 = uVar10;
        sVar7 = param_3 + *(short *)(&DAT_80039548 + iVar6) + (short)iVar11;
        p->x3 = sVar7;
        p->x1 = sVar7;
        sVar7 = *(short *)(&DAT_8003954c + iVar6);
        p->r0 = '\x7f';
        p->g0 = '\x7f';
        p->b0 = '\x7f';
        p->y3 = sVar7 + param_4;
        p->y2 = sVar7 + param_4;
        uVar5 = GetClut(0x3c0,0x100);
        p->clut = uVar5;
        uVar5 = GetTPage(0,0,0x3c0,0x101);
        p->tpage = uVar5;
        SetPolyFT4(p);
        AddPrim(param_1,p);
        FUN_800260b4(p + 1);
        iVar11 = iVar11 + -2 + *(int *)(&DAT_80039548 + iVar6);
      }
      else {
        if (uVar9 - 0x61 < 0x1a) {
          iVar6 = *pbVar8 - 0x3d;
          goto LAB_80016dac;
        }
        if (uVar9 - 0x30 < 10) {
          iVar6 = *pbVar8 - 0x16;
          goto LAB_80016dac;
        }
        bVar1 = *pbVar8;
        if (bVar1 == 0x3a) {
          iVar6 = 0x3e;
          goto LAB_80016dac;
        }
        if (bVar1 == 0x2e) {
          iVar6 = 0x3f0;
          goto LAB_80016db0;
        }
        iVar6 = 0x40;
        if (bVar1 == 0x3f) goto LAB_80016dac;
        iVar11 = iVar11 + 5;
      }
      pbVar8 = pbVar8 + 1;
    } while ((int)pbVar8 < (int)(param_2 + iVar12));
  }
  return;
}



void FUN_8001701c(void)

{
  int iVar1;
  int iVar2;
  RECT local_20;
  uint local_18;
  char local_14;
  byte local_13;
  byte local_12 [2];
  
  local_20.w = 1;
  local_20.h = 1;
  DAT_80054d14 = PCopen("\\W\\SCRNDUMP.RAW",2,0);
  PClseek(DAT_80054d14,0,0);
  iVar2 = 0xef;
  do {
    local_20.y = (short)iVar2 + 0x100;
    iVar1 = 0;
    do {
      local_20.x = (short)iVar1;
      StoreImage(&local_20,&local_18);
      iVar1 = iVar1 + 1;
      local_13 = (byte)((int)local_18 >> 2) & 0xf8;
      local_12[0] = (byte)((int)local_18 >> 7) & 0xf8;
      local_14 = (char)((local_18 & 0x1f) << 3);
      PCread(DAT_80054d14,&local_14,1);
      PCread(DAT_80054d14,(char *)&local_13,1);
      PCread(DAT_80054d14,(char *)local_12,1);
      local_18 = ~local_18;
      LoadImage(&local_20,&local_18);
    } while (iVar1 < 0x140);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_8001e9d8(DAT_80054d14);
  return;
}



void FUN_80017150(u_long *source)

{
  int max;
  u_long *puVar1;
  RECT dest;
  
  VSyncCallback((f *)0x0);
  max = 19199;
  puVar1 = source;
  do {
    *puVar1 = 0;
    max = max + -1;
    puVar1 = puVar1 + 1;
  } while (-1 < max);
  dest.x = 0;
  dest.y = 0;
  dest.w = 320;
  dest.h = 120;
  LoadImage(&dest,source);
  dest.y = 120;
  LoadImage(&dest,source);
  dest.y = 256;
  LoadImage(&dest,source);
  dest.y = 376;
  LoadImage(&dest,source);
  return;
}



void FUN_800171f8(void)

{
  int iVar1;
  undefined4 *puVar2;
  RECT local_10;
  
  VSyncCallback((f *)0x0);
  iVar1 = 0;
  puVar2 = &DAT_80065ee4;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x14000);
  local_10.w = 0x140;
  local_10.x = 0;
  local_10.y = 0;
  local_10.h = 0x200;
  LoadImage(&local_10,&DAT_80065ee4);
  return;
}



int FUN_8001726c(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar2 = true;
  do {
    uVar3 = (uint)*param_1;
    pbVar5 = param_1 + 1;
    if (uVar3 == 0x80) {
      bVar2 = false;
    }
    else {
      if (uVar3 < 0x80) {
        iVar6 = iVar6 + uVar3;
        if (uVar3 != 0) {
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar3 = uVar3 - 1;
            *param_2 = bVar1;
            param_2 = param_2 + 1;
          } while (0 < (int)uVar3);
        }
      }
      else {
        iVar4 = uVar3 - 0x80;
        bVar1 = *pbVar5;
        pbVar5 = param_1 + 2;
        iVar6 = iVar6 + iVar4;
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *param_2 = bVar1;
          param_2 = param_2 + 1;
        }
      }
    }
    param_1 = pbVar5;
  } while (bVar2);
  return iVar6;
}



void FUN_80017300(u_long *source)

{
  isFirst = 1;
  DAT_80054d0c = source;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void playMovie(int index)

{
  bool bVar1;
  CdlFILE *result;
  uint uVar2;
  int iVar3;
  int iVar4;
  MovieInfo *movie;
  DISPENV disp;
  CdlFILE file;
  
  movie = movies + index;
  SsSetSerialAttr(SS_SERIAL_A,SS_MIX,SS_SON);
  SsSetSerialVol(SS_SERIAL_A,volume,volume);
  iVar4 = 0;
  FUN_800186c0(_volume);
  DAT_80054c80 = 1;
  do {
    result = CdSearchFile(&file,movie->fileName);
    bVar1 = iVar4 < 10;
    if (result != (CdlFILE *)0x0) break;
    iVar4 = iVar4 + 1;
    printf("file not found: %s \n",movie->fileName);
    bVar1 = iVar4 < 10;
  } while (bVar1);
  if (bVar1) {
    if (movies[index].is24bit == 0) {
      iVar4 = movies[index].posX;
    }
    else {
      iVar4 = (movies[index].posX * 3) / 2;
    }
    if (movies[index].is24bit == 0) {
      iVar3 = movies[index].posX;
    }
    else {
      iVar3 = (movies[index].posX * 3) / 2;
    }
    strSetDefDecEnv(&dec,iVar4,movies[index].posY,iVar3,movies[index].posY + 256,movie);
    strInit(&file.pos,strCallback,movie);
    strNextVlc(&dec,movie);
    Rewind_Switch = 0;
    while( true ) {
      iVar4 = 2;
      if (movies[index].is24bit != 0) {
        iVar4 = 3;
      }
      DecDCTin((u_long *)0x0,iVar4);
      DecDCTout((u_long *)(u_short *)0x0,0);
      strNextVlc(&dec,movie);
      strSync(&dec,0);
      VSync(0);
      if (movies[index].is24bit == 0) {
        iVar4 = movies[index].posX;
      }
      else {
        iVar4 = (movies[index].posX * 3) / 2;
      }
      if (movies[index].is24bit == 0) {
        iVar3 = movies[index].scrWidth;
      }
      else {
        iVar3 = (movies[index].scrWidth * 3) / 2;
      }
      SetDefDispEnv(&disp,-iVar4,-movies[index].posY,iVar3,movies[index].scrHeight);
      if (movies[index].is24bit != 0) {
        disp.isrgb24 = *(u_char *)&movies[index].is24bit;
        disp.disp.w = (short)((ulonglong)((longlong)((int)disp.disp.w << 1) * 0x55555556) >> 0x20) -
                      (short)(((int)disp.disp.w << 1) >> 0x1f);
      }
      PutDispEnv(&disp);
      SetDispMask(1);
      if (Rewind_Switch == 1) break;
      uVar2 = FUN_80015270();
      iVar4 = FUN_80015314(0);
      if (((iVar4 != 0) && ((uVar2 & 0x840) != 0)) ||
         ((iVar4 = FUN_80015314(1), iVar4 != 0 && ((uVar2 & 0x8400000) != 0)))) break;
    }
    SsSetSerialVol(SS_SERIAL_A,0,0);
    DecDCToutCallback((func *)0x0);
    StUnSetRing();
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
    DAT_80054cdc = 0;
    DAT_80054ce0 = FUN_80015270();
    _DAT_80054d7c = DAT_80054ce0;
  }
  else {
    SsSetSerialVol(SS_SERIAL_A,0,0);
    ResetGraph(3);
    StopCallback();
  }
  return;
}



void strSetDefDecEnv(DECENV *dec,int x0,int y0,int x1,int y1,MovieInfo *movie)

{
  u_long *puVar1;
  short sVar2;
  
  puVar1 = DAT_80054d0c;
  if (isFirst == 1) {
    dec->vlcid = 0;
    dec->imgid = 0;
    dec->rectid = 0;
    dec->isdone = 0;
    isFirst = 0;
    dec->vlcbuf[1] = puVar1 + 0xa000;
    dec->vlcbuf[0] = puVar1;
    dec->imgbuf[0] = (u_short *)(puVar1 + 0x14000);
    dec->imgbuf[1] = (u_short *)(puVar1 + 0x15e00);
  }
  dec->rect[0].x = (short)x0;
  dec->rect[0].y = (short)y0;
  dec->rect[1].x = (short)x1;
  dec->rect[1].y = (short)y1;
  sVar2 = 16;
  if (movie->is24bit != 0) {
    sVar2 = 24;
  }
  (dec->slice).w = sVar2;
  dec->is24bit = movie->is24bit;
  if (dec->rectid == 0) {
    (dec->slice).x = (short)x0;
    (dec->slice).y = (short)y0;
  }
  else {
    (dec->slice).x = (short)x1;
    (dec->slice).y = (short)y1;
  }
  return;
}



void strInit(CdlLOC *loc,func *callback,MovieInfo *movie)

{
  DecDCTReset(0);
  DecDCToutCallback(callback);
  StSetRing((u_long *)(DAT_80054d0c + 0x5f000),RING_SIZE);
  StSetStream(movie->is24bit,movie->startFrame,0xffffffff,(func1 *)0x0,(func2 *)0x0);
  strKickCD(loc);
  return;
}



// WARNING: Removing unreachable block (ram,0x80017828)
// WARNING: Removing unreachable block (ram,0x8001783c)
// WARNING: Removing unreachable block (ram,0x800178d4)
// WARNING: Removing unreachable block (ram,0x800178dc)
// WARNING: Removing unreachable block (ram,0x80017970)

void strCallback(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
                    // WARNING: Read-only address (ram,0x80054dd4) is written
                    // WARNING: Read-only address (ram,0x80054dda) is written
                    // WARNING: Read-only address (ram,0x80054de0) is written
                    // WARNING: Read-only address (ram,0x80054dc0) is written
  if (DAT_80054c80 != 0) {
    trap(0x1c00);
  }
  local_14 = 0;
  local_18 = 0;
  dec.isdone = 1;
  dec.slice.y = 0;
  dec.slice.x = 0;
  dec.rectid = 1;
  dec.imgid = 1;
                    // WARNING: Read-only address (ram,0x80054dd4) is written
                    // WARNING: Read-only address (ram,0x80054de0) is written
                    // WARNING: Read-only address (ram,0x80054dd8) is written
                    // WARNING: Read-only address (ram,0x80054dda) is written
  DAT_80054c80 = 1;
  LoadImage((RECT *)&local_18,(u_long *)(u_short *)0x0);
  return;
}



void strNextVlc(DECENV *dec,MovieInfo *movie)

{
  u_long *next;
  uint vlcid;
  int cnt;
  
  cnt = WAIT_TIME;
  do {
    next = strNext(dec,movie);
    cnt = cnt + -1;
    if (next != (u_long *)0x0) {
      vlcid = (uint)(dec->vlcid == 0);
      dec->vlcid = vlcid;
      DecDCTvlc(next,dec->vlcbuf[vlcid]);
      StFreeRing(next);
      return;
    }
  } while (cnt != 0);
  return;
}



u_long * strNext(DECENV *dec,MovieInfo *movie)

{
  u_long next;
  int cnt;
  u_long *addr;
  StHEADER *sector;
  
  cnt = MOVIE_WAIT;
  do {
    next = StGetNext(&addr,(u_long **)&sector);
    cnt = cnt + -1;
    if (next == 0) {
      if ((uint)movie->endFrame <= sector->frameCount) {
        Rewind_Switch = 1;
      }
      if ((strWidth != sector->width) || (strHeight != sector->height)) {
        strHeight = (uint)sector->height;
        strWidth = (uint)sector->width;
      }
      if (movie->is24bit == 0) {
      }
      else {
        strWidth._0_2_ = (short)(strWidth * 3 - ((int)(strWidth * 3) >> 0x1f) >> 1);
      }
      dec->rect[1].w = (short)strWidth;
      dec->rect[0].w = (short)strWidth;
      dec->rect[1].h = (short)strHeight;
      dec->rect[0].h = (short)strHeight;
      (dec->slice).h = (short)strHeight;
      return addr;
    }
  } while (cnt != 0);
  return (u_long *)0;
}



void strSync(DECENV *dec,int mode)

{
  uint rectid;
  int isdone;
  int cnt;
  
  isdone = dec->isdone;
  cnt = WAIT_TIME;
  while (isdone == 0) {
    cnt = cnt + -1;
    if (cnt == 0) {
      printf("time out in decoding !\n");
      dec->isdone = 1;
      rectid = (uint)(dec->rectid == 0);
      dec->rectid = rectid;
      isdone = dec->rectid;
      (dec->slice).x = dec->rect[rectid].x;
      (dec->slice).y = dec->rect[isdone].y;
    }
    isdone = dec->isdone;
  }
  dec->isdone = 0;
  return;
}



void strKickCD(CdlLOC *loc)

{
  int result;
  u_char param;
  
  param = CdlModeSpeed;
  do {
    do {
      result = CdControl(CdlSetloc,&loc->minute,(u_char *)0x0);
    } while (result == 0);
    do {
      result = CdControl(CdlSetmode,&param,(u_char *)0x0);
    } while (result == 0);
    VSync(3);
    result = CdRead2(0x1c0);
  } while (result == 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80017d0c(uchar *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_800189a0();
  SsSetTickMode(2);
  SpuInitHot();
  sVar2 = (short)((uint)((DAT_80063240 - (DAT_80063240 >> 0x1f)) * 0x8000) >> 0x10);
  SsSetMVol(sVar2,sVar2);
  (&DAT_80039958)[(param_2 + 0x1a) * 9] = &DAT_800591b4;
  FUN_80014d30(&UNK_80039cf8 + param_2 * 0x24);
  FUN_80014d08(&UNK_80039c8c + param_2 * 0x24);
  DAT_80054d38 = SsVabOpenHead(&DAT_800591b4,-1);
  if ((int)((uint)DAT_80054d38 << 0x10) < 0) {
    printf("SsVabOepnHead : failed!\n");
  }
  else {
    (&DAT_80039958)[(param_2 + 0x17) * 9] = param_1;
    FUN_80014d30(&UNK_80039c8c + param_2 * 0x24);
    uVar1 = SsVabTransBody(param_1,DAT_80054d38);
    if (uVar1 == DAT_80054d38) {
      SsVabTransCompleted(1);
      SsSetSerialAttr('\0','\0','\x01');
      SsSetSerialVol('\0',volume,volume);
      FUN_800186c0(_volume);
    }
    else {
      printf("SsVabTransBody : failed!\n");
    }
  }
  return;
}



int FUN_80017ea0(uchar *param_1,uchar *param_2)

{
  short sVar1;
  char *fmt;
  int iVar2;
  
  sVar1 = SsVabOpenHead(param_1,-1);
  iVar2 = (int)sVar1;
  if (iVar2 < 0) {
    fmt = "SsVabOepnHead : failed!\n";
  }
  else {
    sVar1 = SsVabTransBody(param_2,sVar1);
    if (sVar1 == iVar2) {
      SsVabTransCompleted(1);
      return iVar2;
    }
    fmt = "SsVabTransBody : failed!\n";
  }
  printf(fmt);
  return -1;
}



void FUN_80017f30(short param_1)

{
  FUN_800182bc();
  SsVabClose(param_1);
  return;
}



void FUN_80017f64(void)

{
  FUN_800182bc();
  FUN_8001841c();
  SsVabClose(0);
  SsEnd();
  return;
}



void FUN_80017f9c(short param_1)

{
  DAT_80054cf8 = DAT_80054cf8 + 1 & 0xf;
  SsUtKeyOffV((short)DAT_80054cf8);
  SsUtKeyOnV((short)DAT_80054cf8,DAT_80054d38,param_1,0,0x3c,0,
             (short)((uint)((DAT_80063230 - (DAT_80063230 >> 0x1f)) * 0x8000) >> 0x10),
             (short)((uint)((DAT_80063230 - (DAT_80063230 >> 0x1f)) * 0x8000) >> 0x10));
  return;
}



void FUN_80018034(short param_1,short param_2)

{
  DAT_80054cf8 = DAT_80054cf8 + 1 & 0xf;
  SsUtKeyOffV((short)DAT_80054cf8);
  SsUtKeyOnV((short)DAT_80054cf8,DAT_80054d38,param_1,0,param_2,0,
             (short)((uint)((DAT_80063230 - (DAT_80063230 >> 0x1f)) * 0x8000) >> 0x10),
             (short)((uint)((DAT_80063230 - (DAT_80063230 >> 0x1f)) * 0x8000) >> 0x10));
  return;
}



void FUN_800180dc(short param_1,short param_2,int param_3)

{
  SsUtKeyOffV(param_2);
  SsUtKeyOnV(param_2,DAT_80054d38,param_1,0,0x3c,0,
             (short)((uint)(param_3 * DAT_80063230 * 0x80) >> 0x10),
             (short)((uint)(param_3 * DAT_80063230 * 0x80) >> 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80018188(short param_1,short param_2,int param_3)

{
  SsUtKeyOffV(param_2);
  SsUtKeyOnV(param_2,DAT_80054d38,param_1,0,0x3c,0,(short)((uint)(param_3 * _volume * 0x80) >> 0x10)
             ,(short)((uint)(param_3 * _volume * 0x80) >> 0x10));
  return;
}



void FUN_800182bc(void)

{
  short voice;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    voice = (short)((uint)iVar1 >> 16);
    SsUtSetVVol(voice,0,0);
    SsUtKeyOffV(voice);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 < 24);
  return;
}



void FUN_80018318(int param_1)

{
  DAT_80063238 = param_1;
  CdSetDebug(0);
  FUN_800186c0(0);
  CdSyncCallback(FUN_80018474);
  CdReadyCallback(FUN_800184e0);
  while( true ) {
    DAT_80054d88 = CdGetToc((CdlLOC *)&DAT_80063868);
    if (DAT_80054d88 != 0) break;
    printf("No TOC found: please use CD-DA disc...\n");
  }
  DAT_80054ce4 = 5;
  DAT_80054d70 = DAT_8006323c;
  if (DAT_8006323c != 0) {
    DAT_80054ce4 = 0x85;
  }
  CdControlB('\x0e',&DAT_80054ce4,(u_char *)0x0);
  CdControlB('\x03',&DAT_80063868 + DAT_80063238 * 4,(u_char *)0x0);
  SsSetSerialAttr('\0','\0','\x01');
  SsSetSerialVol('\0',volume,volume);
  DAT_80054c88 = 0;
  DAT_80054d9c = 0;
  return;
}



void FUN_8001841c(void)

{
  CdSyncCallback((CdlCB)0x0);
  CdReadyCallback((CdlCB)0x0);
  CdControlB('\b',(u_char *)0x0,(u_char *)0x0);
  SsSetSerialAttr('\0','\0','\0');
  SsSetSerialVol('\0',0,0);
  return;
}



void FUN_80018474(u_char param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == '\x02') {
    iVar1 = CdLastCom();
    if (iVar1 == 0x16) {
      CdControl('\x03',(u_char *)0x0,(u_char *)0x0);
    }
  }
  else {
    pcVar2 = CdIntstr(param_1);
    printf("cbcomplete error: %s\n",pcVar2);
    DAT_80054c74 = 1;
  }
  return;
}



void FUN_800184e0(char param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == '\x01') {
    if ((*(byte *)(param_2 + 4) & 0x80) == 0) {
      DAT_80054c88 = (uint)(*(byte *)(param_2 + 1) >> 4) * 10 + (*(byte *)(param_2 + 1) & 0xf);
      DAT_80054c8c = (uint)*(byte *)(param_2 + 3);
      DAT_80054c90 = (uint)*(byte *)(param_2 + 4);
      DAT_80054c94 = (uint)CONCAT11(*(undefined *)(param_2 + 6),*(undefined *)(param_2 + 7));
    }
  }
  else {
    if (param_1 == '\x05') {
      pcVar1 = CdIntstr('\x05');
      printf("cbdataready error:%s\n",pcVar1);
      DAT_80054c74 = 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_800185a0(void)

{
  undefined4 uVar1;
  
  DAT_80054d5c = CdSync(1,(u_char *)0x0);
  if ((DAT_80054d5c == 5) || (DAT_80054c74 != 0)) {
    CdControl('\x16',&DAT_80063868 + DAT_80063238 * 4,(u_char *)0x0);
    DAT_80054c74 = 0;
  }
  if ((DAT_80054c88 != DAT_80063238) && (200 < DAT_80054d9c)) {
    FUN_80018318();
  }
  DAT_80054d9c = DAT_80054d9c + 1;
  if (DAT_8006323c != DAT_80054d70) {
    DAT_80054ce4 = 5;
    DAT_80054d70 = DAT_8006323c;
    if (DAT_8006323c != 0) {
      DAT_80054ce4 = 0x85;
    }
    CdControlB('\x0e',&DAT_80054ce4,(u_char *)0x0);
  }
  uVar1 = 0;
  if (DAT_80063238 == DAT_80054c88) {
    uVar1 = _volume;
  }
  FUN_800186c0(uVar1);
  return;
}



void FUN_800186c0(int volume)

{
  if (DAT_80063250 == 0) {
    aud.val2 = (u_char)volume;
    aud.val3 = 0;
  }
  else {
    aud.val2 = (u_char)(volume / 2);
    aud.val3 = aud.val2;
  }
  aud.val0 = aud.val2;
  aud.val1 = aud.val3;
  CdMix(&aud);
  return;
}



void FUN_80018740(int param_1)

{
  short sVar1;
  
  sVar1 = (short)((uint)((param_1 - (param_1 >> 0x1f)) * 0x8000) >> 0x10);
  DAT_80063240 = param_1;
  SsSetMVol(sVar1,sVar1);
  return;
}



void FUN_80018778(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (DAT_80054d08 == 0) {
      DAT_80054d08 = 1;
      iVar2 = 0;
      iVar1 = 0;
      do {
        SsUtSetVVol((short)((uint)iVar1 >> 0x10),0,0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar2 * 0x10000;
      } while (iVar2 < 0x18);
      FUN_800186c0(0);
    }
    if (param_1 != 0) {
      return;
    }
  }
  if (DAT_80054d08 != 0) {
    DAT_80054d08 = 0;
  }
  return;
}



// Possible VM_VIB.OBJ/SsUtVibrateOff

void __main(void)

{
  return;
}



// WARNING: Control flow encountered bad instruction data
// Possible 2MBYTE.OBJ/stup2
// Possible 2MBYTE.OBJ/__SN_ENTRY_POINT

void start(void)

{
  undefined4 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &DAT_80054c80;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_80065ee4);
  DAT_80054c98 = unaff_retaddr;
  InitHeap(&someTim,0x19211c);
  main();
  trap(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void stup1(void)

{
  undefined4 unaff_retaddr;
  
  DAT_80054c98 = unaff_retaddr;
  InitHeap(&someTim,0x19211c);
  main();
  trap(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void stup0(void)

{
  main();
  trap(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void SsEnd(void)

{
  if ((DAT_8003cc38 == 0) && (DAT_8003cc45 = 0, DAT_8003cc46 != '\x7f')) {
    EnterCriticalSection();
    if (DAT_8003cc44 != '\0') {
      VSyncCallback((f *)0x0);
      DAT_8003cc44 = 0;
      SSEND_OBJ_A0();
      return;
    }
    if (DAT_8003cc46 == '\0') {
      InterruptCallback(0,DAT_8003cc40);
      DAT_8003cc40 = 0;
      SSEND_OBJ_A0();
      return;
    }
    InterruptCallback(6,0);
    ExitCriticalSection();
    DAT_8003cc46 = '\x7f';
  }
  return;
}



void SSEND_OBJ_A0(void)

{
  ExitCriticalSection();
  DAT_8003cc46 = 0x7f;
  return;
}



// Possible SSINIT_C.OBJ/SsInit
// Possible SSINIT_H.OBJ/SsInitHot

void FUN_800189a0(void)

{
  ResetCallback();
  FUN_800189d0();
  _SsInit();
  return;
}



// Possible S_I.OBJ/SpuInit
// Possible UT_ROFF.OBJ/SsUtReverbOff

void FUN_800189d0(void)

{
  _SpuInit(0);
  return;
}



void _SpuInit(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  ResetCallback();
  _spu_init(param_1);
  if (param_1 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_8003c492;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  SpuStart();
  DAT_8003c43c = 0;
  DAT_8003c440 = 0;
  DAT_8003c44c = 0;
  DAT_8003c450 = 0;
  DAT_8003c452 = 0;
  DAT_8003c454 = 0;
  DAT_8003c458 = 0;
  DAT_8003c444 = 0xfffe;
  _spu_FsetRXX(0xd1,0xfffe,0);
  DAT_8003c434 = 0;
  DAT_8003c438 = 0;
  DAT_8003c45c = 0;
  DAT_8003c460 = 0;
  DAT_8003c894 = 0;
  DAT_8003c8b8 = 0;
  DAT_8003c8f8 = 0;
  DAT_8003c8fc = 0;
  DAT_8003c900 = 0;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void SpuStart(void)

{
  if (DAT_8003c898 == 0) {
    DAT_8003c898 = 1;
    EnterCriticalSection();
    _SpuDataCallback(_spu_FiDMA);
    DAT_8003c430 = OpenEvent(0xf0000009,0x20,0x2000,0);
    EnableEvent();
    ExitCriticalSection();
  }
  return;
}



undefined4 _spu_init(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  dword *pdVar3;
  int iVar4;
  undefined2 *puVar5;
  
  DMA_DPCR = DMA_DPCR | 0xb0000;
  DAT_8003c8b8 = 0;
  DAT_8003c8bc = 0;
  DAT_8003c8b4 = 0;
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  SPU_CTRL_REG_CPUCNT = 0;
  _spu_FwaitFs();
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  if ((SPU_STATUS_REG_SPUSTAT & 0x7ff) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) {
        printf("SPU:T/O [%s]\n","wait (reset)");
        uVar1 = SPU_OBJ_DC(0);
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((SPU_STATUS_REG_SPUSTAT & 0x7ff) != 0);
  }
  iVar4 = 0;
  puVar5 = &DAT_80059194;
  DAT_8003c8c0 = 2;
  DAT_8003c8c4 = 3;
  DAT_8003c8c8 = 8;
  DAT_8003c8cc = 7;
  SOUND_RAM_DATA_TRANSTER_CTRL = 4;
  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
  SPU_VOICE_KEY_OFF._2_2_ = 0xffff;
  SPU_VOICE_CHN_REVERB_MODE._0_2_ = 0;
  SPU_VOICE_CHN_REVERB_MODE._2_2_ = 0;
  do {
    *puVar5 = 0;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 10);
  if (param_1 == 0) {
    DAT_8003c8b4 = 0x200;
    SPU_VOICE_CHN_FM_MODE._0_2_ = 0;
    SPU_VOICE_CHN_FM_MODE._2_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = 0;
    CD_VOL_L = 0;
    CD_VOL_R = 0;
    EXT_VOL_L = 0;
    EXT_VOL_R = 0;
    _spu_writeByIO(&DAT_8003c8dc,0x10);
    iVar4 = 0;
    pdVar3 = &VOICE_00_LEFT_RIGHT;
    do {
      *(undefined2 *)pdVar3 = 0;
      *(undefined2 *)((int)pdVar3 + 2) = 0;
      *(undefined2 *)(pdVar3 + 1) = 0x3fff;
      *(undefined2 *)((int)pdVar3 + 6) = 0x200;
      *(undefined2 *)(pdVar3 + 2) = 0;
      *(undefined2 *)((int)pdVar3 + 10) = 0;
      iVar4 = iVar4 + 1;
      pdVar3 = pdVar3 + 4;
    } while (iVar4 < 0x18);
    SPU_VOICE_KEY_ON._0_2_ = 0xffff;
    SPU_VOICE_KEY_ON._2_2_ = 0xff;
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
    SPU_VOICE_KEY_OFF._2_2_ = 0xff;
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
  }
  DAT_8003c8d0 = 1;
  DAT_8003c8d4 = 0;
  DAT_8003c8d8 = 0;
  SPU_CTRL_REG_CPUCNT = 0xc000;
  return 0;
}



undefined4 SPU_OBJ_DC(int param_1)

{
  dword *pdVar1;
  int iVar2;
  undefined2 *puVar3;
  int unaff_s0;
  
  puVar3 = &DAT_80059194;
  DAT_8003c8c0 = 2;
  DAT_8003c8c4 = 3;
  DAT_8003c8c8 = 8;
  DAT_8003c8cc = 7;
  SOUND_RAM_DATA_TRANSTER_CTRL = 4;
  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
  SPU_VOICE_KEY_OFF._2_2_ = 0xffff;
  SPU_VOICE_CHN_REVERB_MODE._0_2_ = 0;
  SPU_VOICE_CHN_REVERB_MODE._2_2_ = 0;
  do {
    *puVar3 = 0;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  } while (param_1 < 10);
  if (unaff_s0 == 0) {
    DAT_8003c8b4 = 0x200;
    SPU_VOICE_CHN_FM_MODE._0_2_ = 0;
    SPU_VOICE_CHN_FM_MODE._2_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = 0;
    CD_VOL_L = 0;
    CD_VOL_R = 0;
    EXT_VOL_L = 0;
    EXT_VOL_R = 0;
    _spu_writeByIO(&DAT_8003c8dc,0x10);
    iVar2 = 0;
    pdVar1 = &VOICE_00_LEFT_RIGHT;
    do {
      *(undefined2 *)pdVar1 = 0;
      *(undefined2 *)((int)pdVar1 + 2) = 0;
      *(undefined2 *)(pdVar1 + 1) = 0x3fff;
      *(undefined2 *)((int)pdVar1 + 6) = 0x200;
      *(undefined2 *)(pdVar1 + 2) = 0;
      *(undefined2 *)((int)pdVar1 + 10) = 0;
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 4;
    } while (iVar2 < 0x18);
    SPU_VOICE_KEY_ON._0_2_ = 0xffff;
    SPU_VOICE_KEY_ON._2_2_ = 0xff;
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
    SPU_VOICE_KEY_OFF._2_2_ = 0xff;
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
  }
  DAT_8003c8d0 = 1;
  DAT_8003c8d4 = 0;
  DAT_8003c8d8 = 0;
  SPU_CTRL_REG_CPUCNT = 0xc000;
  return 0;
}



void _spu_writeByIO(word *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  SOUND_RAM_DATA_TRANSFER_ADDR = DAT_8003c8b4;
  uVar5 = SPU_STATUS_REG_SPUSTAT & 0x7ff;
  _spu_FwaitFs();
  bVar1 = param_2 < 0x41;
  if (param_2 != 0) {
    do {
      uVar4 = param_2;
      if (!bVar1) {
        uVar4 = 0x40;
      }
      iVar2 = 0;
      if (0 < (int)uVar4) {
        do {
          SOUND_RAM_DATA_TRANSFER_FIFO = *param_1;
          param_1 = param_1 + 1;
          iVar2 = iVar2 + 2;
        } while (iVar2 < (int)uVar4);
      }
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf | 0x10;
      _spu_FwaitFs();
      if ((SPU_STATUS_REG_SPUSTAT & 0x400) != 0) {
        uVar3 = 1;
        do {
          if (0xf00 < uVar3) {
            printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
            SPU_OBJ_3AC();
            return;
          }
          uVar3 = uVar3 + 1;
        } while ((SPU_STATUS_REG_SPUSTAT & 0x400) != 0);
      }
      param_2 = param_2 - uVar4;
      _spu_FwaitFs();
      _spu_FwaitFs();
      bVar1 = param_2 < 0x41;
    } while (param_2 != 0);
  }
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf;
  uVar4 = 1;
  while( true ) {
    if ((SPU_STATUS_REG_SPUSTAT & 0x7ff) == uVar5) {
      return;
    }
    if (0xf00 < uVar4) break;
    uVar4 = uVar4 + 1;
  }
  printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
  SPU_OBJ_440();
  return;
}



void SPU_OBJ_3AC(void)

{
  int iVar1;
  uint uVar2;
  uint unaff_s0;
  uint unaff_s1;
  word *unaff_s2;
  ushort unaff_s3;
  
  do {
    do {
      unaff_s1 = unaff_s1 - unaff_s0;
      _spu_FwaitFs();
      _spu_FwaitFs();
      if (unaff_s1 == 0) {
        SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf;
        uVar2 = 1;
        while( true ) {
          if ((SPU_STATUS_REG_SPUSTAT & 0x7ff) == unaff_s3) {
            return;
          }
          if (0xf00 < uVar2) break;
          uVar2 = uVar2 + 1;
        }
        printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
        SPU_OBJ_440();
        return;
      }
      unaff_s0 = unaff_s1;
      if (0x40 < unaff_s1) {
        unaff_s0 = 0x40;
      }
      iVar1 = 0;
      if (0 < (int)unaff_s0) {
        do {
          SOUND_RAM_DATA_TRANSFER_FIFO = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          iVar1 = iVar1 + 2;
        } while (iVar1 < (int)unaff_s0);
      }
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf | 0x10;
      _spu_FwaitFs();
    } while ((SPU_STATUS_REG_SPUSTAT & 0x400) == 0);
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) {
        printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
        SPU_OBJ_3AC();
        return;
      }
      uVar2 = uVar2 + 1;
    } while ((SPU_STATUS_REG_SPUSTAT & 0x400) != 0);
  } while( true );
}



void SPU_OBJ_440(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80019020)
// WARNING: Removing unreachable block (ram,0x80019024)
// WARNING: Removing unreachable block (ram,0x80019030)
// WARNING: Removing unreachable block (ram,0x80019044)

void _spu_FiDMA(void)

{
  if (DAT_8003c8ec == 0) {
    _spu_FwaitFs();
    _spu_FwaitFs();
    _spu_FwaitFs();
  }
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf;
  if (DAT_8003c8d4 == (code *)0x0) {
    DeliverEvent(0xf0000009,0x20);
    return;
  }
  (*DAT_8003c8d4)();
  SPU_OBJ_520();
  return;
}



void SPU_OBJ_520(void)

{
  return;
}



void _spu_r_(dword param_1,word param_2,int param_3)

{
  SOUND_RAM_DATA_TRANSFER_ADDR = param_2;
  _spu_FwaitFs();
  _spu_FwaitFs();
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x30;
  _spu_FwaitFs();
  _spu_FwaitFs();
  _spu_FsetDelayR();
  DAT_8003c8ec = 1;
  DMA_SPU_MADR = param_1;
  DMA_SPU_BCR = param_3 << 0x10 | 0x10;
  DMA_SPU_CHCR = 0x1000200;
  return;
}



undefined4 _spu_t(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  
  if (param_1 == 1) {
    DAT_8003c8ec = 0;
    if (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8003c8b4) {
      uVar2 = 1;
      do {
        if (0xf00 < uVar2) {
          DAT_8003c8ec = 0;
          return 0xfffffffe;
        }
        uVar2 = uVar2 + 1;
      } while (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8003c8b4);
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf | 0x20;
    uVar1 = SPU_OBJ_868();
    return uVar1;
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar1 = SPU_OBJ_868();
      return uVar1;
    }
    DAT_8003c8ec = 1;
    if (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8003c8b4) {
      uVar2 = 1;
      do {
        if (0xf00 < uVar2) {
          DAT_8003c8ec = 1;
          return 0xfffffffe;
        }
        uVar2 = uVar2 + 1;
      } while (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8003c8b4);
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x30;
    uVar1 = SPU_OBJ_868();
    return uVar1;
  }
  if (param_1 == 2) {
    DAT_8003c8b4 = (word)(param_2 >> (DAT_8003c8c4 & 0x1f));
    SOUND_RAM_DATA_TRANSFER_ADDR = DAT_8003c8b4;
    uVar1 = SPU_OBJ_868();
    return uVar1;
  }
  if (param_1 == 3) {
    uVar3 = 0x20;
    if (DAT_8003c8ec == 1) {
      uVar3 = 0x30;
    }
    uVar2 = 1;
    while ((SPU_CTRL_REG_CPUCNT & 0x30) != uVar3) {
      if (0xf00 < uVar2) {
        return 0xfffffffe;
      }
      uVar2 = uVar2 + 1;
    }
    if (DAT_8003c8ec != 1) {
      _spu_FsetDelayW();
      DAT_8003c8f4 = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
      DMA_SPU_CHCR = 0x1000201;
      if (DAT_8003c8ec == 1) {
        DMA_SPU_CHCR = 0x1000200;
      }
      DAT_8003c8f0 = param_2;
      DMA_SPU_MADR = param_2;
      DMA_SPU_BCR = DAT_8003c8f4 * 0x10000 | 0x10;
      return 0;
    }
    _spu_FsetDelayR();
    uVar1 = SPU_OBJ_7E0();
    return uVar1;
  }
  uVar1 = SPU_OBJ_868();
  return uVar1;
}



undefined4 SPU_OBJ_7E0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_s0;
  
  DAT_8003c8f4 = (*unaff_s0 >> 6) + (uint)((*unaff_s0 & 0x3f) != 0);
  DMA_SPU_CHCR = param_3 | 0x201;
  if (DAT_8003c8ec == 1) {
    DMA_SPU_CHCR = 0x1000200;
  }
  DAT_8003c8f0 = unaff_s0[-1];
  DMA_SPU_MADR = unaff_s0[-1];
  DMA_SPU_BCR = DAT_8003c8f4 * 0x10000 | 0x10;
  return 0;
}



void SPU_OBJ_868(void)

{
  return;
}



undefined4 _spu_write(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_8003c8b8 == 0) {
    _spu_t(2,(uint)DAT_8003c8b4 << (DAT_8003c8c4 & 0x1f));
    _spu_t(1);
    _spu_t(3,param_1,param_2);
    uVar1 = SPU_OBJ_8EC();
    return uVar1;
  }
  _spu_writeByIO(param_1,param_2);
  return param_2;
}



void SPU_OBJ_8EC(void)

{
  return;
}



undefined4 _spu_read(undefined4 param_1,undefined4 param_2)

{
  _spu_t(2,(uint)DAT_8003c8b4 << (DAT_8003c8c4 & 0x1f));
  _spu_t(0);
  _spu_t(3,param_1,param_2);
  return param_2;
}



void _spu_FsetRXX(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)param_2;
    SPU_OBJ_9AC();
    return;
  }
  *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)(param_2 >> (DAT_8003c8c4 & 0x1f));
  return;
}



void SPU_OBJ_9AC(void)

{
  return;
}



uint _spu_FsetRXXa(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_8003c8c0 != 0) {
    if (DAT_8003c8c8 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_8003c8c8 != 0) {
      param_2 = param_2 + DAT_8003c8c8 & ~DAT_8003c8cc;
    }
  }
  if (param_1 != -2) {
    if (param_1 == -1) {
      uVar1 = SPU_OBJ_A50();
      return uVar1;
    }
    *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)(param_2 >> (DAT_8003c8c4 & 0x1f));
    return param_2;
  }
  uVar1 = SPU_OBJ_A50();
  return uVar1;
}



void SPU_OBJ_A50(void)

{
  return;
}



uint _spu_FgetRXXa(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != -1) {
    uVar1 = SPU_OBJ_A8C();
    return uVar1;
  }
  return (uint)*(ushort *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2);
}



void SPU_OBJ_A8C(void)

{
  return;
}



void _spu_FsetPCR(int param_1)

{
  DMA_DPCR = DMA_DPCR & 0xfff8ffff;
  if (param_1 != 0) {
    SPU_OBJ_AE4(0x30000);
    return;
  }
  DMA_DPCR = DMA_DPCR | 0x50000;
  return;
}



void SPU_OBJ_AE4(uint param_1)

{
  uint *in_v0;
  uint in_v1;
  
  *in_v0 = in_v1 | param_1;
  return;
}



void _spu_FsetDelayW(void)

{
  SPU_DELAY = SPU_DELAY & 0xf0ffffff | 0x20000000;
  return;
}



void _spu_FsetDelayR(void)

{
  SPU_DELAY = SPU_DELAY & 0xf0ffffff | 0x22000000;
  return;
}



void _spu_FwaitFs(void)

{
  SPU_OBJ_B8C();
  return;
}



void SPU_OBJ_B8C(void)

{
  int local_res0;
  
  for (; local_res0 < 0xf0; local_res0 = local_res0 + 1) {
  }
  return;
}



void _SpuDataCallback(undefined4 param_1)

{
  DMACallback(4,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _SsInit(void)

{
  undefined2 uVar1;
  word wVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  word *pwVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  dword *pdVar9;
  word *pwVar10;
  
  pdVar9 = &VOICE_00_LEFT_RIGHT;
  iVar7 = 0;
  do {
    iVar8 = 0;
    puVar4 = &DAT_8003cc04;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar8 = iVar8 + 1;
      *(undefined2 *)pdVar9 = uVar1;
      pdVar9 = (dword *)((int)pdVar9 + 2);
    } while (iVar8 < 8);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
  pwVar10 = &SPU_MAIN_VOL_L;
  iVar7 = 0;
  pwVar5 = &DAT_8003cc14;
  do {
    wVar2 = *pwVar5;
    pwVar5 = pwVar5 + 1;
    iVar7 = iVar7 + 1;
    *pwVar10 = wVar2;
    pwVar10 = pwVar10 + 1;
  } while (iVar7 < 0x10);
  SpuVmInit(0x18);
  iVar7 = 0;
  puVar6 = &UNK_800655a8;
  do {
    iVar8 = 0xf;
    puVar3 = (undefined4 *)(puVar6 + 0x3c);
    do {
      *puVar3 = 0;
      iVar8 = iVar8 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar8);
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x40;
  } while (iVar7 < 0x20);
  DAT_80063224 = 0;
  DAT_80063a90 = 0;
  DAT_8006548c = 0x3c;
  return;
}



void SsSetSerialAttr(char param_1,char param_2,char param_3)

{
  SpuCommonAttr local_30;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      local_30.mask = 0x200;
      local_30.cd.mix = ZEXT14((byte)param_3);
    }
    if (param_2 == '\x01') {
      local_30.mask = 0x100;
      local_30.cd.reverb = ZEXT14((byte)param_3);
    }
  }
  if (param_1 == '\x01') {
    if (param_2 == '\0') {
      local_30.mask = 0x2000;
      local_30.ext.mix = ZEXT14((byte)param_3);
    }
    if (param_2 == '\x01') {
      local_30.mask = 0x1000;
      local_30.ext.reverb = ZEXT14((byte)param_3);
    }
  }
  SpuSetCommonAttr(&local_30);
  return;
}



void SpuSetCommonAttr(SpuCommonAttr *attr)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = attr->mask;
  bVar1 = uVar5 == 0;
  uVar4 = 0;
  if (bVar1) {
S_SCA_OBJ_30:
    switch((attr->mvolmode).left) {
    default:
S_SCA_OBJ_94:
      uVar3 = (attr->mvol).left;
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 0x8000;
      break;
    case 2:
      uVar2 = 0x9000;
      break;
    case 3:
      uVar2 = 0xa000;
      break;
    case 4:
      uVar2 = 0xb000;
      break;
    case 5:
      uVar2 = 0xc000;
      break;
    case 6:
      uVar2 = 0xd000;
      break;
    case 7:
      uVar2 = 0xe000;
    }
    if (uVar2 != 0) {
      uVar3 = (attr->mvol).left;
      if (0x7f < (short)uVar3) {
        S_SCA_OBJ_CC(attr,uVar2,0x7f);
        return;
      }
      if ((short)uVar3 < 0) {
        uVar3 = 0;
      }
    }
    SPU_MAIN_VOL_L = uVar3 & 0x7fff | uVar2;
  }
  else {
    if ((uVar5 & 1) != 0) {
      if ((uVar5 & 4) != 0) goto S_SCA_OBJ_30;
      goto S_SCA_OBJ_94;
    }
  }
  if (bVar1) {
S_SCA_OBJ_F8:
    switch((attr->mvolmode).right) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar3 = 0x8000;
      break;
    case 2:
      uVar3 = 0x9000;
      break;
    case 3:
      uVar3 = 0xa000;
      break;
    case 4:
      uVar3 = 0xb000;
      break;
    case 5:
      uVar3 = 0xc000;
      break;
    case 6:
      uVar3 = 0xd000;
      break;
    case 7:
      uVar3 = 0xe000;
    }
  }
  else {
    if ((uVar5 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((uVar5 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    uVar4 = (attr->mvol).right;
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    uVar4 = (attr->mvol).right;
    if (0x7f < (short)uVar4) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  SPU_MAIN_VOL_R = uVar4 & 0x7fff | uVar3;
S_SCA_OBJ_1A8:
  if ((bVar1) || ((uVar5 & 0x40) != 0)) {
    CD_VOL_L = (attr->cd).volume.left;
  }
  if ((bVar1) || ((uVar5 & 0x80) != 0)) {
    CD_VOL_R = (attr->cd).volume.right;
  }
  if ((bVar1) || ((uVar5 & 0x400) != 0)) {
    EXT_VOL_L = (attr->ext).volume.left;
  }
  if ((bVar1) || ((uVar5 & 0x800) != 0)) {
    EXT_VOL_R = (attr->ext).volume.right;
  }
  if ((bVar1) || ((uVar5 & 0x100) != 0)) {
    if ((attr->cd).reverb == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((bVar1) || ((uVar5 & 0x200) != 0)) {
    if ((attr->cd).mix == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((bVar1) || ((uVar5 & 0x1000) != 0)) {
    if ((attr->ext).reverb == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((bVar1) || ((uVar5 & 0x2000) != 0)) {
    if ((attr->ext).mix == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_5C(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0x8000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0x8000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_64(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0x9000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0x9000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_6C(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0xa000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0xa000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_74(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0xb000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0xb000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_7C(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0xc000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0xc000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_84(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0xd000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0xd000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_8C(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_CC(param_1,0xe000,0x7f);
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_L = uVar1 & 0x7fff | 0xe000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80019954)
// WARNING: Removing unreachable block (ram,0x80019968)
// WARNING: Removing unreachable block (ram,0x80019970)
// WARNING: Removing unreachable block (ram,0x80019978)
// WARNING: Removing unreachable block (ram,0x8001997c)

void S_SCA_OBJ_94(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  SPU_MAIN_VOL_L = *(ushort *)(param_1 + 4) & 0x7fff;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_9C(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  if (param_2 != 0) {
    param_3 = *(ushort *)(param_1 + 4);
    if (0x7f < (short)param_3) {
      S_SCA_OBJ_CC(param_1,param_2,0x7f);
      return;
    }
    if ((short)param_3 < 0) {
      param_3 = 0;
    }
  }
  SPU_MAIN_VOL_L = param_3 & 0x7fff | (ushort)param_2;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_CC(int param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  SPU_MAIN_VOL_L = param_3 & 0x7fff | param_2;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_1A8;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_F8;
S_SCA_OBJ_15C:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_F8:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_15C;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)in_t0) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)in_t0 < 0) {
      in_t0 = 0;
    }
  }
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_1A8:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_124(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0x8000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_12C(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0x9000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_134(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0xa000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_13C(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0xb000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_144(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0xc000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_14C(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0xd000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_154(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if (0x7f < (short)uVar1) {
    S_SCA_OBJ_194();
    return;
  }
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  SPU_MAIN_VOL_R = uVar1 & 0x7fff | 0xe000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80019a1c)
// WARNING: Removing unreachable block (ram,0x80019a30)
// WARNING: Removing unreachable block (ram,0x80019a38)
// WARNING: Removing unreachable block (ram,0x80019a40)
// WARNING: Removing unreachable block (ram,0x80019a44)

void S_SCA_OBJ_15C(int param_1)

{
  uint in_t1;
  int in_t2;
  
  SPU_MAIN_VOL_R = *(ushort *)(param_1 + 6) & 0x7fff;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_164(int param_1,int param_2)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = in_t0 & 0x7fff;
  if (param_2 != 0) {
    uVar1 = *(ushort *)(param_1 + 6);
    if (0x7f < (short)uVar1) {
      S_SCA_OBJ_194();
      return;
    }
    if ((short)uVar1 < 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 & 0x7fff;
  }
  SPU_MAIN_VOL_R = uVar1 | (ushort)param_2;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_194(int param_1,ushort param_2)

{
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  SPU_MAIN_VOL_R = in_t0 & 0x7fff | param_2;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    CD_VOL_R = *(word *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_288();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_288(int param_1)

{
  int in_v0;
  undefined2 in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v0 + 0x1aa) = in_v1;
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2DC();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_2DC(int param_1)

{
  int in_v0;
  undefined2 in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v0 + 0x1aa) = in_v1;
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_330();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_330(int param_1)

{
  int in_v0;
  undefined2 in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v0 + 0x1aa) = in_v1;
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_384();
      return;
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
  }
  return;
}



void S_SCA_OBJ_384(void)

{
  int in_v0;
  undefined2 in_v1;
  
  *(undefined2 *)(in_v0 + 0x1aa) = in_v1;
  return;
}



void SsSetMVol(short param_1,short param_2)

{
  SpuCommonAttr local_30;
  
  local_30.mask = 3;
  local_30.mvol.left = param_1 * 0x81;
  local_30.mvol.right = param_2 * 0x81;
  SpuSetCommonAttr(&local_30);
  return;
}



// WARNING: Removing unreachable block (ram,0x80019e30)
// WARNING: Unknown calling convention yet parameter storage is locked

void _SsStart(void)

{
  bool bVar1;
  int iVar2;
  int in_a0;
  code *pcVar3;
  
  iVar2 = 0x3e6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  DAT_8003cc44 = 0;
  DAT_8003cc46 = '\x06';
  DAT_8003cc45 = '\0';
  DAT_8003cc40 = 0;
  if (DAT_8003cc34 == 2) {
    EnterCriticalSection();
    ResetRCnt(0xf2000002);
    SetRCnt(0xf2000002,0x44e8,0x1000);
    if (DAT_8003cc46 != '\0') {
      pcVar3 = _SsSeqCalledTbyT_1per2;
      if (DAT_8003cc45 == '\0') {
        pcVar3 = SsSeqCalledTbyT;
      }
      InterruptCallback(DAT_8003cc46,pcVar3);
      ExitCriticalSection();
      return;
    }
    DAT_8003cc40 = InterruptCallback(0,0);
    SSSTART_OBJ_23C(DAT_8003cc46,_SsTrapIntrVSync);
    return;
  }
  if (DAT_8003cc34 < 3) {
    if (DAT_8003cc34 == 0) {
      DAT_8003cc46 = 0x7f;
      SSSTART_OBJ_24C();
      return;
    }
    SSSTART_OBJ_DC();
    return;
  }
  if (DAT_8003cc34 != 3) {
    if (DAT_8003cc34 != 5) {
      SSSTART_OBJ_DC();
      return;
    }
    DAT_8003cc46 = 0;
    if (in_a0 != 0) {
      SSSTART_OBJ_188();
      return;
    }
    DAT_8003cc44 = 1;
    SSSTART_OBJ_188();
    return;
  }
  SSSTART_OBJ_188();
  return;
}



// WARNING: Removing unreachable block (ram,0x80019e0c)
// WARNING: Removing unreachable block (ram,0x80019dc4)

void SSSTART_OBJ_DC(void)

{
  code *pcVar1;
  
  if (DAT_8003cc38 == 0) {
    if (DAT_8003cc34 < 0x46) {
      if (DAT_8003cc34 == 0) {
        trap(0x1c00);
      }
      DAT_8003cc45 = DAT_8003cc45 + '\x01';
      SSSTART_OBJ_180();
      return;
    }
    if (DAT_8003cc34 == 0) {
      trap(0x1c00);
    }
    if (DAT_8003cc44 != '\0') {
      EnterCriticalSection();
      VSyncCallback(SsSeqCalledTbyT);
      SSSTART_OBJ_244();
      return;
    }
    EnterCriticalSection();
    ResetRCnt();
    SetRCnt();
    if (DAT_8003cc46 == '\0') {
      DAT_8003cc40 = InterruptCallback(0,0);
      SSSTART_OBJ_23C(DAT_8003cc46,_SsTrapIntrVSync);
      return;
    }
    pcVar1 = _SsSeqCalledTbyT_1per2;
    if (DAT_8003cc45 == '\0') {
      pcVar1 = SsSeqCalledTbyT;
    }
    InterruptCallback(DAT_8003cc46,pcVar1);
    ExitCriticalSection();
  }
  return;
}



void SSSTART_OBJ_180(void)

{
  code *pcVar1;
  
  if (DAT_8003cc44 != '\0') {
    EnterCriticalSection();
    VSyncCallback(SsSeqCalledTbyT);
    SSSTART_OBJ_244();
    return;
  }
  EnterCriticalSection();
  ResetRCnt();
  SetRCnt();
  if (DAT_8003cc46 == '\0') {
    DAT_8003cc40 = InterruptCallback(0,0);
    SSSTART_OBJ_23C(DAT_8003cc46,_SsTrapIntrVSync);
    return;
  }
  pcVar1 = _SsSeqCalledTbyT_1per2;
  if (DAT_8003cc45 == '\0') {
    pcVar1 = SsSeqCalledTbyT;
  }
  InterruptCallback(DAT_8003cc46,pcVar1);
  ExitCriticalSection();
  return;
}



void SSSTART_OBJ_188(void)

{
  code *pcVar1;
  
  if (DAT_8003cc44 != '\0') {
    EnterCriticalSection();
    VSyncCallback(SsSeqCalledTbyT);
    SSSTART_OBJ_244();
    return;
  }
  EnterCriticalSection();
  ResetRCnt();
  SetRCnt();
  if (DAT_8003cc46 == '\0') {
    DAT_8003cc40 = InterruptCallback(0,0);
    SSSTART_OBJ_23C(DAT_8003cc46,_SsTrapIntrVSync);
    return;
  }
  pcVar1 = _SsSeqCalledTbyT_1per2;
  if (DAT_8003cc45 == '\0') {
    pcVar1 = SsSeqCalledTbyT;
  }
  InterruptCallback(DAT_8003cc46,pcVar1);
  ExitCriticalSection();
  return;
}



void SSSTART_OBJ_23C(void)

{
  InterruptCallback();
  ExitCriticalSection();
  return;
}



void SSSTART_OBJ_244(void)

{
  ExitCriticalSection();
  return;
}



void SSSTART_OBJ_24C(void)

{
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible SSSTART.OBJ/SsStart
// Possible UT_RON.OBJ/SsUtReverbOn

void SpuInitHot(void)

{
  _SsStart();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible S_I.OBJ/SpuInit
// Possible UT_ROFF.OBJ/SsUtReverbOff

void SsStart2(void)

{
  _SsStart();
  return;
}



void _SsTrapIntrVSync(void)

{
  if (DAT_8003cc40 != (code *)0x0) {
    (*DAT_8003cc40)();
  }
  SsSeqCalledTbyT();
  return;
}



void _SsSeqCalledTbyT_1per2(void)

{
  if (DAT_8003cc48 == 0) {
    DAT_8003cc48 = 1;
    SSSTART_OBJ_324();
    return;
  }
  DAT_8003cc48 = 0;
  SsSeqCalledTbyT();
  return;
}



void SSSTART_OBJ_324(void)

{
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void SsSeqCalledTbyT(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (DAT_80063224 != 1) {
    DAT_80063224 = 1;
    uVar6 = 0;
    SpuVmFlush();
    if (0 < DAT_80065da8) {
      piVar7 = &DAT_80065528;
      do {
        if (((1 << (uVar6 & 0x1f) & DAT_80063a90) != 0) && (iVar5 = 0, 0 < DAT_80065db8)) {
          iVar4 = (int)(short)uVar6;
          iVar3 = 0;
          iVar1 = 0;
          do {
            iVar2 = iVar3 >> 0x10;
            if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 1) != 0) {
              _SsSndPlay(iVar4,iVar2);
              if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 0x10) != 0) {
                _SsSndCrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 0x20) != 0) {
                _SsSndDecrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 0x40) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 0x80) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 2) != 0) {
              _SsSndPause(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 8) != 0) {
              _SsSndReplay(iVar4,iVar2);
            }
            iVar5 = iVar5 + 1;
            if ((*(uint *)(iVar1 + *piVar7 + 0x90) & 4) != 0) {
              _SsSndStop(iVar4,iVar2);
              *(undefined4 *)(iVar1 + *piVar7 + 0x90) = 0;
            }
            iVar3 = iVar3 + 0x10000;
            iVar1 = iVar1 + 0xac;
          } while (iVar5 < DAT_80065db8);
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)uVar6 < (int)DAT_80065da8);
    }
    DAT_80063224 = 0;
  }
  return;
}



void _SsSndCrescendo(ushort param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort local_30;
  ushort local_2e [11];
  
  piVar7 = (int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar6 = (short)param_2 * 0xac;
  iVar5 = iVar6 + *piVar7;
  uVar4 = SEXT24(*(short *)(iVar5 + 0x42));
  uVar2 = *(int *)(iVar5 + 0x98) - 1;
  *(uint *)(iVar5 + 0x98) = uVar2;
  if ((int)uVar4 < 1) {
    if (-1 < (int)uVar4) goto CRES_OBJ_2A0;
    iVar3 = *(ushort *)(iVar5 + 0x40) + uVar4;
    *(short *)(iVar5 + 0x40) = (short)iVar3;
    if (iVar3 * 0x10000 < 0) goto CRES_OBJ_1F8;
    iVar6 = (int)(short)(param_1 | (ushort)(param_2 << 8));
    SpuVmGetSeqVol(iVar6,&local_30,local_2e);
    if ((0x7e < (int)((uint)local_30 - (int)*(short *)(iVar5 + 0x42))) &&
       (0x7e < (int)((uint)local_2e[0] - (int)*(short *)(iVar5 + 0x42)))) {
      SpuVmSetSeqVol(iVar6,0x7f,0x7f,1);
    }
    iVar6 = (int)*(short *)(iVar5 + 0x42);
    if ((uint)((*(int *)(iVar5 + 0x94) - *(int *)(iVar5 + 0x98)) * -iVar6) <
        (uint)(int)*(short *)(iVar5 + 0x3e)) {
      SpuVmSetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),(uint)local_30 - iVar6 & 0xffff,
                     (uint)local_2e[0] - iVar6 & 0xffff,1);
      CRES_OBJ_234();
      return;
    }
  }
  else {
    if (uVar4 == 0) {
      trap(0x1c00);
    }
    if (uVar2 % uVar4 != 0) goto CRES_OBJ_2A0;
    uVar1 = *(short *)(iVar5 + 0x40) - 1;
    *(ushort *)(iVar5 + 0x40) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
CRES_OBJ_1F8:
      SpuVmSetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),0x7f,0x7f,1);
      iVar6 = iVar6 + *piVar7;
      *(uint *)(iVar6 + 0x90) = *(uint *)(iVar6 + 0x90) & 0xffffffef;
    }
    else {
      iVar6 = (int)(short)(param_1 | (ushort)(param_2 << 8));
      SpuVmGetSeqVol(iVar6,&local_30,local_2e);
      if ((int)(local_30 + 1) <= (int)((uint)local_30 + (int)*(short *)(iVar5 + 0x40))) {
        CRES_OBJ_1E8(iVar6,local_30 + 1,local_2e[0] + 1,1);
        return;
      }
    }
  }
  if ((*(int *)(iVar5 + 0x98) == 0) || (*(short *)(iVar5 + 0x40) == 0)) {
    iVar6 = (short)param_2 * 0xac +
            *(int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
    *(uint *)(iVar6 + 0x90) = *(uint *)(iVar6 + 0x90) & 0xffffffef;
  }
CRES_OBJ_2A0:
  SpuVmGetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),iVar5 + 0x78,iVar5 + 0x7a);
  return;
}



void CRES_OBJ_1E8(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  SpuVmSetSeqVol(param_1,param_2,param_3);
  CRES_OBJ_234();
  return;
}



void CRES_OBJ_234(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s3;
  ushort unaff_s4;
  
  if ((*(int *)(unaff_s0 + 0x98) == 0) || (*(short *)(unaff_s0 + 0x40) == 0)) {
    iVar1 = (short)unaff_s3 * 0xac +
            *(int *)((int)&DAT_80065528 + ((int)((uint)unaff_s4 << 0x10) >> 0xe));
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffffef;
  }
  SpuVmGetSeqVol((int)(short)(unaff_s4 | (ushort)(unaff_s3 << 8)),unaff_s0 + 0x78,unaff_s0 + 0x7a);
  return;
}



void _SsSndDecrescendo(ushort param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ushort local_30;
  ushort local_2e [11];
  
  piVar6 = (int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar5 = (short)param_2 * 0xac;
  iVar7 = iVar5 + *piVar6;
  uVar4 = SEXT24(*(short *)(iVar7 + 0x42));
  uVar2 = *(int *)(iVar7 + 0x98) - 1;
  *(uint *)(iVar7 + 0x98) = uVar2;
  if ((int)uVar4 < 1) {
    iVar3 = *(ushort *)(iVar7 + 0x40) + uVar4;
    *(short *)(iVar7 + 0x40) = (short)iVar3;
    if (0 < iVar3 * 0x10000) {
      iVar3 = (int)(short)(param_1 | (ushort)(param_2 << 8));
      SpuVmGetSeqVol(iVar3,&local_30,local_2e);
      iVar5 = (int)*(short *)(iVar7 + 0x42);
      if (((uint)((*(int *)(iVar7 + 0x94) - *(int *)(iVar7 + 0x98)) * -iVar5) <=
           (uint)(int)*(short *)(iVar7 + 0x3e)) && (-iVar5 < (int)(uint)local_30)) {
        SpuVmSetSeqVol(iVar3,(uint)local_30 + iVar5 & 0xffff,(uint)local_2e[0] + iVar5 & 0xffff,1);
        DECRES_OBJ_208();
        return;
      }
DECRES_OBJ_1C4:
      SpuVmSetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),1,1,1);
      DECRES_OBJ_208();
      return;
    }
  }
  else {
    if (uVar4 == 0) {
      trap(0x1c00);
    }
    if (uVar2 % uVar4 != 0) goto DECRES_OBJ_270;
    uVar1 = *(short *)(iVar7 + 0x40) - 1;
    *(ushort *)(iVar7 + 0x40) = uVar1;
    if (0 < (int)((uint)uVar1 << 0x10)) {
      iVar5 = (int)(short)(param_1 | (ushort)(param_2 << 8));
      SpuVmGetSeqVol(iVar5,&local_30,local_2e);
      if (((0 < (int)((uint)local_30 - (int)*(short *)(iVar7 + 0x40))) &&
          (0 < (int)((uint)local_2e[0] - (int)*(short *)(iVar7 + 0x40)))) && (local_30 != 1)) {
        DECRES_OBJ_1B4(iVar5,local_30 - 1,local_2e[0] + 0xffff,1);
        return;
      }
      goto DECRES_OBJ_1C4;
    }
  }
  iVar5 = iVar5 + *piVar6;
  *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xffffffdf;
  if ((*(int *)(iVar7 + 0x98) == 0) || (*(short *)(iVar7 + 0x40) == 0)) {
    iVar5 = (short)param_2 * 0xac +
            *(int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
    *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xffffffdf;
  }
DECRES_OBJ_270:
  SpuVmGetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),iVar7 + 0x78,iVar7 + 0x7a);
  return;
}



void DECRES_OBJ_1B4(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  SpuVmSetSeqVol(param_1,param_2,param_3);
  DECRES_OBJ_208();
  return;
}



void DECRES_OBJ_208(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s2;
  ushort unaff_s3;
  
  if ((*(int *)(unaff_s0 + 0x98) == 0) || (*(short *)(unaff_s0 + 0x40) == 0)) {
    iVar1 = (short)unaff_s2 * 0xac +
            *(int *)((int)&DAT_80065528 + ((int)((uint)unaff_s3 << 0x10) >> 0xe));
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffffdf;
  }
  SpuVmGetSeqVol((int)(short)(unaff_s3 | (ushort)(unaff_s2 << 8)),unaff_s0 + 0x78,unaff_s0 + 0x7a);
  return;
}



void _SsSndPause(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar1 = (short)param_2 * 0xac;
  iVar2 = *piVar3;
  SpuVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
  *(undefined *)(iVar1 + iVar2 + 0x2b) = 0;
  iVar1 = iVar1 + *piVar3;
  *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffffd;
  return;
}



void _SsSndPlay(short param_1,short param_2)

{
  FUN_8001a898((int)param_1,(int)param_2);
  return;
}



void FUN_8001a898(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2 * 0xac + *(int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
  sVar1 = *(short *)(iVar5 + 0x70);
  iVar3 = *(int *)(iVar5 + 0x88);
  iVar4 = iVar3 - sVar1;
  if (iVar4 < 1) {
    if (sVar1 < iVar3) {
      return;
    }
    do {
      do {
        FUN_8001ab6c((param_1 << 0x10) >> 0x10,(int)param_2);
      } while (*(int *)(iVar5 + 0x88) == 0);
      iVar3 = iVar3 + *(int *)(iVar5 + 0x88);
      iVar4 = iVar3 - *(short *)(iVar5 + 0x70);
    } while (iVar3 < *(short *)(iVar5 + 0x70));
  }
  else {
    sVar2 = *(short *)(iVar5 + 0x6e);
    if (0 < sVar2) {
      *(short *)(iVar5 + 0x6e) = sVar2 + -1;
      return;
    }
    if (sVar2 != 0) {
      *(int *)(iVar5 + 0x88) = iVar4;
      return;
    }
    *(short *)(iVar5 + 0x6e) = sVar1;
    iVar4 = *(int *)(iVar5 + 0x88) + -1;
  }
  *(int *)(iVar5 + 0x88) = iVar4;
  return;
}



void FUN_8001a9a8(ushort param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  piVar3 = (int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar2 = (short)param_2 * 0xac;
  puVar4 = (undefined *)(iVar2 + *piVar3);
  sVar1 = *(short *)(puVar4 + 0x48);
  *(short *)(puVar4 + 0x48) = sVar1 + 1;
  if (*(short *)(puVar4 + 0x46) == 0) {
    *(undefined4 *)(puVar4 + 0x80) = 0;
    puVar4[0x27] = 0;
    *(undefined4 *)(puVar4 + 0x88) = 0;
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 8);
  }
  else {
    if ((short)(sVar1 + 1) < *(short *)(puVar4 + 0x46)) {
      *(undefined4 *)(puVar4 + 0x80) = 0;
      puVar4[0x27] = 0;
      *(undefined4 *)(puVar4 + 0x88) = 0;
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 8);
    }
    else {
      *(uint *)(iVar2 + *piVar3 + 0x90) = *(uint *)(iVar2 + *piVar3 + 0x90) & 0xfffffffe;
      *(uint *)(iVar2 + *piVar3 + 0x90) = *(uint *)(iVar2 + *piVar3 + 0x90) & 0xfffffff7;
      *(uint *)(iVar2 + *piVar3 + 0x90) = *(uint *)(iVar2 + *piVar3 + 0x90) & 0xfffffffd;
      *(uint *)(iVar2 + *piVar3 + 0x90) = *(uint *)(iVar2 + *piVar3 + 0x90) | 0x200;
      *(uint *)(iVar2 + *piVar3 + 0x90) = *(uint *)(iVar2 + *piVar3 + 0x90) | 4;
      puVar4[0x2b] = 0;
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 8);
      if (puVar4[0x3c] != -1) {
        puVar4[0x2b] = 0;
        _SsSndNextSep(puVar4[0x3c],*puVar4);
        SpuVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
      }
      SpuVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
      *(int *)(puVar4 + 0x88) = (int)*(short *)(puVar4 + 0x70);
    }
  }
  return;
}



void FUN_8001ab6c(short param_1,short param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)param_1;
  iVar8 = (int)param_2;
  iVar6 = iVar8 * 0xac + (&DAT_80065528)[iVar7];
  pbVar5 = *(byte **)(iVar6 + 4);
  *(byte **)(iVar6 + 4) = pbVar5 + 1;
  bVar4 = *pbVar5;
  if ((bVar4 & 0x80) == 0) {
    bVar3 = *(byte *)(iVar6 + 0x11);
    pcVar2 = DAT_80058330;
    if (bVar3 == 0xc0) goto LAB_8001ae24;
    if (bVar3 < 0xc1) {
      if (bVar3 == 0x90) {
        *(byte **)(iVar6 + 4) = pbVar5 + 2;
        bVar3 = pbVar5[1];
        uVar1 = _SsReadDeltaValue(iVar7,iVar8);
        *(undefined4 *)(iVar6 + 0x88) = uVar1;
        goto code_r0x8001ad9c;
      }
      pcVar2 = DAT_8005833c;
      if (bVar3 != 0xb0) {
        return;
      }
      goto LAB_8001ae24;
    }
    if (bVar3 == 0xe0) goto LAB_8001addc;
    pcVar2 = DAT_80058338;
    if (bVar3 != 0xff) {
      return;
    }
  }
  else {
    bVar3 = bVar4 & 0xf0;
    *(byte *)(iVar6 + 0x12) = bVar4 & 0xf;
    if (bVar3 == 0xc0) {
      pbVar5 = *(byte **)(iVar6 + 4);
      *(undefined *)(iVar6 + 0x11) = 0xc0;
      *(byte **)(iVar6 + 4) = pbVar5 + 1;
      bVar4 = *pbVar5;
      pcVar2 = DAT_80058330;
      goto LAB_8001ae24;
    }
    if (bVar3 < 0xc1) {
      if (bVar3 == 0x90) {
        pbVar5 = *(byte **)(iVar6 + 4);
        *(undefined *)(iVar6 + 0x11) = 0x90;
        *(byte **)(iVar6 + 4) = pbVar5 + 1;
        bVar4 = *pbVar5;
        *(byte **)(iVar6 + 4) = pbVar5 + 2;
        bVar3 = pbVar5[1];
        uVar1 = _SsReadDeltaValue(iVar7,iVar8);
        *(undefined4 *)(iVar6 + 0x88) = uVar1;
code_r0x8001ad9c:
        (*DAT_8005832c)(iVar7,iVar8,bVar4,bVar3);
        return;
      }
      if (bVar3 != 0xb0) {
        return;
      }
      pbVar5 = *(byte **)(iVar6 + 4);
      *(undefined *)(iVar6 + 0x11) = 0xb0;
      *(byte **)(iVar6 + 4) = pbVar5 + 1;
      bVar4 = *pbVar5;
      pcVar2 = DAT_8005833c;
      goto LAB_8001ae24;
    }
    if (bVar3 == 0xe0) {
      *(undefined *)(iVar6 + 0x11) = 0xe0;
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
LAB_8001addc:
      (*DAT_80058334)(iVar7,iVar8);
      return;
    }
    if (bVar3 != 0xf0) {
      return;
    }
    pbVar5 = *(byte **)(iVar6 + 4);
    *(undefined *)(iVar6 + 0x11) = 0xff;
    *(byte *)(iVar6 + 0x12) = bVar4 & 0xf;
    *(byte **)(iVar6 + 4) = pbVar5 + 1;
    bVar4 = *pbVar5;
    pcVar2 = DAT_80058338;
  }
  DAT_80058338 = pcVar2;
  if (bVar4 == 0x2f) {
    FUN_8001a9a8(iVar7,iVar8,0x2f);
    return;
  }
LAB_8001ae24:
  (*pcVar2)(iVar7,iVar8,bVar4);
                    // WARNING: Read-only address (ram,0x8005832c) is written
                    // WARNING: Read-only address (ram,0x80058330) is written
                    // WARNING: Read-only address (ram,0x80058334) is written
                    // WARNING: Read-only address (ram,0x80058338) is written
                    // WARNING: Read-only address (ram,0x8005833c) is written
  return;
}



void _SsReadDeltaValue(int param_1,short param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2 * 0xac + *(int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
  pbVar3 = *(byte **)(iVar5 + 4);
  *(byte **)(iVar5 + 4) = pbVar3 + 1;
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if (uVar4 == 0) {
    MIDITIME_OBJ_B0();
    return;
  }
  iVar2 = uVar4 << 2;
  if ((bVar1 & 0x80) != 0) {
    uVar4 = uVar4 & 0x7f;
    do {
      pbVar3 = *(byte **)(iVar5 + 4);
      *(byte **)(iVar5 + 4) = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar4 = uVar4 * 0x80 + (bVar1 & 0x7f);
    } while ((bVar1 & 0x80) != 0);
    iVar2 = uVar4 * 4;
  }
  *(uint *)(iVar5 + 0x80) = (iVar2 + uVar4) * 2 + *(int *)(iVar5 + 0x80);
  return;
}



void MIDITIME_OBJ_B0(void)

{
  return;
}



void _SsSndNextSep(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xac;
  iVar3 = iVar2 + *piVar1;
  *(undefined2 *)(iVar3 + 0x46) = 1;
  *(undefined2 *)(iVar3 + 0x48) = 0;
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) & 0xfffffeff;
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) & 0xfffffff7;
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) & 0xfffffffd;
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) & 0xfffffffb;
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) & 0xfffffdff;
  *(undefined *)(iVar3 + 0x2b) = 1;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
  *(uint *)(iVar2 + *piVar1 + 0x90) = *(uint *)(iVar2 + *piVar1 + 0x90) | 1;
  return;
}



void _SsSndReplay(int param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
  *(undefined *)(param_2 * 0xac + *piVar2 + 0x2b) = 1;
  iVar1 = param_2 * 0xac + *piVar2;
  *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xfffffff7;
  return;
}



void _SsSndStop(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)((int)&DAT_80065528 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar1 = (short)param_2 * 0xac;
  iVar4 = iVar1 + *piVar3;
  *(uint *)(iVar4 + 0x90) = *(uint *)(iVar4 + 0x90) & 0xfffffffe;
  *(uint *)(iVar1 + *piVar3 + 0x90) = *(uint *)(iVar1 + *piVar3 + 0x90) & 0xfffffffd;
  *(uint *)(iVar1 + *piVar3 + 0x90) = *(uint *)(iVar1 + *piVar3 + 0x90) & 0xfffffff7;
  *(uint *)(iVar1 + *piVar3 + 0x90) = *(uint *)(iVar1 + *piVar3 + 0x90) | 4;
  SpuVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
  iVar2 = 0;
  *(undefined *)(iVar4 + 0x2b) = 0;
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined *)(iVar4 + 0x27) = 0;
  *(undefined *)(iVar4 + 0x13) = 0;
  *(undefined *)(iVar4 + 0x14) = 0;
  *(undefined *)(iVar4 + 0x29) = 0;
  *(undefined *)(iVar4 + 0x15) = 0;
  *(undefined *)(iVar4 + 0x16) = 0;
  *(undefined *)(iVar4 + 0x2a) = 0;
  *(undefined *)(iVar4 + 0x12) = 0;
  *(undefined2 *)(iVar4 + 0x48) = 0;
  *(undefined *)(iVar4 + 0x27) = 0;
  *(undefined *)(iVar4 + 0x28) = 0;
  *(undefined *)(iVar4 + 0x10) = 0;
  *(undefined *)(iVar4 + 0x11) = 0;
  *(undefined4 *)(iVar4 + 0x88) = *(undefined4 *)(iVar4 + 0x7c);
  *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar4 + 0x84);
  *(undefined2 *)(iVar4 + 0x70) = *(undefined2 *)(iVar4 + 0x72);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 8);
  iVar1 = iVar4;
  do {
    *(char *)(iVar4 + iVar2 + 0x2c) = (char)iVar2;
    *(undefined *)(iVar4 + iVar2 + 0x17) = 0x40;
    *(undefined2 *)(iVar1 + 0x4e) = 0x7f;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar2 < 0x10);
  *(undefined2 *)(iVar4 + 0x78) = 0x7f;
  *(undefined2 *)(iVar4 + 0x7a) = 0x7f;
  return;
}



void SsSeqStop(short param_1)

{
  _SsSndStop((int)param_1,0);
  return;
}



// Possible PLAY.OBJ/_SsSndPlay

void SsSepStop(short param_1,short param_2)

{
  _SsSndStop((int)param_1,(int)param_2);
  return;
}



void SsSetSerialVol(char param_1,short param_2,short param_3)

{
  SpuCommonAttr local_30;
  
  if (param_1 == '\0') {
    local_30.mask = 0xc0;
    if (0x7f < param_2) {
      param_2 = 0x7f;
    }
    if (0x7f < param_3) {
      param_3 = 0x7f;
    }
    local_30.cd.volume.left = param_2 * 0x102;
    local_30.cd.volume.right = param_3 * 0x102;
  }
  if (param_1 == '\x01') {
    local_30.mask = 0xc00;
    if (0x7f < param_2) {
      param_2 = 0x7f;
    }
    if (0x7f < param_3) {
      param_3 = 0x7f;
    }
    local_30.ext.volume.left = param_2 * 0x102;
    local_30.ext.volume.right = param_3 * 0x102;
  }
  SpuSetCommonAttr(&local_30);
  return;
}



void SsSetTickMode(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_8001f7c0();
  if ((param_1 & 0x1000U) != 0) {
    DAT_8003cc38 = 1;
    DAT_8003cc34 = param_1 & 0xfff;
    SSTICK_OBJ_50();
    return;
  }
  DAT_8003cc38 = 0;
  DAT_8003cc34 = param_1;
  switch(param_1) {
  case 0:
    if ((iVar1 != 0) && (iVar1 == 1)) {
SSTICK_OBJ_12C:
      DAT_8006548c = 0x32;
      SSTICK_OBJ_158();
      return;
    }
    break;
  case 1:
    DAT_8003cc34 = 0x3c;
    DAT_8006548c = 0x3c;
    if (iVar1 == 0) {
      DAT_8003cc34 = 5;
    }
    goto SSTICK_OBJ_C8;
  case 2:
    DAT_8006548c = 0xf0;
    SSTICK_OBJ_158();
    return;
  case 3:
    DAT_8006548c = 0x78;
    SSTICK_OBJ_158();
    return;
  case 4:
    DAT_8006548c = 0x32;
    DAT_8003cc34 = 5;
    if (iVar1 != 1) {
      DAT_8003cc34 = 0x32;
      SSTICK_OBJ_158();
      return;
    }
SSTICK_OBJ_C8:
    SSTICK_OBJ_158();
    return;
  case 5:
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        SSTICK_OBJ_140();
        return;
      }
      goto SSTICK_OBJ_12C;
    }
    break;
  default:
    DAT_8003cc38 = 0;
    DAT_8006548c = param_1;
    return;
  case -0x452e541f:
    break;
  }
  DAT_8006548c = 0x3c;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_50(int param_1)

{
  switch(DAT_8003cc34) {
  case 0:
    if ((param_1 != 0) && (param_1 == 1)) {
SSTICK_OBJ_12C:
      DAT_8006548c = 0x32;
      SSTICK_OBJ_158();
      return;
    }
    break;
  case 1:
    DAT_8003cc34 = 0x3c;
    DAT_8006548c = 0x3c;
    if (param_1 == 0) {
      DAT_8003cc34 = 5;
    }
    goto SSTICK_OBJ_C8;
  case 2:
    DAT_8006548c = 0xf0;
    SSTICK_OBJ_158();
    return;
  case 3:
    DAT_8006548c = 0x78;
    SSTICK_OBJ_158();
    return;
  case 4:
    DAT_8006548c = 0x32;
    DAT_8003cc34 = 5;
    if (param_1 != 1) {
      DAT_8003cc34 = 0x32;
      SSTICK_OBJ_158();
      return;
    }
SSTICK_OBJ_C8:
    SSTICK_OBJ_158();
    return;
  case 5:
    if (param_1 != 0) {
      if (param_1 != 1) {
        SSTICK_OBJ_140();
        return;
      }
      goto SSTICK_OBJ_12C;
    }
    break;
  default:
    DAT_8006548c = DAT_8003cc34;
    return;
  case 0xbad1abe1:
    break;
  }
  DAT_8006548c = 0x3c;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_88(int param_1)

{
  DAT_8006548c = 0x32;
  if (param_1 != 1) {
    DAT_8003cc34 = 0x32;
    SSTICK_OBJ_158();
    return;
  }
  DAT_8003cc34 = 5;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_B0(int param_1)

{
  DAT_8003cc34 = 0x3c;
  DAT_8006548c = 0x3c;
  if (param_1 == 0) {
    DAT_8003cc34 = 5;
  }
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_D8(void)

{
  DAT_8006548c = 0x78;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_EC(void)

{
  DAT_8006548c = 0xf0;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_100(int param_1)

{
  if (param_1 == 0) {
    DAT_8006548c = 0x3c;
    SSTICK_OBJ_158();
    return;
  }
  if (param_1 != 1) {
    SSTICK_OBJ_140();
    return;
  }
  DAT_8006548c = 0x32;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_118(int param_1)

{
  if ((param_1 != 0) && (param_1 == 1)) {
    DAT_8006548c = 0x32;
    SSTICK_OBJ_158();
    return;
  }
  DAT_8006548c = 0x3c;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_140(void)

{
  undefined4 in_v0;
  
  DAT_8006548c = in_v0;
  SSTICK_OBJ_158();
  return;
}



void SSTICK_OBJ_158(void)

{
  return;
}



void _SsSndTempo(int param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_2 * 0xac + *(int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
  uVar3 = SEXT24(*(short *)(iVar5 + 0x44));
  uVar1 = *(int *)(iVar5 + 0xa0) - 1;
  *(uint *)(iVar5 + 0xa0) = uVar1;
  if ((int)uVar3 < 1) {
    uVar1 = *(uint *)(iVar5 + 0x8c);
    if (*(uint *)(iVar5 + 0xa4) < uVar1) {
      *(uint *)(iVar5 + 0x8c) = uVar3 + uVar1;
      TEMPO_OBJ_DC();
      return;
    }
    if (uVar1 < *(uint *)(iVar5 + 0xa4)) {
      *(uint *)(iVar5 + 0x8c) = uVar1 - uVar3;
      if (*(uint *)(iVar5 + 0xa4) < uVar1 - uVar3) {
        *(uint *)(iVar5 + 0x8c) = *(uint *)(iVar5 + 0xa4);
      }
    }
  }
  else {
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    if (uVar1 % uVar3 != 0) {
      return;
    }
    uVar1 = *(uint *)(iVar5 + 0x8c);
    iVar2 = uVar1 - 1;
    if ((*(uint *)(iVar5 + 0xa4) < uVar1) || (iVar2 = uVar1 + 1, uVar1 < *(uint *)(iVar5 + 0xa4))) {
      *(int *)(iVar5 + 0x8c) = iVar2;
      TEMPO_OBJ_E8();
      return;
    }
  }
  uVar1 = (uint)((int)*(short *)(iVar5 + 0x4a) * *(int *)(iVar5 + 0x8c) * 10) /
          (uint)(DAT_8006548c * 0x3c);
  if (DAT_8006548c * 0x3c == 0) {
    trap(0x1c00);
  }
  *(short *)(iVar5 + 0x70) = (short)uVar1;
  if ((int)(uVar1 << 0x10) < 1) {
    *(undefined2 *)(iVar5 + 0x70) = 1;
  }
  if ((*(int *)(iVar5 + 0xa0) == 0) || (*(int *)(iVar5 + 0x8c) == *(int *)(iVar5 + 0xa4))) {
    piVar4 = (int *)((int)&DAT_80065528 + ((param_1 << 0x10) >> 0xe));
    iVar5 = param_2 * 0xac + *piVar4;
    *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xffffffbf;
    iVar5 = param_2 * 0xac + *piVar4;
    *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xffffff7f;
  }
  return;
}



void TEMPO_OBJ_DC(undefined4 param_1,short param_2,int param_3,int param_4)

{
  int in_v0;
  int iVar1;
  int *piVar2;
  undefined4 in_t0;
  uint uVar3;
  
  if (in_v0 != 0) {
    *(undefined4 *)(param_4 + 0x8c) = in_t0;
  }
  uVar3 = (uint)((int)*(short *)(param_4 + 0x4a) * *(int *)(param_4 + 0x8c) * 10) /
          (uint)(DAT_8006548c * 0x3c);
  if (DAT_8006548c * 0x3c == 0) {
    trap(0x1c00);
  }
  *(short *)(param_4 + 0x70) = (short)uVar3;
  if ((int)(uVar3 << 0x10) < 1) {
    *(undefined2 *)(param_4 + 0x70) = 1;
  }
  if ((*(int *)(param_4 + 0xa0) == 0) || (*(int *)(param_4 + 0x8c) == *(int *)(param_4 + 0xa4))) {
    piVar2 = (int *)((int)&DAT_80065528 + ((param_3 << 0x10) >> 0xe));
    iVar1 = param_2 * 0xac + *piVar2;
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffffbf;
    iVar1 = param_2 * 0xac + *piVar2;
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffff7f;
  }
  return;
}



void TEMPO_OBJ_E8(undefined4 param_1,short param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = (uint)((int)*(short *)(param_4 + 0x4a) * *(int *)(param_4 + 0x8c) * 10) /
          (uint)(DAT_8006548c * 0x3c);
  if (DAT_8006548c * 0x3c == 0) {
    trap(0x1c00);
  }
  *(short *)(param_4 + 0x70) = (short)uVar3;
  if ((int)(uVar3 << 0x10) < 1) {
    *(undefined2 *)(param_4 + 0x70) = 1;
  }
  if ((*(int *)(param_4 + 0xa0) == 0) || (*(int *)(param_4 + 0x8c) == *(int *)(param_4 + 0xa4))) {
    piVar2 = (int *)((int)&DAT_80065528 + ((param_3 << 0x10) >> 0xe));
    iVar1 = param_2 * 0xac + *piVar2;
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffffbf;
    iVar1 = param_2 * 0xac + *piVar2;
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffff7f;
  }
  return;
}



short SsUtKeyOnV(short voice,short vabId,short prog,short tone,short note,short fine,short voll,
                short volr)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  if (DAT_80063224 == 1) {
    sVar2 = UT_KEYV_OBJ_368();
    return sVar2;
  }
  DAT_80063224 = 1;
  if (((ushort)voice < 0x18) && (iVar4 = SpuVmVSetUp((int)vabId,(int)prog), iVar4 == 0)) {
    DAT_80063ab6 = 0x21;
    iVar6 = (int)voll;
    iVar4 = (int)volr;
    DAT_80063aa2 = (undefined)note;
    DAT_80063aa3 = (undefined)fine;
    DAT_80063aac = (byte)tone;
    DAT_80063aa4 = (undefined)voll;
    if (iVar6 == iVar4) {
      DAT_80063aa5 = 0x40;
      sVar2 = UT_KEYV_OBJ_188();
      return sVar2;
    }
    if (iVar4 < iVar6) {
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && (iVar4 << 6 == -0x80000000)) {
        trap(0x1800);
      }
      DAT_80063aa5 = (char)((iVar4 << 6) / iVar6);
      sVar2 = UT_KEYV_OBJ_188();
      return sVar2;
    }
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar6 << 6 == -0x80000000)) {
      trap(0x1800);
    }
    DAT_80063aa4 = (undefined)volr;
    DAT_80063aa5 = '\x7f' - (char)((iVar6 << 6) / iVar4);
    puVar5 = (undefined *)(((int)((uint)(ushort)prog << 0x10) >> 0xc) + DAT_80063590);
    DAT_80063aaa = puVar5[1];
    DAT_80063aab = puVar5[4];
    DAT_80063aa0 = *puVar5;
    puVar5 = (undefined *)(((uint)DAT_80063aac + (uint)DAT_80063aa7 * 0x10) * 0x20 + DAT_800636fc);
    DAT_80063aaf = *puVar5;
    DAT_80063ab8 = *(short *)(puVar5 + 0x16);
    DAT_80063aad = puVar5[2];
    DAT_80063aae = puVar5[3];
    DAT_80063ab0 = puVar5[4];
    DAT_80063ab1 = puVar5[5];
    DAT_80063ab4 = puVar5[1];
    DAT_80063ab2 = puVar5[6];
    DAT_80063ab3 = puVar5[7];
    if (DAT_80063ab8 != 0) {
      iVar6 = (int)voice;
      iVar4 = iVar6 * 0x34;
      DAT_80063aba = voice;
      (&DAT_800583d6)[iVar6 * 0x1a] = 0x21;
      *(short *)(&DAT_800583de + iVar4) = vabId;
      bVar1 = DAT_80063aa7;
      (&DAT_800583da)[iVar6 * 0x1a] = prog;
      (&DAT_800583d8)[iVar6 * 0x1a] = (ushort)bVar1;
      (&DAT_800583c8)[iVar6 * 0x1a] = DAT_80063ab8;
      bVar1 = DAT_80063aac;
      *(short *)(&DAT_800583d4 + iVar4) = note;
      (&DAT_800583e3)[iVar4] = 1;
      (&DAT_800583ca)[iVar6 * 0x1a] = 0;
      (&DAT_800583dc)[iVar6 * 0x1a] = (ushort)bVar1;
      SpuVmDoAllocate();
      if (DAT_80063ab8 == 0xff) {
        vmNoiseOn(voice & 0xff);
        sVar2 = UT_KEYV_OBJ_358();
        return sVar2;
      }
      uVar3 = note2pitch2(note,fine);
      SpuVmKeyOnNow(1,uVar3);
      DAT_80063224 = 0;
      return voice;
    }
  }
  DAT_80063224 = 0;
  sVar2 = UT_KEYV_OBJ_368();
  return sVar2;
}



int UT_KEYV_OBJ_188(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_v0;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ushort unaff_s2;
  undefined2 unaff_s5;
  undefined2 unaff_s7;
  undefined2 in_stack_00000010;
  
  puVar3 = (undefined *)((in_v0 >> 0xc) + DAT_80063590);
  DAT_80063aaa = puVar3[1];
  DAT_80063aab = puVar3[4];
  DAT_80063aa0 = *puVar3;
  puVar3 = (undefined *)(((uint)DAT_80063aac + (uint)DAT_80063aa7 * 0x10) * 0x20 + DAT_800636fc);
  DAT_80063aaf = *puVar3;
  DAT_80063ab8 = *(short *)(puVar3 + 0x16);
  DAT_80063aad = puVar3[2];
  DAT_80063aae = puVar3[3];
  DAT_80063ab0 = puVar3[4];
  DAT_80063ab1 = puVar3[5];
  DAT_80063ab4 = puVar3[1];
  DAT_80063ab2 = puVar3[6];
  DAT_80063ab3 = puVar3[7];
  if (DAT_80063ab8 == 0) {
    DAT_80063224 = 0;
    iVar4 = UT_KEYV_OBJ_368();
    return iVar4;
  }
  iVar5 = (int)(short)unaff_s2;
  iVar4 = iVar5 * 0x34;
  DAT_80063aba = unaff_s2;
  (&DAT_800583d6)[iVar5 * 0x1a] = 0x21;
  *(undefined2 *)(&DAT_800583de + iVar4) = in_stack_00000010;
  bVar1 = DAT_80063aa7;
  (&DAT_800583da)[iVar5 * 0x1a] = unaff_s7;
  (&DAT_800583d8)[iVar5 * 0x1a] = (ushort)bVar1;
  (&DAT_800583c8)[iVar5 * 0x1a] = DAT_80063ab8;
  bVar1 = DAT_80063aac;
  *(undefined2 *)(&DAT_800583d4 + iVar4) = unaff_s5;
  (&DAT_800583e3)[iVar4] = 1;
  (&DAT_800583ca)[iVar5 * 0x1a] = 0;
  (&DAT_800583dc)[iVar5 * 0x1a] = (ushort)bVar1;
  SpuVmDoAllocate();
  if (DAT_80063ab8 == 0xff) {
    vmNoiseOn(unaff_s2 & 0xff);
    iVar4 = UT_KEYV_OBJ_358();
    return iVar4;
  }
  uVar2 = note2pitch2();
  SpuVmKeyOnNow(1,uVar2);
  DAT_80063224 = 0;
  return (int)(short)unaff_s2;
}



int UT_KEYV_OBJ_358(void)

{
  short unaff_s2;
  
  DAT_80063224 = 0;
  return (int)unaff_s2;
}



void UT_KEYV_OBJ_368(void)

{
  return;
}



short SsUtKeyOffV(short voice)

{
  short sVar1;
  
  if (DAT_80063224 == 1) {
    sVar1 = UT_KEYV_OBJ_400();
    return sVar1;
  }
  DAT_80063224 = 1;
  if (0x17 < (ushort)voice) {
    DAT_80063224 = 0;
    sVar1 = UT_KEYV_OBJ_400();
    return sVar1;
  }
  DAT_80063aba = voice;
  SpuVmKeyOffNow(0);
  DAT_80063224 = 0;
  return 0;
}



void UT_KEYV_OBJ_400(void)

{
  return;
}



// Possible UT_VVOL.OBJ/SsUtGetDetVVol

short SsUtGetDetVVol(short param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  if (0x17 < (ushort)param_1) {
    sVar1 = UT_VVOL_OBJ_50();
    return sVar1;
  }
  iVar2 = (int)((uint)(ushort)param_1 << 0x10) >> 0xc;
  *param_2 = *(short *)((int)&VOICE_00_LEFT_RIGHT + iVar2);
  *param_3 = *(short *)((int)&VOICE_00_LEFT_RIGHT + iVar2 + 2);
  return 0;
}



// Possible UT_VVOL.OBJ/UT_VVOL_OBJ_50

void UT_VVOL_OBJ_50(void)

{
  return;
}



// Possible UT_VVOL.OBJ/SsUtSetDetVVol

short SsUtSetDetVVol(short param_1,short param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (0x17 < (ushort)param_1) {
    sVar2 = UT_VVOL_OBJ_B8();
    return sVar2;
  }
  iVar3 = (int)param_1;
  (&DAT_80063afa)[iVar3 * 8] = param_3;
  bVar1 = (&DAT_800588d4)[iVar3];
  (&DAT_80063af8)[iVar3 * 8] = param_2;
  (&DAT_800588d4)[iVar3] = bVar1 | 3;
  return 0;
}



// Possible UT_VVOL.OBJ/UT_VVOL_OBJ_B8

void UT_VVOL_OBJ_B8(void)

{
  return;
}



// Possible UT_VVOL.OBJ/SsUtGetVVol

short SsUtGetVVol(short param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  if (0x17 < (ushort)param_1) {
    sVar1 = UT_VVOL_OBJ_148();
    return sVar1;
  }
  iVar2 = (int)((uint)(ushort)param_1 << 0x10) >> 0xc;
  sVar1 = *(short *)((int)&VOICE_00_LEFT_RIGHT + iVar2 + 2);
  *param_2 = *(short *)((int)&VOICE_00_LEFT_RIGHT + iVar2) / 0x81;
  *param_3 = sVar1 / 0x81;
  return 0;
}



// Possible UT_VVOL.OBJ/UT_VVOL_OBJ_148

void UT_VVOL_OBJ_148(void)

{
  return;
}



// Possible UT_VVOL.OBJ/SsUtSetVVol

short SsUtSetVVol(short param_1,short param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (0x17 < (ushort)param_1) {
    sVar2 = UT_VVOL_OBJ_1D0();
    return sVar2;
  }
  iVar3 = (int)param_1;
  (&DAT_80063afa)[iVar3 * 8] = param_3 * 0x81;
  bVar1 = (&DAT_800588d4)[iVar3];
  (&DAT_80063af8)[iVar3 * 8] = param_2 * 0x81;
  (&DAT_800588d4)[iVar3] = bVar1 | 3;
  return 0;
}



// Possible UT_VVOL.OBJ/UT_VVOL_OBJ_1D0

void UT_VVOL_OBJ_1D0(void)

{
  return;
}



void SpuVmDoAllocate(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_80065e98;
  DAT_80063abc = (short)((int)DAT_80063aba << 3);
  DAT_80063abe = (ushort)DAT_80063aac + (ushort)DAT_80063aa7 * 0x10;
  (&DAT_800583ce)[DAT_80063aba * 0x1a] = 0x7fff;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = ~(1 << ((int)DAT_80063aba & 0x1fU)) & *puVar1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x10);
  if ((DAT_80063ab8 & 1) != 0) {
    VM_ALOC2_OBJ_120();
    return;
  }
  (&DAT_80063afe)[DAT_80063abc] =
       *(undefined2 *)((((short)DAT_80063ab8 + -1) / 2) * 0x10 + DAT_80063590 + 0xe);
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 8;
  iVar2 = DAT_800636fc;
  (&DAT_80063b00)[DAT_80063abc] =
       *(undefined2 *)
        (((uint)DAT_80063aa7 * 0x10 + (uint)DAT_80063aac) * 0x20 + DAT_800636fc + 0x10);
  (&DAT_80063b02)[DAT_80063abc] =
       *(short *)(((uint)DAT_80063aa7 * 0x10 + (uint)DAT_80063aac) * 0x20 + iVar2 + 0x12) +
       DAT_800589b0;
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 0x30;
  return;
}



void VM_ALOC2_OBJ_120(void)

{
  int iVar1;
  undefined2 in_v0;
  int in_v1;
  
  *(undefined2 *)((int)&DAT_80063afe + in_v1) = in_v0;
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 8;
  iVar1 = DAT_800636fc;
  (&DAT_80063b00)[DAT_80063abc] =
       *(undefined2 *)
        (((uint)DAT_80063aa7 * 0x10 + (uint)DAT_80063aac) * 0x20 + DAT_800636fc + 0x10);
  (&DAT_80063b02)[DAT_80063abc] =
       *(short *)(((uint)DAT_80063aa7 * 0x10 + (uint)DAT_80063aac) * 0x20 + iVar1 + 0x12) +
       DAT_800589b0;
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 0x30;
  return;
}



void SpuVmFlush(void)

{
  short sVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  dword *pdVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  uVar12 = 0;
  uVar4 = (uint)DAT_80063a18;
  DAT_80063c84 = DAT_80063c84 + 1 & 0xf;
  puVar3 = &DAT_80065e98 + DAT_80063c84;
  *puVar3 = 0;
  if (uVar4 != 0) {
    psVar5 = &DAT_800583ce;
    pdVar7 = &VOICE_00_LEFT_RIGHT;
    do {
      *psVar5 = *(short *)(pdVar7 + 3);
      sVar1 = *psVar5;
      psVar5 = psVar5 + 0x1a;
      if (sVar1 == 0) {
        *puVar3 = 1 << (uVar12 & 0x1f) | *puVar3;
      }
      uVar12 = uVar12 + 1;
      pdVar7 = pdVar7 + 4;
    } while ((int)uVar12 < (int)uVar4);
  }
  iVar13 = 0;
  if (DAT_80063c80 == '\0') {
    uVar4 = 0xffffffff;
    puVar3 = &DAT_80065e98;
    do {
      iVar13 = iVar13 + 1;
      uVar4 = uVar4 & *puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar13 < 0xf);
    uVar12 = 0;
    if (DAT_80063a18 != 0) {
      iVar13 = 0;
      do {
        if ((uVar4 & 1 << (uVar12 & 0x1f)) != 0) {
          if ((&DAT_800583e3)[iVar13] == '\x02') {
            SpuSetNoiseVoice(0,0xffffff);
          }
          (&DAT_800583e3)[iVar13] = 0;
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 0x34;
      } while ((int)uVar12 < (int)(uint)DAT_80063a18);
    }
  }
  iVar13 = 0;
  DAT_8005830c = DAT_8005830c & ~DAT_80065edc;
  iVar14 = 0;
  DAT_80058310 = DAT_80058310 & ~DAT_80065ee0;
  do {
    if (*(short *)((int)&DAT_800583e4 + iVar14) != 0) {
      (*DAT_80063c78)(iVar13);
    }
    psVar5 = (short *)((int)&DAT_800583f0 + iVar14);
    iVar14 = iVar14 + 0x34;
    if (*psVar5 != 0) {
      (*DAT_80063a9c)(iVar13);
    }
    iVar13 = iVar13 + 1;
    iVar6 = 0;
  } while (iVar13 < 0x18);
  pbVar8 = &DAT_800588d4;
  puVar2 = &DAT_80063af8;
  puVar11 = &DAT_80063b02;
  puVar10 = &DAT_80063b00;
  puVar9 = &DAT_80063afa;
  do {
    if ((*pbVar8 & 1) != 0) {
      *(undefined2 *)((int)&VOICE_00_LEFT_RIGHT + iVar6) = *puVar2;
      *(undefined2 *)((int)&VOICE_00_LEFT_RIGHT + iVar6 + 2) = *puVar9;
    }
    if ((*pbVar8 & 4) != 0) {
      *(undefined2 *)((int)&VOICE_00_ADPCM_SAMPLE_RATE + iVar6) =
           *(undefined2 *)((int)&DAT_80063afc + iVar6);
    }
    if ((*pbVar8 & 8) != 0) {
      *(undefined2 *)((int)&VOICE_00_ADPCM_START_ADDR + iVar6) =
           *(undefined2 *)((int)&DAT_80063afe + iVar6);
    }
    puVar9 = puVar9 + 8;
    if ((*pbVar8 & 0x10) != 0) {
      *(undefined2 *)((int)&VOICE_00_ADSR_ATT_DEC_SUS_REL + iVar6) = *puVar10;
      *(undefined2 *)((int)&DAT_1f801c0a + iVar6) = *puVar11;
    }
    *pbVar8 = 0;
    SPU_VOICE_KEY_OFF._2_2_ = DAT_80065ee0;
    SPU_VOICE_KEY_OFF._0_2_ = DAT_80065edc;
    SPU_VOICE_KEY_ON._2_2_ = DAT_80058310;
    SPU_VOICE_KEY_ON._0_2_ = DAT_8005830c;
    pbVar8 = pbVar8 + 1;
    puVar11 = puVar11 + 8;
    puVar10 = puVar10 + 8;
    iVar6 = iVar6 + 0x10;
    puVar2 = puVar2 + 8;
  } while ((int)pbVar8 < -0x7ffa7714);
  DAT_8005830c = 0;
  DAT_80058310 = 0;
  DAT_80065edc = 0;
  DAT_80065ee0 = 0;
  SPU_VOICE_CHN_REVERB_MODE._0_2_ = DAT_80058314;
  SPU_VOICE_CHN_REVERB_MODE._2_2_ = DAT_80058318;
  return;
}



ulong SpuSetNoiseVoice(long on_off,ulong voice_bit)

{
  ulong uVar1;
  
  uVar1 = _SpuSetAnyVoice(on_off,voice_bit,0xca,0xcb);
  return uVar1;
}



uint _SpuSetAnyVoice(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  if ((DAT_8003c894 & 1) != 0) {
    uVar3 = S_SAV_OBJ_38(&DAT_8005900c);
    return uVar3;
  }
  uVar3 = (uint)*(ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2) |
          (*(ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2) & 0xff) << 0x10;
  uVar1 = (ushort)param_2;
  uVar2 = (ushort)(param_2 >> 0x10);
  if (param_1 == 0) {
    if ((DAT_8003c894 & 1) != 0) {
      *(ushort *)(&DAT_8005900c + param_3 * 2) = *(ushort *)(&DAT_8005900c + param_3 * 2) & ~uVar1;
      *(ushort *)(&DAT_8005900c + param_4 * 2) =
           *(ushort *)(&DAT_8005900c + param_4 * 2) & ~(uVar2 & 0xff);
      DAT_8003c460 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8003c460;
      uVar3 = S_SAV_OBJ_1E8();
      return uVar3;
    }
    puVar4 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
    puVar5 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
    *puVar4 = *puVar4 & ~uVar1;
    *puVar5 = *puVar5 & ~(uVar2 & 0xff);
    uVar3 = uVar3 & ~(param_2 & 0xffffff);
  }
  else {
    if (param_1 == 1) {
      if ((DAT_8003c894 & 1) != 0) {
        *(ushort *)(&DAT_8005900c + param_3 * 2) = *(ushort *)(&DAT_8005900c + param_3 * 2) | uVar1;
        *(ushort *)(&DAT_8005900c + param_4 * 2) =
             *(ushort *)(&DAT_8005900c + param_4 * 2) | uVar2 & 0xff;
        DAT_8003c460 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8003c460;
        uVar3 = S_SAV_OBJ_114();
        return uVar3;
      }
      puVar4 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
      puVar5 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
      *puVar4 = *puVar4 | uVar1;
      *puVar5 = *puVar5 | uVar2 & 0xff;
      uVar3 = S_SAV_OBJ_1F8();
      return uVar3;
    }
  }
  return uVar3;
}



uint S_SAV_OBJ_38(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int in_v0;
  ushort *puVar3;
  ushort *puVar4;
  uint in_t0;
  int in_t1;
  uint uVar5;
  
  uVar5 = (uint)*(ushort *)(param_3 * 2 + param_1) | (*(ushort *)(in_v0 + param_1) & 0xff) << 0x10;
  uVar1 = (ushort)in_t0;
  uVar2 = (ushort)(in_t0 >> 0x10);
  if (in_t1 == 0) {
    if ((DAT_8003c894 & 1) != 0) {
      *(ushort *)(&DAT_8005900c + param_3 * 2) = *(ushort *)(&DAT_8005900c + param_3 * 2) & ~uVar1;
      *(ushort *)(&DAT_8005900c + param_4 * 2) =
           *(ushort *)(&DAT_8005900c + param_4 * 2) & ~(uVar2 & 0xff);
      DAT_8003c460 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8003c460;
      uVar5 = S_SAV_OBJ_1E8();
      return uVar5;
    }
    puVar3 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
    puVar4 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
    *puVar3 = *puVar3 & ~uVar1;
    *puVar4 = *puVar4 & ~(uVar2 & 0xff);
    uVar5 = uVar5 & ~(in_t0 & 0xffffff);
  }
  else {
    if (in_t1 == 1) {
      if ((DAT_8003c894 & 1) != 0) {
        *(ushort *)(&DAT_8005900c + param_3 * 2) = *(ushort *)(&DAT_8005900c + param_3 * 2) | uVar1;
        *(ushort *)(&DAT_8005900c + param_4 * 2) =
             *(ushort *)(&DAT_8005900c + param_4 * 2) | uVar2 & 0xff;
        DAT_8003c460 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8003c460;
        uVar5 = S_SAV_OBJ_114();
        return uVar5;
      }
      puVar3 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
      puVar4 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
      *puVar3 = *puVar3 | uVar1;
      *puVar4 = *puVar4 | uVar2 & 0xff;
      uVar5 = S_SAV_OBJ_1F8();
      return uVar5;
    }
  }
  return uVar5;
}



void S_SAV_OBJ_114(void)

{
  S_SAV_OBJ_1F8();
  return;
}



uint S_SAV_OBJ_1E8(void)

{
  uint in_v0;
  uint in_t0;
  uint in_t2;
  
  return in_t2 & ~(in_t0 & (in_v0 | 0xffff)) & 0xffffff;
}



uint S_SAV_OBJ_1F8(void)

{
  uint in_t2;
  
  return in_t2 & 0xffffff;
}



void SpuVmInit(byte param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  FUN_8001c7c0(0);
  DAT_800589b0 = 0;
  SpuInitMalloc(0x20,"");
  uVar3 = 0;
  uVar2 = 0;
  do {
    (&DAT_80063af8)[uVar2] = 0;
    uVar3 = uVar3 + 1;
    uVar2 = (uint)uVar3;
  } while (uVar3 < 0xc0);
  uVar3 = 0;
  uVar2 = 0;
  do {
    (&DAT_800588d4)[uVar2] = 0;
    uVar3 = uVar3 + 1;
    uVar2 = (uint)uVar3;
  } while (uVar3 < 0x18);
  DAT_80065e10 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    (&DAT_80063ac0)[uVar2] = 0;
    uVar3 = uVar3 + 1;
    uVar2 = (uint)uVar3;
  } while (uVar3 < 0x10);
  if (0x17 < param_1) {
    DAT_80063a18 = 0x18;
    VM_INIT_OBJ_E4();
    return;
  }
  uVar3 = 0;
  DAT_80063a18 = param_1;
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      (&DAT_800583ca)[uVar2 * 0x1a] = 0x18;
      (&DAT_800583d6)[uVar2 * 0x1a] = 0xffff;
      uVar1 = uVar2 & 0x1fff;
      (&DAT_800583c8)[uVar2 * 0x1a] = 0xff;
      (&DAT_800583e3)[uVar2 * 0x34] = 0;
      (&DAT_800583cc)[uVar2 * 0x1a] = 0;
      (&DAT_800583ce)[uVar2 * 0x1a] = 0;
      (&DAT_800583d8)[uVar2 * 0x1a] = 0;
      (&DAT_800583da)[uVar2 * 0x1a] = 0;
      (&DAT_800583dc)[uVar2 * 0x1a] = 0xff;
      (&DAT_800583d0)[uVar2 * 0x1a] = 0;
      (&DAT_800583d2)[uVar2 * 0x34] = 0x40;
      (&DAT_800583e4)[uVar2 * 0x1a] = 0;
      (&DAT_800583e6)[uVar2 * 0x1a] = 0;
      (&DAT_800583e8)[uVar2 * 0x1a] = 0;
      (&DAT_800583ea)[uVar2 * 0x1a] = 0;
      (&DAT_800583f0)[uVar2 * 0x1a] = 0;
      (&DAT_800583f2)[uVar2 * 0x1a] = 0;
      (&DAT_800583f4)[uVar2 * 0x1a] = 0;
      (&DAT_800583f6)[uVar2 * 0x1a] = 0;
      (&DAT_800583f8)[uVar2 * 0x1a] = 0;
      (&DAT_800583ec)[uVar2 * 0x1a] = 0;
      (&VOICE_00_ADPCM_START_ADDR)[uVar1 * 8] = 0x200;
      (&VOICE_00_ADPCM_SAMPLE_RATE)[uVar1 * 8] = 0x1000;
      (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[uVar1 * 8] = 0x80ff;
      *(undefined2 *)(&VOICE_00_LEFT_RIGHT + uVar1 * 4) = 0;
      *(undefined2 *)((int)&VOICE_00_LEFT_RIGHT + uVar1 * 0x10 + 2) = 0;
      (&DAT_1f801c0a)[uVar1 * 8] = 0x4000;
      DAT_80063aba = uVar3;
      SpuVmKeyOffNow(1);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 < DAT_80063a18);
  }
  DAT_800588b8 = 0x3fff;
  DAT_800588ba = 0x3fff;
  DAT_8005830c = 0;
  DAT_80058310 = 0;
  DAT_80065edc = 0;
  DAT_80058314 = 0;
  DAT_80058318 = 0;
  DAT_800588b0 = 0;
  DAT_800588b4 = 0;
  DAT_80063c80 = 0;
  DAT_800591b0 = 0;
  DAT_80063228 = 0x80;
  SpuVmFlush();
  return;
}



void VM_INIT_OBJ_E4(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  if (DAT_80063a18 != 0) {
    uVar2 = 0;
    do {
      (&DAT_800583ca)[uVar2 * 0x1a] = 0x18;
      (&DAT_800583d6)[uVar2 * 0x1a] = 0xffff;
      uVar1 = uVar2 & 0x1fff;
      (&DAT_800583c8)[uVar2 * 0x1a] = 0xff;
      (&DAT_800583e3)[uVar2 * 0x34] = 0;
      (&DAT_800583cc)[uVar2 * 0x1a] = 0;
      (&DAT_800583ce)[uVar2 * 0x1a] = 0;
      (&DAT_800583d8)[uVar2 * 0x1a] = 0;
      (&DAT_800583da)[uVar2 * 0x1a] = 0;
      (&DAT_800583dc)[uVar2 * 0x1a] = 0xff;
      (&DAT_800583d0)[uVar2 * 0x1a] = 0;
      (&DAT_800583d2)[uVar2 * 0x34] = 0x40;
      (&DAT_800583e4)[uVar2 * 0x1a] = 0;
      (&DAT_800583e6)[uVar2 * 0x1a] = 0;
      (&DAT_800583e8)[uVar2 * 0x1a] = 0;
      (&DAT_800583ea)[uVar2 * 0x1a] = 0;
      (&DAT_800583f0)[uVar2 * 0x1a] = 0;
      (&DAT_800583f2)[uVar2 * 0x1a] = 0;
      (&DAT_800583f4)[uVar2 * 0x1a] = 0;
      (&DAT_800583f6)[uVar2 * 0x1a] = 0;
      (&DAT_800583f8)[uVar2 * 0x1a] = 0;
      (&DAT_800583ec)[uVar2 * 0x1a] = 0;
      (&VOICE_00_ADPCM_START_ADDR)[uVar1 * 8] = 0x200;
      (&VOICE_00_ADPCM_SAMPLE_RATE)[uVar1 * 8] = 0x1000;
      (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[uVar1 * 8] = 0x80ff;
      *(undefined2 *)(&VOICE_00_LEFT_RIGHT + uVar1 * 4) = 0;
      *(undefined2 *)((int)&VOICE_00_LEFT_RIGHT + uVar1 * 0x10 + 2) = 0;
      (&DAT_1f801c0a)[uVar1 * 8] = 0x4000;
      DAT_80063aba = uVar3;
      SpuVmKeyOffNow(1);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 < DAT_80063a18);
  }
  DAT_800588b8 = 0x3fff;
  DAT_800588ba = 0x3fff;
  DAT_8005830c = 0;
  DAT_80058310 = 0;
  DAT_80065edc = 0;
  DAT_80058314 = 0;
  DAT_80058318 = 0;
  DAT_800588b0 = 0;
  DAT_800588b4 = 0;
  DAT_80063c80 = 0;
  DAT_800591b0 = 0;
  DAT_80063228 = 0x80;
  SpuVmFlush();
  return;
}



long SpuInitMalloc(long num,char *top)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = DAT_8003c8c4;
  if (num < 1) {
    lVar2 = S_M_INIT_OBJ_4C();
    return lVar2;
  }
  *(undefined4 *)top = 0x40001010;
  DAT_8003c8fc = 0;
  DAT_8003c8f8 = num;
  DAT_8003c900 = top;
  *(int *)(top + 4) = (0x10000 << (uVar1 & 0x1f)) + -0x1010;
  return num;
}



void S_M_INIT_OBJ_4C(void)

{
  return;
}



// Possible S_IT.OBJ/_spu_setInTransfer

void FUN_8001c7c0(int param_1)

{
  DAT_8003c8d0 = (uint)(param_1 != 1);
  return;
}



// Possible S_IT.OBJ/_spu_getInTransfer

bool FUN_8001c7ec(void)

{
  return DAT_8003c8d0 != 1;
}



// Possible VM_N2P.OBJ/note2pitch

uint note2pitch(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(((DAT_80063aa2 + 0x3c) - (uint)DAT_80063ab0) * 0x10000) >> 0x10;
  uVar2 = (uint)(DAT_80063ab1 >> 3);
  if (0xf < uVar2) {
    uVar2 = 0xf;
  }
  uVar2 = (uint)*(ushort *)(&DAT_8003cc50 + (uVar2 + ((iVar1 % 0xc) * 0x10000 >> 0xc)) * 2);
  iVar1 = (iVar1 / 0xc + -5) * 0x10000 >> 0x10;
  if (0 < iVar1) {
    uVar2 = VM_N2P_OBJ_B0();
    return uVar2;
  }
  if (iVar1 < 0) {
    uVar2 = (int)uVar2 >> (-iVar1 & 0x1fU);
  }
  return uVar2 & 0xffff;
}



// Possible VM_N2P.OBJ/VM_N2P_OBJ_B0

undefined2 VM_N2P_OBJ_B0(void)

{
  undefined2 in_v1;
  
  return in_v1;
}



// WARNING: Removing unreachable block (ram,0x8001c8f8)
// Possible VM_N2P.OBJ/note2pitch2

uint note2pitch2(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  
  iVar1 = ((uint)DAT_80063aac + (uint)DAT_80063aa7 * 0x10) * 0x20 + DAT_800636fc;
  uVar3 = (int)((param_2 & 0xffff) + (uint)*(byte *)(iVar1 + 5)) >> 3;
  sVar4 = (short)uVar3;
  if (0xf < uVar3) {
    sVar4 = sVar4 + -0x10;
  }
  iVar2 = (int)(((uint)(0xf < uVar3) + ((param_1 + 0x3c) - (uint)*(byte *)(iVar1 + 4))) * 0x10000)
          >> 0x10;
  iVar1 = (iVar2 / 0xc + -5) * 0x10000 >> 0x10;
  uVar3 = (uint)*(ushort *)(&DAT_8003cc50 + (((iVar2 % 0xc) * 0x10000 >> 0xc) + (int)sVar4) * 2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar3 = (int)uVar3 >> (-iVar1 & 0x1fU);
    }
    return uVar3 & 0xffff;
  }
  uVar3 = VM_N2P_OBJ_1AC();
  return uVar3;
}



// Possible VM_N2P.OBJ/VM_N2P_OBJ_1AC

undefined2 VM_N2P_OBJ_1AC(void)

{
  undefined2 in_v1;
  
  return in_v1;
}



void vmNoiseOn(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = (uint)(DAT_80063ab6 >> 8) * 0xac + (&DAT_80065528)[DAT_80063ab6 & 0xff];
  uVar7 = (uint)DAT_80063aae;
  uVar8 = ((((uint)*(ushort *)(iVar3 + 0x76) * 0x81 * (uint)DAT_80063aaa) / 0x7f) *
          (uint)DAT_80063aad) / 0x7f;
  uVar5 = ((((uint)*(ushort *)(iVar3 + 0x74) * 0x81 * (uint)DAT_80063aaa) / 0x7f) *
          (uint)DAT_80063aad) / 0x7f;
  if (uVar7 < 0x40) {
    VM_NO1_OBJ_190(uVar5,uVar5,uVar7,(uVar8 * uVar7) / 0x3f);
    return;
  }
  if (DAT_80063aab < 0x40) {
    VM_NO1_OBJ_200();
    return;
  }
  if (DAT_80063aa5 < 0x40) {
    VM_NO1_OBJ_270();
    return;
  }
  uVar6 = (((((uVar5 * (0x7f - uVar7)) / 0x3f) * (0x7f - (uint)DAT_80063aab)) / 0x3f) *
          (0x7f - (uint)DAT_80063aa5)) / 0x3f;
  uVar7 = uVar8;
  if ((DAT_800591b0 == 1) && (uVar7 = uVar6, uVar6 < uVar8)) {
    VM_NO1_OBJ_298(uVar5,uVar8);
    return;
  }
  SPU_CTRL_REG_CPUCNT =
       SPU_CTRL_REG_CPUCNT & 0xc0ff |
       (ushort)(((uint)DAT_80063aa2 - (uint)DAT_80063ab0 & 0x3f) << 8);
  uVar5 = param_1 & 0xff;
  (&DAT_80063afa)[uVar5 * 8] = (short)uVar7;
  bVar1 = (&DAT_800588d4)[uVar5];
  (&DAT_80063af8)[uVar5 * 8] = (short)uVar6;
  (&DAT_800588d4)[uVar5] = bVar1 | 3;
  bVar1 = DAT_80063a18;
  if (uVar5 < 0x10) {
    VM_NO1_OBJ_328(uVar5,uVar6,0,1 << (param_1 & 0x1f));
    return;
  }
  (&DAT_800583cc)[(param_1 & 0xff) * 0x1a] = 10;
  iVar3 = 0;
  if (bVar1 != 0) {
    iVar4 = 0;
    do {
      iVar4 = (iVar4 >> 0x10) * 0x34;
      iVar3 = iVar3 + 1;
      (&DAT_800583e3)[iVar4] = (&DAT_800583e3)[iVar4] & 1;
      iVar4 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(param_1 & 0xff) * 0x34] = 2;
  uVar2 = (ushort)(1 << (uVar5 - 0x10 & 0x1f));
  DAT_80058310 = uVar2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058318 = DAT_80058318 & ~uVar2;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = uVar2;
    return;
  }
  DAT_80058318 = uVar2 | DAT_80058318;
  VM_NO1_OBJ_4B0();
  return;
}



void VM_NO1_OBJ_190(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort in_t1;
  uint in_t2;
  
  if (DAT_80063aab < 0x40) {
    VM_NO1_OBJ_200();
    return;
  }
  if (DAT_80063aa5 < 0x40) {
    VM_NO1_OBJ_270();
    return;
  }
  uVar5 = (((param_2 * (0x7f - (uint)DAT_80063aab)) / 0x3f) * (0x7f - (uint)DAT_80063aa5)) / 0x3f;
  uVar7 = param_4;
  if ((DAT_800591b0 == 1) && (uVar7 = uVar5, uVar5 < param_4)) {
    VM_NO1_OBJ_298(param_1,param_4);
    return;
  }
  SPU_CTRL_REG_CPUCNT =
       in_t1 & 0xc0ff | (ushort)(((uint)DAT_80063aa2 - (uint)DAT_80063ab0 & 0x3f) << 8);
  uVar4 = in_t2 & 0xff;
  (&DAT_80063afa)[uVar4 * 8] = (short)uVar7;
  bVar1 = (&DAT_800588d4)[uVar4];
  (&DAT_80063af8)[uVar4 * 8] = (short)uVar5;
  (&DAT_800588d4)[uVar4] = bVar1 | 3;
  bVar1 = DAT_80063a18;
  if (uVar4 < 0x10) {
    VM_NO1_OBJ_328(uVar4,uVar5,0,1 << (in_t2 & 0x1f));
    return;
  }
  (&DAT_800583cc)[(in_t2 & 0xff) * 0x1a] = 10;
  iVar6 = 0;
  if (bVar1 != 0) {
    iVar3 = 0;
    do {
      iVar3 = (iVar3 >> 0x10) * 0x34;
      iVar6 = iVar6 + 1;
      (&DAT_800583e3)[iVar3] = (&DAT_800583e3)[iVar3] & 1;
      iVar3 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(in_t2 & 0xff) * 0x34] = 2;
  uVar2 = (ushort)(1 << (uVar4 - 0x10 & 0x1f));
  DAT_80058310 = uVar2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058318 = DAT_80058318 & ~uVar2;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = uVar2;
    return;
  }
  DAT_80058318 = uVar2 | DAT_80058318;
  VM_NO1_OBJ_4B0();
  return;
}



void VM_NO1_OBJ_200(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort in_t1;
  uint in_t2;
  
  if (DAT_80063aa5 < 0x40) {
    VM_NO1_OBJ_270();
    return;
  }
  uVar5 = (param_2 * (0x7f - (uint)DAT_80063aa5)) / 0x3f;
  uVar7 = param_4;
  if ((DAT_800591b0 == 1) && (uVar7 = uVar5, uVar5 < param_4)) {
    VM_NO1_OBJ_298(param_1,param_4);
    return;
  }
  SPU_CTRL_REG_CPUCNT =
       in_t1 & 0xc0ff | (ushort)(((uint)DAT_80063aa2 - (uint)DAT_80063ab0 & 0x3f) << 8);
  uVar4 = in_t2 & 0xff;
  (&DAT_80063afa)[uVar4 * 8] = (short)uVar7;
  bVar1 = (&DAT_800588d4)[uVar4];
  (&DAT_80063af8)[uVar4 * 8] = (short)uVar5;
  (&DAT_800588d4)[uVar4] = bVar1 | 3;
  bVar1 = DAT_80063a18;
  if (uVar4 < 0x10) {
    VM_NO1_OBJ_328(uVar4,uVar5,0,1 << (in_t2 & 0x1f));
    return;
  }
  (&DAT_800583cc)[(in_t2 & 0xff) * 0x1a] = 10;
  iVar6 = 0;
  if (bVar1 != 0) {
    iVar3 = 0;
    do {
      iVar3 = (iVar3 >> 0x10) * 0x34;
      iVar6 = iVar6 + 1;
      (&DAT_800583e3)[iVar3] = (&DAT_800583e3)[iVar3] & 1;
      iVar3 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(in_t2 & 0xff) * 0x34] = 2;
  uVar2 = (ushort)(1 << (uVar4 - 0x10 & 0x1f));
  DAT_80058310 = uVar2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058318 = DAT_80058318 & ~uVar2;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = uVar2;
    return;
  }
  DAT_80058318 = uVar2 | DAT_80058318;
  VM_NO1_OBJ_4B0();
  return;
}



void VM_NO1_OBJ_270(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort in_t1;
  uint in_t2;
  
  uVar6 = param_4;
  if ((DAT_800591b0 == 1) && (uVar6 = param_2, param_2 < param_4)) {
    VM_NO1_OBJ_298(param_1,param_4);
    return;
  }
  SPU_CTRL_REG_CPUCNT =
       in_t1 & 0xc0ff | (ushort)(((uint)DAT_80063aa2 - (uint)DAT_80063ab0 & 0x3f) << 8);
  uVar4 = in_t2 & 0xff;
  (&DAT_80063afa)[uVar4 * 8] = (short)uVar6;
  bVar1 = (&DAT_800588d4)[uVar4];
  (&DAT_80063af8)[uVar4 * 8] = (short)param_2;
  (&DAT_800588d4)[uVar4] = bVar1 | 3;
  bVar1 = DAT_80063a18;
  if (uVar4 < 0x10) {
    VM_NO1_OBJ_328(uVar4,param_2,0,1 << (in_t2 & 0x1f));
    return;
  }
  (&DAT_800583cc)[(in_t2 & 0xff) * 0x1a] = 10;
  iVar5 = 0;
  if (bVar1 != 0) {
    iVar3 = 0;
    do {
      iVar3 = (iVar3 >> 0x10) * 0x34;
      iVar5 = iVar5 + 1;
      (&DAT_800583e3)[iVar3] = (&DAT_800583e3)[iVar3] & 1;
      iVar3 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(in_t2 & 0xff) * 0x34] = 2;
  uVar2 = (ushort)(1 << (uVar4 - 0x10 & 0x1f));
  DAT_80058310 = uVar2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058318 = DAT_80058318 & ~uVar2;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = uVar2;
    return;
  }
  DAT_80058318 = uVar2 | DAT_80058318;
  VM_NO1_OBJ_4B0();
  return;
}



void VM_NO1_OBJ_298(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort in_t1;
  uint in_t2;
  
  SPU_CTRL_REG_CPUCNT =
       in_t1 & 0xc0ff | (ushort)(((uint)DAT_80063aa2 - (uint)DAT_80063ab0 & 0x3f) << 8);
  uVar4 = in_t2 & 0xff;
  (&DAT_80063afa)[uVar4 * 8] = param_4;
  bVar1 = (&DAT_800588d4)[uVar4];
  (&DAT_80063af8)[uVar4 * 8] = (short)param_2;
  (&DAT_800588d4)[uVar4] = bVar1 | 3;
  bVar1 = DAT_80063a18;
  if (uVar4 < 0x10) {
    VM_NO1_OBJ_328(uVar4,param_2,0,1 << (in_t2 & 0x1f));
    return;
  }
  (&DAT_800583cc)[(in_t2 & 0xff) * 0x1a] = 10;
  iVar5 = 0;
  if (bVar1 != 0) {
    iVar3 = 0;
    do {
      iVar3 = (iVar3 >> 0x10) * 0x34;
      iVar5 = iVar5 + 1;
      (&DAT_800583e3)[iVar3] = (&DAT_800583e3)[iVar3] & 1;
      iVar3 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(in_t2 & 0xff) * 0x34] = 2;
  uVar2 = (ushort)(1 << (uVar4 - 0x10 & 0x1f));
  DAT_80058310 = uVar2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) != 0) {
    DAT_80058318 = uVar2 | DAT_80058318;
    VM_NO1_OBJ_4B0();
    return;
  }
  DAT_80058318 = DAT_80058318 & ~uVar2;
  SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
  SPU_VOICE_CHN_NOISE_MODE._2_2_ = uVar2;
  return;
}



void VM_NO1_OBJ_328(undefined4 param_1,undefined4 param_2,ushort param_3,ushort param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_t2;
  
  bVar1 = DAT_80063a18;
  (&DAT_800583cc)[(in_t2 & 0xff) * 0x1a] = 10;
  iVar3 = 0;
  if (bVar1 != 0) {
    iVar2 = 0;
    do {
      iVar2 = (iVar2 >> 0x10) * 0x34;
      iVar3 = iVar3 + 1;
      (&DAT_800583e3)[iVar2] = (&DAT_800583e3)[iVar2] & 1;
      iVar2 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  (&DAT_800583e3)[(in_t2 & 0xff) * 0x34] = 2;
  DAT_8005830c = param_4 | DAT_8005830c;
  DAT_80058310 = param_3 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  if ((DAT_80063ab4 & 4) != 0) {
    DAT_80058314 = param_4 | DAT_80058314;
    DAT_80058318 = param_3 | DAT_80058318;
    VM_NO1_OBJ_4B0();
    return;
  }
  DAT_80058314 = DAT_80058314 & ~param_4;
  DAT_80058318 = DAT_80058318 & ~param_3;
  SPU_VOICE_CHN_NOISE_MODE._0_2_ = param_4;
  SPU_VOICE_CHN_NOISE_MODE._2_2_ = param_3;
  return;
}



void VM_NO1_OBJ_4B0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  SPU_VOICE_CHN_NOISE_MODE._0_2_ = param_4;
  SPU_VOICE_CHN_NOISE_MODE._2_2_ = param_3;
  return;
}



void SpuVmKeyOffNow(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_80063aba;
  if (uVar1 < 0x10) {
    VM_NOWOF_OBJ_38(uVar1,0,1 << (uVar1 & 0x1f));
    return;
  }
  (&DAT_800583e3)[uVar1 * 0x34] = 0;
  (&DAT_800583cc)[uVar1 * 0x1a] = 0;
  (&DAT_800583c8)[uVar1 * 0x1a] = 0;
  DAT_80065ee0 = (ushort)(1 << (uVar1 - 0x10 & 0x1f)) | DAT_80065ee0;
  DAT_8005830c = DAT_8005830c & ~DAT_80065edc;
  DAT_80058310 = DAT_80058310 & ~DAT_80065ee0;
  return;
}



void VM_NOWOF_OBJ_38(undefined4 param_1,ushort param_2,ushort param_3)

{
  int in_v1;
  
  (&DAT_800583e3)[in_v1 * 0x34] = 0;
  (&DAT_800583cc)[in_v1 * 0x1a] = 0;
  (&DAT_800583c8)[in_v1 * 0x1a] = 0;
  DAT_8005830c = DAT_8005830c & ~(param_3 | DAT_80065edc);
  DAT_80058310 = DAT_80058310 & ~(param_2 | DAT_80065ee0);
  DAT_80065edc = param_3 | DAT_80065edc;
  DAT_80065ee0 = param_2 | DAT_80065ee0;
  return;
}



void SpuVmKeyOnNow(undefined4 param_1,undefined2 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = ((((uint)DAT_80063aa4 * (uint)*(byte *)(DAT_800636f8 + 0x18) * 0x3fff) / 0x3f01) *
           (uint)DAT_80063aaa * (uint)DAT_80063aad) / 0x3f01;
  uVar6 = DAT_80063ab6 & 0xff;
  uVar7 = uVar6 * 4;
  uVar2 = (uint)DAT_80063ab6 << 0x10;
  iVar3 = (uVar2 >> 0x18) * 0xac + (&DAT_80065528)[uVar6];
  uVar6 = uVar8;
  if ((int)uVar2 >> 0x10 != 0x21) {
    uVar2 = uVar8 * *(ushort *)(iVar3 + 0x74);
    uVar6 = uVar8 * *(ushort *)(iVar3 + 0x76);
    uVar7 = uVar2 - (int)((ulonglong)uVar2 * 0x2040811 >> 0x20) >> 1;
    uVar8 = uVar2 / 0x7f;
    uVar6 = uVar6 / 0x7f;
  }
  uVar2 = (uint)DAT_80063aae;
  if (uVar2 < 0x40) {
    VM_NOWON_OBJ_1CC(uVar7,(uVar6 * uVar2) / 0x3f);
    return;
  }
  uVar4 = (uint)DAT_80063aab;
  if (uVar4 < 0x40) {
    VM_NOWON_OBJ_23C(uVar7,(uVar6 * uVar4) / 0x3f);
    return;
  }
  uVar5 = (uint)DAT_80063aa5;
  if (0x3f < uVar5) {
    uVar8 = (((((uVar8 * (0x7f - uVar2)) / 0x3f) * (0x7f - uVar4)) / 0x3f) * (0x7f - uVar5)) / 0x3f;
    uVar2 = uVar6;
    if ((DAT_800591b0 == 1) && (uVar2 = uVar8, uVar8 < uVar6)) {
      VM_NOWON_OBJ_2D8(uVar7,uVar6,uVar6);
      return;
    }
    uVar6 = (int)DAT_80063aba & 0x1fff;
    (&DAT_80063afc)[uVar6 * 8] = param_2;
    (&DAT_80063af8)[uVar6 * 8] = (short)((uVar8 * uVar8) / 0x3fff);
    (&DAT_80063afa)[uVar6 * 8] = (short)((uVar2 * uVar2) / 0x3fff);
    (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 7;
    (&DAT_800583cc)[DAT_80063aba * 0x1a] = param_2;
    (&DAT_800583e3)[DAT_80063aba * 0x34] = 1;
    uVar6 = SEXT24(DAT_80063aba);
    if ((int)uVar6 < 0x10) {
      VM_NOWON_OBJ_408(&DAT_80063aba,0,1 << (uVar6 & 0x1f));
      return;
    }
    uVar1 = (ushort)(1 << (uVar6 - 0x10 & 0x1f));
    if ((DAT_80063ab4 & 4) == 0) {
      DAT_80058310 = uVar1 | DAT_80058310;
      DAT_80058318 = DAT_80058318 & ~uVar1;
      DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
      DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
      return;
    }
    DAT_80058318 = uVar1 | DAT_80058318;
    VM_NOWON_OBJ_480();
    return;
  }
  VM_NOWON_OBJ_2AC(uVar7,(uVar6 * uVar5) / 0x3f);
  return;
}



void VM_NOWON_OBJ_1CC(undefined4 param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 in_t0;
  uint in_t1;
  
  uVar2 = (uint)DAT_80063aab;
  if (uVar2 < 0x40) {
    VM_NOWON_OBJ_23C(param_1,(param_2 * uVar2) / 0x3f);
    return;
  }
  uVar3 = (uint)DAT_80063aa5;
  if (uVar3 < 0x40) {
    VM_NOWON_OBJ_2AC(param_1,(param_2 * uVar3) / 0x3f);
    return;
  }
  uVar3 = (((param_3 * (0x7f - uVar2)) / 0x3f) * (0x7f - uVar3)) / 0x3f;
  uVar2 = param_2;
  if ((DAT_800591b0 == 1) && (uVar2 = uVar3, uVar3 < param_2)) {
    VM_NOWON_OBJ_2D8(param_1,param_2,param_2);
    return;
  }
  uVar4 = in_t1 & 0xffff;
  (&DAT_80063afc)[uVar4] = in_t0;
  (&DAT_80063af8)[uVar4] = (short)((uVar3 * uVar3) / 0x3fff);
  (&DAT_80063afa)[uVar4] = (short)((uVar2 * uVar2) / 0x3fff);
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 7;
  (&DAT_800583cc)[DAT_80063aba * 0x1a] = in_t0;
  (&DAT_800583e3)[DAT_80063aba * 0x34] = 1;
  uVar2 = SEXT24(DAT_80063aba);
  if ((int)uVar2 < 0x10) {
    VM_NOWON_OBJ_408(&DAT_80063aba,0,1 << (uVar2 & 0x1f));
    return;
  }
  uVar1 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058310 = uVar1 | DAT_80058310;
    DAT_80058318 = DAT_80058318 & ~uVar1;
    DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
    DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
    return;
  }
  DAT_80058318 = uVar1 | DAT_80058318;
  VM_NOWON_OBJ_480();
  return;
}



void VM_NOWON_OBJ_23C(undefined4 param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 in_t0;
  uint in_t1;
  
  uVar2 = (uint)DAT_80063aa5;
  if (uVar2 < 0x40) {
    VM_NOWON_OBJ_2AC(param_1,(param_2 * uVar2) / 0x3f);
    return;
  }
  uVar4 = (param_3 * (0x7f - uVar2)) / 0x3f;
  uVar2 = param_2;
  if ((DAT_800591b0 == 1) && (uVar2 = uVar4, uVar4 < param_2)) {
    VM_NOWON_OBJ_2D8(param_1,param_2,param_2);
    return;
  }
  uVar3 = in_t1 & 0xffff;
  (&DAT_80063afc)[uVar3] = in_t0;
  (&DAT_80063af8)[uVar3] = (short)((uVar4 * uVar4) / 0x3fff);
  (&DAT_80063afa)[uVar3] = (short)((uVar2 * uVar2) / 0x3fff);
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 7;
  (&DAT_800583cc)[DAT_80063aba * 0x1a] = in_t0;
  (&DAT_800583e3)[DAT_80063aba * 0x34] = 1;
  uVar2 = SEXT24(DAT_80063aba);
  if ((int)uVar2 < 0x10) {
    VM_NOWON_OBJ_408(&DAT_80063aba,0,1 << (uVar2 & 0x1f));
    return;
  }
  uVar1 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058310 = uVar1 | DAT_80058310;
    DAT_80058318 = DAT_80058318 & ~uVar1;
    DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
    DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
    return;
  }
  DAT_80058318 = uVar1 | DAT_80058318;
  VM_NOWON_OBJ_480();
  return;
}



void VM_NOWON_OBJ_2AC(undefined4 param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 in_t0;
  uint in_t1;
  
  uVar3 = param_2;
  if ((DAT_800591b0 == 1) && (uVar3 = param_3, param_3 < param_2)) {
    VM_NOWON_OBJ_2D8(param_1,param_2,param_2);
    return;
  }
  uVar2 = in_t1 & 0xffff;
  (&DAT_80063afc)[uVar2] = in_t0;
  (&DAT_80063af8)[uVar2] = (short)((param_3 * param_3) / 0x3fff);
  (&DAT_80063afa)[uVar2] = (short)((uVar3 * uVar3) / 0x3fff);
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 7;
  (&DAT_800583cc)[DAT_80063aba * 0x1a] = in_t0;
  (&DAT_800583e3)[DAT_80063aba * 0x34] = 1;
  uVar3 = SEXT24(DAT_80063aba);
  if ((int)uVar3 < 0x10) {
    VM_NOWON_OBJ_408(&DAT_80063aba,0,1 << (uVar3 & 0x1f));
    return;
  }
  uVar1 = (ushort)(1 << (uVar3 - 0x10 & 0x1f));
  if ((DAT_80063ab4 & 4) == 0) {
    DAT_80058310 = uVar1 | DAT_80058310;
    DAT_80058318 = DAT_80058318 & ~uVar1;
    DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
    DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
    return;
  }
  DAT_80058318 = uVar1 | DAT_80058318;
  VM_NOWON_OBJ_480();
  return;
}



void VM_NOWON_OBJ_2D8(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 in_t0;
  uint in_t1;
  
  uVar2 = in_t1 & 0xffff;
  (&DAT_80063afc)[uVar2] = in_t0;
  (&DAT_80063af8)[uVar2] = (short)((uint)(param_3 * param_3) / 0x3fff);
  (&DAT_80063afa)[uVar2] = (short)((uint)(param_2 * param_2) / 0x3fff);
  (&DAT_800588d4)[DAT_80063aba] = (&DAT_800588d4)[DAT_80063aba] | 7;
  (&DAT_800583cc)[DAT_80063aba * 0x1a] = in_t0;
  (&DAT_800583e3)[DAT_80063aba * 0x34] = 1;
  uVar2 = SEXT24(DAT_80063aba);
  if ((int)uVar2 < 0x10) {
    VM_NOWON_OBJ_408(&DAT_80063aba,0,1 << (uVar2 & 0x1f));
    return;
  }
  uVar1 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  if ((DAT_80063ab4 & 4) != 0) {
    DAT_80058318 = uVar1 | DAT_80058318;
    VM_NOWON_OBJ_480();
    return;
  }
  DAT_80058310 = uVar1 | DAT_80058310;
  DAT_80058318 = DAT_80058318 & ~uVar1;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  return;
}



void VM_NOWON_OBJ_408(undefined4 param_1,ushort param_2,ushort param_3)

{
  if ((DAT_80063ab4 & 4) != 0) {
    DAT_80058314 = param_3 | DAT_80058314;
    DAT_80058318 = param_2 | DAT_80058318;
    VM_NOWON_OBJ_480();
    return;
  }
  DAT_8005830c = param_3 | DAT_8005830c;
  DAT_80058310 = param_2 | DAT_80058310;
  DAT_80058314 = DAT_80058314 & ~param_3;
  DAT_80058318 = DAT_80058318 & ~param_2;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  return;
}



void VM_NOWON_OBJ_480(undefined4 param_1,ushort param_2,ushort param_3)

{
  DAT_8005830c = param_3 | DAT_8005830c;
  DAT_80058310 = param_2 | DAT_80058310;
  DAT_80065edc = DAT_80065edc & ~DAT_8005830c;
  DAT_80065ee0 = DAT_80065ee0 & ~DAT_80058310;
  return;
}



int SpuVmSetSeqVol(uint param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  DAT_80063ab6 = (short)param_1;
  iVar9 = ((int)(param_1 & 0xff00) >> 8) * 0xac + (&DAT_80065528)[param_1 & 0xff];
  if (param_2 == 0) {
    param_2 = 1;
  }
  *(short *)(iVar9 + 0x74) = param_2;
  if (param_3 == 0) {
    param_3 = 1;
  }
  *(short *)(iVar9 + 0x76) = param_3;
  if (0x7f < *(ushort *)(iVar9 + 0x74)) {
    *(undefined2 *)(iVar9 + 0x74) = 0x7f;
  }
  if (0x7f < *(ushort *)(iVar9 + 0x76)) {
    *(undefined2 *)(iVar9 + 0x76) = 0x7f;
  }
  if ((param_4 == 1) && (iVar10 = 0, DAT_80063a18 != 0)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 >> 0x10;
      if ((uint)(ushort)(&DAT_800583d6)[iVar2 * 0x1a] == (param_1 & 0xffff)) {
        iVar8 = ((short)(&DAT_800583d8)[iVar2 * 0x1a] * 0x10 +
                (int)(short)(&DAT_800583dc)[iVar2 * 0x1a]) * 0x20 + DAT_800636fc;
        uVar4 = (((int)((uint)*(byte *)(DAT_800636f8 + 0x18) *
                       (((int)(short)(&DAT_800583d0)[iVar2 * 0x1a] *
                        (int)*(short *)((uint)*(byte *)(iVar9 + 0x12) * 2 + iVar9 + 0x4e)) / 0x7f) *
                       0x3fff) / 0x3f01) *
                 (uint)*(byte *)((short)(&DAT_800583da)[iVar2 * 0x1a] * 0x10 + DAT_80063590 + 1) *
                (uint)*(byte *)(iVar8 + 2)) / 0x3f01;
        uVar3 = (uint)*(byte *)(iVar8 + 3);
        uVar5 = (uVar4 * *(ushort *)(iVar9 + 0x76)) / 0x7f;
        uVar4 = (uVar4 * *(ushort *)(iVar9 + 0x74)) / 0x7f;
        if (uVar3 < 0x40) {
          iVar9 = VM_SEQ_OBJ_2FC(uVar5,uVar4,(uVar5 * uVar3) / 0x3f);
          return iVar9;
        }
        sVar1 = (short)iVar10;
        uVar6 = (uint)*(byte *)((short)(&DAT_800583da)[sVar1 * 0x1a] * 0x10 + DAT_80063590 + 4);
        if (uVar6 < 0x40) {
          iVar9 = VM_SEQ_OBJ_39C(uVar6,uVar4,
                                 (uint)((ulonglong)
                                        ((longlong)(int)((uVar5 & 0xffff) * uVar6) * 0x82082083) >>
                                       0x25));
          return iVar9;
        }
        uVar7 = (uint)(byte)(&DAT_800583d2)[sVar1 * 0x34];
        if (uVar7 < 0x40) {
          iVar9 = VM_SEQ_OBJ_428(uVar7,uVar4,
                                 (uint)((ulonglong)
                                        ((longlong)(int)((uVar5 & 0xffff) * uVar7) * 0x82082083) >>
                                       0x25));
          return iVar9;
        }
        uVar3 = (int)(((int)(((uVar4 * (0x7f - uVar3)) / 0x3f & 0xffff) * (0x7f - uVar6)) / 0x3f &
                      0xffffU) * (0x7f - uVar7)) / 0x3f;
        uVar4 = uVar5;
        if ((DAT_800591b0 == 1) && (uVar4 = uVar3, (uVar3 & 0xffff) < (uVar5 & 0xffff))) {
          iVar9 = VM_SEQ_OBJ_458();
          return iVar9;
        }
        iVar2 = (int)sVar1;
        (&DAT_80063af8)[iVar2 * 8] = (short)((int)((uVar3 & 0xffff) * (uVar3 & 0xffff)) / 0x3fff);
        (&DAT_80063afa)[iVar2 * 8] = (short)((int)((uVar4 & 0xffff) * (uVar4 & 0xffff)) / 0x3fff);
        (&DAT_800588d4)[iVar2] = (&DAT_800588d4)[iVar2] | 3;
      }
      iVar10 = iVar10 + 1;
      iVar2 = iVar10 * 0x10000;
    } while (iVar10 * 0x10000 >> 0x10 < (int)(uint)DAT_80063a18);
  }
  return (int)DAT_80063ab6;
}



int VM_SEQ_OBJ_2FC(undefined4 param_1,uint param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint in_t0;
  uint uVar3;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  uint in_t5;
  int in_t6;
  short in_t7;
  int in_t8;
  int in_t9;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  while( true ) {
    sVar1 = (short)in_t2;
    uVar2 = (uint)*(byte *)((short)(&DAT_800583da)[sVar1 * 0x1a] * 0x10 + DAT_80063590 + 4);
    if (uVar2 < 0x40) {
      iVar5 = (param_3 & 0xffff) * uVar2;
      iVar5 = VM_SEQ_OBJ_39C(uVar2,param_2,
                             (uint)((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) +
                                   iVar5) >> 5);
      return iVar5;
    }
    iVar5 = (in_t0 & 0xffff) * (in_t6 - uVar2);
    uVar2 = (uint)(byte)(&DAT_800583d2)[sVar1 * 0x34];
    if (uVar2 < 0x40) {
      iVar5 = (param_3 & 0xffff) * uVar2;
      iVar5 = VM_SEQ_OBJ_428(uVar2,param_2,
                             (uint)((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) +
                                   iVar5) >> 5);
      return iVar5;
    }
    iVar5 = (((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) + iVar5 >> 5) -
             (iVar5 >> 0x1f) & 0xffffU) * (in_t6 - uVar2);
    uVar3 = ((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) + iVar5 >> 5) -
            (iVar5 >> 0x1f);
    uVar2 = param_3;
    if ((DAT_800591b0 == 1) && (uVar2 = uVar3, (uVar3 & 0xffff) < (param_3 & 0xffff))) {
      iVar5 = VM_SEQ_OBJ_458();
      return iVar5;
    }
    iVar6 = (uVar3 & 0xffff) * (uVar3 & 0xffff);
    iVar7 = (uVar2 & 0xffff) * (uVar2 & 0xffff);
    iVar5 = (int)sVar1;
    *(short *)(iVar5 * 0x10 + in_t8) =
         (short)((int)((ulonglong)((longlong)iVar6 * (longlong)in_t4) >> 0x20) + iVar6 >> 0xd) -
         (short)(iVar6 >> 0x1f);
    *(short *)(iVar5 * 0x10 + in_t9) =
         (short)((int)((ulonglong)((longlong)iVar7 * (longlong)in_t4) >> 0x20) + iVar7 >> 0xd) -
         (short)(iVar7 >> 0x1f);
    (&DAT_800588d4)[iVar5] = (&DAT_800588d4)[iVar5] | 3;
    do {
      in_t2 = in_t2 + 1;
      if ((int)(uint)DAT_80063a18 <= in_t2 * 0x10000 >> 0x10) {
        return (int)DAT_80063ab6;
      }
      iVar5 = (int)(short)in_t2;
    } while ((&DAT_800583d6)[iVar5 * 0x1a] != in_t7);
    iVar6 = ((short)(&DAT_800583d8)[iVar5 * 0x1a] * 0x10 + (int)(short)(&DAT_800583dc)[iVar5 * 0x1a]
            ) * 0x20 + DAT_800636fc;
    uVar3 = (((int)((uint)*(byte *)(DAT_800636f8 + 0x18) *
                   (((int)(short)(&DAT_800583d0)[iVar5 * 0x1a] *
                    (int)*(short *)((uint)*(byte *)(in_t1 + 0x12) * 2 + in_t1 + 0x4e)) / 0x7f) *
                   0x3fff) / 0x3f01) *
             (uint)*(byte *)((short)(&DAT_800583da)[iVar5 * 0x1a] * 0x10 + DAT_80063590 + 1) *
            (uint)*(byte *)(iVar6 + 2)) / 0x3f01;
    uVar4 = uVar3 * *(ushort *)(in_t1 + 0x74);
    iVar5 = (int)((ulonglong)uVar4 * (ulonglong)in_t5 >> 0x20);
    uVar3 = uVar3 * *(ushort *)(in_t1 + 0x76);
    iVar7 = (int)((ulonglong)uVar3 * (ulonglong)in_t5 >> 0x20);
    uVar2 = (uint)*(byte *)(iVar6 + 3);
    param_3 = iVar7 + (uVar3 - iVar7 >> 1) >> 6;
    param_2 = iVar5 + (uVar4 - iVar5 >> 1) >> 6;
    if (uVar2 < 0x40) break;
    in_t0 = (param_2 * (in_t6 - uVar2)) / 0x3f;
  }
  iVar5 = VM_SEQ_OBJ_2FC(param_3,param_2,(param_3 * uVar2) / 0x3f);
  return iVar5;
}



int VM_SEQ_OBJ_39C(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint in_t0;
  uint uVar2;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  uint in_t5;
  int in_t6;
  short in_t7;
  int in_t8;
  int in_t9;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    uVar1 = (uint)(byte)(&DAT_800583d2)[(short)in_t2 * 0x34];
    if (uVar1 < 0x40) {
      iVar4 = (param_3 & 0xffff) * uVar1;
      iVar4 = VM_SEQ_OBJ_428(uVar1,param_2,
                             (uint)((int)((ulonglong)((longlong)iVar4 * (longlong)in_t3) >> 0x20) +
                                   iVar4) >> 5);
      return iVar4;
    }
    iVar4 = (in_t0 & 0xffff) * (in_t6 - uVar1);
    uVar2 = ((int)((ulonglong)((longlong)iVar4 * (longlong)in_t3) >> 0x20) + iVar4 >> 5) -
            (iVar4 >> 0x1f);
    uVar1 = param_3;
    if ((DAT_800591b0 == 1) && (uVar1 = uVar2, (uVar2 & 0xffff) < (param_3 & 0xffff))) {
      iVar4 = VM_SEQ_OBJ_458();
      return iVar4;
    }
    iVar5 = (uVar2 & 0xffff) * (uVar2 & 0xffff);
    iVar6 = (uVar1 & 0xffff) * (uVar1 & 0xffff);
    iVar4 = (int)(short)in_t2;
    *(short *)(iVar4 * 0x10 + in_t8) =
         (short)((int)((ulonglong)((longlong)iVar5 * (longlong)in_t4) >> 0x20) + iVar5 >> 0xd) -
         (short)(iVar5 >> 0x1f);
    *(short *)(iVar4 * 0x10 + in_t9) =
         (short)((int)((ulonglong)((longlong)iVar6 * (longlong)in_t4) >> 0x20) + iVar6 >> 0xd) -
         (short)(iVar6 >> 0x1f);
    (&DAT_800588d4)[iVar4] = (&DAT_800588d4)[iVar4] | 3;
    do {
      in_t2 = in_t2 + 1;
      if ((int)(uint)DAT_80063a18 <= in_t2 * 0x10000 >> 0x10) {
        return (int)DAT_80063ab6;
      }
      iVar4 = (int)(short)in_t2;
    } while ((&DAT_800583d6)[iVar4 * 0x1a] != in_t7);
    iVar5 = ((short)(&DAT_800583d8)[iVar4 * 0x1a] * 0x10 + (int)(short)(&DAT_800583dc)[iVar4 * 0x1a]
            ) * 0x20 + DAT_800636fc;
    uVar2 = (((int)((uint)*(byte *)(DAT_800636f8 + 0x18) *
                   (((int)(short)(&DAT_800583d0)[iVar4 * 0x1a] *
                    (int)*(short *)((uint)*(byte *)(in_t1 + 0x12) * 2 + in_t1 + 0x4e)) / 0x7f) *
                   0x3fff) / 0x3f01) *
             (uint)*(byte *)((short)(&DAT_800583da)[iVar4 * 0x1a] * 0x10 + DAT_80063590 + 1) *
            (uint)*(byte *)(iVar5 + 2)) / 0x3f01;
    uVar3 = uVar2 * *(ushort *)(in_t1 + 0x74);
    iVar4 = (int)((ulonglong)uVar3 * (ulonglong)in_t5 >> 0x20);
    uVar2 = uVar2 * *(ushort *)(in_t1 + 0x76);
    iVar6 = (int)((ulonglong)uVar2 * (ulonglong)in_t5 >> 0x20);
    uVar1 = (uint)*(byte *)(iVar5 + 3);
    param_3 = iVar6 + (uVar2 - iVar6 >> 1) >> 6;
    param_2 = iVar4 + (uVar3 - iVar4 >> 1) >> 6;
    if (uVar1 < 0x40) break;
    uVar2 = (uint)*(byte *)((short)(&DAT_800583da)[(short)in_t2 * 0x1a] * 0x10 + DAT_80063590 + 4);
    if (uVar2 < 0x40) {
      iVar4 = (param_3 & 0xffff) * uVar2;
      iVar4 = VM_SEQ_OBJ_39C(uVar2,param_2,
                             (uint)((int)((ulonglong)((longlong)iVar4 * (longlong)in_t3) >> 0x20) +
                                   iVar4) >> 5);
      return iVar4;
    }
    iVar4 = ((param_2 * (in_t6 - uVar1)) / 0x3f & 0xffff) * (in_t6 - uVar2);
    in_t0 = ((int)((ulonglong)((longlong)iVar4 * (longlong)in_t3) >> 0x20) + iVar4 >> 5) -
            (iVar4 >> 0x1f);
  }
  iVar4 = VM_SEQ_OBJ_2FC(param_3,param_2,(param_3 * uVar1) / 0x3f);
  return iVar4;
}



int VM_SEQ_OBJ_428(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  uint in_t5;
  int in_t6;
  short in_t7;
  int in_t8;
  int in_t9;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  while( true ) {
    uVar3 = param_3;
    if ((DAT_800591b0 == 1) && (uVar3 = in_t0, (in_t0 & 0xffff) < (param_3 & 0xffff))) {
      iVar1 = VM_SEQ_OBJ_458();
      return iVar1;
    }
    iVar6 = (in_t0 & 0xffff) * (in_t0 & 0xffff);
    iVar7 = (uVar3 & 0xffff) * (uVar3 & 0xffff);
    iVar1 = (int)(short)in_t2;
    *(short *)(iVar1 * 0x10 + in_t8) =
         (short)((int)((ulonglong)((longlong)iVar6 * (longlong)in_t4) >> 0x20) + iVar6 >> 0xd) -
         (short)(iVar6 >> 0x1f);
    *(short *)(iVar1 * 0x10 + in_t9) =
         (short)((int)((ulonglong)((longlong)iVar7 * (longlong)in_t4) >> 0x20) + iVar7 >> 0xd) -
         (short)(iVar7 >> 0x1f);
    (&DAT_800588d4)[iVar1] = (&DAT_800588d4)[iVar1] | 3;
    do {
      in_t2 = in_t2 + 1;
      sVar2 = (short)in_t2;
      if ((int)(uint)DAT_80063a18 <= in_t2 * 0x10000 >> 0x10) {
        return (int)DAT_80063ab6;
      }
      iVar1 = (int)sVar2;
    } while ((&DAT_800583d6)[iVar1 * 0x1a] != in_t7);
    iVar6 = ((short)(&DAT_800583d8)[iVar1 * 0x1a] * 0x10 + (int)(short)(&DAT_800583dc)[iVar1 * 0x1a]
            ) * 0x20 + DAT_800636fc;
    uVar4 = (((int)((uint)*(byte *)(DAT_800636f8 + 0x18) *
                   (((int)(short)(&DAT_800583d0)[iVar1 * 0x1a] *
                    (int)*(short *)((uint)*(byte *)(in_t1 + 0x12) * 2 + in_t1 + 0x4e)) / 0x7f) *
                   0x3fff) / 0x3f01) *
             (uint)*(byte *)((short)(&DAT_800583da)[iVar1 * 0x1a] * 0x10 + DAT_80063590 + 1) *
            (uint)*(byte *)(iVar6 + 2)) / 0x3f01;
    uVar5 = uVar4 * *(ushort *)(in_t1 + 0x74);
    iVar1 = (int)((ulonglong)uVar5 * (ulonglong)in_t5 >> 0x20);
    uVar4 = uVar4 * *(ushort *)(in_t1 + 0x76);
    iVar7 = (int)((ulonglong)uVar4 * (ulonglong)in_t5 >> 0x20);
    uVar3 = (uint)*(byte *)(iVar6 + 3);
    param_3 = iVar7 + (uVar4 - iVar7 >> 1) >> 6;
    uVar4 = iVar1 + (uVar5 - iVar1 >> 1) >> 6;
    if (uVar3 < 0x40) break;
    uVar5 = (uint)*(byte *)((short)(&DAT_800583da)[sVar2 * 0x1a] * 0x10 + DAT_80063590 + 4);
    if (uVar5 < 0x40) {
      iVar1 = (param_3 & 0xffff) * uVar5;
      iVar1 = VM_SEQ_OBJ_39C(uVar5,uVar4,
                             (uint)((int)((ulonglong)((longlong)iVar1 * (longlong)in_t3) >> 0x20) +
                                   iVar1) >> 5);
      return iVar1;
    }
    iVar1 = ((uVar4 * (in_t6 - uVar3)) / 0x3f & 0xffff) * (in_t6 - uVar5);
    uVar3 = (uint)(byte)(&DAT_800583d2)[sVar2 * 0x34];
    if (uVar3 < 0x40) {
      iVar1 = (param_3 & 0xffff) * uVar3;
      iVar1 = VM_SEQ_OBJ_428(uVar3,uVar4,
                             (uint)((int)((ulonglong)((longlong)iVar1 * (longlong)in_t3) >> 0x20) +
                                   iVar1) >> 5);
      return iVar1;
    }
    iVar1 = (((int)((ulonglong)((longlong)iVar1 * (longlong)in_t3) >> 0x20) + iVar1 >> 5) -
             (iVar1 >> 0x1f) & 0xffffU) * (in_t6 - uVar3);
    in_t0 = ((int)((ulonglong)((longlong)iVar1 * (longlong)in_t3) >> 0x20) + iVar1 >> 5) -
            (iVar1 >> 0x1f);
  }
  iVar1 = VM_SEQ_OBJ_2FC(param_3,uVar4,(param_3 * uVar3) / 0x3f);
  return iVar1;
}



int VM_SEQ_OBJ_458(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  uint in_t5;
  int in_t6;
  short in_t7;
  int in_t8;
  int in_t9;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  do {
    uVar1 = in_t0 & 0xffff;
    uVar3 = param_3;
    do {
      iVar7 = uVar1 * uVar1;
      iVar8 = (uVar3 & 0xffff) * (uVar3 & 0xffff);
      iVar5 = (int)(short)in_t2;
      *(short *)(iVar5 * 0x10 + in_t8) =
           (short)((int)((ulonglong)((longlong)iVar7 * (longlong)in_t4) >> 0x20) + iVar7 >> 0xd) -
           (short)(iVar7 >> 0x1f);
      *(short *)(iVar5 * 0x10 + in_t9) =
           (short)((int)((ulonglong)((longlong)iVar8 * (longlong)in_t4) >> 0x20) + iVar8 >> 0xd) -
           (short)(iVar8 >> 0x1f);
      (&DAT_800588d4)[iVar5] = (&DAT_800588d4)[iVar5] | 3;
      do {
        in_t2 = in_t2 + 1;
        sVar2 = (short)in_t2;
        if ((int)(uint)DAT_80063a18 <= in_t2 * 0x10000 >> 0x10) {
          return (int)DAT_80063ab6;
        }
        iVar5 = (int)sVar2;
      } while ((&DAT_800583d6)[iVar5 * 0x1a] != in_t7);
      iVar7 = ((short)(&DAT_800583d8)[iVar5 * 0x1a] * 0x10 +
              (int)(short)(&DAT_800583dc)[iVar5 * 0x1a]) * 0x20 + DAT_800636fc;
      uVar3 = (((int)((uint)*(byte *)(DAT_800636f8 + 0x18) *
                     (((int)(short)(&DAT_800583d0)[iVar5 * 0x1a] *
                      (int)*(short *)((uint)*(byte *)(in_t1 + 0x12) * 2 + in_t1 + 0x4e)) / 0x7f) *
                     0x3fff) / 0x3f01) *
               (uint)*(byte *)((short)(&DAT_800583da)[iVar5 * 0x1a] * 0x10 + DAT_80063590 + 1) *
              (uint)*(byte *)(iVar7 + 2)) / 0x3f01;
      uVar6 = uVar3 * *(ushort *)(in_t1 + 0x74);
      iVar5 = (int)((ulonglong)uVar6 * (ulonglong)in_t5 >> 0x20);
      uVar3 = uVar3 * *(ushort *)(in_t1 + 0x76);
      iVar8 = (int)((ulonglong)uVar3 * (ulonglong)in_t5 >> 0x20);
      uVar1 = (uint)*(byte *)(iVar7 + 3);
      uVar3 = iVar8 + (uVar3 - iVar8 >> 1) >> 6;
      uVar6 = iVar5 + (uVar6 - iVar5 >> 1) >> 6;
      if (uVar1 < 0x40) {
        iVar5 = VM_SEQ_OBJ_2FC(uVar3,uVar6,(uVar3 * uVar1) / 0x3f);
        return iVar5;
      }
      uVar4 = (uint)*(byte *)((short)(&DAT_800583da)[sVar2 * 0x1a] * 0x10 + DAT_80063590 + 4);
      if (uVar4 < 0x40) {
        iVar5 = (uVar3 & 0xffff) * uVar4;
        iVar5 = VM_SEQ_OBJ_39C(uVar4,uVar6,
                               (uint)((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20)
                                     + iVar5) >> 5);
        return iVar5;
      }
      iVar5 = ((uVar6 * (in_t6 - uVar1)) / 0x3f & 0xffff) * (in_t6 - uVar4);
      uVar1 = (uint)(byte)(&DAT_800583d2)[sVar2 * 0x34];
      if (uVar1 < 0x40) {
        iVar5 = (uVar3 & 0xffff) * uVar1;
        iVar5 = VM_SEQ_OBJ_428(uVar1,uVar6,
                               (uint)((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20)
                                     + iVar5) >> 5);
        return iVar5;
      }
      iVar5 = (((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) + iVar5 >> 5) -
               (iVar5 >> 0x1f) & 0xffffU) * (in_t6 - uVar1);
      param_3 = ((int)((ulonglong)((longlong)iVar5 * (longlong)in_t3) >> 0x20) + iVar5 >> 5) -
                (iVar5 >> 0x1f);
      uVar1 = param_3 & 0xffff;
    } while (DAT_800591b0 != 1);
    in_t0 = param_3;
    if (uVar1 < (uVar3 & 0xffff)) {
      iVar5 = VM_SEQ_OBJ_458();
      return iVar5;
    }
  } while( true );
}



int SpuVmGetSeqVol(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  DAT_80063ab6 = (short)param_1;
  iVar1 = ((int)(param_1 & 0xff00) >> 8) * 0xac + (&DAT_80065528)[param_1 & 0xff];
  *param_2 = *(undefined2 *)(iVar1 + 0x74);
  *param_3 = *(undefined2 *)(iVar1 + 0x76);
  return (int)DAT_80063ab6;
}



int SpuVmGetSeqLVol(uint param_1)

{
  DAT_80063ab6 = (short)param_1;
  return (int)*(short *)(((int)(param_1 & 0xff00) >> 8) * 0xac + (&DAT_80065528)[param_1 & 0xff] +
                        0x74);
}



int SpuVmGetSeqRVol(uint param_1)

{
  DAT_80063ab6 = (short)param_1;
  return (int)*(short *)(((int)(param_1 & 0xff00) >> 8) * 0xac + (&DAT_80065528)[param_1 & 0xff] +
                        0x76);
}



void SpuVmSeqKeyOff(short param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (DAT_80063a18 != 0) {
    uVar1 = 0;
    do {
      if ((&DAT_800583d6)[uVar1 * 0x1a] == param_1) {
        DAT_80063aba = (ushort)bVar2;
        SpuVmKeyOffNow(0);
      }
      bVar2 = bVar2 + 1;
      uVar1 = (uint)bVar2;
    } while (bVar2 < DAT_80063a18);
  }
  return;
}



undefined4 SpuVmVSetUp(ushort param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x10) {
    uVar1 = 0xffffffff;
    if ((&DAT_80063ac0)[(short)param_1] == '\x01') {
      iVar2 = (short)param_1 * 4;
      if ((int)DAT_80063228 <= (int)param_2) goto VM_VSU_OBJ_50;
      DAT_800636f8 = *(undefined4 *)(&DAT_80058970 + iVar2);
      DAT_80063590 = *(int *)(&DAT_80058928 + iVar2);
      DAT_800636fc = *(undefined4 *)(&DAT_800589b4 + iVar2);
      DAT_80063aa1 = (undefined)param_1;
      DAT_80063aa6 = (undefined)param_2;
      DAT_80063aa7 = *(undefined *)(param_2 * 0x10 + DAT_80063590 + 8);
      uVar1 = 0;
    }
    return uVar1;
  }
VM_VSU_OBJ_50:
  uVar1 = VM_VSU_OBJ_BC();
  return uVar1;
}



void VM_VSU_OBJ_BC(void)

{
  return;
}



void SsVabClose(short param_1)

{
  int iVar1;
  
  if ((ushort)param_1 < 0x10) {
    iVar1 = (int)param_1;
    if ((&DAT_80063ac0)[iVar1] == '\x01') {
      SpuFree(*(ulong *)(&DAT_80065e14 + iVar1 * 4));
      (&DAT_80063ac0)[iVar1] = 0;
      DAT_80065e10 = DAT_80065e10 + -1;
    }
  }
  return;
}



void SpuFree(ulong addr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_8003c8f8) {
    puVar1 = DAT_8003c900;
    do {
      if ((*puVar1 & 0x40000000) != 0) break;
      iVar2 = iVar2 + 1;
      if (*puVar1 == addr) {
        *puVar1 = addr | 0x80000000;
        S_M_F_OBJ_64();
        return;
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 < DAT_8003c8f8);
  }
  _spu_gcSPU();
  return;
}



void S_M_F_OBJ_64(void)

{
  _spu_gcSPU();
  return;
}



void _spu_gcSPU(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = DAT_8003c900;
  iVar7 = 0;
  puVar3 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      if ((*puVar3 & 0x80000000) == 0) {
S_M_INT_OBJ_B8:
        puVar3 = puVar3 + 2;
        iVar7 = iVar7 + 1;
      }
      else {
        if (puVar1[(iVar7 + 1) * 2] == 0x2fffffff) {
          S_M_INT_OBJ_50(param_1,param_2,iVar7 + 2);
          return;
        }
        param_2 = puVar1 + (iVar7 + 1) * 2;
        if (((*param_2 & 0x80000000) == 0) ||
           (param_1 = puVar3[1], (*param_2 & 0xfffffff) != (*puVar3 & 0xfffffff) + param_1))
        goto S_M_INT_OBJ_B8;
        *param_2 = 0x2fffffff;
        puVar3[1] = puVar3[1] + param_2[1];
      }
    } while (iVar7 <= DAT_8003c8fc);
  }
  iVar7 = DAT_8003c8fc;
  iVar8 = 0;
  puVar1 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      iVar8 = iVar8 + 1;
      if (puVar1[1] == 0) {
        *puVar1 = 0x2fffffff;
      }
      puVar1 = puVar1 + 2;
    } while (iVar8 <= iVar7);
  }
  puVar1 = DAT_8003c900;
  iVar7 = 0;
  puVar3 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      iVar8 = DAT_8003c8fc;
      if ((*puVar3 & 0x40000000) != 0) break;
      iVar5 = iVar7 + 1;
      if (iVar5 <= DAT_8003c8fc) {
        puVar2 = puVar1 + iVar5 * 2;
        do {
          uVar4 = *puVar2;
          if ((uVar4 & 0x40000000) != 0) break;
          uVar6 = *puVar3;
          iVar5 = iVar5 + 1;
          if ((uVar4 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar3 = uVar4;
            uVar4 = puVar3[1];
            puVar3[1] = puVar2[1];
            *puVar2 = uVar6;
            puVar2[1] = uVar4;
          }
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar8);
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar7 <= DAT_8003c8fc);
  }
  puVar1 = DAT_8003c900;
  iVar7 = 0;
  puVar3 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar1 = DAT_8003c900 + DAT_8003c8fc * 2;
        *puVar3 = *puVar1;
        DAT_8003c8fc = iVar7;
        puVar3[1] = puVar1[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar7 <= DAT_8003c8fc);
  }
  iVar7 = DAT_8003c8fc + -1;
  if (-1 < iVar7) {
    puVar3 = DAT_8003c900 + iVar7 * 2;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar8 = DAT_8003c8fc * 2;
      iVar5 = iVar7 + -1;
      DAT_8003c8fc = iVar7;
      puVar3[1] = puVar3[1] + puVar1[iVar8 + 1];
      puVar3 = puVar3 + -2;
      iVar7 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



void S_M_INT_OBJ_50(uint param_1,uint *param_2,int param_3,uint *param_4)

{
  uint *in_v1;
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_t0;
  int in_t1;
  int iVar7;
  int iVar8;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  
code_r0x8001dd20:
  if (*in_v1 == in_t2) {
    S_M_INT_OBJ_50(param_1,param_2,param_3 + 1);
    return;
  }
  param_2 = (uint *)(param_3 * 8 + in_t0);
  if ((*param_2 & in_t4) == 0) goto S_M_INT_OBJ_B8;
  param_1 = param_4[1];
  if ((*param_2 & in_t3) != (*param_4 & in_t3) + param_1) goto S_M_INT_OBJ_B8;
  *param_2 = in_t2;
  param_4[1] = param_4[1] + param_2[1];
  for (; iVar8 = DAT_8003c8fc, in_t1 <= DAT_8003c8fc; in_t1 = in_t1 + 1) {
    param_3 = in_t1 + 1;
    if ((*param_4 & in_t4) != 0) goto code_r0x8001dd18;
S_M_INT_OBJ_B8:
    param_4 = param_4 + 2;
  }
  iVar7 = 0;
  puVar1 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      iVar7 = iVar7 + 1;
      if (puVar1[1] == 0) {
        *puVar1 = 0x2fffffff;
      }
      puVar1 = puVar1 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar1 = DAT_8003c900;
  iVar8 = 0;
  puVar3 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      iVar7 = DAT_8003c8fc;
      if ((*puVar3 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_8003c8fc) {
        puVar2 = puVar1 + iVar5 * 2;
        do {
          uVar4 = *puVar2;
          if ((uVar4 & 0x40000000) != 0) break;
          uVar6 = *puVar3;
          iVar5 = iVar5 + 1;
          if ((uVar4 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar3 = uVar4;
            uVar4 = puVar3[1];
            puVar3[1] = puVar2[1];
            *puVar2 = uVar6;
            puVar2[1] = uVar4;
          }
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_8003c8fc);
  }
  puVar1 = DAT_8003c900;
  iVar8 = 0;
  puVar3 = DAT_8003c900;
  if (-1 < DAT_8003c8fc) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar1 = DAT_8003c900 + DAT_8003c8fc * 2;
        *puVar3 = *puVar1;
        DAT_8003c8fc = iVar8;
        puVar3[1] = puVar1[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_8003c8fc);
  }
  iVar8 = DAT_8003c8fc + -1;
  if (-1 < iVar8) {
    puVar3 = DAT_8003c900 + iVar8 * 2;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar7 = DAT_8003c8fc * 2;
      iVar5 = iVar8 + -1;
      DAT_8003c8fc = iVar8;
      puVar3[1] = puVar3[1] + puVar1[iVar7 + 1];
      puVar3 = puVar3 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
code_r0x8001dd18:
  in_v1 = (uint *)(param_3 * 8 + in_t0);
  goto code_r0x8001dd20;
}



void S_M_INT_OBJ_270(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_8003c900;
  iVar4 = DAT_8003c8fc + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(iVar4 * 8 + DAT_8003c900);
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar2 = DAT_8003c8fc * 8;
      iVar5 = iVar4 + -1;
      DAT_8003c8fc = iVar4;
      puVar3[1] = puVar3[1] + *(int *)(iVar2 + iVar1 + 4);
      puVar3 = puVar3 + -2;
      iVar4 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



short SsVabOpenHead(uchar *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = SsVabOpenHeadWithMode(param_1,(int)param_2,0,0);
  return sVar1;
}



short SsVabOpenHeadSticky(uchar *param_1,short param_2,ulong param_3)

{
  short sVar1;
  
  sVar1 = SsVabOpenHeadWithMode(param_1,(int)param_2,1,param_3);
  return sVar1;
}



short SsVabFakeHead(uchar *param_1,short param_2,ulong param_3)

{
  short sVar1;
  
  sVar1 = SsVabOpenHeadWithMode(param_1,(int)param_2,1,param_3);
  return sVar1;
}



void SsVabOpenHeadWithMode(uint *param_1,ushort param_2,short param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  ushort uVar10;
  int local_428 [256];
  undefined auStack40 [8];
  
  iVar2 = FUN_8001c7ec();
  if (iVar2 == 1) {
    VS_VH_OBJ_478();
    return;
  }
  FUN_8001c7c0(1);
  iVar2 = (int)(short)param_2;
  if (iVar2 < 0x10) {
    iVar5 = 0;
    if (iVar2 == -1) {
      do {
        if ((&DAT_80063ac0)[iVar5] == '\0') {
          (&DAT_80063ac0)[iVar5] = 1;
          VS_VH_OBJ_190();
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      VS_VH_OBJ_1A0();
      return;
    }
    iVar5 = 0x100000;
    uVar10 = 0x10;
    if ((&DAT_80063ac0)[iVar2] == '\0') {
      (&DAT_80063ac0)[iVar2] = 1;
      DAT_80065e10 = DAT_80065e10 + 1;
      iVar5 = (uint)param_2 << 0x10;
      uVar10 = param_2;
    }
    iVar5 = iVar5 >> 0x10;
    if (iVar5 < 0x10) {
      *(uint **)(&DAT_80058970 + iVar5 * 4) = param_1;
      puVar6 = param_1 + 8;
      if (*param_1 >> 8 != 0x564142) {
        (&DAT_80063ac0)[iVar5] = 0;
        VS_VH_OBJ_398(0);
        return;
      }
      DAT_80063228 = 0x40;
      if (((*param_1 & 0xff) == 0x70) && (DAT_80063228 = 0x40, 4 < (int)param_1[1])) {
        DAT_80063228 = 0x80;
      }
      uVar3 = SEXT24(DAT_80063228);
      if (*(ushort *)((int)param_1 + 0x12) <= uVar3) {
        *(uint **)(&DAT_80058928 + ((int)((uint)uVar10 << 0x10) >> 0xe)) = puVar6;
        iVar2 = 0;
        uVar9 = 0;
        puVar7 = puVar6;
        if (uVar3 != 0) {
          do {
            puVar7[2] = uVar9;
            if (*(char *)puVar7 != '\0') {
              uVar9 = uVar9 + 1;
            }
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 4;
          } while (iVar2 < (int)uVar3);
        }
        iVar2 = 0;
        piVar4 = local_428;
        *(uint **)(&DAT_800589b4 + ((int)((uint)uVar10 << 0x10) >> 0xe)) = puVar6 + uVar3 * 4;
        bVar1 = *(byte *)((int)param_1 + 0x16);
        puVar7 = puVar6 + uVar3 * 4 + (uint)*(ushort *)((int)param_1 + 0x12) * 0x80;
        piVar8 = piVar4 + bVar1;
        do {
          if ((int)piVar4 <= (int)piVar8) {
            iVar5 = (uint)*(ushort *)puVar7 << 2;
            if (4 < (int)param_1[1]) {
              iVar5 = (uint)*(ushort *)puVar7 << 3;
            }
            *piVar4 = iVar5;
            iVar2 = iVar2 + *piVar4;
          }
          piVar4 = piVar4 + 1;
          puVar7 = (uint *)((int)puVar7 + 2);
        } while ((int)piVar4 < (int)auStack40);
        *(uint **)(&DAT_80065e58 + (short)uVar10 * 4) = puVar7;
        if (param_3 == 0) {
          param_4 = SpuMalloc(iVar2);
          uVar3 = param_4 + iVar2;
          if (param_4 == -1) {
            (&DAT_80063ac0)[(short)uVar10] = 0;
            VS_VH_OBJ_398(0);
            return;
          }
        }
        else {
          uVar3 = param_4 + iVar2;
        }
        iVar2 = 0;
        if (uVar3 < 0x80001) {
          *(long *)(&DAT_80065e14 + ((int)((uint)uVar10 << 0x10) >> 0xe)) = param_4;
          uVar3 = 0;
          piVar4 = local_428;
          do {
            iVar2 = iVar2 + *piVar4;
            if ((uVar3 & 1) == 0) {
              *(short *)(puVar6 + ((int)uVar3 / 2) * 4 + 3) = (short)((uint)(param_4 + iVar2) >> 3);
              VS_VH_OBJ_440();
              return;
            }
            *(short *)((int)puVar6 + ((int)uVar3 / 2) * 0x10 + 0xe) =
                 (short)((uint)(param_4 + iVar2) >> 3);
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 1;
          } while ((int)uVar3 <= (int)(uint)bVar1);
          *(int *)(&DAT_80065dd0 + (short)uVar10 * 4) = iVar2;
          (&DAT_80063ac0)[(short)uVar10] = 2;
          return;
        }
      }
      (&DAT_80063ac0)[(short)uVar10] = 0;
      FUN_8001c7c0(0);
      DAT_80065e10 = DAT_80065e10 + -1;
      VS_VH_OBJ_478();
      return;
    }
  }
  FUN_8001c7c0(0);
  VS_VH_OBJ_478();
  return;
}



void VS_VH_OBJ_190(void)

{
  byte bVar1;
  short in_v0;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ushort unaff_s2;
  uint *unaff_s3;
  short unaff_s5;
  long unaff_s6;
  
  DAT_80065e10 = in_v0 + 1;
  iVar7 = (int)(short)unaff_s2;
  if (0xf < iVar7) {
    FUN_8001c7c0(0);
    VS_VH_OBJ_478();
    return;
  }
  *(uint **)(&DAT_80058970 + iVar7 * 4) = unaff_s3;
  puVar5 = unaff_s3 + 8;
  if (*unaff_s3 >> 8 != 0x564142) {
    (&DAT_80063ac0)[iVar7] = 0;
    VS_VH_OBJ_398(0);
    return;
  }
  DAT_80063228 = 0x40;
  if (((*unaff_s3 & 0xff) == 0x70) && (DAT_80063228 = 0x40, 4 < (int)unaff_s3[1])) {
    DAT_80063228 = 0x80;
  }
  uVar3 = SEXT24(DAT_80063228);
  if (*(ushort *)((int)unaff_s3 + 0x12) <= uVar3) {
    *(uint **)(&DAT_80058928 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar5;
    iVar7 = 0;
    uVar9 = 0;
    puVar6 = puVar5;
    if (uVar3 != 0) {
      do {
        puVar6[2] = uVar9;
        if (*(char *)puVar6 != '\0') {
          uVar9 = uVar9 + 1;
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar7 < (int)uVar3);
    }
    iVar7 = 0;
    piVar4 = (int *)&stack0x00000010;
    *(uint **)(&DAT_800589b4 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar5 + uVar3 * 4;
    bVar1 = *(byte *)((int)unaff_s3 + 0x16);
    puVar6 = puVar5 + uVar3 * 4 + (uint)*(ushort *)((int)unaff_s3 + 0x12) * 0x80;
    piVar8 = piVar4 + bVar1;
    do {
      if ((int)piVar4 <= (int)piVar8) {
        iVar2 = (uint)*(ushort *)puVar6 << 2;
        if (4 < (int)unaff_s3[1]) {
          iVar2 = (uint)*(ushort *)puVar6 << 3;
        }
        *piVar4 = iVar2;
        iVar7 = iVar7 + *piVar4;
      }
      piVar4 = piVar4 + 1;
      puVar6 = (uint *)((int)puVar6 + 2);
    } while ((int)piVar4 < (int)&stack0x00000410);
    *(uint **)(&DAT_80065e58 + (short)unaff_s2 * 4) = puVar6;
    if (unaff_s5 == 0) {
      unaff_s6 = SpuMalloc(iVar7);
      uVar3 = unaff_s6 + iVar7;
      if (unaff_s6 == -1) {
        (&DAT_80063ac0)[(short)unaff_s2] = 0;
        VS_VH_OBJ_398(0);
        return;
      }
    }
    else {
      uVar3 = unaff_s6 + iVar7;
    }
    iVar7 = 0;
    if (uVar3 < 0x80001) {
      *(long *)(&DAT_80065e14 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = unaff_s6;
      uVar3 = 0;
      piVar4 = (int *)&stack0x00000010;
      do {
        iVar7 = iVar7 + *piVar4;
        if ((uVar3 & 1) == 0) {
          *(short *)(puVar5 + ((int)uVar3 / 2) * 4 + 3) = (short)((uint)(unaff_s6 + iVar7) >> 3);
          VS_VH_OBJ_440();
          return;
        }
        *(short *)((int)puVar5 + ((int)uVar3 / 2) * 0x10 + 0xe) =
             (short)((uint)(unaff_s6 + iVar7) >> 3);
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while ((int)uVar3 <= (int)(uint)bVar1);
      *(int *)(&DAT_80065dd0 + (short)unaff_s2 * 4) = iVar7;
      (&DAT_80063ac0)[(short)unaff_s2] = 2;
      return;
    }
  }
  (&DAT_80063ac0)[(short)unaff_s2] = 0;
  FUN_8001c7c0(0);
  DAT_80065e10 = DAT_80065e10 + -1;
  VS_VH_OBJ_478();
  return;
}



void VS_VH_OBJ_1A0(void)

{
  byte bVar1;
  int in_v0;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ushort unaff_s2;
  uint *unaff_s3;
  short unaff_s5;
  long unaff_s6;
  
  iVar7 = in_v0 >> 0x10;
  if (0xf < iVar7) {
    FUN_8001c7c0(0);
    VS_VH_OBJ_478();
    return;
  }
  *(uint **)(&DAT_80058970 + iVar7 * 4) = unaff_s3;
  puVar5 = unaff_s3 + 8;
  if (*unaff_s3 >> 8 != 0x564142) {
    (&DAT_80063ac0)[iVar7] = 0;
    VS_VH_OBJ_398(0);
    return;
  }
  DAT_80063228 = 0x40;
  if (((*unaff_s3 & 0xff) == 0x70) && (DAT_80063228 = 0x40, 4 < (int)unaff_s3[1])) {
    DAT_80063228 = 0x80;
  }
  uVar3 = SEXT24(DAT_80063228);
  if (*(ushort *)((int)unaff_s3 + 0x12) <= uVar3) {
    *(uint **)(&DAT_80058928 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar5;
    iVar7 = 0;
    uVar9 = 0;
    puVar6 = puVar5;
    if (uVar3 != 0) {
      do {
        puVar6[2] = uVar9;
        if (*(char *)puVar6 != '\0') {
          uVar9 = uVar9 + 1;
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar7 < (int)uVar3);
    }
    iVar7 = 0;
    piVar4 = (int *)&stack0x00000010;
    *(uint **)(&DAT_800589b4 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar5 + uVar3 * 4;
    bVar1 = *(byte *)((int)unaff_s3 + 0x16);
    puVar6 = puVar5 + uVar3 * 4 + (uint)*(ushort *)((int)unaff_s3 + 0x12) * 0x80;
    piVar8 = piVar4 + bVar1;
    do {
      if ((int)piVar4 <= (int)piVar8) {
        iVar2 = (uint)*(ushort *)puVar6 << 2;
        if (4 < (int)unaff_s3[1]) {
          iVar2 = (uint)*(ushort *)puVar6 << 3;
        }
        *piVar4 = iVar2;
        iVar7 = iVar7 + *piVar4;
      }
      piVar4 = piVar4 + 1;
      puVar6 = (uint *)((int)puVar6 + 2);
    } while ((int)piVar4 < (int)&stack0x00000410);
    *(uint **)(&DAT_80065e58 + (short)unaff_s2 * 4) = puVar6;
    if (unaff_s5 == 0) {
      unaff_s6 = SpuMalloc(iVar7);
      uVar3 = unaff_s6 + iVar7;
      if (unaff_s6 == -1) {
        (&DAT_80063ac0)[(short)unaff_s2] = 0;
        VS_VH_OBJ_398(0);
        return;
      }
    }
    else {
      uVar3 = unaff_s6 + iVar7;
    }
    iVar7 = 0;
    if (uVar3 < 0x80001) {
      *(long *)(&DAT_80065e14 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = unaff_s6;
      uVar3 = 0;
      piVar4 = (int *)&stack0x00000010;
      do {
        iVar7 = iVar7 + *piVar4;
        if ((uVar3 & 1) == 0) {
          *(short *)(puVar5 + ((int)uVar3 / 2) * 4 + 3) = (short)((uint)(unaff_s6 + iVar7) >> 3);
          VS_VH_OBJ_440();
          return;
        }
        *(short *)((int)puVar5 + ((int)uVar3 / 2) * 0x10 + 0xe) =
             (short)((uint)(unaff_s6 + iVar7) >> 3);
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while ((int)uVar3 <= (int)(uint)bVar1);
      *(int *)(&DAT_80065dd0 + (short)unaff_s2 * 4) = iVar7;
      (&DAT_80063ac0)[(short)unaff_s2] = 2;
      return;
    }
  }
  (&DAT_80063ac0)[(short)unaff_s2] = 0;
  FUN_8001c7c0(0);
  DAT_80065e10 = DAT_80065e10 + -1;
  VS_VH_OBJ_478();
  return;
}



void VS_VH_OBJ_398(void)

{
  FUN_8001c7c0();
  DAT_80065e10 = DAT_80065e10 + -1;
  VS_VH_OBJ_478();
  return;
}



void VS_VH_OBJ_440(int *param_1,uint param_2,int param_3,int param_4)

{
  int unaff_s0;
  short unaff_s2;
  int unaff_s3;
  
  while( true ) {
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (param_3 < (int)param_2) {
      *(int *)(&DAT_80065dd0 + unaff_s2 * 4) = unaff_s0;
      (&DAT_80063ac0)[unaff_s2] = 2;
      return;
    }
    unaff_s0 = unaff_s0 + *param_1;
    if ((param_2 & 1) == 0) break;
    *(short *)(((int)param_2 / 2) * 0x10 + unaff_s3 + 0xe) =
         (short)((uint)(param_4 + unaff_s0) >> 3);
  }
  *(short *)(((int)param_2 / 2) * 0x10 + unaff_s3 + 0xc) = (short)((uint)(param_4 + unaff_s0) >> 3);
  VS_VH_OBJ_440();
  return;
}



void VS_VH_OBJ_478(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x8001e5ac)
// WARNING: Removing unreachable block (ram,0x8001e670)
// WARNING: Removing unreachable block (ram,0x8001e684)
// WARNING: Removing unreachable block (ram,0x8001e6a4)
// WARNING: Removing unreachable block (ram,0x8001e6dc)
// WARNING: Removing unreachable block (ram,0x8001e5d0)
// WARNING: Removing unreachable block (ram,0x8001e5e8)
// WARNING: Removing unreachable block (ram,0x8001e600)

long SpuMalloc(long size)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_8003c440 == 0) {
    lVar3 = S_M_M_OBJ_54();
    return lVar3;
  }
  if ((size & ~DAT_8003c8cc) != 0) {
    size = size + DAT_8003c8cc;
  }
  uVar2 = DAT_8003c8c4 & 0x1f;
  uVar1 = DAT_8003c8c4 & 0x1f;
  if ((*DAT_8003c900 & 0x40000000) != 0) {
    lVar3 = S_M_M_OBJ_12C();
    return lVar3;
  }
  _spu_gcSPU();
  puVar4 = DAT_8003c900;
  if (0 < DAT_8003c8f8) {
    do {
      if (((*puVar4 & 0x40000000) != 0) ||
         (((*puVar4 & 0x80000000) != 0 && ((uint)((size >> uVar2) << uVar1) <= puVar4[1])))) {
        lVar3 = S_M_M_OBJ_12C();
        return lVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < DAT_8003c8f8);
  }
  return -1;
}



uint S_M_M_OBJ_54(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s0;
  uint unaff_s1;
  uint uVar6;
  int unaff_s2;
  int unaff_s3;
  
  if ((unaff_s1 & ~DAT_8003c8cc) != 0) {
    unaff_s1 = unaff_s1 + DAT_8003c8cc;
  }
  uVar6 = ((int)unaff_s1 >> (DAT_8003c8c4 & 0x1f)) << (DAT_8003c8c4 & 0x1f);
  if ((*DAT_8003c900 & 0x40000000) != 0) {
    uVar6 = S_M_M_OBJ_12C();
    return uVar6;
  }
  _spu_gcSPU();
  if (unaff_s0 < DAT_8003c8f8) {
    puVar3 = DAT_8003c900 + unaff_s0 * 2;
    do {
      if (((*puVar3 & 0x40000000) != 0) || (((*puVar3 & 0x80000000) != 0 && (uVar6 <= puVar3[1]))))
      {
        uVar6 = S_M_M_OBJ_12C();
        return uVar6;
      }
      unaff_s0 = unaff_s0 + 1;
      puVar3 = puVar3 + 2;
    } while (unaff_s0 < DAT_8003c8f8);
  }
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar3 = DAT_8003c900 + unaff_s2 * 2;
    if ((*puVar3 & 0x40000000) == 0) {
      uVar1 = puVar3[1];
      if (uVar6 < uVar1) {
        if (DAT_8003c8fc < DAT_8003c8f8) {
          puVar2 = DAT_8003c900 + DAT_8003c8fc * 2;
          uVar5 = *puVar2;
          uVar4 = puVar2[1];
          *puVar2 = uVar6 + *puVar3 | 0x80000000;
          puVar2[1] = uVar1 - uVar6;
          DAT_8003c8fc = DAT_8003c8fc + 1;
          puVar2[2] = uVar5;
          puVar2[3] = uVar4;
        }
      }
      puVar3 = DAT_8003c900 + unaff_s2 * 2;
      puVar3[1] = uVar6;
      *puVar3 = *puVar3 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = DAT_8003c900[unaff_s2 * 2];
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_8003c8f8) && (uVar1 = 0xffffffff, uVar6 <= puVar3[1] - unaff_s3)) {
        DAT_8003c8fc = unaff_s2 + 1;
        puVar2 = DAT_8003c900 + DAT_8003c8fc * 2;
        *puVar2 = (*puVar3 & 0xfffffff) + uVar6 | 0x40000000;
        puVar2[1] = puVar3[1] - uVar6;
        puVar3[1] = uVar6;
        *puVar3 = *puVar3 & 0xfffffff;
        _spu_gcSPU();
        uVar6 = S_M_M_OBJ_2A8();
        return uVar6;
      }
    }
  }
  return uVar1;
}



undefined4 S_M_M_OBJ_12C(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar5 = (uint *)(unaff_s2 * 8 + DAT_8003c900);
    if ((*puVar5 & 0x40000000) == 0) {
      uVar6 = puVar5[1];
      if (unaff_s1 < uVar6) {
        if (DAT_8003c8fc < DAT_8003c8f8) {
          puVar2 = (uint *)(DAT_8003c8fc * 8 + DAT_8003c900);
          uVar4 = *puVar2;
          uVar3 = puVar2[1];
          *puVar2 = unaff_s1 + *puVar5 | 0x80000000;
          puVar2[1] = uVar6 - unaff_s1;
          DAT_8003c8fc = DAT_8003c8fc + 1;
          puVar2[2] = uVar4;
          puVar2[3] = uVar3;
        }
      }
      puVar5 = (uint *)(unaff_s2 * 8 + DAT_8003c900);
      puVar5[1] = unaff_s1;
      *puVar5 = *puVar5 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = *(undefined4 *)(unaff_s2 * 8 + DAT_8003c900);
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_8003c8f8) && (uVar1 = 0xffffffff, unaff_s1 <= puVar5[1] - unaff_s3)) {
        DAT_8003c8fc = unaff_s2 + 1;
        puVar2 = (uint *)(DAT_8003c8fc * 8 + DAT_8003c900);
        *puVar2 = (*puVar5 & 0xfffffff) + unaff_s1 | 0x40000000;
        puVar2[1] = puVar5[1] - unaff_s1;
        puVar5[1] = unaff_s1;
        *puVar5 = *puVar5 & 0xfffffff;
        _spu_gcSPU();
        uVar1 = S_M_M_OBJ_2A8();
        return uVar1;
      }
    }
  }
  return uVar1;
}



void S_M_M_OBJ_2A8(void)

{
  return;
}



short SsVabTransBody(uchar *param_1,short param_2)

{
  short sVar1;
  ulong addr;
  int iVar2;
  
  if ((ushort)param_2 < 0x11) {
    iVar2 = (int)param_2;
    if ((&DAT_80063ac0)[iVar2] == '\x02') {
      addr = *(ulong *)(&DAT_80065e14 + iVar2 * 4);
      SpuSetTransferMode(0);
      SpuSetTransferStartAddr(addr);
      SpuRead(param_1,*(ulong *)(&DAT_80065dd0 + iVar2 * 4));
      (&DAT_80063ac0)[iVar2] = 1;
      sVar1 = VS_VTB_OBJ_A0();
      return sVar1;
    }
  }
  FUN_8001c7c0(0);
  return -1;
}



void VS_VTB_OBJ_A0(void)

{
  return;
}



// Possible S_W.OBJ/SpuWrite

ulong SpuRead(uchar *addr,ulong size)

{
  if (0x7eff0 < size) {
    size = 0x7eff0;
  }
  _spu_write(addr,size);
  if (DAT_8003c8d4 == 0) {
    DAT_8003c8d0 = 0;
  }
  return size;
}



ulong SpuSetTransferStartAddr(ulong addr)

{
  ulong uVar1;
  
  if (addr - 0x1010 < 0x7efe9) {
    DAT_8003c8b4 = _spu_FsetRXXa(0xffffffff);
    uVar1 = S_STSA_OBJ_44();
    return uVar1;
  }
  return 0;
}



void S_STSA_OBJ_44(void)

{
  return;
}



long SpuSetTransferMode(long mode)

{
  long lVar1;
  
  if ((mode != 0) && (mode == 1)) {
    lVar1 = S_STM_OBJ_1C();
    return lVar1;
  }
  DAT_8003c438 = mode;
  DAT_8003c8b8 = 0;
  return 0;
}



void S_STM_OBJ_1C(undefined4 param_1)

{
  undefined4 in_v0;
  
  DAT_8003c438 = param_1;
  DAT_8003c8b8 = in_v0;
  return;
}



short SsVabTransCompleted(short param_1)

{
  long lVar1;
  
  lVar1 = SpuIsTransferCompleted((int)param_1);
  return (short)lVar1;
}



long SpuIsTransferCompleted(long flag)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  
  if ((DAT_8003c438 != 1) && (DAT_8003c8d0 != 1)) {
    iVar3 = TestEvent(DAT_8003c430);
    if (flag == 1) {
      bVar1 = iVar3 == 0;
      iVar3 = 1;
      if (bVar1) {
        do {
          iVar3 = TestEvent(DAT_8003c430);
        } while (iVar3 == 0);
        lVar2 = S_ITC_OBJ_88();
        return lVar2;
      }
    }
    else {
      if (iVar3 != 1) {
        return iVar3;
      }
    }
    DAT_8003c8d0 = iVar3;
    return iVar3;
  }
  lVar2 = S_ITC_OBJ_90();
  return lVar2;
}



void S_ITC_OBJ_88(void)

{
  undefined4 in_v0;
  
  DAT_8003c8d0 = in_v0;
  return;
}



void S_ITC_OBJ_90(void)

{
  return;
}



int PCopen(char *name,int flags,int perms)

{
  int in_v0;
  int in_v1;
  
  trap(0x103);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



// Possible CLOSE.OBJ/PCclose

void FUN_8001e9d8(void)

{
  trap(0x104);
  return;
}



int PClseek(int fd,int offset,int mode)

{
  int in_v0;
  int in_v1;
  
  trap(0x107);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



// Possible WRITE.OBJ/PCwrite

int PCread(int fd,char *buff,int len)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (len != 0) {
    bVar1 = 0x8000 < (uint)len;
    do {
      uVar3 = len;
      if (bVar1) {
        uVar3 = 0x8000;
      }
      iVar2 = _SN_write(0,fd,uVar3,buff);
      iVar4 = iVar4 + iVar2;
      if (iVar2 == -1) {
        iVar4 = READ_OBJ_94();
        return iVar4;
      }
      buff = buff + iVar2;
      len = len - iVar2;
    } while (((int)uVar3 <= iVar2) && (bVar1 = 0x8000 < (uint)len, len != 0));
  }
  return iVar4;
}



// Possible WRITE.OBJ/WRITE_OBJ_94

void READ_OBJ_94(void)

{
  return;
}



void _SN_write(void)

{
  trap(0x106);
  return;
}



int VSync(int mode)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = TMR_HRETRACE_VAL - DAT_8003cdec;
  if (mode < 0) {
    uVar2 = VSYNC_OBJ_130();
    return uVar2;
  }
  if (mode != 1) {
    if (0 < mode) {
      uVar2 = VSYNC_OBJ_84();
      return uVar2;
    }
    iVar3 = 0;
    if (0 < mode) {
      iVar3 = mode + -1;
    }
    v_wait(DAT_8003cdf0,iVar3);
    dVar1 = GPU_REG1;
    v_wait(DAT_8003deb0 + 1,1);
    if (((dVar1 & 0x80000) != 0) && (-1 < (int)(dVar1 ^ GPU_REG1))) {
      do {
      } while (((dVar1 ^ GPU_REG1) & 0x80000000) == 0);
    }
    DAT_8003cdf0 = DAT_8003deb0;
    DAT_8003cdec = TMR_HRETRACE_VAL;
  }
  return uVar2 & 0xffff;
}



void VSYNC_OBJ_84(void)

{
  dword dVar1;
  
  v_wait();
  dVar1 = GPU_REG1;
  v_wait(DAT_8003deb0 + 1,1);
  if (((dVar1 & 0x80000) != 0) && (-1 < (int)(dVar1 ^ GPU_REG1))) {
    do {
    } while (((dVar1 ^ GPU_REG1) & 0x80000000) == 0);
  }
  DAT_8003cdec = TMR_HRETRACE_VAL;
  DAT_8003cdf0 = DAT_8003deb0;
  return;
}



void VSYNC_OBJ_130(void)

{
  return;
}



void v_wait(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_8003deb0) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  std_out_puts("VSync: timeout\n");
  ChangeClearPad(0);
  ChangeClearRCnt(3,0);
  VSYNC_OBJ_1D4();
  return;
}



void VSYNC_OBJ_1D4(void)

{
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ResetCallback(void)

{
  int iVar1;
  
  iVar1 = startIntr();
  return iVar1;
}



void InterruptCallback(void)

{
  setIntr();
  return;
}



void DMACallback(void)

{
  (*DAT_8003de60)();
  return;
}



int VSyncCallback(f *f)

{
  int prev_cb;
  
  prev_cb = (*DAT_8003de70)(0,f);
  return prev_cb;
}



int VSyncCallbacks(int ch,f *f)

{
  int iVar1;
  
  iVar1 = (*DAT_8003de70)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int StopCallback(void)

{
  int iVar1;
  
  iVar1 = stopIntr();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int RestartCallback(void)

{
  int iVar1;
  
  iVar1 = restartIntr();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int CheckCallback(void)

{
  return (uint)DAT_8003cdf6;
}



word GetIntrMask(void)

{
  return I_MASK;
}



word SetIntrMask(word param_1)

{
  word wVar1;
  
  wVar1 = I_MASK;
  I_MASK = param_1;
  return wVar1;
}



undefined2 * startIntr(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)0x0;
  if (DAT_8003cdf4 == 0) {
    I_MASK = 0;
    I_STAT = 0;
    DMA_DPCR = 0x33333333;
    memclr(&DAT_8003cdf4,0x41a);
    iVar2 = SaveState(&DAT_8003ce2c);
    if (iVar2 != 0) {
      trapIntr();
    }
    DAT_8003ce30 = &DAT_8003de0c;
    SetCustomExitFromException(&DAT_8003ce2c);
    DAT_8003cdf4 = 1;
    DAT_8003de70 = startIntrVSync();
    DAT_8003de60 = startIntrDMA();
    CdRemove();
    puVar1 = &DAT_8003cdf4;
    ExitCriticalSection();
  }
  return puVar1;
}



void trapIntr(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code **ppcVar5;
  
  if (DAT_8003cdf4 == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)I_STAT);
    ReturnFromException();
  }
  DAT_8003cdf6 = 1;
  uVar3 = (uint)(I_MASK & DAT_8003ce24 & I_STAT);
  if (uVar3 != 0) {
    do {
      ppcVar5 = (code **)&DAT_8003cdf8;
      for (uVar4 = 0; (uVar3 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar3 & 1) != 0) {
          I_STAT = ~(ushort)(1 << (uVar4 & 0x1f));
          if (*ppcVar5 != (code *)0x0) {
            (**ppcVar5)();
          }
        }
        ppcVar5 = ppcVar5 + 1;
        uVar3 = uVar3 >> 1;
      }
      uVar3 = (uint)(I_MASK & DAT_8003ce24 & I_STAT);
    } while (uVar3 != 0);
  }
  if ((I_STAT & I_MASK) == 0) {
    DAT_8003de8c = 0;
  }
  else {
    iVar2 = DAT_8003de8c + 1;
    bVar1 = 0x800 < DAT_8003de8c;
    DAT_8003de8c = iVar2;
    if (bVar1) {
      printf("intr timeout(%04x:%04x)\n",(uint)I_STAT,(uint)I_MASK);
      DAT_8003de8c = 0;
      I_STAT = 0;
      INTR_OBJ_428();
      return;
    }
  }
  DAT_8003cdf6 = 0;
  ReturnFromException();
  return;
}



void INTR_OBJ_428(void)

{
  DAT_8003cdf6 = 0;
  ReturnFromException();
  return;
}



int setIntr(uint param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  word wVar3;
  int iVar4;
  
  wVar3 = I_MASK;
  piVar2 = &DAT_8003cdf8 + param_1;
  iVar4 = *piVar2;
  if ((param_2 != iVar4) && (DAT_8003cdf4 != 0)) {
    I_MASK = 0;
    if (param_2 != 0) {
      *piVar2 = param_2;
      DAT_8003ce24 = DAT_8003ce24 | (ushort)(1 << (param_1 & 0x1f));
      iVar4 = INTR_OBJ_514();
      return iVar4;
    }
    uVar1 = ~(ushort)(1 << (param_1 & 0x1f));
    *piVar2 = 0;
    wVar3 = wVar3 & uVar1;
    DAT_8003ce24 = DAT_8003ce24 & uVar1;
    if (param_1 == 0) {
      ChangeClearPad(1);
      ChangeClearRCnt(3,1);
    }
    if (param_1 == 4) {
      ChangeClearRCnt(0,1);
    }
    if (param_1 == 5) {
      ChangeClearRCnt(1,1);
    }
    if (param_1 == 6) {
      ChangeClearRCnt(2,1);
    }
  }
  I_MASK = wVar3;
  return iVar4;
}



void INTR_OBJ_514(void)

{
  int unaff_s1;
  int unaff_s2;
  word unaff_s3;
  
  if (unaff_s1 == 0) {
    ChangeClearPad(unaff_s2 == 0);
    ChangeClearRCnt(3,unaff_s2 == 0);
  }
  if (unaff_s1 == 4) {
    ChangeClearRCnt(0,unaff_s2 == 0);
  }
  if (unaff_s1 == 5) {
    ChangeClearRCnt(1,unaff_s2 == 0);
  }
  if (unaff_s1 == 6) {
    ChangeClearRCnt(2,unaff_s2 == 0);
  }
  I_MASK = unaff_s3;
  return;
}



undefined2 * stopIntr(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)0x0;
  if (DAT_8003cdf4 != 0) {
    EnterCriticalSection();
    DAT_8003ce26 = I_MASK;
    DAT_8003ce28 = DMA_DPCR;
    I_MASK = 0;
    I_STAT = 0;
    DMA_DPCR = DMA_DPCR & 0x77777777;
    SetDefaultExitFromException();
    DAT_8003cdf4 = 0;
    puVar1 = &DAT_8003cdf4;
  }
  return puVar1;
}



undefined4 restartIntr(void)

{
  undefined4 uVar1;
  
  if (DAT_8003cdf4 == 0) {
    SetCustomExitFromException(&DAT_8003ce2c);
    DAT_8003cdf4 = 1;
    I_MASK = DAT_8003ce26;
    DMA_DPCR = DAT_8003ce28;
    ExitCriticalSection();
    uVar1 = INTR_OBJ_6D0();
    return uVar1;
  }
  return 0;
}



void INTR_OBJ_6D0(void)

{
  return;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



code * startIntrVSync(void)

{
  TMR_HRETRACE_MODE = 0x107;
  DAT_8003deb0 = 0;
  memclr(&DAT_8003de90,8);
  InterruptCallback(0,trapIntrVSync);
  return setIntrVSync;
}



void trapIntrVSync(void)

{
  code *pcVar1;
  code **ppcVar2;
  int iVar3;
  
  iVar3 = 0;
  ppcVar2 = (code **)&DAT_8003de90;
  DAT_8003deb0 = DAT_8003deb0 + 1;
  do {
    pcVar1 = *ppcVar2;
    ppcVar2 = ppcVar2 + 1;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return;
}



void setIntrVSync(int param_1,int param_2)

{
  if (param_2 != (&DAT_8003de90)[param_1]) {
    (&DAT_8003de90)[param_1] = param_2;
  }
  return;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



code * startIntrDMA(void)

{
  memclr(&DAT_8003debc,8);
  DMA_DICR = 0;
  InterruptCallback(3,trapIntrDMA);
  return setIntrDMA;
}



void trapIntrDMA(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code **ppcVar4;
  
  uVar3 = DMA_DICR >> 0x18 & 0x7f;
  if (uVar3 != 0) {
    do {
      ppcVar4 = (code **)&DAT_8003debc;
      for (iVar1 = 0; (uVar3 != 0 && (iVar1 < 7)); iVar1 = iVar1 + 1) {
        if ((uVar3 & 1) != 0) {
          DMA_DICR = (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU) & DMA_DICR;
          if (*ppcVar4 != (code *)0x0) {
            (**ppcVar4)();
          }
        }
        ppcVar4 = ppcVar4 + 1;
        uVar3 = uVar3 >> 1;
      }
      uVar3 = DMA_DICR >> 0x18 & 0x7f;
    } while (uVar3 != 0);
  }
  if (((DMA_DICR & 0xff000000) == 0x80000000) || ((DMA_DICR & 0x8000) != 0)) {
    printf("DMA bus error: code=%08x\n",DMA_DICR);
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      printf("MADR[%d]=%08x\n",iVar1,(&DMA_MDEC_IN_MADR)[iVar1 * 4]);
      iVar1 = iVar2;
    } while (iVar2 < 7);
  }
  return;
}



int setIntrDMA(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_8003debc + param_1;
  iVar2 = *piVar1;
  if (param_2 != iVar2) {
    if (param_2 != 0) {
      *piVar1 = param_2;
      DMA_DICR = DMA_DICR & 0xffffff | 1 << (param_1 + 0x10U & 0x1f) | 0x800000U;
      iVar2 = INTR_DMA_OBJ_274();
      return iVar2;
    }
    *piVar1 = 0;
    DMA_DICR = (DMA_DICR & 0xffffff | 0x800000) & ~(1 << (param_1 + 0x10U & 0x1f));
  }
  return iVar2;
}



undefined4 INTR_DMA_OBJ_274(void)

{
  undefined4 in_a3;
  
  return in_a3;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



// Possible VMODE.OBJ/GetVideoMode
// Possible GS_125.OBJ/GsGetWorkBase

undefined4 FUN_8001f7c0(void)

{
  return 0;
}



void StSetRing(u_long *ring_addr,u_long ring_size)

{
  DAT_80065dcc = ring_addr;
  DAT_80065ed8 = ring_size;
  StClearRing();
  return;
}



int CdGetToc(CdlLOC *loc)

{
  int iVar1;
  
  iVar1 = CdGetToc2(1,loc);
  return iVar1;
}



undefined4 CdGetToc2(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  CdlCB func;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  u_char local_30 [8];
  u_char uStack40;
  byte local_27;
  byte local_26;
  
  local_30[0] = '\x01';
  func = CdSyncCallback((CdlCB)0x0);
  iVar2 = CdControlB('\x13',(u_char *)0x0,&uStack40);
  if (iVar2 != 0) {
    uVar5 = (uint)(local_27 >> 4) * 10 + (local_27 & 0xf);
    uVar7 = (uint)(local_26 >> 4) * 10 + (local_26 & 0xf);
    if (1 < DAT_8003df88) {
      printf("track=%d,%d\n",uVar5,uVar7);
    }
    local_30[0] = '\0';
    iVar2 = CdControlB('\x14',local_30,&uStack40);
    if (iVar2 != 0) {
      *param_2 = local_27;
      param_2[2] = 0;
      param_2[1] = local_26;
      iVar2 = 1;
      if (uVar5 <= uVar7) {
        pbVar6 = param_2 + 4;
        do {
          local_30[0] = (char)uVar5 + (char)((int)uVar5 / 10) * '\x06';
          iVar3 = CdControlB('\x14',local_30,&uStack40);
          iVar2 = iVar2 + 1;
          if (iVar3 == 0) goto TOC_OBJ_1F0;
          *pbVar6 = local_27;
          uVar5 = uVar5 + 1;
          pbVar6[2] = 0;
          pbVar6[1] = local_26;
          pbVar6 = pbVar6 + 4;
        } while ((int)uVar5 <= (int)uVar7);
      }
      if ((1 < DAT_8003df88) && (iVar3 = 0, -1 < iVar2 + -1)) {
        do {
          bVar1 = *param_2;
          pbVar6 = param_2 + 1;
          param_2 = param_2 + 4;
          iVar3 = iVar3 + 1;
          printf("CdGetToc2: %02x:%02x:00\n",(uint)bVar1,(uint)*pbVar6);
        } while (iVar3 <= iVar2 + -1);
      }
      CdSyncCallback(func);
      uVar4 = TOC_OBJ_220();
      return uVar4;
    }
  }
TOC_OBJ_1F0:
  if (DAT_8003df88 != 0) {
    printf("CdGetToc2: error\n");
  }
  CdSyncCallback(func);
  return 0;
}



void TOC_OBJ_220(void)

{
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int CdInit(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = CdReset(1);
    iVar2 = iVar2 + -1;
    if (iVar1 == 1) {
      CdSyncCallback(def_cbsync);
      CdReadyCallback(def_cbready);
      CdReadCallback(def_cbread);
      iVar2 = EVENT_OBJ_7C();
      return iVar2;
    }
  } while (iVar2 != -1);
  printf("CdInit: Init failed\n");
  return 0;
}



void EVENT_OBJ_7C(void)

{
  return;
}



void def_cbsync(void)

{
  DeliverEvent(0xf0000003,0x20);
  return;
}



void def_cbready(void)

{
  DeliverEvent(0xf0000003,0x40);
  return;
}



void def_cbread(void)

{
  DeliverEvent(0xf0000003,0x40);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int CdStatus(void)

{
  return (uint)(byte)DAT_8003df8c;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int CdMode(void)

{
  return (uint)DAT_8003df9c;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int CdLastCom(void)

{
  return (uint)DAT_8003df9d;
}



// WARNING: Unknown calling convention yet parameter storage is locked

CdlLOC * CdLastPos(void)

{
  return (CdlLOC *)&DAT_8003df98;
}



int CdReset(int mode)

{
  int iVar1;
  int iVar2;
  
  if (mode == 2) {
    CD_initintr();
    iVar1 = SYS_OBJ_98();
    return iVar1;
  }
  iVar1 = CD_init();
  iVar2 = 0;
  if ((iVar1 == 0) && (iVar2 = 1, mode == 1)) {
    iVar1 = CD_initvol();
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = 1;
    }
  }
  return iVar2;
}



void SYS_OBJ_98(void)

{
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void CdFlush(void)

{
  CD_flush();
  return;
}



int CdSetDebug(int level)

{
  int iVar1;
  
  iVar1 = DAT_8003df88;
  DAT_8003df88 = level;
  return iVar1;
}



char * CdComstr(u_char com)

{
  char *pcVar1;
  
  if (com < 0x1c) {
    pcVar1 = (char *)SYS_OBJ_110();
    return pcVar1;
  }
  return "none";
}



void SYS_OBJ_110(void)

{
  return;
}



char * CdIntstr(u_char intr)

{
  char *pcVar1;
  
  if (intr < 7) {
    pcVar1 = (char *)SYS_OBJ_144();
    return pcVar1;
  }
  return "none";
}



void SYS_OBJ_144(void)

{
  return;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdSync(int mode,u_char *result)

{
  int iVar1;
  
  iVar1 = CD_sync();
  return iVar1;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdReady(int mode,u_char *result)

{
  int iVar1;
  
  iVar1 = CD_ready();
  return iVar1;
}



CdlCB CdSyncCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_8003df7c;
  DAT_8003df7c = func;
  return pCVar1;
}



CdlCB CdReadyCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_8003df80;
  DAT_8003df80 = func;
  return pCVar1;
}



int CdControl(u_char com,u_char *param,u_char *result)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003df7c;
  iVar3 = 3;
  while( true ) {
    DAT_8003df7c = 0;
    if ((com != 1) && (((byte)DAT_8003df8c & 0x10) != 0)) {
      CD_cw(1,0,0,0);
    }
    if ((((param == (u_char *)0x0) || (*(int *)(&DAT_8003def4 + (uint)com * 4) == 0)) ||
        (iVar2 = CD_cw(2,param,result,0), iVar2 == 0)) &&
       (DAT_8003df7c = uVar1, iVar2 = CD_cw(com,param,result,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003df7c = uVar1;
      return 0;
    }
  }
  return 1;
}



int CdControlF(u_char com,u_char *param)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003df7c;
  iVar3 = 3;
  while( true ) {
    DAT_8003df7c = 0;
    if ((com != 1) && (((byte)DAT_8003df8c & 0x10) != 0)) {
      CD_cw(1,0,0,0);
    }
    if ((((param == (u_char *)0x0) || (*(int *)(&DAT_8003def4 + (uint)com * 4) == 0)) ||
        (iVar2 = CD_cw(2,param,0,0), iVar2 == 0)) &&
       (DAT_8003df7c = uVar1, iVar2 = CD_cw(com,param,0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003df7c = uVar1;
      return 0;
    }
  }
  return 1;
}



int CdControlB(u_char com,u_char *param,u_char *result)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_8003df7c;
  iVar4 = 3;
  do {
    DAT_8003df7c = 0;
    if ((com != 1) && (((byte)DAT_8003df8c & 0x10) != 0)) {
      CD_cw(1,0,0,0);
    }
    if (((param == (u_char *)0x0) || (*(int *)(&DAT_8003def4 + (uint)com * 4) == 0)) ||
       (iVar2 = CD_cw(2,param,result,0), iVar2 == 0)) {
      DAT_8003df7c = uVar1;
      iVar2 = CD_cw(com,param,result,0);
      iVar3 = 0;
      if (iVar2 == 0) break;
    }
    iVar4 = iVar4 + -1;
    iVar3 = -1;
    DAT_8003df7c = uVar1;
  } while (iVar4 != -1);
  if (iVar3 != 0) {
    return 0;
  }
  CD_sync(0,result);
  iVar4 = SYS_OBJ_538();
  return iVar4;
}



void SYS_OBJ_538(void)

{
  return;
}



int CdMix(CdlATV *vol)

{
  CD_vol();
  return 1;
}



int CdGetSector(void *madr,int size)

{
  int iVar1;
  
  iVar1 = CD_getsector();
  return (uint)(iVar1 == 0);
}



_func_49 * CdDataCallback(func *func)

{
  _func_49 *p_Var1;
  
  p_Var1 = (_func_49 *)DMACallback(3,func);
  return p_Var1;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdDataSync(int mode)

{
  int iVar1;
  
  iVar1 = CD_datasync();
  return iVar1;
}



CdlLOC * CdIntToPos(int i,CdlLOC *p)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (i + 0x96) / 0x4b;
  iVar2 = (i + 0x96) % 0x4b;
  iVar1 = iVar3 / 0x3c;
  iVar3 = iVar3 % 0x3c;
  p->second = (char)iVar3 + (char)(iVar3 / 10) * '\x06';
  p->sector = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  p->minute = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  return p;
}



int CdPosToInt(CdlLOC *p)

{
  return (((uint)(p->minute >> 4) * 10 + (p->minute & 0xf)) * 0x3c +
         (uint)(p->second >> 4) * 10 + (p->second & 0xf)) * 0x4b +
         (uint)(p->sector >> 4) * 10 + (p->sector & 0xf) + -0x96;
}



undefined4 getintr(void)

{
  undefined4 uVar1;
  
  CDROM_REG0 = 1;
  if ((CDROM_REG3 & 7) != 0) {
    uVar1 = BIOS_OBJ_64();
    return uVar1;
  }
  CDROM_REG0 = 1;
  return 0;
}



undefined4 BIOS_OBJ_64(byte *param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint unaff_s1;
  byte in_stack_00000010;
  byte bStack00000018;
  byte bStack00000019;
  undefined4 in_stack_00000018;
  
  while (iVar6 = 0, in_stack_00000010 != (*param_1 & 7)) {
    in_stack_00000010 = *param_1 & 7;
  }
  puVar3 = (undefined4 *)&stack0x00000018;
  do {
    if ((CDROM_REG0 & 0x20) == 0) break;
    iVar6 = iVar6 + 1;
    *(byte *)puVar3 = CDROM_REG1;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (iVar6 < 8);
  if (iVar6 < 8) {
    puVar4 = (undefined *)((int)&stack0x00000018 + iVar6);
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < (int)&stack0x00000020);
  }
  CDROM_REG0 = 1;
  CDROM_REG3 = 7;
  CDROM_REG2 = 7;
  if ((in_stack_00000010 != 3) || (*(int *)(&DAT_8003e140 + (uint)DAT_8003df9d * 4) != 0)) {
    if (((DAT_8003df8c & 0x10) == 0) && ((bStack00000018 & 0x10) != 0)) {
      DAT_8003df94 = DAT_8003df94 + 1;
    }
    DAT_8003df8c = (uint)bStack00000018;
    DAT_8003df90 = (uint)bStack00000019;
    unaff_s1 = DAT_8003df8c & 0x1d;
  }
  if ((in_stack_00000010 == 5) && (std_out_puts("DiskError: "), 0 < DAT_8003df88)) {
    printf("com=%s,code=(%02x:%02x)\n",(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],DAT_8003df8c,
           DAT_8003df90);
  }
  switch(in_stack_00000010) {
  case 1:
    DAT_8003e259 = 1;
    if (unaff_s1 != 0) {
      if (iVar6 == 1) {
        unaff_s1 = 0;
      }
      DAT_8003e259 = 1;
      if (unaff_s1 != 0) {
        DAT_8003e259 = 5;
      }
    }
    puVar5 = &DAT_80054e80;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    CDROM_REG0 = 0;
    CDROM_REG3 = 0;
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  case 2:
    DAT_8003e258 = 2;
    if (unaff_s1 != 0) {
      DAT_8003e258 = 5;
    }
    puVar5 = &DAT_80054e78;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  case 3:
    break;
  case 4:
    puVar5 = &DAT_80054e88;
    puVar3 = (undefined4 *)&stack0x00000018;
    DAT_8003e25a = 4;
    DAT_8003e259 = 4;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    puVar5 = &DAT_80054e80;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  case 5:
    puVar5 = &DAT_80054e78;
    puVar3 = (undefined4 *)&stack0x00000018;
    DAT_8003e259 = 5;
    DAT_8003e258 = 5;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    puVar5 = &DAT_80054e80;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  default:
    std_out_puts("CDROM: unknown intr");
    printf("(%d)\n",(uint)in_stack_00000010);
    return 0;
  }
  if (unaff_s1 != 0) {
    DAT_8003e258 = 5;
    puVar5 = &DAT_80054e78;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  }
  if (*(int *)(&DAT_8003e040 + (uint)DAT_8003df9d * 4) == 0) {
    DAT_8003e258 = 2;
    puVar5 = &DAT_80054e78;
    puVar3 = (undefined4 *)&stack0x00000018;
    iVar6 = 7;
    do {
      uVar1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    uVar2 = BIOS_OBJ_560();
    return uVar2;
  }
  DAT_8003e258 = 3;
  puVar5 = &DAT_80054e78;
  puVar3 = (undefined4 *)&stack0x00000018;
  iVar6 = 7;
  do {
    uVar1 = *(undefined *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    iVar6 = iVar6 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != -1);
  uVar2 = BIOS_OBJ_560();
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x80020660)

void BIOS_OBJ_258(void)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s1;
  
  if (unaff_s1 != 0) {
    DAT_8003e258 = 5;
    puVar2 = &DAT_80054e78;
    puVar4 = &stack0x00000018;
    iVar3 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != -1);
    BIOS_OBJ_560();
    return;
  }
  if (*(int *)(&DAT_8003e040 + (uint)DAT_8003df9d * 4) != 0) {
    DAT_8003e258 = 3;
    puVar2 = &DAT_80054e78;
    puVar4 = &stack0x00000018;
    iVar3 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != -1);
    BIOS_OBJ_560();
    return;
  }
  DAT_8003e258 = 2;
  puVar2 = &DAT_80054e78;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_OBJ_560();
  return;
}



void BIOS_OBJ_358(void)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s1;
  
  DAT_8003e258 = 2;
  if (unaff_s1 != 0) {
    DAT_8003e258 = 5;
  }
  puVar2 = &DAT_80054e78;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_OBJ_560();
  return;
}



void BIOS_OBJ_3A4(void)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s0;
  int unaff_s1;
  
  DAT_8003e259 = 1;
  if (unaff_s1 != 0) {
    if (unaff_s0 == 1) {
      unaff_s1 = 0;
    }
    DAT_8003e259 = 1;
    if (unaff_s1 != 0) {
      DAT_8003e259 = 5;
    }
  }
  puVar2 = &DAT_80054e80;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  BIOS_OBJ_560();
  return;
}



void BIOS_OBJ_428(void)

{
  undefined uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  puVar3 = &DAT_80054e88;
  puVar4 = &stack0x00000018;
  DAT_8003e25a = 4;
  DAT_8003e259 = 4;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = &DAT_80054e80;
  puVar4 = &stack0x00000018;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  BIOS_OBJ_560();
  return;
}



void BIOS_OBJ_4B0(void)

{
  undefined uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  puVar3 = &DAT_80054e78;
  puVar4 = &stack0x00000018;
  DAT_8003e259 = 5;
  DAT_8003e258 = 5;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = &DAT_80054e80;
  puVar4 = &stack0x00000018;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  BIOS_OBJ_560();
  return;
}



void BIOS_OBJ_560(void)

{
  return;
}



undefined4 CD_sync(int param_1,undefined *param_2)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  
  iVar3 = VSync(-1);
  DAT_80054e90 = iVar3 + 0x3c0;
  DAT_80054e94 = 0;
  DAT_80054e98 = "CD_sync";
  do {
    iVar3 = VSync(-1);
    if ((DAT_80054e90 < iVar3) ||
       (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2)) {
      std_out_puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
             (&PTR_s_NoIntr_8003e020)[DAT_8003e258],(&PTR_s_NoIntr_8003e020)[DAT_8003e259]);
      CD_flush();
      uVar4 = BIOS_OBJ_6A4();
      return uVar4;
    }
    iVar3 = CheckCallback();
    bVar7 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar7 = CDROM_REG0 & 3;
      while( true ) {
        uVar5 = getintr();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
          (*DAT_8003df80)(DAT_8003e259,&DAT_80054e80);
        }
        if (((uVar5 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
          (*DAT_8003df7c)(DAT_8003e258,&DAT_80054e78);
          uVar4 = BIOS_OBJ_6D4();
          return uVar4;
        }
      }
    }
    CDROM_REG0 = bVar7;
    if ((DAT_8003e258 == 2) || (DAT_8003e258 == 5)) {
      DAT_8003e258 = 2;
      puVar6 = &DAT_80054e78;
      iVar3 = 7;
      if (param_2 != (undefined *)0x0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (iVar3 != -1);
      }
      uVar4 = BIOS_OBJ_7CC();
      return uVar4;
    }
    if (param_1 != 0) {
      return 0;
    }
  } while( true );
}



undefined4 BIOS_OBJ_6A4(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar3 = CheckCallback();
    bVar7 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar7 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
          (*DAT_8003df80)(*unaff_s4,&DAT_80054e80);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
          (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
          uVar5 = BIOS_OBJ_6D4();
          return uVar5;
        }
      }
    }
    CDROM_REG0 = bVar7;
    if ((*unaff_s2 == 2) || (*unaff_s2 == 5)) {
      *unaff_s2 = 2;
      puVar6 = &DAT_80054e78;
      iVar3 = 7;
      if (unaff_s6 != (undefined *)0x0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *unaff_s6 = uVar1;
          unaff_s6 = unaff_s6 + 1;
        } while (iVar3 != -1);
      }
      uVar5 = BIOS_OBJ_7CC();
      return uVar5;
    }
    if (unaff_s5 != 0) {
      return 0;
    }
    iVar3 = VSync(-1);
    if ((DAT_80054e90 < iVar3) ||
       (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2))
    break;
    in_v0 = 0;
  }
  std_out_puts("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
         *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
  CD_flush();
  uVar5 = BIOS_OBJ_6A4();
  return uVar5;
}



undefined4 BIOS_OBJ_6D4(void)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  
  do {
    while( true ) {
      uVar4 = getintr();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
        (*DAT_8003df80)(*unaff_s4,&DAT_80054e80);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
        (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
        uVar5 = BIOS_OBJ_6D4();
        return uVar5;
      }
    }
    do {
      CDROM_REG0 = bVar3;
      if ((*unaff_s2 == 2) || (*unaff_s2 == 5)) {
        *unaff_s2 = 2;
        puVar7 = &DAT_80054e78;
        iVar6 = 7;
        if (unaff_s6 != (undefined *)0x0) {
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s6 = uVar1;
            unaff_s6 = unaff_s6 + 1;
          } while (iVar6 != -1);
        }
        uVar5 = BIOS_OBJ_7CC();
        return uVar5;
      }
      if (unaff_s5 != 0) {
        return 0;
      }
      iVar6 = VSync(-1);
      if ((DAT_80054e90 < iVar6) ||
         (iVar6 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar6, bVar2)) {
        std_out_puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
        CD_flush();
        uVar5 = BIOS_OBJ_6A4();
        return uVar5;
      }
      iVar6 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar6 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_7CC(void)

{
  return;
}



undefined4 CD_ready(int param_1,undefined *param_2)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  
  iVar3 = VSync(-1);
  DAT_80054e90 = iVar3 + 0x3c0;
  DAT_80054e94 = 0;
  DAT_80054e98 = "CD_ready";
  while( true ) {
    iVar3 = VSync(-1);
    if ((DAT_80054e90 < iVar3) ||
       (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2)) {
      std_out_puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
             (&PTR_s_NoIntr_8003e020)[DAT_8003e258],(&PTR_s_NoIntr_8003e020)[DAT_8003e259]);
      CD_flush();
      uVar4 = BIOS_OBJ_92C();
      return uVar4;
    }
    iVar3 = CheckCallback();
    bVar7 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar7 = CDROM_REG0 & 3;
      while( true ) {
        uVar5 = getintr();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
          (*DAT_8003df80)(DAT_8003e259,&DAT_80054e80);
        }
        if (((uVar5 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
          (*DAT_8003df7c)(DAT_8003e258,&DAT_80054e78);
          uVar4 = BIOS_OBJ_95C();
          return uVar4;
        }
      }
    }
    CDROM_REG0 = bVar7;
    if (DAT_8003e25a != '\0') break;
    if (DAT_8003e259 != 0) {
      DAT_8003e259 = 0;
      puVar6 = &DAT_80054e80;
      iVar3 = 7;
      if (param_2 != (undefined *)0x0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (iVar3 != -1);
      }
      goto BIOS_OBJ_A84;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8003e25a = '\0';
  puVar6 = &DAT_80054e88;
  if (param_2 != (undefined *)0x0) {
    iVar3 = 7;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (iVar3 != -1);
    uVar4 = BIOS_OBJ_A94();
    return uVar4;
  }
BIOS_OBJ_A84:
  uVar4 = BIOS_OBJ_A94();
  return uVar4;
}



undefined4 BIOS_OBJ_92C(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_s2;
  char *unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  int unaff_s7;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar3 = CheckCallback();
    bVar7 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar7 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
          (*DAT_8003df80)(*unaff_s6,&DAT_80054e80);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
          (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
          uVar5 = BIOS_OBJ_95C();
          return uVar5;
        }
      }
    }
    CDROM_REG0 = bVar7;
    if (*unaff_s3 != '\0') break;
    if (unaff_s3[-1] != '\0') {
      unaff_s3[-1] = '\0';
      puVar6 = &DAT_80054e80;
      iVar3 = 7;
      if (unaff_s4 != (undefined *)0x0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *unaff_s4 = uVar1;
          unaff_s4 = unaff_s4 + 1;
        } while (iVar3 != -1);
      }
      goto BIOS_OBJ_A84;
    }
    if (unaff_s7 != 0) {
      return 0;
    }
    iVar3 = VSync(-1);
    if ((DAT_80054e90 < iVar3) ||
       (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2)) {
      std_out_puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
             *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s5));
      CD_flush();
      uVar5 = BIOS_OBJ_92C();
      return uVar5;
    }
    in_v0 = 0;
  }
  *unaff_s3 = '\0';
  puVar6 = &DAT_80054e88;
  if (unaff_s4 != (undefined *)0x0) {
    iVar3 = 7;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
      *unaff_s4 = uVar1;
      unaff_s4 = unaff_s4 + 1;
    } while (iVar3 != -1);
    uVar5 = BIOS_OBJ_A94();
    return uVar5;
  }
BIOS_OBJ_A84:
  uVar5 = BIOS_OBJ_A94();
  return uVar5;
}



undefined4 BIOS_OBJ_95C(void)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte unaff_s1;
  byte *unaff_s2;
  char *unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  int unaff_s7;
  
  do {
    while( true ) {
      uVar4 = getintr();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
        (*DAT_8003df80)(*unaff_s6,&DAT_80054e80);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
        (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
        uVar5 = BIOS_OBJ_95C();
        return uVar5;
      }
    }
    do {
      CDROM_REG0 = bVar3;
      if (*unaff_s3 != '\0') {
        *unaff_s3 = '\0';
        puVar7 = &DAT_80054e88;
        if (unaff_s4 != (undefined *)0x0) {
          iVar6 = 7;
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s4 = uVar1;
            unaff_s4 = unaff_s4 + 1;
          } while (iVar6 != -1);
          uVar5 = BIOS_OBJ_A94();
          return uVar5;
        }
        goto BIOS_OBJ_A84;
      }
      if (unaff_s3[-1] != '\0') {
        unaff_s3[-1] = '\0';
        puVar7 = &DAT_80054e80;
        iVar6 = 7;
        if (unaff_s4 != (undefined *)0x0) {
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s4 = uVar1;
            unaff_s4 = unaff_s4 + 1;
          } while (iVar6 != -1);
        }
BIOS_OBJ_A84:
        uVar5 = BIOS_OBJ_A94();
        return uVar5;
      }
      if (unaff_s7 != 0) {
        return 0;
      }
      iVar6 = VSync(-1);
      if ((DAT_80054e90 < iVar6) ||
         (iVar6 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar6, bVar2)) {
        std_out_puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s5));
        CD_flush();
        uVar5 = BIOS_OBJ_92C();
        return uVar5;
      }
      iVar6 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar6 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_A94(void)

{
  return;
}



int CD_cw(byte param_1,byte *param_2,undefined *param_3,int param_4)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  byte bVar8;
  
  if (1 < DAT_8003df88) {
    printf("%s...\n",(&PTR_s_CdlSync_8003dfa0)[param_1]);
  }
  if ((*(int *)(&DAT_8003e1c0 + (uint)param_1 * 4) == 0) || (param_2 != (byte *)0x0)) {
    CD_sync(0,0);
    if (param_1 == 2) {
      iVar3 = 0;
      pbVar5 = param_2;
      do {
        (&DAT_8003df98)[iVar3] = *pbVar5;
        iVar3 = iVar3 + 1;
        pbVar5 = pbVar5 + 1;
      } while (iVar3 < 4);
    }
    iVar3 = (uint)param_1 * 4;
    if (param_1 == 0xe) {
      DAT_8003df9c = *param_2;
    }
    DAT_8003e258 = 0;
    if (*(int *)(&DAT_8003e0c0 + iVar3) != 0) {
      DAT_8003e259 = 0;
    }
    CDROM_REG0 = 0;
    iVar6 = 0;
    if (0 < *(int *)(&DAT_8003e1c0 + iVar3)) {
      do {
        CDROM_REG2 = *param_2;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(&DAT_8003e1c0 + iVar3));
    }
    iVar3 = 0;
    DAT_8003df9d = param_1;
    CDROM_REG1 = param_1;
    if (param_4 == 0) {
      iVar3 = VSync(-1);
      DAT_80054e90 = iVar3 + 0x3c0;
      DAT_80054e94 = 0;
      DAT_80054e98 = "CD_cw";
      bVar8 = CDROM_REG0;
      while (CDROM_REG0 = bVar8, DAT_8003e258 == 0) {
        iVar3 = VSync(-1);
        if ((DAT_80054e90 < iVar3) ||
           (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2))
        {
          std_out_puts("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
                 (&PTR_s_NoIntr_8003e020)[DAT_8003e258],(&PTR_s_NoIntr_8003e020)[DAT_8003e259]);
          CD_flush();
          iVar3 = BIOS_OBJ_D98();
          return iVar3;
        }
        iVar3 = CheckCallback();
        bVar8 = CDROM_REG0;
        if (iVar3 != 0) {
          bVar8 = CDROM_REG0 & 3;
          while( true ) {
            uVar4 = getintr();
            if (uVar4 == 0) break;
            if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
              (*DAT_8003df80)(DAT_8003e259,&DAT_80054e80);
            }
            if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
              (*DAT_8003df7c)(DAT_8003e258,&DAT_80054e78);
              iVar3 = BIOS_OBJ_DC8();
              return iVar3;
            }
          }
        }
      }
      puVar7 = &DAT_80054e78;
      if (param_3 != (undefined *)0x0) {
        iVar3 = 7;
        do {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          iVar3 = iVar3 + -1;
          *param_3 = uVar1;
          param_3 = param_3 + 1;
        } while (iVar3 != -1);
      }
      iVar3 = -(uint)(DAT_8003e258 == 5);
    }
  }
  else {
    iVar3 = -2;
    if (0 < DAT_8003df88) {
      printf("%s: no param\n",(&PTR_s_CdlSync_8003dfa0)[param_1]);
      iVar3 = BIOS_OBJ_EB4();
      return iVar3;
    }
  }
  return iVar3;
}



int BIOS_OBJ_D98(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  undefined *unaff_s5;
  
  while( true ) {
    if (in_v0 != 0) {
      return -1;
    }
    iVar3 = CheckCallback();
    bVar6 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar6 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
          (*DAT_8003df80)(*unaff_s4,&DAT_80054e80);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
          (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
          iVar3 = BIOS_OBJ_DC8();
          return iVar3;
        }
      }
    }
    CDROM_REG0 = bVar6;
    if (*unaff_s2 != 0) {
      puVar5 = &DAT_80054e78;
      if (unaff_s5 != (undefined *)0x0) {
        iVar3 = 7;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
          *unaff_s5 = uVar1;
          unaff_s5 = unaff_s5 + 1;
        } while (iVar3 != -1);
      }
      return -(uint)(DAT_8003e258 == '\x05');
    }
    iVar3 = VSync(-1);
    if ((DAT_80054e90 < iVar3) ||
       (iVar3 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar3, bVar2))
    break;
    in_v0 = 0;
  }
  std_out_puts("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
         *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
  CD_flush();
  iVar3 = BIOS_OBJ_D98();
  return iVar3;
}



int BIOS_OBJ_DC8(void)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  undefined *unaff_s5;
  
  do {
    while( true ) {
      uVar4 = getintr();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
        (*DAT_8003df80)(*unaff_s4,&DAT_80054e80);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003df7c != (code *)0x0)) {
        (*DAT_8003df7c)(*unaff_s2,&DAT_80054e78);
        iVar5 = BIOS_OBJ_DC8();
        return iVar5;
      }
    }
    do {
      CDROM_REG0 = bVar3;
      if (*unaff_s2 != 0) {
        puVar6 = &DAT_80054e78;
        if (unaff_s5 != (undefined *)0x0) {
          iVar5 = 7;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s5 = uVar1;
            unaff_s5 = unaff_s5 + 1;
          } while (iVar5 != -1);
        }
        return -(uint)(DAT_8003e258 == '\x05');
      }
      iVar5 = VSync(-1);
      if ((DAT_80054e90 < iVar5) ||
         (iVar5 = DAT_80054e94 + 1, bVar2 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar5, bVar2)) {
        std_out_puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
        CD_flush();
        iVar5 = BIOS_OBJ_D98();
        return iVar5;
      }
      iVar5 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar5 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_EB4(void)

{
  return;
}



undefined4 CD_vol(int param_1)

{
  CDROM_REG0 = 3;
  CDROM_REG1 = *(byte *)(param_1 + 2);
  CDROM_REG2 = *(byte *)(param_1 + 3);
  CDROM_REG3 = 0x20;
  return 0;
}



void CD_flush(void)

{
  if ((CDROM_REG3 & 7) != 0) {
    do {
    } while( true );
  }
  DAT_8003e258 = 2;
  DAT_8003e259 = 0;
  DAT_8003e25a = 0;
  COMMON_DELAY = 0x1325;
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  return;
}



undefined4 CD_initvol(void)

{
  if ((CURR_MAIN_VOL_L == 0) && (CURR_MAIN_VOL_R == 0)) {
    SPU_MAIN_VOL_L = 0x3fff;
    SPU_MAIN_VOL_R = 0x3fff;
  }
  CDROM_REG0 = 3;
  CDROM_REG1 = 0x80;
  CDROM_REG2 = 0;
  CDROM_REG3 = 0x20;
  SPU_CTRL_REG_CPUCNT = 0xc001;
  CD_VOL_L = 0x3fff;
  CD_VOL_R = 0x3fff;
  return 0;
}



void CD_initintr(void)

{
  DAT_8003df80 = 0;
  DAT_8003df7c = 0;
  DAT_8003df90 = 0;
  DAT_8003df8c = 0;
  ResetCallback();
  InterruptCallback(2,callback);
  return;
}



int CD_init(void)

{
  int iVar1;
  int iVar2;
  
  std_out_puts("CD_init:");
  printf("addr=%08x\n",&PTR_DAT_8003e25c);
  DAT_8003df9d = 0;
  DAT_8003df9c = 0;
  DAT_8003df80 = 0;
  DAT_8003df7c = 0;
  DAT_8003df90 = 0;
  DAT_8003df8c = 0;
  ResetCallback();
  InterruptCallback(2,callback);
  if ((CDROM_REG3 & 7) != 0) {
    do {
    } while( true );
  }
  DAT_8003e25a = 0;
  DAT_8003e259 = 0;
  DAT_8003e258 = 2;
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  COMMON_DELAY = 0x1325;
  CD_cw(1,0,0,0);
  if ((DAT_8003df8c & 0x10) != 0) {
    CD_cw(1,0,0,0);
  }
  iVar1 = CD_cw(10,0,0,0);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar1 = CD_cw(0xc,0,0,0);
    iVar2 = -1;
    if (iVar1 == 0) {
      iVar2 = CD_sync(0,0);
      iVar2 = -(uint)(iVar2 != 2);
    }
  }
  return iVar2;
}



undefined4 CD_datasync(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  DAT_80054e90 = iVar2 + 0x3c0;
  DAT_80054e94 = 0;
  DAT_80054e98 = "CD_datasync";
  do {
    iVar2 = VSync(-1);
    if ((DAT_80054e90 < iVar2) ||
       (iVar2 = DAT_80054e94 + 1, bVar1 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar2, bVar1)) {
      std_out_puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,(&PTR_s_CdlSync_8003dfa0)[DAT_8003df9d],
             (&PTR_s_NoIntr_8003e020)[DAT_8003e258],(&PTR_s_NoIntr_8003e020)[DAT_8003e259]);
      CD_flush();
      uVar3 = BIOS_OBJ_1490();
      return uVar3;
    }
    uVar3 = 0;
  } while (((DMA_CDROM_CHCR & 0x1000000) != 0) && (uVar3 = 1, param_1 == 0));
  return uVar3;
}



undefined4 BIOS_OBJ_1490(void)

{
  bool bVar1;
  int iVar2;
  int in_v0;
  undefined4 uVar3;
  int unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while (((uVar3 = 0xffffffff, in_v0 == 0 && (uVar3 = 0, (DMA_CDROM_CHCR & 0x1000000) != 0)) &&
         (uVar3 = 1, unaff_s2 == 0))) {
    iVar2 = VSync(-1);
    if ((DAT_80054e90 < iVar2) ||
       (iVar2 = DAT_80054e94 + 1, bVar1 = 0x3c0000 < DAT_80054e94, DAT_80054e94 = iVar2, bVar1)) {
      std_out_puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80054e98,
             *(undefined4 *)((uint)DAT_8003df9d * 4 + unaff_s3),
             *(undefined4 *)((uint)*unaff_s1 * 4 + unaff_s0));
      CD_flush();
      uVar3 = BIOS_OBJ_1490();
      return uVar3;
    }
    in_v0 = 0;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x80021844)
// WARNING: Removing unreachable block (ram,0x80021874)
// WARNING: Removing unreachable block (ram,0x80021878)
// WARNING: Removing unreachable block (ram,0x8002188c)

void CD_getsector(void)

{
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}



// Possible GS_101.OBJ/GsSetNearClip
// Possible GS_102.OBJ/GsSetFarClip
// Possible GS_124.OBJ/GsSetWorkBase

void CD_set_test_parmnum(undefined4 param_1)

{
  DAT_8003e224 = param_1;
  return;
}



void callback(void)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = CDROM_REG0 & 3;
  do {
    uVar1 = getintr();
    if (uVar1 == 0) {
      CDROM_REG0 = bVar2;
      return;
    }
    if (((uVar1 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
      (*DAT_8003df80)(DAT_8003e259,&DAT_80054e80);
    }
  } while (((uVar1 & 2) == 0) || (DAT_8003df7c == (code *)0x0));
  (*DAT_8003df7c)(DAT_8003e258,&DAT_80054e78);
  BIOS_OBJ_161C();
  return;
}



void BIOS_OBJ_161C(void)

{
  uint uVar1;
  byte unaff_s1;
  undefined *unaff_s2;
  
  do {
    uVar1 = getintr();
    if (uVar1 == 0) {
      CDROM_REG0 = unaff_s1;
      return;
    }
    if (((uVar1 & 4) != 0) && (DAT_8003df80 != (code *)0x0)) {
      (*DAT_8003df80)(*unaff_s2,&DAT_80054e80);
    }
  } while (((uVar1 & 2) == 0) || (DAT_8003df7c == (code *)0x0));
  (*DAT_8003df7c)(DAT_8003e258,&DAT_80054e78);
  BIOS_OBJ_161C();
  return;
}



CdlFILE * CdSearchFile(CdlFILE *fp,char *name)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CdlFILE *pCVar4;
  undefined2 *puVar5;
  int iVar6;
  CdlLOC CVar7;
  CdlLOC CVar8;
  CdlLOC CVar9;
  char *pcVar10;
  CdlLOC *pCVar11;
  char *pcVar12;
  int iVar13;
  char local_40 [32];
  
  if (DAT_8003e28c != DAT_8003df94) {
    iVar3 = CD_newmedia();
    if (iVar3 == 0) {
      return (CdlFILE *)0x0;
    }
    DAT_8003e28c = DAT_8003df94;
  }
  iVar3 = 1;
  if (*name != '\\') {
    pCVar4 = (CdlFILE *)ISO9660_OBJ_2B8();
    return pCVar4;
  }
  local_40[0] = '\0';
  iVar13 = 0;
  pcVar10 = name;
  do {
    cVar2 = *pcVar10;
    pcVar12 = local_40;
    if (cVar2 != '\\') {
      cVar2 = *pcVar10;
      do {
        bVar1 = iVar13 < 8;
        if (cVar2 == '\0') goto ISO9660_OBJ_110;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar12 = cVar2;
        cVar2 = *pcVar10;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\\');
      cVar2 = *pcVar10;
    }
    bVar1 = iVar13 < 8;
    if (cVar2 == '\0') goto ISO9660_OBJ_110;
    pcVar10 = pcVar10 + 1;
    *pcVar12 = '\0';
    iVar3 = CD_searchdir(iVar3,local_40);
    if (iVar3 == -1) {
      local_40[0] = '\0';
      pCVar4 = (CdlFILE *)ISO9660_OBJ_10C();
      return pCVar4;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  bVar1 = iVar13 < 8;
ISO9660_OBJ_110:
  if (bVar1) {
    if (local_40[0] == '\0') {
      if (0 < DAT_8003df88) {
        pCVar4 = (CdlFILE *)ISO9660_OBJ_2AC("%s: dir was not found\n",name);
        return pCVar4;
      }
    }
    else {
      *pcVar12 = '\0';
      iVar3 = CD_cachefile();
      if (iVar3 == 0) {
        if (0 < DAT_8003df88) {
          printf("CdSearchFile: disc error\n");
          pCVar4 = (CdlFILE *)ISO9660_OBJ_2B8();
          return pCVar4;
        }
      }
      else {
        iVar3 = 0;
        if (1 < DAT_8003df88) {
          printf("CdSearchFile: searching %s...\n",local_40);
        }
        puVar5 = &DAT_80054ea4;
        pCVar11 = (CdlLOC *)&DAT_80054e9c;
        iVar13 = 0;
        do {
          if (*(char *)((int)&DAT_80054ea4 + iVar13) == '\0') break;
          iVar6 = _cmp(puVar5,local_40);
          if (iVar6 != 0) {
            if (1 < DAT_8003df88) {
              printf("%s:  found\n",local_40);
            }
            CVar7 = pCVar11[1];
            CVar8 = pCVar11[2];
            CVar9 = pCVar11[3];
            fp->pos = *pCVar11;
            *(CdlLOC *)&fp->size = CVar7;
            *(CdlLOC *)fp->name = CVar8;
            *(CdlLOC *)(fp->name + 4) = CVar9;
            CVar7 = pCVar11[5];
            *(CdlLOC *)(fp->name + 8) = pCVar11[4];
            *(CdlLOC *)(fp->name + 0xc) = CVar7;
            pCVar4 = (CdlFILE *)ISO9660_OBJ_2B8();
            return pCVar4;
          }
          pCVar11 = pCVar11 + 6;
          puVar5 = puVar5 + 0xc;
          iVar3 = iVar3 + 1;
          iVar13 = iVar13 + 0x18;
        } while (iVar3 < 0x40);
        if (0 < DAT_8003df88) {
          printf("%s: not found\n",local_40);
        }
      }
    }
  }
  else {
    if (0 < DAT_8003df88) {
      printf("%s: path level (%d) error\n",name,iVar13);
      pCVar4 = (CdlFILE *)ISO9660_OBJ_2B8();
      return pCVar4;
    }
  }
  return (CdlFILE *)0x0;
}



undefined4 ISO9660_OBJ_10C(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined *unaff_s1;
  int iVar8;
  int unaff_s2;
  undefined4 *unaff_s5;
  char in_stack_00000010;
  
  if (unaff_s2 < 8) {
    if (in_stack_00000010 == '\0') {
      if (0 < DAT_8003df88) {
        uVar1 = ISO9660_OBJ_2AC("%s: dir was not found\n");
        return uVar1;
      }
    }
    else {
      *unaff_s1 = 0;
      iVar2 = CD_cachefile();
      if (iVar2 == 0) {
        if (0 < DAT_8003df88) {
          printf("CdSearchFile: disc error\n");
          uVar1 = ISO9660_OBJ_2B8();
          return uVar1;
        }
      }
      else {
        iVar2 = 0;
        if (1 < DAT_8003df88) {
          printf("CdSearchFile: searching %s...\n",&stack0x00000010);
        }
        puVar3 = &DAT_80054ea4;
        puVar7 = (undefined4 *)&DAT_80054e9c;
        iVar8 = 0;
        do {
          if (*(char *)((int)&DAT_80054ea4 + iVar8) == '\0') break;
          iVar4 = _cmp(puVar3,&stack0x00000010);
          if (iVar4 != 0) {
            if (1 < DAT_8003df88) {
              printf("%s:  found\n",&stack0x00000010);
            }
            uVar1 = puVar7[1];
            uVar5 = puVar7[2];
            uVar6 = puVar7[3];
            *unaff_s5 = *puVar7;
            unaff_s5[1] = uVar1;
            unaff_s5[2] = uVar5;
            unaff_s5[3] = uVar6;
            uVar1 = puVar7[5];
            unaff_s5[4] = puVar7[4];
            unaff_s5[5] = uVar1;
            uVar1 = ISO9660_OBJ_2B8();
            return uVar1;
          }
          puVar7 = puVar7 + 6;
          puVar3 = puVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + 0x18;
        } while (iVar2 < 0x40);
        if (0 < DAT_8003df88) {
          printf("%s: not found\n",&stack0x00000010);
        }
      }
    }
  }
  else {
    if (0 < DAT_8003df88) {
      printf("%s: path level (%d) error\n");
      uVar1 = ISO9660_OBJ_2B8();
      return uVar1;
    }
  }
  return 0;
}



undefined4 ISO9660_OBJ_2AC(char *param_1)

{
  printf(param_1);
  return 0;
}



void ISO9660_OBJ_2B8(void)

{
  return;
}



bool _cmp(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,0xc);
  return iVar1 == 0;
}



undefined4 CD_newmedia(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  int iVar7;
  
  puVar5 = (undefined4 *)&DAT_80056a9c;
  iVar2 = cd_read(1,0x10,&DAT_80056a9c);
  if (iVar2 == 1) {
    iVar2 = strncmp(&DAT_80056a9d,"CD001",5);
    uVar4 = DAT_80056b28;
    if (iVar2 == 0) {
      iVar2 = cd_read(1,DAT_80056b28,&DAT_80056a9c);
      if (iVar2 == 1) {
        if (1 < DAT_8003df88) {
          printf("CD_newmedia: sarching dir..\n");
        }
        iVar2 = 0;
        do {
          iVar7 = iVar2;
          if (*(char *)puVar5 == '\0') break;
          (&DAT_800554a4)[iVar2 * 0xb] = *(undefined4 *)((int)puVar5 + 2);
          puVar6 = &DAT_800554a8 + iVar2 * 0x2c;
          bVar1 = *(byte *)((int)puVar5 + 6);
          iVar7 = iVar2 + 1;
          (&DAT_8005549c)[iVar2 * 0xb] = iVar7;
          (&DAT_800554a0)[iVar2 * 0xb] = (uint)bVar1;
          memcpy(puVar6,(uchar *)(puVar5 + 2),(uint)*(byte *)puVar5);
          puVar6[*(byte *)puVar5] = '\0';
          puVar5 = (undefined4 *)((int)puVar5 + (uint)*(byte *)puVar5 + (*(byte *)puVar5 & 1) + 8);
          if (1 < DAT_8003df88) {
            printf("\t%08x,%04x,%04x,%s\n",(&DAT_800554a4)[iVar2 * 0xb],(&DAT_8005549c)[iVar2 * 0xb]
                   ,(&DAT_800554a0)[iVar2 * 0xb],puVar6);
          }
          if (0x7f < iVar7) goto ISO9660_OBJ_588;
          iVar2 = iVar7;
        } while (puVar5 < &DAT_8005729c);
        if (iVar7 < 0x80) {
          (&DAT_800554a0)[iVar7 * 0xb] = 0;
        }
ISO9660_OBJ_588:
        DAT_8003e288 = 0;
        uVar3 = 1;
        if (1 < DAT_8003df88) {
          printf("CD_newmedia: %d dir entries found\n",iVar7);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
        if (0 < DAT_8003df88) {
          printf("CD_newmedia: Read error (PT:%08x)\n",uVar4);
          uVar4 = ISO9660_OBJ_5B8();
          return uVar4;
        }
      }
    }
    else {
      uVar3 = 0;
      if (0 < DAT_8003df88) {
        printf("CD_newmedia: Disc format error in cd_read(PVD)\n");
        uVar4 = ISO9660_OBJ_5B8();
        return uVar4;
      }
    }
  }
  else {
    uVar3 = 0;
    if (0 < DAT_8003df88) {
      printf("CD_newmedia: Read error in cd_read(PVD)\n");
      uVar4 = ISO9660_OBJ_5B8();
      return uVar4;
    }
  }
  return uVar3;
}



void ISO9660_OBJ_5B8(void)

{
  return;
}



undefined4 CD_searchdir(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  pcVar5 = &DAT_800554a8;
  iVar4 = 0;
  while( true ) {
    if (*(int *)((int)&DAT_800554a0 + iVar4) == 0) {
      return 0xffffffff;
    }
    if ((*(int *)((int)&DAT_800554a0 + iVar4) == param_1) &&
       (iVar1 = strcmp(param_2,pcVar5), iVar1 == 0)) break;
    pcVar5 = pcVar5 + 0x2c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (0x7f < iVar3) {
      return 0xffffffff;
    }
  }
  uVar2 = ISO9660_OBJ_664();
  return uVar2;
}



void ISO9660_OBJ_664(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80022158)
// WARNING: Removing unreachable block (ram,0x80022160)
// WARNING: Removing unreachable block (ram,0x80022178)

undefined4 CD_cachefile(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != DAT_8003e288) {
    iVar1 = cd_read(1,*(undefined4 *)(&DAT_80055478 + param_1 * 0x2c),&DAT_80056a9c);
    if (iVar1 != 1) {
      if (DAT_8003df88 < 1) {
        return 0xffffffff;
      }
      printf("CD_cachefile: dir not found\n");
      uVar2 = ISO9660_OBJ_900();
      return uVar2;
    }
    if (1 < DAT_8003df88) {
      printf("CD_cachefile: searching...\n");
    }
    if (DAT_80056a9c != '\0') {
      CdIntToPos(DAT_80056a9e,(CdlLOC *)&DAT_80054e9c);
      DAT_80054ea0 = DAT_80056aa6;
      DAT_80054ea4 = 0x2e;
      uVar2 = ISO9660_OBJ_820();
      return uVar2;
    }
    DAT_80054ea4 = DAT_80054ea4 & 0xff00;
    if (DAT_8003df88 < 2) {
      DAT_8003e288 = param_1;
      return 1;
    }
    DAT_8003e288 = param_1;
    printf("CD_cachefile: %d files found\n",0);
  }
                    // WARNING: Read-only address (ram,0x80056a9c) is written
                    // WARNING: Read-only address (ram,0x80056a9e) is written
                    // WARNING: Read-only address (ram,0x80056aa6) is written
  return 1;
}



undefined4 ISO9660_OBJ_804(uchar *param_1)

{
  undefined4 uVar1;
  byte *unaff_s0;
  byte *pbVar2;
  int unaff_s1;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  
  memcpy(param_1,unaff_s0 + 0x21,(uint)unaff_s0[0x20]);
  *(undefined *)(unaff_s3 + (uint)unaff_s0[0x20]) = 0;
  if (1 < DAT_8003df88) {
    printf("\t(%02x:%02x:%02x) %8d %s\n",(uint)(byte)(&DAT_80054e9c)[unaff_s1],
           (uint)(byte)(&DAT_80054e9d)[unaff_s1],(uint)(byte)(&DAT_80054e9e)[unaff_s1]);
  }
  iVar3 = unaff_s2 + 1;
  pbVar2 = unaff_s0 + *unaff_s0;
  if (((0x3f < iVar3) || (&UNK_8005729b < pbVar2)) || (*pbVar2 == 0)) {
    DAT_8003e288 = unaff_s6;
    if (iVar3 < 0x40) {
      *(undefined *)(&DAT_80054ea4 + iVar3 * 0xc) = 0;
    }
    if (1 < DAT_8003df88) {
      printf("CD_cachefile: %d files found\n",iVar3);
    }
    return 1;
  }
  CdIntToPos(*(int *)(pbVar2 + 2),(CdlLOC *)(unaff_s4 + 0x18));
  *(undefined4 *)(unaff_s1 + unaff_s5 + 0x1c) = *(undefined4 *)(pbVar2 + 10);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_s5 + 8) = 0x2e;
    uVar1 = ISO9660_OBJ_820();
    return uVar1;
  }
  if (iVar3 != 1) {
    uVar1 = ISO9660_OBJ_804();
    return uVar1;
  }
  *(undefined2 *)(unaff_s5 + 0x20) = 0x2e2e;
  *(undefined *)(unaff_s5 + 0x22) = 0;
  uVar1 = ISO9660_OBJ_820(unaff_s3 + 0x18);
  return uVar1;
}



undefined4 ISO9660_OBJ_820(void)

{
  undefined4 uVar1;
  byte *unaff_s0;
  byte *pbVar2;
  int unaff_s1;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  
  if (1 < DAT_8003df88) {
    printf("\t(%02x:%02x:%02x) %8d %s\n",(uint)(byte)(&DAT_80054e9c)[unaff_s1],
           (uint)(byte)(&DAT_80054e9d)[unaff_s1],(uint)(byte)(&DAT_80054e9e)[unaff_s1]);
  }
  iVar3 = unaff_s2 + 1;
  pbVar2 = unaff_s0 + *unaff_s0;
  if (((0x3f < iVar3) || (&UNK_8005729b < pbVar2)) || (*pbVar2 == 0)) {
    DAT_8003e288 = unaff_s6;
    if (iVar3 < 0x40) {
      *(undefined *)(&DAT_80054ea4 + iVar3 * 0xc) = 0;
    }
    if (1 < DAT_8003df88) {
      printf("CD_cachefile: %d files found\n",iVar3);
    }
    return 1;
  }
  CdIntToPos(*(int *)(pbVar2 + 2),(CdlLOC *)(unaff_s4 + 0x18));
  *(undefined4 *)(unaff_s1 + unaff_s5 + 0x1c) = *(undefined4 *)(pbVar2 + 10);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_s5 + 8) = 0x2e;
    uVar1 = ISO9660_OBJ_820();
    return uVar1;
  }
  if (iVar3 != 1) {
    uVar1 = ISO9660_OBJ_804();
    return uVar1;
  }
  *(undefined2 *)(unaff_s5 + 0x20) = 0x2e2e;
  *(undefined *)(unaff_s5 + 0x22) = 0;
  uVar1 = ISO9660_OBJ_820(unaff_s3 + 0x18);
  return uVar1;
}



void ISO9660_OBJ_900(void)

{
  return;
}



bool cd_read(int param_1,int param_2,u_long *param_3)

{
  int iVar1;
  CdlLOC aCStack24 [2];
  
  CdIntToPos(param_2,aCStack24);
  CdControl('\x02',&aCStack24[0].minute,(u_char *)0x0);
  CdRead(param_1,param_3,0x80);
  iVar1 = CdReadSync(0,(u_char *)0x0);
  return iVar1 == 0;
}



void * memcpy(uchar *param_1,uchar *param_2,int param_3)

{
  byte bVar1;
  void *in_v0;
  int iVar2;
  
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      bVar1 = *param_2;
      in_v0 = (void *)(uint)bVar1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
      *param_1 = bVar1;
      param_1 = param_1 + 1;
    } while (iVar2 != -1);
  }
  return in_v0;
}



void cb_read(char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  CdlLOC aCStack32 [4];
  
  if (param_1 == '\x01') {
    if (0 < DAT_8003e2a8) {
      if (DAT_8003e2a4 == 0x200) {
        CdGetSector(aCStack32,3);
        iVar1 = CdPosToInt(aCStack32);
        if (iVar1 != DAT_8003e2b4) {
          std_out_puts("CdRead: sector error\n");
          DAT_8003e2a8 = -1;
        }
      }
      CdGetSector(DAT_8003e29c,DAT_8003e2a4);
      DAT_8003e29c = (void *)(DAT_8003e2a4 * 4 + (int)DAT_8003e29c);
      DAT_8003e2a8 = DAT_8003e2a8 + -1;
      DAT_8003e2b4 = DAT_8003e2b4 + 1;
      CDREAD_OBJ_114();
      return;
    }
  }
  else {
    DAT_8003e2a8 = -1;
  }
  DAT_8003e2ac = VSync(-1);
  if (DAT_8003e2a8 < 0) {
    cd_read_retry(1);
  }
  iVar1 = VSync(-1);
  if (DAT_8003e2b0 + 0x4b0 < iVar1) {
    DAT_8003e2a8 = -1;
  }
  if ((DAT_8003e2a8 == 0) || (iVar1 = VSync(-1), DAT_8003e2b0 + 0x4b0 < iVar1)) {
    CdSyncCallback(DAT_8003e2b8);
    CdReadyCallback(DAT_8003e2bc);
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    if (DAT_8003e290 != (code *)0x0) {
      uVar2 = 5;
      if (DAT_8003e2a8 == 0) {
        uVar2 = 2;
      }
      (*DAT_8003e290)(uVar2,param_2);
    }
  }
  return;
}



void CDREAD_OBJ_114(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_8003e2ac = VSync(-1);
  if (DAT_8003e2a8 < 0) {
    cd_read_retry(1);
  }
  iVar1 = VSync(-1);
  if (DAT_8003e2b0 + 0x4b0 < iVar1) {
    DAT_8003e2a8 = -1;
  }
  if ((DAT_8003e2a8 == 0) || (iVar1 = VSync(-1), DAT_8003e2b0 + 0x4b0 < iVar1)) {
    CdSyncCallback(DAT_8003e2b8);
    CdReadyCallback(DAT_8003e2bc);
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    if (DAT_8003e290 != (code *)0x0) {
      uVar2 = 5;
      if (DAT_8003e2a8 == 0) {
        uVar2 = 2;
      }
      (*DAT_8003e290)(uVar2);
    }
  }
  return;
}



undefined4 cd_read_retry(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  CdlLOC *pCVar3;
  int iVar4;
  uint uVar5;
  u_char local_18 [8];
  
  CdSyncCallback((CdlCB)0x0);
  CdReadyCallback((CdlCB)0x0);
  uVar1 = CdStatus();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      std_out_puts("CdRead: Shell open...\n");
    }
    CdControlF('\x01',(u_char *)0x0);
    DAT_8003e2b0 = VSync(-1);
    DAT_8003e2a8 = 0xffffffff;
    uVar2 = CDREAD_OBJ_3DC();
    return uVar2;
  }
  if (param_1 != 0) {
    std_out_puts("CdRead: retry...\n");
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    pCVar3 = CdLastPos();
    iVar4 = CdControl('\x02',&pCVar3->minute,(u_char *)0x0);
    if (iVar4 == 0) {
      DAT_8003e2a8 = 0xffffffff;
      uVar2 = CDREAD_OBJ_3E4();
      return uVar2;
    }
  }
  CdFlush();
  local_18[0] = (u_char)DAT_8003e2a0;
  uVar5 = DAT_8003e2a0 & 0xff;
  uVar1 = CdMode();
  if (((uVar5 != uVar1) || (param_1 != 0)) &&
     (iVar4 = CdControl('\x0e',local_18,(u_char *)0x0), iVar4 == 0)) {
    DAT_8003e2a8 = 0xffffffff;
    uVar2 = CDREAD_OBJ_3DC();
    return uVar2;
  }
  pCVar3 = CdLastPos();
  DAT_8003e2b4 = CdPosToInt(pCVar3);
  CdReadyCallback(cb_read);
  DAT_8003e29c = DAT_8003e298;
  CdControlF('\x06',(u_char *)0x0);
  DAT_8003e2a8 = DAT_8003e294;
  DAT_8003e2ac = VSync(-1);
  return DAT_8003e2a8;
}



undefined4 CDREAD_OBJ_3DC(void)

{
  return DAT_8003e2a8;
}



void CDREAD_OBJ_3E4(void)

{
  return;
}



int CdRead(int sectors,u_long *buf,int mode)

{
  int iVar1;
  
  DAT_8003e2a0 = mode;
  if ((mode & 0x30U) == 0) {
    DAT_8003e2a4 = 0x200;
    iVar1 = CDREAD_OBJ_468();
    return iVar1;
  }
  if ((mode & 0x30U) != 0x20) {
    iVar1 = CDREAD_OBJ_45C();
    return iVar1;
  }
  DAT_8003e2a4 = 0x249;
  iVar1 = CDREAD_OBJ_468();
  return iVar1;
}



bool CDREAD_OBJ_45C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_v0;
  uint uVar1;
  int iVar2;
  
  DAT_8003e2a0 = DAT_8003e2a0 | 0x20;
  DAT_8003e294 = param_4;
  DAT_8003e298 = param_2;
  DAT_8003e2a4 = in_v0;
  DAT_8003e2b8 = CdSyncCallback((CdlCB)0x0);
  DAT_8003e2bc = CdReadyCallback((CdlCB)0x0);
  DAT_8003e2b0 = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = cd_read_retry(0);
  return 0 < iVar2;
}



bool CDREAD_OBJ_468(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  DAT_8003e2a0 = DAT_8003e2a0 | 0x20;
  DAT_8003e294 = param_4;
  DAT_8003e298 = param_2;
  DAT_8003e2b8 = CdSyncCallback((CdlCB)0x0);
  DAT_8003e2bc = CdReadyCallback((CdlCB)0x0);
  DAT_8003e2b0 = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = cd_read_retry(0);
  return 0 < iVar2;
}



int CdReadSync(int mode,u_char *result)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = VSync(-1);
    iVar2 = -1;
    if ((iVar1 <= DAT_8003e2b0 + 0x4b0) &&
       ((DAT_8003e2a8 < 0 || (iVar1 = VSync(-1), iVar2 = DAT_8003e2a8, DAT_8003e2ac + 0x3c < iVar1))
       )) break;
    if ((mode != 0) || (iVar2 < 1)) {
      CdReady(1,result);
      return iVar2;
    }
  }
  cd_read_retry(1);
  iVar2 = CDREAD_OBJ_594();
  return iVar2;
}



int CDREAD_OBJ_594(void)

{
  int iVar1;
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  u_char *unaff_s3;
  
  while( true ) {
    do {
      if ((unaff_s2 != 0) || (unaff_s0 < 1)) {
        CdReady(1,unaff_s3);
        return unaff_s0;
      }
      iVar1 = VSync(-1);
      unaff_s0 = -1;
    } while (*unaff_s1 + 0x4b0 < iVar1);
    if ((unaff_s1[-2] < 0) || (iVar1 = VSync(-1), unaff_s1[-1] + 0x3c < iVar1)) break;
    unaff_s0 = unaff_s1[-2];
  }
  cd_read_retry(1);
  iVar1 = CDREAD_OBJ_594();
  return iVar1;
}



CdlCB CdReadCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_8003e290;
  DAT_8003e290 = func;
  return pCVar1;
}



int CdRead2(long mode)

{
  int iVar1;
  u_char local_10 [8];
  
  local_10[0] = (u_char)mode;
  CdControl('\x0e',local_10,(u_char *)0x0);
  if ((mode & 0x100U) != 0) {
    if ((mode & 0x20U) != 0) {
      DAT_800588cc = 0;
      iVar1 = CDREAD2_OBJ_50();
      return iVar1;
    }
    DAT_800588cc = 1;
    CdDataCallback(data_ready_callback);
    CdReadyCallback(StCdInterrupt2);
  }
  iVar1 = CdControl('\x1b',(u_char *)0x0,(u_char *)0x0);
  return iVar1;
}



void CDREAD2_OBJ_50(void)

{
  CdDataCallback(data_ready_callback);
  CdReadyCallback(StCdInterrupt2);
  CdControl('\x1b',(u_char *)0x0,(u_char *)0x0);
  return;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void StCdInterrupt2(void)

{
  StCdInterrupt();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void StClearRing(void)

{
  DAT_80065498 = 0;
  DAT_80065494 = 0;
  DAT_80065490 = 0;
  DAT_80063844 = 0;
  init_ring_status(0,DAT_80065ed8);
  DAT_80058320 = 0;
  DAT_800588c4 = 0;
  DAT_8005896c = 0;
  return;
}



void StUnSetRing(void)

{
  EnterCriticalSection();
  CdDataCallback((func *)0x0);
  CdReadyCallback((CdlCB)0x0);
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  ExitCriticalSection();
  return;
}



void data_ready_callback(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(DAT_80065494 * 0x20 + DAT_80065dcc);
  *puVar1 = 2;
  DAT_8005729c = *(undefined4 *)(puVar1 + 0xe);
  DAT_800572a0 = *(undefined4 *)(puVar1 + 4);
  DAT_80065494 = DAT_80065490;
  if (DAT_80058900 != (code *)0x0) {
    (*DAT_80058900)();
  }
  DAT_80063844 = 0;
  return;
}



int StGetBackloc(CdlLOC *loc)

{
  int iVar1;
  
  if (DAT_800588cc == 0) {
    iVar1 = CdPosToInt((CdlLOC *)&DAT_8005729c);
    CdIntToPos(iVar1 + 1,loc);
    iVar1 = C_004_OBJ_DC();
    return iVar1;
  }
  return -1;
}



void C_004_OBJ_DC(void)

{
  return;
}



void StSetStream(u_long mode,u_long start_frame,u_long end_frame,func1 *func1,func2 *func2)

{
  FUN_80022dec(1);
  DAT_80058320 = 0;
  DAT_800588c4 = 0;
  DAT_800588c8 = mode & 1;
  DAT_80058900 = func1;
  DAT_80058904 = func2;
  DAT_800591a8 = 0;
  DAT_80063700 = 0;
  DAT_80065db4 = 0;
  return;
}



u_long StFreeRing(u_long *base)

{
  int iVar1;
  short *psVar2;
  u_long uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = ((int)base - (DAT_80065ed8 * 0x20 + DAT_80065dcc) >> 2) / 0x1f8;
  psVar2 = (short *)(iVar1 * 0x20 + DAT_80065dcc);
  if (*psVar2 == 4) {
    iVar4 = (int)psVar2[3];
    iVar6 = 0;
    iVar5 = iVar1;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
        *(undefined2 *)(iVar5 * 0x20 + DAT_80065dcc) = 0;
        iVar5 = iVar6 + iVar1;
      } while (iVar6 < iVar4);
    }
    DAT_80065498 = iVar6 + iVar1;
    return 0;
  }
  uVar3 = C_007_OBJ_B0();
  return uVar3;
}



void C_007_OBJ_B0(void)

{
  return;
}



void init_ring_status(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 * 0x20 + DAT_80065dcc) = 0;
    } while (uVar2 < param_2);
  }
  return;
}



u_long StGetNext(u_long **addr,u_long **header)

{
  short sVar1;
  u_long *puVar2;
  
  puVar2 = (u_long *)(DAT_80065498 * 0x20 + DAT_80065dcc);
  if (*(short *)puVar2 == 1) {
    DAT_80065498 = 0;
    if (DAT_80065dbc != 0) {
      *(short *)puVar2 = 0;
    }
    puVar2 = (u_long *)(DAT_80065498 * 0x20 + DAT_80065dcc);
  }
  sVar1 = *(short *)puVar2;
  if (sVar1 == 2) {
    *(short *)puVar2 = 4;
    *addr = (u_long *)(DAT_80065ed8 * 0x20 + DAT_80065dcc + DAT_80065498 * 0x7e0);
    *header = puVar2;
  }
  return (uint)(sVar1 != 2);
}



// Possible C_010.OBJ/StSetMask

void FUN_80022dec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_800591ac = param_2;
  DAT_80065dbc = param_3;
  DAT_80065dc4 = param_1;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void StCdInterrupt(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 uStack20;
  byte local_10 [8];
  
  if (DAT_80063844 != 1) {
    if ((DAT_800588c8 != 0) && ((DMA_MDEC_OUT_CHCR & 0x1000000) != 0)) {
      DAT_8005896c = 1;
      if (DAT_80065db4 != 0) {
        DAT_80063c7c = DAT_80063c7c + 1;
      }
      DAT_8003e388 = 1;
      C_011_OBJ_960();
      return;
    }
    iVar1 = CdReady(1,local_10);
    if (iVar1 != 5) {
      if ((local_10[0] & 4) != 0) {
        DAT_8003e388 = 3;
        C_011_OBJ_960();
        return;
      }
      DAT_800572a4 = DAT_80065dcc + DAT_80065490 * 8;
      if (*(short *)DAT_800572a4 != 0) {
        if (DAT_80065db4 != 0) {
          DAT_80063c7c = DAT_80063c7c + 1;
        }
        DAT_8003e388 = 4;
        C_011_OBJ_960();
        return;
      }
      CDROM_REG0 = 0;
      CDROM_REG3 = 0x80;
      CDROM_DELAY = 0x20943;
      COMMON_DELAY = 0x1323;
      if (DAT_800588cc == 0) {
        puVar3 = &local_18;
        do {
          *(byte *)puVar3 = CDROM_REG2;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (puVar3 < &uStack20);
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
      }
      if (DAT_80065db4 != 0) {
        mem2mem(DAT_800572a4,DAT_80063c7c * 0x800 + DAT_80065db4,8,0);
        C_011_OBJ_270();
        return;
      }
      dma_execute(3,DAT_800572a4,0,8,0x11000000,0,0);
      do {
      } while ((DMA_CDROM_CHCR & 0x1000000) != 0);
      DAT_800572a4[7] = local_18;
      CDROM_DELAY = 0x20843;
      COMMON_DELAY = 0x1325;
      if ((DAT_80065dc4 == 1) && (DAT_800591ac != 0)) {
        if (DAT_800591ac != *(ushort *)(DAT_800572a4 + 2)) {
          *(short *)DAT_800572a4 = 0;
          if (DAT_80065db4 == 0) {
            return;
          }
          DAT_80063c7c = DAT_80063c7c + 1;
          C_011_OBJ_960();
          return;
        }
        DAT_80065dc4 = 0;
      }
      if ((*(short *)DAT_800572a4 != 0x160) ||
         ((*(ushort *)((int)DAT_800572a4 + 2) >> 10 & 0x1f) != DAT_80063700)) {
        if (DAT_80065db4 != 0) {
          DAT_80063c7c = 0;
          C_011_OBJ_3D0();
          return;
        }
        DAT_8003e388 = 5;
        *(short *)DAT_800572a4 = 0;
        C_011_OBJ_960();
        return;
      }
      if (((int)DAT_800588c4 != (uint)*(ushort *)(DAT_800572a4 + 1)) ||
         ((DAT_80058320 != 0 && (DAT_80058320 != *(ushort *)(DAT_800572a4 + 2))))) {
        DAT_80058320 = 0;
        DAT_800588c4 = 0;
        init_ring_status(DAT_80065494,DAT_80065490 - DAT_80065494);
        DAT_80065490 = DAT_80065494;
        *(short *)DAT_800572a4 = 0;
        if (DAT_80065db4 != 0) {
          DAT_80063c7c = DAT_80063c7c + 1;
        }
        DAT_8003e388 = 6;
        C_011_OBJ_960();
        return;
      }
      if (*(short *)(DAT_800572a4 + 1) == 0) {
        DAT_80058320 = (uint)*(ushort *)(DAT_800572a4 + 2);
        DAT_800588c4 = 0;
        if ((DAT_80065dbc != 0) && (DAT_80065dbc <= DAT_80058320)) {
          DAT_80058320 = 0;
          DAT_800588c4 = 0;
          init_ring_status(DAT_80065494,DAT_80065490 - DAT_80065494);
          DAT_80065490 = DAT_80065494;
          *(short *)DAT_800572a4 = 0;
          DAT_80065dc4 = 1;
          if (DAT_80058904 != (code *)0x0) {
            (*DAT_80058904)();
          }
          if (DAT_80065db4 != 0) {
            DAT_80063c7c = DAT_80063c7c + 1;
          }
          DAT_8003e388 = 7;
          C_011_OBJ_960();
          return;
        }
        if ((DAT_80065ed8 - DAT_80065490) - 1U < (uint)*(ushort *)((int)DAT_800572a4 + 6)) {
          if (DAT_80065dbc == 0) {
            *(short *)DAT_800572a4 = 1;
            DAT_80065dc4 = 1;
            if (DAT_80058904 != (code *)0x0) {
              (*DAT_80058904)();
            }
            if (DAT_80065db4 != 0) {
              DAT_80063c7c = DAT_80063c7c + 1;
            }
            DAT_8003e388 = 8;
            C_011_OBJ_960();
            return;
          }
          if (*(short *)DAT_80065dcc != 0) {
            *(short *)DAT_800572a4 = 0;
            if (DAT_80065db4 != 0) {
              DAT_80063c7c = DAT_80063c7c + 1;
            }
            DAT_8003e388 = 9;
            C_011_OBJ_960();
            return;
          }
          *(short *)DAT_800572a4 = 1;
          uVar4 = 0;
          DAT_80065490 = 0;
          puVar3 = DAT_80065dcc;
          do {
            uVar2 = *DAT_800572a4;
            DAT_800572a4 = DAT_800572a4 + 1;
            uVar4 = uVar4 + 1;
            *puVar3 = uVar2;
            puVar3 = puVar3 + 1;
          } while (uVar4 < 8);
          DAT_800572a4 = DAT_80065dcc;
        }
        DAT_80065494 = DAT_80065490;
      }
      DAT_8003e388 = 10;
      DAT_800588c4 = DAT_800588c4 + 1;
      DAT_80065dc8 = DAT_80065dcc + DAT_80065ed8 * 8 + DAT_80065490 * 0x1f8;
      if (DAT_800588c8 != 0) {
        CDROM_DELAY = 0x20943;
        COMMON_DELAY = 0x1323;
        C_011_OBJ_7BC();
        return;
      }
      CDROM_DELAY = 0x21020843;
      if (*(ushort *)((int)DAT_800572a4 + 6) - 1 == (uint)*(ushort *)(DAT_800572a4 + 1)) {
        DAT_80063844 = 1;
        if (DAT_80065db4 != 0) {
          mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,1);
          DAT_80063c7c = DAT_80063c7c + 1;
          C_011_OBJ_85C();
          return;
        }
        dma_execute(3,DAT_80065dc8,0,0x1f8,0x11400100,1,0);
        DAT_800588c4 = 0;
        DAT_80058320 = 0;
        DAT_80063700 = DAT_800591a8;
        C_011_OBJ_900();
        return;
      }
      if (DAT_80065db4 != 0) {
        mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,0);
        DAT_80063c7c = DAT_80063c7c + 1;
        C_011_OBJ_900();
        return;
      }
      dma_execute(3,DAT_80065dc8,0,0x1f8,0x11400100,0,0);
      COMMON_DELAY = 0x1325;
      *(short *)DAT_800572a4 = 3;
      DAT_80065490 = DAT_80065490 + 1;
      if ((DAT_80065db4 != 0) && (DAT_80063844 != 0)) {
        data_ready_callback();
      }
    }
  }
  return;
}



void C_011_OBJ_270(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000028;
  
  do {
  } while ((DMA_CDROM_CHCR & 0x1000000) != 0);
  DAT_800572a4[7] = in_stack_00000028;
  CDROM_DELAY = 0x20843;
  COMMON_DELAY = 0x1325;
  if ((DAT_80065dc4 == 1) && (DAT_800591ac != 0)) {
    if (DAT_800591ac != *(ushort *)(DAT_800572a4 + 2)) {
      *(short *)DAT_800572a4 = 0;
      if (DAT_80065db4 == 0) {
        return;
      }
      DAT_80063c7c = DAT_80063c7c + 1;
      C_011_OBJ_960();
      return;
    }
    DAT_80065dc4 = 0;
  }
  if ((*(short *)DAT_800572a4 != 0x160) ||
     ((*(ushort *)((int)DAT_800572a4 + 2) >> 10 & 0x1f) != DAT_80063700)) {
    if (DAT_80065db4 != 0) {
      DAT_80063c7c = 0;
      C_011_OBJ_3D0();
      return;
    }
    DAT_8003e388 = 5;
    *(short *)DAT_800572a4 = 0;
    C_011_OBJ_960();
    return;
  }
  if (((int)DAT_800588c4 != (uint)*(ushort *)(DAT_800572a4 + 1)) ||
     ((DAT_80058320 != 0 && (DAT_80058320 != *(ushort *)(DAT_800572a4 + 2))))) {
    DAT_80058320 = 0;
    DAT_800588c4 = 0;
    init_ring_status(DAT_80065494,DAT_80065490 - DAT_80065494);
    DAT_80065490 = DAT_80065494;
    *(short *)DAT_800572a4 = 0;
    if (DAT_80065db4 != 0) {
      DAT_80063c7c = DAT_80063c7c + 1;
    }
    DAT_8003e388 = 6;
    C_011_OBJ_960();
    return;
  }
  if (*(short *)(DAT_800572a4 + 1) == 0) {
    DAT_80058320 = (uint)*(ushort *)(DAT_800572a4 + 2);
    DAT_800588c4 = 0;
    if ((DAT_80065dbc != 0) && (DAT_80065dbc <= DAT_80058320)) {
      DAT_80058320 = 0;
      DAT_800588c4 = 0;
      init_ring_status(DAT_80065494,DAT_80065490 - DAT_80065494);
      DAT_80065490 = DAT_80065494;
      *(short *)DAT_800572a4 = 0;
      DAT_80065dc4 = 1;
      if (DAT_80058904 != (code *)0x0) {
        (*DAT_80058904)();
      }
      if (DAT_80065db4 != 0) {
        DAT_80063c7c = DAT_80063c7c + 1;
      }
      DAT_8003e388 = 7;
      C_011_OBJ_960();
      return;
    }
    if ((DAT_80065ed8 - DAT_80065490) - 1U < (uint)*(ushort *)((int)DAT_800572a4 + 6)) {
      if (DAT_80065dbc == 0) {
        *(short *)DAT_800572a4 = 1;
        DAT_80065dc4 = 1;
        if (DAT_80058904 != (code *)0x0) {
          (*DAT_80058904)();
        }
        if (DAT_80065db4 != 0) {
          DAT_80063c7c = DAT_80063c7c + 1;
        }
        DAT_8003e388 = 8;
        C_011_OBJ_960();
        return;
      }
      if (*(short *)DAT_80065dcc != 0) {
        *(short *)DAT_800572a4 = 0;
        if (DAT_80065db4 != 0) {
          DAT_80063c7c = DAT_80063c7c + 1;
        }
        DAT_8003e388 = 9;
        C_011_OBJ_960();
        return;
      }
      *(short *)DAT_800572a4 = 1;
      uVar2 = 0;
      DAT_80065490 = 0;
      puVar3 = DAT_80065dcc;
      do {
        uVar1 = *DAT_800572a4;
        DAT_800572a4 = DAT_800572a4 + 1;
        uVar2 = uVar2 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < 8);
      DAT_800572a4 = DAT_80065dcc;
    }
    DAT_80065494 = DAT_80065490;
  }
  DAT_8003e388 = 10;
  DAT_800588c4 = DAT_800588c4 + 1;
  DAT_80065dc8 = DAT_80065dcc + DAT_80065ed8 * 8 + DAT_80065490 * 0x1f8;
  if (DAT_800588c8 != 0) {
    CDROM_DELAY = 0x20943;
    COMMON_DELAY = 0x1323;
    C_011_OBJ_7BC();
    return;
  }
  CDROM_DELAY = 0x21020843;
  if (*(ushort *)((int)DAT_800572a4 + 6) - 1 != (uint)*(ushort *)(DAT_800572a4 + 1)) {
    if (DAT_80065db4 == 0) {
      dma_execute(3,DAT_80065dc8,0,0x1f8);
      COMMON_DELAY = 0x1325;
      *(short *)DAT_800572a4 = 3;
      DAT_80065490 = DAT_80065490 + 1;
      if ((DAT_80065db4 != 0) && (DAT_80063844 != 0)) {
        data_ready_callback();
      }
      return;
    }
    mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,0);
    DAT_80063c7c = DAT_80063c7c + 1;
    C_011_OBJ_900();
    return;
  }
  DAT_80063844 = 1;
  if (DAT_80065db4 != 0) {
    mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,1);
    DAT_80063c7c = DAT_80063c7c + 1;
    C_011_OBJ_85C();
    return;
  }
  dma_execute(3,DAT_80065dc8,0,0x1f8);
  DAT_800588c4 = 0;
  DAT_80058320 = 0;
  DAT_80063700 = DAT_800591a8;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_3D0(void)

{
  DAT_8003e388 = 5;
  *DAT_800572a4 = 0;
  C_011_OBJ_960();
  return;
}



void C_011_OBJ_7BC(void)

{
  if ((ushort)DAT_800572a4[3] - 1 != (uint)(ushort)DAT_800572a4[2]) {
    if (DAT_80065db4 != 0) {
      mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,0);
      DAT_80063c7c = DAT_80063c7c + 1;
      C_011_OBJ_900();
      return;
    }
    dma_execute(3,DAT_80065dc8,0,0x1f8);
    COMMON_DELAY = 0x1325;
    *DAT_800572a4 = 3;
    DAT_80065490 = DAT_80065490 + 1;
    if ((DAT_80065db4 != 0) && (DAT_80063844 != 0)) {
      data_ready_callback();
    }
    return;
  }
  DAT_80063844 = 1;
  if (DAT_80065db4 != 0) {
    mem2mem(DAT_80065dc8,DAT_80063c7c * 0x800 + DAT_80065db4 + 0x20,0x1f8,1);
    DAT_80063c7c = DAT_80063c7c + 1;
    C_011_OBJ_85C();
    return;
  }
  dma_execute(3,DAT_80065dc8,0,0x1f8);
  DAT_800588c4 = 0;
  DAT_80058320 = 0;
  DAT_80063700 = DAT_800591a8;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_85C(void)

{
  DAT_800588c4 = 0;
  DAT_80058320 = 0;
  DAT_80063700 = DAT_800591a8;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_900(void)

{
  COMMON_DELAY = 0x1325;
  *DAT_800572a4 = 3;
  DAT_80065490 = DAT_80065490 + 1;
  if ((DAT_80065db4 != 0) && (DAT_80063844 != 0)) {
    data_ready_callback();
  }
  return;
}



void C_011_OBJ_960(void)

{
  return;
}



void mem2mem(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void dma_execute(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  while ((uVar1 & 0x1000000) != 0) {
    if (iVar2 == 0x10000) {
      printf("DMA STATUS ERROR %x\n",(&DMA_MDEC_IN_CHCR)[param_1 * 4]);
      C_011_OBJ_A30();
      return;
    }
    iVar2 = iVar2 + 1;
    uVar1 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  }
  uVar1 = 1 << (param_1 & 0x1f);
  if (param_6 != '\x01') {
    DMA_DICR._2_1_ = DMA_DICR._2_1_ & ~(byte)uVar1;
    DMA_DPCR = DMA_DPCR | 1 << (param_1 * 4 + 3 & 0x1f);
    (&DMA_MDEC_IN_MADR)[param_1 * 4] = param_2;
    (&DMA_MDEC_IN_BCR)[param_1 * 4] = param_3 << 0x10 | param_4;
    do {
    } while ((CDROM_REG0 & 0x40) == 0);
    (&DMA_MDEC_IN_CHCR)[param_1 * 4] = param_5;
    return;
  }
  C_011_OBJ_A90(DMA_DICR._2_1_ | uVar1);
  return;
}



void C_011_OBJ_A30(void)

{
  int in_v0;
  uint uVar1;
  uint unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword unaff_s5;
  
  uVar1 = 1 << (unaff_s0 & 0x1f);
  if (in_v0 == 1) {
    C_011_OBJ_A90(DMA_DICR._2_1_ | uVar1);
    return;
  }
  DMA_DICR._2_1_ = DMA_DICR._2_1_ & ~(byte)uVar1;
  DMA_DPCR = DMA_DPCR | 1 << (unaff_s0 * 4 + 3 & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  do {
  } while ((CDROM_REG0 & 0x40) == 0);
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = unaff_s5;
  return;
}



void C_011_OBJ_A90(undefined param_1)

{
  int in_v1;
  int unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword unaff_s5;
  
  *(undefined *)(in_v1 + 2) = param_1;
  DMA_DPCR = DMA_DPCR | 1 << (unaff_s0 * 4 + 3U & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  do {
  } while ((CDROM_REG0 & 0x40) == 0);
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = unaff_s5;
  return;
}



int rsin(int a)

{
  int iVar1;
  
  if (-1 < a) {
    sin_1(a & 0xfff);
    iVar1 = GEO_00_OBJ_2C();
    return iVar1;
  }
  iVar1 = sin_1(-a & 0xfff);
  return -iVar1;
}



void GEO_00_OBJ_2C(void)

{
  return;
}



int sin_1(int param_1)

{
  int iVar1;
  
  if (0x800 < param_1) {
    if (0xc00 < param_1) {
      iVar1 = GEO_00_OBJ_C4();
      return iVar1;
    }
    return -(int)*(short *)(&DAT_8003d390 + param_1 * 2);
  }
  if (param_1 < 0x401) {
    iVar1 = GEO_00_OBJ_C4();
    return iVar1;
  }
  iVar1 = GEO_00_OBJ_C4();
  return iVar1;
}



void GEO_00_OBJ_C4(void)

{
  return;
}



int rcos(int a)

{
  int iVar1;
  uint uVar2;
  
  if (a < 0) {
    a = -a;
  }
  uVar2 = a & 0xfff;
  if (uVar2 < 0x801) {
    if (uVar2 < 0x401) {
      iVar1 = GEO_01_OBJ_98();
      return iVar1;
    }
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  if (0xc00 < uVar2) {
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  return -(int)*(short *)(&DAT_8003e390 + (0xc00 - uVar2) * 2);
}



void GEO_01_OBJ_98(void)

{
  return;
}



// WARNING: Instruction at (ram,0x80023b20) overlaps instruction at (ram,0x80023b1c)
// 

long SquareRoot0(long a)

{
  uint uVar1;
  int iVar2;
  
  setCopReg(2,0xf000,a);
  uVar1 = getCopReg(2,0xf800);
  if (uVar1 != 0x20) {
    uVar1 = uVar1 & 0xfffffffe;
    if ((int)(uVar1 - 0x18) < 0) {
      iVar2 = a >> (0x18 - uVar1 & 0x1f);
    }
    else {
      iVar2 = a << (uVar1 - 0x18 & 0x1f);
    }
    return (uint)((int)*(short *)(&DAT_8003eb94 + (iVar2 + -0x40) * 2) <<
                 ((int)(0x1f - uVar1) >> 1 & 0x1fU)) >> 0xc;
  }
  return 0;
}



MATRIX * MulMatrix2(MATRIX *m0,MATRIX *m1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  setCopControlWord(2,0,*(undefined4 *)m0->m);
  setCopControlWord(2,0x800,*(undefined4 *)(m0->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(m0->m[1] + 1));
  setCopControlWord(2,0x1800,*(undefined4 *)m0->m[2]);
  setCopControlWord(2,0x2000,*(undefined4 *)(m0->m[2] + 2));
  setCopReg(2,0,(uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)m1->m[2]);
  copFunction(2,0x486012);
  uVar2 = getCopReg(2,0x4800);
  iVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  setCopReg(2,0x800,(int)m1->m[2][1]);
  copFunction(2,0x486012);
  iVar5 = getCopReg(2,0x4800);
  uVar6 = getCopReg(2,0x5000);
  iVar7 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)(m1->m[2] + 2));
  copFunction(2,0x486012);
  *(uint *)m1->m = iVar5 << 0x10 | uVar2 & 0xffff;
  *(uint *)m1->m[2] = iVar7 << 0x10 | uVar4 & 0xffff;
  uVar2 = getCopReg(2,0x4800);
  iVar5 = getCopReg(2,0x5000);
  *(uint *)(m1->m + 2) = uVar2 & 0xffff | iVar3 << 0x10;
  *(uint *)(m1->m[1] + 1) = iVar5 << 0x10 | uVar6 & 0xffff;
  uVar1 = getCopReg(2,0xb);
  *(undefined4 *)(m1->m[2] + 2) = uVar1;
  return m1;
}



// Possible MTX_08.OBJ/ScaleMatrix

MATRIX * ScaleMatrix(MATRIX *m,VECTOR *v)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)m->m;
  iVar4 = v->vx;
  iVar5 = v->vy;
  iVar6 = v->vz;
  iVar2 = *(int *)(m->m + 2);
  *(uint *)m->m = (short)iVar1 * iVar4 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar5 >> 0xc) << 0x10;
  iVar1 = *(int *)(m->m[1] + 1);
  *(uint *)(m->m + 2) =
       (short)iVar2 * iVar6 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar4 >> 0xc) << 0x10;
  iVar2 = *(int *)m->m[2];
  *(uint *)(m->m[1] + 1) =
       (short)iVar1 * iVar5 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar6 >> 0xc) << 0x10;
  uVar3 = *(undefined4 *)(m->m[2] + 2);
  *(uint *)m->m[2] =
       (short)iVar2 * iVar4 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar5 >> 0xc) << 0x10;
  *(int *)(m->m[2] + 2) = (short)uVar3 * iVar6 >> 0xc;
  return m;
}



// Possible REG00.OBJ/SetRGBcd

void FUN_80023da8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  setCopReg(2,param_3,*param_1);
  return;
}



long RotTransPers(SVECTOR *_2,long *sxy,long *p,long *flag)

{
  undefined4 in_zero;
  undefined4 in_at;
  int iVar1;
  long lVar2;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  copFunction(2,0x180001);
  lVar2 = getCopReg(2,0xe);
  *sxy = lVar2;
  lVar2 = getCopReg(2,8);
  *p = lVar2;
  lVar2 = getCopControlWord(2,0xf800);
  iVar1 = getCopReg(2,0x9800);
  *flag = lVar2;
  return iVar1 >> 2;
}



// Possible SMP_04.OBJ/RotTrans

void RotTrans(SVECTOR *_2,VECTOR *_3,long *flag)

{
  undefined4 in_zero;
  undefined4 in_at;
  long lVar1;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  copFunction(2,0x480012);
  lVar1 = getCopReg(2,0x19);
  _3->vx = lVar1;
  lVar1 = getCopReg(2,0x1a);
  _3->vy = lVar1;
  lVar1 = getCopReg(2,0x1b);
  _3->vz = lVar1;
  lVar1 = getCopControlWord(2,0xf800);
  *flag = lVar1;
  return;
}



// Possible FGO_01.OBJ/RotMatrix

MATRIX * RotMatrix(SVECTOR *r,MATRIX *m)

{
  short sVar1;
  MATRIX *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  if (r->vx < 0) {
    pMVar2 = (MATRIX *)FGO_01_OBJ_64();
    return pMVar2;
  }
  iVar6 = (int)(short)*(int *)(&DAT_8003ed14 + ((int)r->vx & 0xfffU) * 4);
  iVar3 = *(int *)(&DAT_8003ed14 + ((int)r->vx & 0xfffU) * 4) >> 0x10;
  if (-1 < r->vy) {
    sVar8 = (short)*(int *)(&DAT_8003ed14 + ((int)r->vy & 0xfffU) * 4);
    iVar9 = -(int)sVar8;
    iVar4 = *(int *)(&DAT_8003ed14 + ((int)r->vy & 0xfffU) * 4) >> 0x10;
    sVar1 = r->vz;
    m->m[2] = sVar8;
    m->m[1][2] = (short)(-(iVar4 * iVar6) >> 0xc);
    sVar8 = (short)(iVar4 * iVar3 >> 0xc);
    if (-1 < sVar1) {
      m->m[2][2] = sVar8;
      iVar7 = (int)(short)*(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4);
      iVar5 = *(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
      m->m[0] = (short)(iVar5 * iVar4 >> 0xc);
      m->m[1] = (short)(-(iVar7 * iVar4) >> 0xc);
      iVar4 = iVar5 * iVar9 >> 0xc;
      m->m[1][0] = (short)(iVar7 * iVar3 >> 0xc) - (short)(iVar4 * iVar6 >> 0xc);
      m->m[2][0] = (short)(iVar7 * iVar6 >> 0xc) + (short)(iVar4 * iVar3 >> 0xc);
      iVar9 = iVar7 * iVar9 >> 0xc;
      m->m[1][1] = (short)(iVar5 * iVar3 >> 0xc) + (short)(iVar9 * iVar6 >> 0xc);
      m->m[2][1] = (short)(iVar5 * iVar6 >> 0xc) - (short)(iVar9 * iVar3 >> 0xc);
      return m;
    }
    m->m[2][2] = sVar8;
    pMVar2 = (MATRIX *)FGO_01_OBJ_160();
    return pMVar2;
  }
  pMVar2 = (MATRIX *)FGO_01_OBJ_CC();
  return pMVar2;
}



// Possible FGO_01.OBJ/FGO_01_OBJ_64

void FGO_01_OBJ_64(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int iVar2;
  int iVar3;
  int in_t3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 2) < 0) {
    FGO_01_OBJ_CC();
    return;
  }
  sVar5 = (short)*(int *)(&DAT_8003ed14 + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4);
  iVar7 = -(int)sVar5;
  iVar2 = *(int *)(&DAT_8003ed14 + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4) >> 0x10;
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = sVar5;
  param_2[5] = (short)(-(iVar2 * in_t3) >> 0xc);
  uVar6 = (undefined2)(iVar2 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar6;
    iVar4 = (int)(short)*(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4);
    iVar3 = *(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar3 * iVar2 >> 0xc);
    param_2[1] = (short)(-(iVar4 * iVar2) >> 0xc);
    iVar2 = iVar3 * iVar7 >> 0xc;
    param_2[3] = (short)(iVar4 * in_t0 >> 0xc) - (short)(iVar2 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar4 * in_t3 >> 0xc) + (short)(iVar2 * in_t0 >> 0xc);
    iVar7 = iVar4 * iVar7 >> 0xc;
    param_2[4] = (short)(iVar3 * in_t0 >> 0xc) + (short)(iVar7 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar3 * in_t3 >> 0xc) - (short)(iVar7 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar6;
  FGO_01_OBJ_160();
  return;
}



// Possible FGO_01.OBJ/FGO_01_OBJ_CC

void FGO_01_OBJ_CC(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int in_t1;
  int iVar2;
  int in_t3;
  int in_t4;
  int iVar3;
  undefined2 in_t6;
  undefined2 uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = in_t6;
  param_2[5] = (short)(-(in_t1 * in_t3) >> 0xc);
  uVar4 = (undefined2)(in_t1 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar4;
    iVar3 = (int)(short)*(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8003ed14 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar2 * in_t1 >> 0xc);
    param_2[1] = (short)(-(iVar3 * in_t1) >> 0xc);
    iVar5 = iVar2 * in_t4 >> 0xc;
    param_2[3] = (short)(iVar3 * in_t0 >> 0xc) - (short)(iVar5 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar3 * in_t3 >> 0xc) + (short)(iVar5 * in_t0 >> 0xc);
    iVar3 = iVar3 * in_t4 >> 0xc;
    param_2[4] = (short)(iVar2 * in_t0 >> 0xc) + (short)(iVar3 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar2 * in_t3 >> 0xc) - (short)(iVar3 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar4;
  FGO_01_OBJ_160();
  return;
}



// Possible FGO_01.OBJ/FGO_01_OBJ_160

void FGO_01_OBJ_160(undefined4 param_1,undefined2 *param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  int in_t5;
  int iVar1;
  
  *param_2 = (short)(in_t2 * in_t1 >> 0xc);
  param_2[1] = (short)(-(in_t5 * in_t1) >> 0xc);
  iVar1 = in_t2 * in_t4 >> 0xc;
  param_2[3] = (short)(in_t5 * in_t0 >> 0xc) - (short)(iVar1 * in_t3 >> 0xc);
  param_2[6] = (short)(in_t5 * in_t3 >> 0xc) + (short)(iVar1 * in_t0 >> 0xc);
  iVar1 = in_t5 * in_t4 >> 0xc;
  param_2[4] = (short)(in_t2 * in_t0 >> 0xc) + (short)(iVar1 * in_t3 >> 0xc);
  param_2[7] = (short)(in_t2 * in_t3 >> 0xc) - (short)(iVar1 * in_t0 >> 0xc);
  return;
}



// Possible RATAN.OBJ/ratan2

long ratan2(long y,long x)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  bVar1 = x < 0;
  if (bVar1) {
    x = -x;
  }
  bVar2 = y < 0;
  if (bVar2) {
    y = -y;
  }
  if ((x == 0) && (y == 0)) {
    lVar3 = RATAN_OBJ_178();
    return lVar3;
  }
  if (x <= y) {
    iVar4 = y >> 10;
    if ((x & 0x7fe00000U) != 0) {
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (x == 0x80000000)) {
        trap(0x1800);
      }
      lVar3 = RATAN_OBJ_148(x / iVar4);
      return lVar3;
    }
    if (y == 0) {
      trap(0x1c00);
    }
    if ((y == 0xffffffff) && (x << 10 == -0x80000000)) {
      trap(0x1800);
    }
    iVar4 = 0x400 - *(short *)(&DAT_80042d14 + ((x << 10) / y) * 2);
    if (bVar1) {
      iVar4 = 0x800 - iVar4;
    }
    if (bVar2) {
      iVar4 = -iVar4;
    }
    return iVar4;
  }
  iVar4 = x >> 10;
  if ((y & 0x7fe00000U) != 0) {
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (y == 0x80000000)) {
      trap(0x1800);
    }
    lVar3 = RATAN_OBJ_BC(y / iVar4);
    return lVar3;
  }
  if (x == 0) {
    trap(0x1c00);
  }
  if ((x == 0xffffffff) && ((y & 0x3fffffU) == 0x200000)) {
    trap(0x1800);
  }
  lVar3 = RATAN_OBJ_15C();
  return lVar3;
}



// Possible RATAN.OBJ/RATAN_OBJ_BC

void RATAN_OBJ_BC(void)

{
  RATAN_OBJ_15C();
  return;
}



// Possible RATAN.OBJ/RATAN_OBJ_148

int RATAN_OBJ_148(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v0;
  int iVar1;
  
  iVar1 = 0x400 - *(short *)(&DAT_80042d14 + in_v0);
  if (param_3 != 0) {
    iVar1 = 0x800 - iVar1;
  }
  if (param_4 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



// Possible RATAN.OBJ/RATAN_OBJ_15C

int RATAN_OBJ_15C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v1;
  
  if (param_3 != 0) {
    in_v1 = 0x800 - in_v1;
  }
  if (param_4 != 0) {
    in_v1 = -in_v1;
  }
  return in_v1;
}



// Possible RATAN.OBJ/RATAN_OBJ_178

void RATAN_OBJ_178(void)

{
  return;
}



void GsInitGraph(ushort x,ushort y,ushort intmode,ushort dith,ushort varmmode)

{
  gpu_init(x,y,intmode,dith,varmmode);
  gte_init();
  DAT_80065db0 = 0;
  valiable_init(x,y);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



void gpu_init(short param_1,short param_2,uint param_3,u_char param_4,u_char param_5)

{
  int iVar1;
  
  ResetGraph(-(uint)((param_3 >> 4 & 3) == 3) & 3);
  drawenv.ofs[1] = 0;
  drawenv.ofs[0] = 0;
  drawenv.tw.h = 0;
  drawenv.tw.w = 0;
  drawenv.tw.y = 0;
  drawenv.tw.x = 0;
  drawenv.tpage = 0;
  drawenv.dfe = '\0';
  drawenv.isbg = '\0';
  drawenv.dtd = param_4;
  PutDrawEnv(&drawenv);
  dispenv.disp.x = 0;
  dispenv.disp.y = 0;
  dispenv.screen.x = 0;
  dispenv.screen.y = 0;
  dispenv.screen.w = 0;
  dispenv.screen.h = 0;
  dispenv.disp.w = param_1;
  dispenv.disp.h = param_2;
  iVar1 = FUN_8001f7c0();
  if (iVar1 == 1) {
    dispenv.screen.y = 0x18;
    dispenv.pad0 = '\x01';
  }
  dispenv.isinter = (byte)param_3 & 1;
  DAT_80065dc0 = (ushort)param_3 & 4;
  dispenv.isrgb24 = param_5;
  PutDispEnv(&dispenv);
  return;
}



void GsInitGraph2(u_short x,u_short y,u_short intmode,u_short dith,u_short vrammode)

{
  dispenv.isinter = (byte)intmode & 1;
  DAT_80065dc0 = intmode & 4;
  drawenv.tpage = 0;
  drawenv.dtd = (u_char)dith;
  drawenv.dfe = '\0';
  drawenv.isbg = '\0';
  dispenv.isrgb24 = (u_char)vrammode;
  dispenv.disp.w = x;
  dispenv.disp.h = y;
  valiable_init(x,y);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void valiable_init(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = _DAT_8006371c;
  DAT_80063708 = param_2 & 0xffff;
  DAT_80063704 = param_1 & 0xffff;
  if (DAT_80063704 == 0) {
    trap(0x1c00);
  }
  if ((DAT_80063704 == 0xffffffff) && (DAT_80063708 == 0x20000)) {
    trap(0x1800);
  }
  _DAT_80063710 = 0;
  _DAT_80063718 = 0;
  DAT_80063728 = 0;
  DAT_80063724 = 0;
  DAT_80063720 = 0;
  _DAT_8006370c = 0x1000;
  _DAT_80063714 = 0x1000;
                    // WARNING: Read-only address (ram,0x8006371e) is written
  _DAT_8006371c = CONCAT22(_UNK_8006371e,0x1000);
  DAT_80063a20 = 0x1000;
  DAT_80063a24 = 0;
  DAT_80063a2c = 0;
  DAT_80063a30 = _DAT_8006371c;
  DAT_80063a34 = 0;
  DAT_80063a38 = 0;
  DAT_80063a3c = 0;
  DAT_80059178 = 0;
  DAT_80059180 = 0;
  DAT_80059188 = 0;
  DAT_8005918c = 0;
  DAT_80059190 = 0;
  DAT_80059184 = uVar1 & 0xffff0000;
  DAT_8005917c = 0;
  DAT_80059174 = 0;
  DAT_80063570 = 0;
  DAT_80063574 = 0;
  DAT_80063578 = 0;
  DAT_8006357c = 0;
  DAT_80063584 = 0;
  DAT_80063588 = 0;
  DAT_8006358c = 0;
  DAT_800588ec = 0;
  DAT_800588ee = 0;
  DAT_800588f0 = 0;
  DAT_800588f2 = 0;
  DAT_800588f6 = 0;
  DAT_800588f4 = 0;
  DAT_80063a96 = 0;
  DAT_80063a28 = (uint)(ushort)((ulonglong)
                                ((longlong)(int)((DAT_80063708 << 0xe) / DAT_80063704) * 0x55555556)
                               >> 0x20);
  DAT_80063a94 = 0;
  DAT_80063a98 = (undefined2)DAT_80063704;
  DAT_80063a9a = (undefined2)DAT_80063708;
  DAT_80063580 = DAT_80059184;
  SetBlockFill(&DAT_800572a8);
  SetBlockFill(&DAT_800572b8);
  DAT_80065dac = 1;
  return;
}



void GsSortClear(uchar param_1,uchar param_2,uchar param_3,GsOT *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  (&DAT_800572ac)[DAT_80065db0 * 0x10] = param_1;
  (&DAT_800572ad)[DAT_80065db0 * 0x10] = param_2;
  (&DAT_800572ae)[DAT_80065db0 * 0x10] = param_3;
  uVar2 = (undefined2)DAT_80063708;
  iVar3 = (int)DAT_80065db0;
  iVar4 = iVar3 * 0x10;
  *(undefined2 *)(&DAT_800572b0 + iVar4) = (&DAT_80058324)[iVar3];
  uVar1 = (&DAT_80058328)[iVar3];
  *(undefined2 *)(&DAT_800572b6 + iVar4) = uVar2;
  *(undefined2 *)(&DAT_800572b2 + iVar4) = uVar1;
  if (dispenv.isrgb24 != '\0') {
    *(short *)(&DAT_800572b4 + iVar4) = (short)((DAT_80063704 * 3) / 2);
    GS_001_OBJ_5E8();
    return;
  }
  *(undefined2 *)(&DAT_800572b4 + iVar4) = (undefined2)DAT_80063704;
  AddPrim(param_4->tag,&DAT_800572a8 + DAT_80065db0 * 0x10);
  return;
}



void GS_001_OBJ_5E8(void)

{
  int in_a3;
  
  AddPrim(*(void **)(in_a3 + 0x10),&DAT_800572a8 + DAT_80065db0 * 0x10);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible GS_002.OBJ/GsGetActiveBuff

int GsGetActiveBuff(void)

{
  return (int)DAT_80065db0;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void GsSetDrawBuffOffset(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_80065dc0 != 0) {
    DAT_8006356c = 0;
    DAT_80063568 = 0;
    drawenv.ofs[0] = DAT_800588f4 + (&DAT_80058324)[DAT_80065db0];
    drawenv.ofs[1] = DAT_800588f6 + (&DAT_80058328)[DAT_80065db0];
    PutDrawEnv(&drawenv);
    GS_002_OBJ_10C();
    return;
  }
  psVar3 = &DAT_80058324;
  iVar5 = (int)DAT_800588f4;
  if (DAT_80065db0 == 0) {
    psVar3 = &DAT_80058326;
  }
  sVar1 = *psVar3;
  psVar3 = &DAT_80058328;
  iVar4 = (int)DAT_800588f6;
  if (DAT_80065db0 == 0) {
    psVar3 = &DAT_8005832a;
  }
  sVar2 = *psVar3;
  FUN_80024964(iVar5 + sVar1,iVar4 + sVar2);
  DAT_80063568 = (short)(iVar5 + sVar1);
  DAT_8006356c = (short)(iVar4 + sVar2);
  return;
}



// Possible GS_002.OBJ/GS_002_OBJ_10C

void GS_002_OBJ_10C(void)

{
  return;
}



// Possible REG12.OBJ/SetGeomOffset

void FUN_80024964(int param_1,int param_2)

{
  setCopControlWord(2,0xc000,param_1 << 0x10);
  setCopControlWord(2,0xc800,param_2 << 0x10);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void GsSetDrawBuffClip(void)

{
  drawenv.clip.w = DAT_80063a98;
  drawenv.clip.h = DAT_80063a9a;
  drawenv.clip.x = DAT_80063a94 + (&DAT_80058324)[DAT_80065db0];
  drawenv.clip.y = DAT_80063a96 + (&DAT_80058328)[DAT_80065db0];
  PutDrawEnv(&drawenv);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void GsSwapDispBuff(void)

{
  dispenv.disp.x = (&DAT_80058324)[(short)DAT_80065db0];
  dispenv.disp.y = (&DAT_80058328)[(short)DAT_80065db0];
  PutDispEnv(&dispenv);
  SetDispMask(1);
  DAT_80065dac = DAT_80065dac + 1;
  if (DAT_80065dac == 0) {
    DAT_80065dac = 1;
  }
  DAT_80065db0 = (ushort)(DAT_80065db0 == 0);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Possible MATRIX.OBJ/GsInitCoordinate2

void GsInitCoordinate2(GsCOORDINATE2 *super,GsCOORDINATE2 *base)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = _DAT_80063714;
  uVar1 = _DAT_80063710;
  *(undefined4 *)(base->coord).m = _DAT_8006370c;
  *(undefined4 *)((base->coord).m + 2) = uVar1;
  *(undefined4 *)((base->coord).m[1] + 1) = uVar2;
  lVar3 = DAT_80063720;
  uVar1 = _DAT_8006371c;
  *(undefined4 *)(base->coord).m[2] = _DAT_80063718;
  *(undefined4 *)((base->coord).m[2] + 2) = uVar1;
  (base->coord).t[0] = lVar3;
  lVar3 = DAT_80063728;
  (base->coord).t[1] = DAT_80063724;
  (base->coord).t[2] = lVar3;
  base->super = (_GsCOORDINATE2 *)super;
  base->flg = 0;
  if ((super != (GsCOORDINATE2 *)0x0) && (super != (GsCOORDINATE2 *)0x1)) {
    base->super->sub = (_GsCOORDINATE2 *)base;
  }
  return;
}



// Possible MATRIX.OBJ/GsInitCoord2param

void GsInitCoord2param(GsCOORD2PARAM *param_1)

{
  (param_1->rotate).vz = 0;
  (param_1->rotate).vy = 0;
  (param_1->rotate).vx = 0;
  (param_1->scale).vz = 0x1000;
  (param_1->scale).vy = 0x1000;
  (param_1->scale).vx = 0x1000;
  (param_1->trans).vz = 0;
  (param_1->trans).vy = 0;
  (param_1->trans).vx = 0;
  return;
}



// Possible MATRIX.OBJ/GsSetLsMatrix

void GsSetLsMatrix(MATRIX *mp)

{
  SetRotMatrix(mp);
  SetTransMatrix(mp);
  return;
}



// Possible MATRIX.OBJ/GsSetLightMatrix

void GsSetLightMatrix(MATRIX *mp)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  long local_1c;
  long local_18;
  long local_14;
  
  local_30 = DAT_80059174;
  local_2c = DAT_80059178;
  local_28 = DAT_8005917c;
  local_24 = DAT_80059180;
  local_20 = DAT_80059184;
  local_1c = DAT_80059188;
  local_18 = DAT_8005918c;
  local_14 = DAT_80059190;
  PushMatrix();
  MulMatrix((MATRIX *)&local_30,mp);
  PopMatrix();
  SetLightMatrix((MATRIX *)&local_30);
  return;
}



// Possible MATRIX.OBJ/GsSetLightMatrix2

void GsSetLightMatrix2(MATRIX *mp)

{
  MATRIX *m;
  
  m = MulMatrix2((MATRIX *)&DAT_80059174,mp);
  SetLightMatrix(m);
  return;
}



// Possible MATRIX.OBJ/GsMulCoord0

void GsMulCoord0(MATRIX *m1,MATRIX *m2,MATRIX *m3)

{
  ApplyMatrixLV(m1,(VECTOR *)m2->t,(VECTOR *)m3->t);
  MulMatrix0(m1,m2,m3);
  m3->t[0] = m3->t[0] + m1->t[0];
  m3->t[1] = m3->t[1] + m1->t[1];
  m3->t[2] = m3->t[2] + m1->t[2];
  return;
}



// Possible MATRIX.OBJ/GsMulCoord2

void GsMulCoord2(MATRIX *m1,MATRIX *m2)

{
  VECTOR local_20;
  
  ApplyMatrixLV(m1,(VECTOR *)m2->t,&local_20);
  MulMatrix2(m1,m2);
  m2->t[0] = local_20.vx + m1->t[0];
  m2->t[1] = local_20.vy + m1->t[1];
  m2->t[2] = local_20.vz + m1->t[2];
  return;
}



// Possible MATRIX.OBJ/GsMulCoord3

void GsMulCoord3(MATRIX *m1,MATRIX *m2)

{
  VECTOR local_20;
  
  ApplyMatrixLV(m1,(VECTOR *)m2->t,&local_20);
  MulMatrix(m1,m2);
  m1->t[0] = local_20.vx + m1->t[0];
  m1->t[1] = local_20.vy + m1->t[1];
  m1->t[2] = local_20.vz + m1->t[2];
  return;
}



// Possible MATRIX.OBJ/print_matrix

void print_matrix(short *param_1)

{
  printf("(%d %d %d) (%d %d %d) (%d %d %d)\n",(int)*param_1,(int)param_1[1],(int)param_1[2],
         (int)param_1[3],(int)param_1[4],(int)param_1[5],(int)param_1[6],(int)param_1[7],
         (int)param_1[8]);
  return;
}



// Possible MATRIX.OBJ/print_vector

void print_vector(int param_1)

{
  printf("(%d %d %d)\n",*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
         *(undefined4 *)(param_1 + 0x1c));
  return;
}



MATRIX * MulMatrix0(MATRIX *m0,MATRIX *m1,MATRIX *m2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  setCopControlWord(2,0,*(undefined4 *)m0->m);
  setCopControlWord(2,0x800,*(undefined4 *)(m0->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(m0->m[1] + 1));
  setCopControlWord(2,0x1800,*(undefined4 *)m0->m[2]);
  setCopControlWord(2,0x2000,*(undefined4 *)(m0->m[2] + 2));
  setCopReg(2,0,(uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)m1->m[2]);
  copFunction(2,0x486012);
  uVar2 = getCopReg(2,0x4800);
  iVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  setCopReg(2,0x800,(int)m1->m[2][1]);
  copFunction(2,0x486012);
  iVar5 = getCopReg(2,0x4800);
  uVar6 = getCopReg(2,0x5000);
  iVar7 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)(m1->m[2] + 2));
  copFunction(2,0x486012);
  *(uint *)m2->m = iVar5 << 0x10 | uVar2 & 0xffff;
  *(uint *)m2->m[2] = iVar7 << 0x10 | uVar4 & 0xffff;
  uVar2 = getCopReg(2,0x4800);
  iVar5 = getCopReg(2,0x5000);
  *(uint *)(m2->m + 2) = uVar2 & 0xffff | iVar3 << 0x10;
  *(uint *)(m2->m[1] + 1) = iVar5 << 0x10 | uVar6 & 0xffff;
  uVar1 = getCopReg(2,0xb);
  *(undefined4 *)(m2->m[2] + 2) = uVar1;
  return m2;
}



VECTOR * ApplyMatrixLV(MATRIX *m,VECTOR *_2,VECTOR *_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  setCopControlWord(2,0,*(undefined4 *)m->m);
  setCopControlWord(2,0x800,*(undefined4 *)(m->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(m->m[1] + 1));
  setCopControlWord(2,0x1800,*(undefined4 *)m->m[2]);
  setCopControlWord(2,0x2000,*(undefined4 *)(m->m[2] + 2));
  uVar1 = _2->vx;
  uVar3 = _2->vy;
  uVar5 = _2->vz;
  iVar7 = (int)uVar1 >> 0xf;
  if ((int)uVar1 < 0) {
    iVar7 = -((int)-uVar1 >> 0xf);
    uVar1 = -(-uVar1 & 0x7fff);
  }
  else {
    uVar1 = uVar1 & 0x7fff;
  }
  iVar8 = (int)uVar3 >> 0xf;
  if ((int)uVar3 < 0) {
    iVar8 = -((int)-uVar3 >> 0xf);
    uVar3 = -(-uVar3 & 0x7fff);
  }
  else {
    uVar3 = uVar3 & 0x7fff;
  }
  iVar9 = (int)uVar5 >> 0xf;
  if ((int)uVar5 < 0) {
    iVar9 = -((int)-uVar5 >> 0xf);
    uVar5 = -(-uVar5 & 0x7fff);
  }
  else {
    uVar5 = uVar5 & 0x7fff;
  }
  setCopReg(2,0x4800,iVar7);
  setCopReg(2,0x5000,iVar8);
  setCopReg(2,0x5800,iVar9);
  copFunction(2,0x41e012);
  iVar7 = getCopReg(2,0xc800);
  iVar8 = getCopReg(2,0xd000);
  iVar9 = getCopReg(2,0xd800);
  setCopReg(2,0x4800,uVar1);
  setCopReg(2,0x5000,uVar3);
  setCopReg(2,0x5800,uVar5);
  copFunction(2,0x49e012);
  if (iVar7 < 0) {
    iVar7 = iVar7 * 8;
  }
  else {
    iVar7 = iVar7 << 3;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 * 8;
  }
  else {
    iVar8 = iVar8 << 3;
  }
  if (iVar9 < 0) {
    iVar9 = iVar9 * 8;
  }
  else {
    iVar9 = iVar9 << 3;
  }
  iVar2 = getCopReg(2,0xc800);
  iVar4 = getCopReg(2,0xd000);
  iVar6 = getCopReg(2,0xd800);
  _3->vx = iVar2 + iVar7;
  _3->vy = iVar4 + iVar8;
  _3->vz = iVar6 + iVar9;
  return _3;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void PushMatrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  if (0x27f < DAT_8004352c) {
    DAT_80043520 = unaff_retaddr;
    printf("Error: Can\'t push matrix,stack(max 20) is full!\n");
    return;
  }
  uVar1 = getCopControlWord(2,0);
  uVar2 = getCopControlWord(2,0x800);
  *(undefined4 *)(&DAT_80043530 + DAT_8004352c) = uVar1;
  *(undefined4 *)(&DAT_80043534 + DAT_8004352c) = uVar2;
  uVar1 = getCopControlWord(2,0x1000);
  uVar2 = getCopControlWord(2,0x1800);
  *(undefined4 *)(&DAT_80043538 + DAT_8004352c) = uVar1;
  *(undefined4 *)(&DAT_8004353c + DAT_8004352c) = uVar2;
  uVar1 = getCopControlWord(2,0x2000);
  *(undefined4 *)(&DAT_80043540 + DAT_8004352c) = uVar1;
  uVar1 = getCopControlWord(2,0x2800);
  uVar2 = getCopControlWord(2,0x3000);
  uVar3 = getCopControlWord(2,0x3800);
  *(undefined4 *)(&DAT_80043544 + DAT_8004352c) = uVar1;
  *(undefined4 *)(&DAT_80043548 + DAT_8004352c) = uVar2;
  *(undefined4 *)(&DAT_8004354c + DAT_8004352c) = uVar3;
  DAT_8004352c = DAT_8004352c + 0x20;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void PopMatrix(void)

{
  undefined4 unaff_retaddr;
  
  if (DAT_8004352c < 1) {
    DAT_80043520 = unaff_retaddr;
    printf("Error: Can\'t pop matrix,stack is empty!\n");
    return;
  }
  setCopControlWord(2,0,*(undefined4 *)(&DAT_80043510 + DAT_8004352c));
  setCopControlWord(2,0x800,*(undefined4 *)(&DAT_80043514 + DAT_8004352c));
  setCopControlWord(2,0x1000,*(undefined4 *)(&DAT_80043518 + DAT_8004352c));
  setCopControlWord(2,0x1800,*(undefined4 *)(&DAT_8004351c + DAT_8004352c));
  setCopControlWord(2,0x2000,*(undefined4 *)((int)&DAT_80043520 + DAT_8004352c));
  setCopControlWord(2,0x2800,*(undefined4 *)(&DAT_80043524 + DAT_8004352c));
  setCopControlWord(2,0x3000,*(undefined4 *)(&DAT_80043528 + DAT_8004352c));
  setCopControlWord(2,0x3800,*(undefined4 *)((int)&DAT_8004352c + DAT_8004352c));
  DAT_8004352c = DAT_8004352c + -0x20;
  return;
}



MATRIX * MulMatrix(MATRIX *m0,MATRIX *m1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  setCopControlWord(2,0,*(undefined4 *)m0->m);
  setCopControlWord(2,0x800,*(undefined4 *)(m0->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(m0->m[1] + 1));
  setCopControlWord(2,0x1800,*(undefined4 *)m0->m[2]);
  setCopControlWord(2,0x2000,*(undefined4 *)(m0->m[2] + 2));
  setCopReg(2,0,(uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)m1->m[2]);
  copFunction(2,0x486012);
  uVar2 = getCopReg(2,0x4800);
  iVar3 = getCopReg(2,0x5000);
  uVar4 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  setCopReg(2,0x800,(int)m1->m[2][1]);
  copFunction(2,0x486012);
  iVar5 = getCopReg(2,0x4800);
  uVar6 = getCopReg(2,0x5000);
  iVar7 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)(m1->m[2] + 2));
  copFunction(2,0x486012);
  *(uint *)m0->m = iVar5 << 0x10 | uVar2 & 0xffff;
  *(uint *)m0->m[2] = iVar7 << 0x10 | uVar4 & 0xffff;
  uVar2 = getCopReg(2,0x4800);
  iVar5 = getCopReg(2,0x5000);
  *(uint *)(m0->m + 2) = uVar2 & 0xffff | iVar3 << 0x10;
  *(uint *)(m0->m[1] + 1) = iVar5 << 0x10 | uVar6 & 0xffff;
  uVar1 = getCopReg(2,0xb);
  *(undefined4 *)(m0->m[2] + 2) = uVar1;
  return m0;
}



void SetRotMatrix(MATRIX *m)

{
  setCopControlWord(2,0,*(undefined4 *)m->m);
  setCopControlWord(2,0x800,*(undefined4 *)(m->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(m->m[1] + 1));
  setCopControlWord(2,0x1800,*(undefined4 *)m->m[2]);
  setCopControlWord(2,0x2000,*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetLightMatrix(MATRIX *m)

{
  setCopControlWord(2,0x4000,*(undefined4 *)m->m);
  setCopControlWord(2,0x4800,*(undefined4 *)(m->m + 2));
  setCopControlWord(2,0x5000,*(undefined4 *)(m->m[1] + 1));
  setCopControlWord(2,0x5800,*(undefined4 *)m->m[2]);
  setCopControlWord(2,0x6000,*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetTransMatrix(MATRIX *m)

{
  setCopControlWord(2,0x2800,m->t[0]);
  setCopControlWord(2,0x3000,m->t[1]);
  setCopControlWord(2,0x3800,m->t[2]);
  return;
}



void GsDefDispBuff(u_short x0,u_short y0,u_short x1,u_short y1)

{
  DAT_800588ec = x0;
  DAT_800588ee = x1;
  DAT_800588f0 = y0;
  DAT_800588f2 = y1;
  if (DAT_80065dc0 != 0) {
    DAT_800588ec = 0;
    DAT_800588ee = 0;
    DAT_800588f0 = 0;
    DAT_800588f2 = 0;
  }
  DAT_80058324 = x0;
  DAT_80058326 = x1;
  DAT_80058328 = y0;
  DAT_8005832a = y1;
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void GsInit3D(void)

{
  DAT_800588f4 = (undefined2)(DAT_80063704 / 2);
  DAT_800588f6 = (undefined2)(DAT_80063708 / 2);
  GsSetDrawBuffOffset();
  DAT_80063a1c = 0x3fff;
  DAT_80065520 = 0;
  DAT_80065524 = 10;
  return;
}



// Possible GS_105.OBJ/GsMapModelingData

void GsMapModelingData(ulong *p)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*p & 1) == 0) {
    *p = *p | 1;
    iVar3 = 0;
    uVar4 = p[1];
    puVar1 = p + 2;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        iVar3 = iVar3 + 1;
        *puVar2 = (int)puVar1 + *puVar2;
        puVar2[4] = (int)puVar1 + puVar2[4];
        puVar2[2] = (int)puVar1 + puVar2[2];
        puVar2 = puVar2 + 7;
      } while (iVar3 < (int)uVar4);
    }
  }
  return;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_80025590(void)

{
  FUN_800255b0();
  return;
}



// Possible REG13.OBJ/SetGeomScreen

void FUN_800255b0(undefined4 param_1)

{
  setCopControlWord(2,0xd000,param_1);
  return;
}



int GsSetFlatLight(int id,GsF_LIGHT *lt)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_90;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  
  uVar7 = DAT_80059190;
  uVar6 = DAT_8005918c;
  uVar5 = DAT_80059188;
  uVar4 = DAT_80059184;
  uVar3 = DAT_8005917c;
  uVar2 = DAT_80059178;
  uVar1 = DAT_80059174;
  uVar11 = (uint)lt->r;
  uVar12 = (uint)lt->g;
  uVar13 = (uint)lt->b;
  gte_read_lc(&local_80);
  lVar8 = SquareRoot0(lt->vx * lt->vx + lt->vy * lt->vy + lt->vz * lt->vz);
  if (lVar8 == 0) {
    iVar9 = GS_107_OBJ_4B8();
    return iVar9;
  }
  if (id == 1) {
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (lt->vx * -0x1000 == -0x80000000)) {
      trap(0x1800);
    }
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (lt->vy * -0x1000 == -0x80000000)) {
      trap(0x1800);
    }
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (lt->vz * -0x1000 == -0x80000000)) {
      trap(0x1800);
    }
    local_7e = (undefined2)((uVar11 * 0x1000) / 0xff);
    local_78 = (undefined2)((uVar12 * 0x1000) / 0xff);
    local_72 = (undefined2)((uVar13 * 0x1000) / 0xff);
    iVar9 = GS_107_OBJ_464();
    return iVar9;
  }
  if (1 < id) {
    if (id != 2) {
      iVar9 = GS_107_OBJ_464();
      return iVar9;
    }
    iVar9 = lt->vx * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    iVar10 = lt->vy * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar10 == -0x80000000)) {
      trap(0x1800);
    }
    DAT_80059180 = iVar9 / lVar8 & 0xffffU | iVar10 / lVar8 << 0x10;
    iVar9 = lt->vz * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    local_7c = (undefined2)((uVar11 * 0x1000) / 0xff);
    local_76 = (undefined2)((uVar12 * 0x1000) / 0xff);
    local_70 = (undefined2)((uVar13 * 0x1000) / 0xff);
    local_90 = uVar4 & 0xffff0000 | iVar9 / lVar8 & 0xffffU;
    DAT_80059184 = local_90;
    DAT_80059174 = uVar1;
    DAT_80059178 = uVar2;
    DAT_8005917c = uVar3;
    DAT_80059188 = uVar5;
    DAT_8005918c = uVar6;
    DAT_80059190 = uVar7;
    gte_set_lc(&local_80);
    return 0;
  }
  if (id != 0) {
    iVar9 = GS_107_OBJ_464();
    return iVar9;
  }
  if (lVar8 == 0) {
    trap(0x1c00);
  }
  if ((lVar8 == -1) && (lt->vx * -0x1000 == -0x80000000)) {
    trap(0x1800);
  }
  if (lVar8 == 0) {
    trap(0x1c00);
  }
  if ((lVar8 == -1) && (lt->vy * -0x1000 == -0x80000000)) {
    trap(0x1800);
  }
  if (lVar8 == 0) {
    trap(0x1c00);
  }
  if ((lVar8 == -1) && (lt->vz * -0x1000 == -0x80000000)) {
    trap(0x1800);
  }
  local_80 = (undefined2)((uVar11 * 0x1000) / 0xff);
  local_7a = (undefined2)((uVar12 * 0x1000) / 0xff);
  local_74 = (undefined2)((uVar13 * 0x1000) / 0xff);
  iVar9 = GS_107_OBJ_464();
  return iVar9;
}



undefined4 GS_107_OBJ_464(void)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  DAT_80059174 = in_stack_00000010;
  DAT_80059178 = in_stack_00000014;
  DAT_8005917c = in_stack_00000018;
  DAT_80059180 = in_stack_0000001c;
  DAT_80059184 = in_stack_00000020;
  DAT_80059188 = in_stack_00000024;
  DAT_8005918c = in_stack_00000028;
  DAT_80059190 = in_stack_0000002c;
  gte_set_lc(&stack0x00000030);
  return 0;
}



void GS_107_OBJ_4B8(void)

{
  return;
}



void gte_set_lc(MATRIX *param_1)

{
  DAT_80063570 = *(undefined4 *)param_1->m;
  DAT_80063574 = *(undefined4 *)(param_1->m + 2);
  DAT_80063578 = *(undefined4 *)(param_1->m[1] + 1);
  DAT_8006357c = *(undefined4 *)param_1->m[2];
  DAT_80063580 = *(undefined4 *)(param_1->m[2] + 2);
  DAT_80063584 = param_1->t[0];
  DAT_80063588 = param_1->t[1];
  DAT_8006358c = param_1->t[2];
  SetColorMatrix(param_1);
  return;
}



void gte_read_lc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_80063578;
  uVar1 = DAT_80063574;
  *param_1 = DAT_80063570;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar2 = DAT_80063584;
  uVar1 = DAT_80063580;
  param_1[3] = DAT_8006357c;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = DAT_8006358c;
  param_1[6] = DAT_80063588;
  param_1[7] = uVar1;
  return;
}



void SetColorMatrix(MATRIX *m)

{
  setCopControlWord(2,0x8000,*(undefined4 *)m->m);
  setCopControlWord(2,0x8800,*(undefined4 *)(m->m + 2));
  setCopControlWord(2,0x9000,*(undefined4 *)(m->m[1] + 1));
  setCopControlWord(2,0x9800,*(undefined4 *)m->m[2]);
  setCopControlWord(2,0xa000,*(undefined4 *)(m->m[2] + 2));
  return;
}



void GsSetLightMode(int mode)

{
  if (mode != 1) {
    if (mode < 2) {
      if (mode != 0) {
        GS_108_OBJ_6C();
        return;
      }
      DAT_80065520 = 0;
      GS_108_OBJ_7C();
      return;
    }
    if ((mode != 2) && (mode != 3)) {
      GS_108_OBJ_6C();
      return;
    }
  }
  DAT_80065520 = mode;
  GS_108_OBJ_7C();
  return;
}



void GS_108_OBJ_6C(void)

{
  printf("not supported light mode %d\n");
  return;
}



void GS_108_OBJ_7C(void)

{
  return;
}



void GsSetFogParam(GsFOGPARAM *fogparm)

{
  SetDQA((int)fogparm->dqa);
  SetDQB(fogparm->dqb);
  SetFarColor((uint)fogparm->rfc,(uint)fogparm->gfc,(uint)fogparm->bfc);
  return;
}



// Possible REG03.OBJ/SetVertex0

void SetVertex0(undefined4 *param_1)

{
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,in_at,param_1[1]);
  return;
}



// Possible REG03.OBJ/SetVertex1

void SetVertex1(undefined4 *param_1)

{
  undefined4 in_v0;
  undefined4 in_v1;
  
  setCopReg(2,in_v0,*param_1);
  setCopReg(2,in_v1,param_1[1]);
  return;
}



// Possible REG03.OBJ/SetVertex2

void SetVertex2(undefined4 *param_1,undefined4 param_2)

{
  setCopReg(2,param_1,*param_1);
  setCopReg(2,param_2,param_1[1]);
  return;
}



// Possible REG03.OBJ/SetVertexTri

void SetVertexTri(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,in_at,param_1[1]);
  setCopReg(2,in_v0,*param_2);
  setCopReg(2,in_v1,param_2[1]);
  setCopReg(2,param_1,*param_3);
  setCopReg(2,param_2,param_3[1]);
  return;
}



// Possible REG03.OBJ/SetRGBfifo

void SetRGBfifo(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  
  setCopReg(2,unaff_s4,*param_1);
  setCopReg(2,unaff_s5,*param_2);
  setCopReg(2,unaff_s6,*param_3);
  return;
}



// Possible REG03.OBJ/SetIR123

void SetIR123(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  setCopReg(2,0x4800,param_1);
  setCopReg(2,0x5000,param_2);
  setCopReg(2,0x5800,param_3);
  return;
}



// Possible REG03.OBJ/SetIR0

void SetIR0(undefined4 param_1)

{
  setCopReg(2,0x4000,param_1);
  return;
}



// Possible REG03.OBJ/SetSZfifo3

void SetSZfifo3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  setCopReg(2,0x8800,param_1);
  setCopReg(2,0x9000,param_2);
  setCopReg(2,0x9800,param_3);
  return;
}



// Possible REG03.OBJ/SetSZfifo4

void SetSZfifo4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  setCopReg(2,0x8000,param_1);
  setCopReg(2,0x8800,param_2);
  setCopReg(2,0x9000,param_3);
  setCopReg(2,0x9800,param_4);
  return;
}



// Possible REG03.OBJ/SetSXSYfifo

void SetSXSYfifo(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  setCopReg(2,0x6000,param_1);
  setCopReg(2,0x6800,param_2);
  setCopReg(2,0x7000,param_3);
  return;
}



// Possible REG03.OBJ/SetRii

void SetRii(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  setCopControlWord(2,0,param_1);
  setCopControlWord(2,0x1000,param_2);
  setCopControlWord(2,0x2000,param_3);
  return;
}



// Possible REG03.OBJ/SetMAC123

void SetMAC123(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  setCopReg(2,0xc800,param_1);
  setCopReg(2,0xd000,param_2);
  setCopReg(2,0xd800,param_3);
  return;
}



// Possible REG03.OBJ/SetData32

void SetData32(undefined4 param_1)

{
  setCopReg(2,0xf000,param_1);
  return;
}



// Possible REG03.OBJ/SetDQA

void SetDQA(undefined4 param_1)

{
  setCopControlWord(2,0xd800,param_1);
  return;
}



// Possible REG03.OBJ/SetDQB

void SetDQB(undefined4 param_1)

{
  setCopControlWord(2,0xe000,param_1);
  return;
}



void SetFarColor(long rfc,long gfc,long bfc)

{
  setCopControlWord(2,0xa800,rfc << 4);
  setCopControlWord(2,0xb000,gfc << 4);
  setCopControlWord(2,0xb800,bfc << 4);
  return;
}



void GsSetAmbient(long r,long g,long b)

{
  SetBackColor(r >> 4,g >> 4,b >> 4);
  return;
}



void SetBackColor(long rbk,long gbk,long bbk)

{
  setCopControlWord(2,0x6800,rbk << 4);
  setCopControlWord(2,0x7000,gbk << 4);
  setCopControlWord(2,0x7800,bbk << 4);
  return;
}



// Possible GS_112.OBJ/GsDrawOtIO

void GsDrawOt(GsOT *ot)

{
  DrawOTag((u_long *)ot->tag);
  return;
}



void GsClearOt(ushort offset,ushort point,GsOT *otp)

{
  otp->offset = (uint)offset;
  otp->point = (uint)point;
  otp->tag = (GsOT_TAG *)(&otp->org[-1].field_0x0 + (4 << (otp->length & 0x1f)));
  ClearOTagR((u_long *)otp->org,1 << (otp->length & 0x1f));
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gte_init(void)

{
  FUN_80025ea8();
  SetFarColor(0,0,0);
  FUN_80024964(0,0);
  DAT_80063568 = 0;
  DAT_8006356c = 0;
  return;
}



uint FUN_80025ea8(void)

{
  undefined4 unaff_retaddr;
  
  DAT_80043830 = unaff_retaddr;
  _patch_gte();
  setCopReg(0,Status,Status | 0x40000000,0);
  setCopControlWord(2,0xe800,0x155);
  setCopControlWord(2,0xf000,0x100);
  setCopControlWord(2,0xd000,1000);
  setCopControlWord(2,0xd800,0xffffef9e);
  setCopControlWord(2,0xe000,0x1400000);
  setCopControlWord(2,0xc000,0);
  setCopControlWord(2,0xc800,0);
  return Status | 0x40000000;
}



void _patch_gte(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  DAT_80054c9c = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar4 = &PATCHGTE_OBJ_68;
  puVar2 = *(undefined4 **)(iVar1 + 0x18);
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
  } while (puVar4 != (undefined4 *)GsGetTimInfo);
  FlushCache();
  ExitCriticalSection();
  return;
}



void GsGetTimInfo(ulong *im,GsIMAGE *tim)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *im;
  tim->pmode = uVar2;
  if ((uVar2 >> 3 & 1) != 0) {
    iVar3 = (int)(im + 1) + (im[1] & 0xfffffffc);
    tim->cx = *(short *)(im + 2);
    tim->cy = *(short *)((int)im + 10);
    tim->cw = *(ushort *)(im + 3);
    uVar1 = *(ushort *)((int)im + 0xe);
    tim->clut = im + 4;
    tim->ch = uVar1;
    tim->px = *(short *)(iVar3 + 4);
    tim->py = *(short *)(iVar3 + 6);
    tim->pw = *(ushort *)(iVar3 + 8);
    uVar1 = *(ushort *)(iVar3 + 10);
    tim->pixel = (ulong *)(iVar3 + 0xc);
    tim->ph = uVar1;
    GS_122_OBJ_DC();
    return;
  }
  tim->px = *(short *)(im + 2);
  tim->py = *(short *)((int)im + 10);
  tim->pw = *(ushort *)(im + 3);
  uVar1 = *(ushort *)((int)im + 0xe);
  tim->pixel = im + 4;
  tim->ph = uVar1;
  return;
}



void GS_122_OBJ_DC(void)

{
  return;
}



// Possible GS_101.OBJ/GsSetNearClip
// Possible GS_102.OBJ/GsSetFarClip
// Possible GS_124.OBJ/GsSetWorkBase

void FUN_800260b4(undefined4 param_1)

{
  DAT_800588f8 = param_1;
  return;
}



// Possible GS_125.OBJ/GsGetWorkBase

undefined4 FUN_800260c4(void)

{
  return DAT_800588f8;
}



int GsSetRefView2(GsRVIEW2 *pv)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined auStack144 [32];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  VECTOR local_30;
  
  DAT_800639f8 = DAT_80063a20;
  DAT_800639fc = DAT_80063a24;
  DAT_80063a00 = DAT_80063a28;
  DAT_80063a04 = DAT_80063a2c;
  DAT_80063a08 = DAT_80063a30;
  DAT_80063a0c = DAT_80063a34;
  DAT_80063a10 = DAT_80063a38;
  DAT_80063a14 = DAT_80063a3c;
  gte_rotate_z_matrix((MATRIX *)&DAT_800639f8,-pv->rz);
  scale_view_param(pv,&local_b0);
  lVar1 = SquareRoot0((local_a4 - local_b0) * (local_a4 - local_b0) +
                      (local_a0 - local_ac) * (local_a0 - local_ac) +
                      (local_9c - local_a8) * (local_9c - local_a8));
  iVar2 = 1;
  if (lVar1 != 0) {
    iVar2 = (local_ac - local_a0) * 0x1000;
    if (lVar1 == 0) {
      trap(0x1c00);
    }
    if ((lVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    lVar3 = SquareRoot0((local_a4 - local_b0) * (local_a4 - local_b0) +
                        (local_9c - local_a8) * (local_9c - local_a8));
    if (lVar1 == 0) {
      trap(0x1c00);
    }
    if ((lVar1 == -1) && (lVar3 << 0xc == -0x80000000)) {
      trap(0x1800);
    }
    Gssub_make_matrix((MATRIX *)auStack144,-(short)(iVar2 / lVar1),(short)((lVar3 << 0xc) / lVar1),
                      'x');
    MulMatrix((MATRIX *)&DAT_800639f8,(MATRIX *)auStack144);
    if (lVar3 != 0) {
      iVar2 = (local_a4 - local_b0) * 0x1000;
      if (lVar3 == 0) {
        trap(0x1c00);
      }
      if ((lVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = (local_9c - local_a8) * 0x1000;
      if (lVar3 == 0) {
        trap(0x1c00);
      }
      if ((lVar3 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      Gssub_make_matrix((MATRIX *)auStack144,-(short)(iVar2 / lVar3),(short)(iVar4 / lVar3),'y');
      MulMatrix((MATRIX *)&DAT_800639f8,(MATRIX *)auStack144);
    }
    local_30.vx = -pv->vpx;
    local_30.vy = -pv->vpy;
    local_30.vz = -pv->vpz;
    ApplyMatrixLV((MATRIX *)&DAT_800639f8,&local_30,(VECTOR *)&DAT_80063a0c);
    if (pv->super != (GsCOORDINATE2 *)0x0) {
      GsGetLw(pv->super,(MATRIX *)auStack144);
      TransposeMatrix((MATRIX *)auStack144,(MATRIX *)&local_70);
      ApplyMatrixLV((MATRIX *)&local_70,(VECTOR *)(auStack144 + 0x14),&local_30);
      local_5c = -local_30.vx;
      local_54 = -local_30.vz;
      local_58 = -local_30.vy;
      GsMulCoord2((MATRIX *)&DAT_800639f8,(MATRIX *)&local_70);
      DAT_800639f8 = local_70;
      DAT_800639fc = local_6c;
      DAT_80063a00 = local_68;
      DAT_80063a04 = local_64;
      DAT_80063a08 = local_60;
      DAT_80063a0c = local_5c;
      DAT_80063a10 = local_58;
      DAT_80063a14 = local_54;
    }
    DAT_80058908 = DAT_800639f8;
    DAT_8005890c = DAT_800639fc;
    DAT_80058910 = DAT_80063a00;
    DAT_80058914 = DAT_80063a04;
    DAT_80058918 = DAT_80063a08;
    DAT_8005891c = DAT_80063a0c;
    DAT_80058920 = DAT_80063a10;
    DAT_80058924 = DAT_80063a14;
    iVar2 = 0;
  }
  return iVar2;
}



void scale_view_param(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = select_max_param();
  iVar2 = len_param(uVar1);
  uVar3 = iVar2 - 0xf;
  if (0xf < iVar2) {
    *param_2 = *param_1 >> (uVar3 & 0x1f);
    param_2[1] = param_1[1] >> (uVar3 & 0x1f);
    param_2[2] = param_1[2] >> (uVar3 & 0x1f);
    param_2[3] = param_1[3] >> (uVar3 & 0x1f);
    param_2[4] = param_1[4] >> (uVar3 & 0x1f);
    GS_131_OBJ_4A4();
    return;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  return;
}



void GS_131_OBJ_4A4(void)

{
  undefined4 in_v0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x14) = in_v0;
  return;
}



int select_max_param(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[3];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[4];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[5];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



int len_param(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (0 < param_1);
  }
  return iVar1;
}



MATRIX * TransposeMatrix(MATRIX *m0,MATRIX *m1)

{
  short sVar1;
  short sVar2;
  
  m1->m[0] = m0->m[0];
  sVar1 = m0->m[2][0];
  m1->m[1] = m0->m[1][0];
  sVar2 = m0->m[1];
  m1->m[2] = sVar1;
  sVar1 = m0->m[1][1];
  m1->m[1][0] = sVar2;
  sVar2 = m0->m[2][1];
  m1->m[1][1] = sVar1;
  sVar1 = m0->m[2];
  m1->m[1][2] = sVar2;
  sVar2 = m0->m[1][2];
  m1->m[2][0] = sVar1;
  sVar1 = m0->m[2][2];
  m1->m[2][1] = sVar2;
  m1->m[2][2] = sVar1;
  return m1;
}



void gte_rotate_z_matrix(MATRIX *m,long rz)

{
  int iVar1;
  int iVar2;
  MATRIX local_30;
  
  iVar1 = rcos(rz / 0x168);
  iVar2 = rsin(rz / 0x168);
  if (rz != 0) {
    local_30.m[1][0] = (short)iVar2;
    local_30.m[0][1] = -local_30.m[1][0];
    local_30.m[0][0] = (short)iVar1;
    local_30.m[0][2] = 0;
    local_30.m[1][2] = 0;
    local_30.m[2][0] = 0;
    local_30.m[2][1] = 0;
    local_30.m[2][2] = 0x1000;
    local_30.t[0] = 0;
    local_30.t[1] = 0;
    local_30.t[2] = 0;
    local_30.m[1][1] = local_30.m[0][0];
    MulMatrix(m,&local_30);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Gssub_make_matrix(MATRIX *mp,short s,short c,char rotate)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = _DAT_80063714;
  uVar1 = _DAT_80063710;
  *(undefined4 *)mp->m = _DAT_8006370c;
  *(undefined4 *)(mp->m + 2) = uVar1;
  *(undefined4 *)(mp->m[1] + 1) = uVar2;
  lVar3 = DAT_80063720;
  uVar1 = _DAT_8006371c;
  *(undefined4 *)mp->m[2] = _DAT_80063718;
  *(undefined4 *)(mp->m[2] + 2) = uVar1;
  mp->t[0] = lVar3;
  lVar3 = DAT_80063728;
  mp->t[1] = DAT_80063724;
  mp->t[2] = lVar3;
  switch(rotate) {
  case 'X':
  case 'x':
    mp->m[1][1] = c;
    mp->m[2][2] = c;
    mp->m[1][2] = -s;
    mp->m[2][1] = s;
    GS_123_OBJ_BC();
    return;
  case 'Y':
  case 'y':
    mp->m[0] = c;
    mp->m[2][2] = c;
    mp->m[2] = s;
    mp->m[2][0] = -s;
    GS_123_OBJ_BC();
    return;
  case 'Z':
  case 'z':
    mp->m[0] = c;
    mp->m[1][1] = c;
    mp->m[1] = -s;
    mp->m[1][0] = s;
  }
  return;
}



void GS_123_OBJ_78(undefined4 param_1,short param_2,undefined2 param_3)

{
  int in_t1;
  
  *(undefined2 *)(in_t1 + 8) = param_3;
  *(undefined2 *)(in_t1 + 0x10) = param_3;
  *(short *)(in_t1 + 10) = -param_2;
  *(short *)(in_t1 + 0xe) = param_2;
  GS_123_OBJ_BC();
  return;
}



void GS_123_OBJ_90(undefined4 param_1,short param_2,undefined2 param_3)

{
  undefined2 *in_t1;
  
  *in_t1 = param_3;
  in_t1[8] = param_3;
  in_t1[2] = param_2;
  in_t1[6] = -param_2;
  GS_123_OBJ_BC();
  return;
}



void GS_123_OBJ_A8(undefined4 param_1,short param_2,undefined2 param_3)

{
  undefined2 *in_t1;
  
  *in_t1 = param_3;
  in_t1[4] = param_3;
  in_t1[1] = -param_2;
  in_t1[3] = param_2;
  return;
}



void GS_123_OBJ_BC(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x800269a0)

void GsGetLw(GsCOORDINATE2 *m,MATRIX *out)

{
  long lVar1;
  _GsCOORDINATE2 *p_Var2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar5 = 100;
  p_Var2 = m->super;
  DAT_800654a0 = m;
  if (p_Var2 != (_GsCOORDINATE2 *)0x0) {
    if (m->flg != DAT_80065dac) {
      if (m->flg == 0) {
        uVar5 = 0;
      }
      GS_133_OBJ_30(p_Var2,uVar5,p_Var2);
      return;
    }
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(out->m + 2) = uVar5;
    *(undefined4 *)(out->m[1] + 1) = uVar3;
    *(undefined4 *)out->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    out->t[0] = lVar1;
    out->t[1] = lVar4;
    out->t[2] = lVar7;
    GS_133_OBJ_224();
    return;
  }
  if ((m->flg != DAT_80065dac) && (m->flg != 0)) {
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(out->m + 2) = uVar5;
    *(undefined4 *)(out->m[1] + 1) = uVar3;
    *(undefined4 *)out->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    out->t[0] = lVar1;
    out->t[1] = lVar4;
    out->t[2] = lVar7;
    GS_133_OBJ_224();
    return;
  }
  uVar5 = *(undefined4 *)((m->coord).m + 2);
  uVar3 = *(undefined4 *)((m->coord).m[1] + 1);
  uVar6 = *(undefined4 *)(m->coord).m[2];
  *(undefined4 *)(m->workm).m = *(undefined4 *)(m->coord).m;
  *(undefined4 *)((m->workm).m + 2) = uVar5;
  *(undefined4 *)((m->workm).m[1] + 1) = uVar3;
  *(undefined4 *)(m->workm).m[2] = uVar6;
  lVar1 = (m->coord).t[0];
  lVar4 = (m->coord).t[1];
  lVar7 = (m->coord).t[2];
  *(undefined4 *)((m->workm).m[2] + 2) = *(undefined4 *)((m->coord).m[2] + 2);
  (m->workm).t[0] = lVar1;
  (m->workm).t[1] = lVar4;
  (m->workm).t[2] = lVar7;
  uVar5 = *(undefined4 *)((m->workm).m + 2);
  uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
  uVar6 = *(undefined4 *)(m->workm).m[2];
  *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
  *(undefined4 *)(out->m + 2) = uVar5;
  *(undefined4 *)(out->m[1] + 1) = uVar3;
  *(undefined4 *)out->m[2] = uVar6;
  lVar1 = (m->workm).t[0];
  lVar4 = (m->workm).t[1];
  lVar7 = (m->workm).t[2];
  *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
  out->t[0] = lVar1;
  out->t[1] = lVar4;
  out->t[2] = lVar7;
  m->flg = DAT_80065dac;
  GS_133_OBJ_224();
  return;
}



void GS_133_OBJ_30(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t0;
  int unaff_s1;
  int *unaff_s2;
  
  *(int **)(unaff_s1 * 4 + param_4) = param_3;
  iVar1 = DAT_800654a0;
  if (param_3[0x12] != 0) {
    if (*param_3 == DAT_80065dac) {
      iVar1 = param_3[10];
      iVar2 = param_3[0xb];
      iVar3 = param_3[0xc];
      *unaff_s2 = param_3[9];
      unaff_s2[1] = iVar1;
      unaff_s2[2] = iVar2;
      unaff_s2[3] = iVar3;
      iVar1 = param_3[0xe];
      iVar2 = param_3[0xf];
      iVar3 = param_3[0x10];
      unaff_s2[4] = param_3[0xd];
      unaff_s2[5] = iVar1;
      unaff_s2[6] = iVar2;
      unaff_s2[7] = iVar3;
      GS_133_OBJ_224();
      return;
    }
    GS_133_OBJ_30();
    return;
  }
  if ((*param_3 != DAT_80065dac) && (*param_3 != 0)) {
    if (param_2 == in_t0) {
      iVar2 = *(int *)(DAT_800654a0 + 0x28);
      iVar3 = *(int *)(DAT_800654a0 + 0x2c);
      iVar4 = *(int *)(DAT_800654a0 + 0x30);
      *unaff_s2 = *(int *)(DAT_800654a0 + 0x24);
      unaff_s2[1] = iVar2;
      unaff_s2[2] = iVar3;
      unaff_s2[3] = iVar4;
      iVar2 = *(int *)(iVar1 + 0x38);
      iVar3 = *(int *)(iVar1 + 0x3c);
      iVar4 = *(int *)(iVar1 + 0x40);
      unaff_s2[4] = *(int *)(iVar1 + 0x34);
      unaff_s2[5] = iVar2;
      unaff_s2[6] = iVar3;
      unaff_s2[7] = iVar4;
      GS_133_OBJ_224();
      return;
    }
    iVar1 = *(int *)((param_2 + 1) * 4 + param_4);
    iVar2 = *(int *)(iVar1 + 0x28);
    iVar3 = *(int *)(iVar1 + 0x2c);
    iVar4 = *(int *)(iVar1 + 0x30);
    *unaff_s2 = *(int *)(iVar1 + 0x24);
    unaff_s2[1] = iVar2;
    unaff_s2[2] = iVar3;
    unaff_s2[3] = iVar4;
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar4 = *(int *)(iVar1 + 0x40);
    unaff_s2[4] = *(int *)(iVar1 + 0x34);
    unaff_s2[5] = iVar2;
    unaff_s2[6] = iVar3;
    unaff_s2[7] = iVar4;
    GS_133_OBJ_224();
    return;
  }
  param_3[9] = param_3[1];
  param_3[10] = param_3[2];
  param_3[0xb] = param_3[3];
  param_3[0xc] = param_3[4];
  param_3[0xd] = param_3[5];
  param_3[0xe] = param_3[6];
  param_3[0xf] = param_3[7];
  param_3[0x10] = param_3[8];
  iVar1 = param_3[10];
  iVar2 = param_3[0xb];
  iVar3 = param_3[0xc];
  *unaff_s2 = param_3[9];
  unaff_s2[1] = iVar1;
  unaff_s2[2] = iVar2;
  unaff_s2[3] = iVar3;
  iVar1 = param_3[0xe];
  iVar2 = param_3[0xf];
  iVar3 = param_3[0x10];
  unaff_s2[4] = param_3[0xd];
  unaff_s2[5] = iVar1;
  unaff_s2[6] = iVar2;
  unaff_s2[7] = iVar3;
  *param_3 = DAT_80065dac;
  GS_133_OBJ_224();
  return;
}



void GS_133_OBJ_224(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  int unaff_s1;
  MATRIX *unaff_s2;
  
  if (0 < unaff_s1) {
    piVar9 = &DAT_8006549c + unaff_s1;
    do {
      GsMulCoord3(unaff_s2,(MATRIX *)(*piVar9 + 4));
      iVar1 = *piVar9;
      unaff_s1 = unaff_s1 + -1;
      uVar3 = *(undefined4 *)(unaff_s2->m + 2);
      uVar5 = *(undefined4 *)(unaff_s2->m[1] + 1);
      uVar7 = *(undefined4 *)unaff_s2->m[2];
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)unaff_s2->m;
      *(undefined4 *)(iVar1 + 0x28) = uVar3;
      *(undefined4 *)(iVar1 + 0x2c) = uVar5;
      *(undefined4 *)(iVar1 + 0x30) = uVar7;
      lVar4 = unaff_s2->t[0];
      lVar6 = unaff_s2->t[1];
      lVar8 = unaff_s2->t[2];
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_s2->m[2] + 2);
      *(long *)(iVar1 + 0x38) = lVar4;
      *(long *)(iVar1 + 0x3c) = lVar6;
      *(long *)(iVar1 + 0x40) = lVar8;
      puVar2 = (undefined4 *)*piVar9;
      piVar9 = piVar9 + -1;
      *puVar2 = DAT_80065dac;
    } while (0 < unaff_s1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80026c64)

void GsGetLs(GsCOORDINATE2 *m,MATRIX *out)

{
  long lVar1;
  _GsCOORDINATE2 *p_Var2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar5 = 100;
  p_Var2 = m->super;
  DAT_800654a0 = m;
  if (p_Var2 != (_GsCOORDINATE2 *)0x0) {
    if (m->flg != DAT_80065dac) {
      if (m->flg == 0) {
        uVar5 = 0;
      }
      GS_134_OBJ_30(p_Var2,uVar5,p_Var2);
      return;
    }
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(out->m + 2) = uVar5;
    *(undefined4 *)(out->m[1] + 1) = uVar3;
    *(undefined4 *)out->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    out->t[0] = lVar1;
    out->t[1] = lVar4;
    out->t[2] = lVar7;
    GS_134_OBJ_224();
    return;
  }
  if ((m->flg != DAT_80065dac) && (m->flg != 0)) {
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(out->m + 2) = uVar5;
    *(undefined4 *)(out->m[1] + 1) = uVar3;
    *(undefined4 *)out->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    out->t[0] = lVar1;
    out->t[1] = lVar4;
    out->t[2] = lVar7;
    GS_134_OBJ_224();
    return;
  }
  uVar5 = *(undefined4 *)((m->coord).m + 2);
  uVar3 = *(undefined4 *)((m->coord).m[1] + 1);
  uVar6 = *(undefined4 *)(m->coord).m[2];
  *(undefined4 *)(m->workm).m = *(undefined4 *)(m->coord).m;
  *(undefined4 *)((m->workm).m + 2) = uVar5;
  *(undefined4 *)((m->workm).m[1] + 1) = uVar3;
  *(undefined4 *)(m->workm).m[2] = uVar6;
  lVar1 = (m->coord).t[0];
  lVar4 = (m->coord).t[1];
  lVar7 = (m->coord).t[2];
  *(undefined4 *)((m->workm).m[2] + 2) = *(undefined4 *)((m->coord).m[2] + 2);
  (m->workm).t[0] = lVar1;
  (m->workm).t[1] = lVar4;
  (m->workm).t[2] = lVar7;
  uVar5 = *(undefined4 *)((m->workm).m + 2);
  uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
  uVar6 = *(undefined4 *)(m->workm).m[2];
  *(undefined4 *)out->m = *(undefined4 *)(m->workm).m;
  *(undefined4 *)(out->m + 2) = uVar5;
  *(undefined4 *)(out->m[1] + 1) = uVar3;
  *(undefined4 *)out->m[2] = uVar6;
  lVar1 = (m->workm).t[0];
  lVar4 = (m->workm).t[1];
  lVar7 = (m->workm).t[2];
  *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
  out->t[0] = lVar1;
  out->t[1] = lVar4;
  out->t[2] = lVar7;
  m->flg = DAT_80065dac;
  GS_134_OBJ_224();
  return;
}



void GS_134_OBJ_30(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t0;
  int unaff_s1;
  int *unaff_s2;
  
  *(int **)(unaff_s1 * 4 + param_4) = param_3;
  iVar1 = DAT_800654a0;
  if (param_3[0x12] != 0) {
    if (*param_3 == DAT_80065dac) {
      iVar1 = param_3[10];
      iVar2 = param_3[0xb];
      iVar3 = param_3[0xc];
      *unaff_s2 = param_3[9];
      unaff_s2[1] = iVar1;
      unaff_s2[2] = iVar2;
      unaff_s2[3] = iVar3;
      iVar1 = param_3[0xe];
      iVar2 = param_3[0xf];
      iVar3 = param_3[0x10];
      unaff_s2[4] = param_3[0xd];
      unaff_s2[5] = iVar1;
      unaff_s2[6] = iVar2;
      unaff_s2[7] = iVar3;
      GS_134_OBJ_224();
      return;
    }
    GS_134_OBJ_30();
    return;
  }
  if ((*param_3 != DAT_80065dac) && (*param_3 != 0)) {
    if (param_2 == in_t0) {
      iVar2 = *(int *)(DAT_800654a0 + 0x28);
      iVar3 = *(int *)(DAT_800654a0 + 0x2c);
      iVar4 = *(int *)(DAT_800654a0 + 0x30);
      *unaff_s2 = *(int *)(DAT_800654a0 + 0x24);
      unaff_s2[1] = iVar2;
      unaff_s2[2] = iVar3;
      unaff_s2[3] = iVar4;
      iVar2 = *(int *)(iVar1 + 0x38);
      iVar3 = *(int *)(iVar1 + 0x3c);
      iVar4 = *(int *)(iVar1 + 0x40);
      unaff_s2[4] = *(int *)(iVar1 + 0x34);
      unaff_s2[5] = iVar2;
      unaff_s2[6] = iVar3;
      unaff_s2[7] = iVar4;
      GS_134_OBJ_224();
      return;
    }
    iVar1 = *(int *)((param_2 + 1) * 4 + param_4);
    iVar2 = *(int *)(iVar1 + 0x28);
    iVar3 = *(int *)(iVar1 + 0x2c);
    iVar4 = *(int *)(iVar1 + 0x30);
    *unaff_s2 = *(int *)(iVar1 + 0x24);
    unaff_s2[1] = iVar2;
    unaff_s2[2] = iVar3;
    unaff_s2[3] = iVar4;
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar4 = *(int *)(iVar1 + 0x40);
    unaff_s2[4] = *(int *)(iVar1 + 0x34);
    unaff_s2[5] = iVar2;
    unaff_s2[6] = iVar3;
    unaff_s2[7] = iVar4;
    GS_134_OBJ_224();
    return;
  }
  param_3[9] = param_3[1];
  param_3[10] = param_3[2];
  param_3[0xb] = param_3[3];
  param_3[0xc] = param_3[4];
  param_3[0xd] = param_3[5];
  param_3[0xe] = param_3[6];
  param_3[0xf] = param_3[7];
  param_3[0x10] = param_3[8];
  iVar1 = param_3[10];
  iVar2 = param_3[0xb];
  iVar3 = param_3[0xc];
  *unaff_s2 = param_3[9];
  unaff_s2[1] = iVar1;
  unaff_s2[2] = iVar2;
  unaff_s2[3] = iVar3;
  iVar1 = param_3[0xe];
  iVar2 = param_3[0xf];
  iVar3 = param_3[0x10];
  unaff_s2[4] = param_3[0xd];
  unaff_s2[5] = iVar1;
  unaff_s2[6] = iVar2;
  unaff_s2[7] = iVar3;
  *param_3 = DAT_80065dac;
  GS_134_OBJ_224();
  return;
}



void GS_134_OBJ_224(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  int unaff_s1;
  MATRIX *unaff_s2;
  
  if (0 < unaff_s1) {
    piVar9 = &DAT_8006549c + unaff_s1;
    do {
      GsMulCoord3(unaff_s2,(MATRIX *)(*piVar9 + 4));
      iVar1 = *piVar9;
      unaff_s1 = unaff_s1 + -1;
      uVar3 = *(undefined4 *)(unaff_s2->m + 2);
      uVar5 = *(undefined4 *)(unaff_s2->m[1] + 1);
      uVar7 = *(undefined4 *)unaff_s2->m[2];
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)unaff_s2->m;
      *(undefined4 *)(iVar1 + 0x28) = uVar3;
      *(undefined4 *)(iVar1 + 0x2c) = uVar5;
      *(undefined4 *)(iVar1 + 0x30) = uVar7;
      lVar4 = unaff_s2->t[0];
      lVar6 = unaff_s2->t[1];
      lVar8 = unaff_s2->t[2];
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_s2->m[2] + 2);
      *(long *)(iVar1 + 0x38) = lVar4;
      *(long *)(iVar1 + 0x3c) = lVar6;
      *(long *)(iVar1 + 0x40) = lVar8;
      puVar2 = (undefined4 *)*piVar9;
      piVar9 = piVar9 + -1;
      *puVar2 = DAT_80065dac;
    } while (0 < unaff_s1);
  }
  GsMulCoord2((MATRIX *)&DAT_800639f8,unaff_s2);
  return;
}



// WARNING: Removing unreachable block (ram,0x80026f40)

void GsGetLws(GsCOORDINATE2 *m,MATRIX *outw,MATRIX *outs)

{
  long lVar1;
  _GsCOORDINATE2 *p_Var2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar5 = 100;
  p_Var2 = m->super;
  DAT_800654a0 = m;
  if (p_Var2 != (_GsCOORDINATE2 *)0x0) {
    if (m->flg != DAT_80065dac) {
      if (m->flg == 0) {
        uVar5 = 0;
      }
      GS_135_OBJ_38(p_Var2,uVar5,p_Var2);
      return;
    }
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)outw->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(outw->m + 2) = uVar5;
    *(undefined4 *)(outw->m[1] + 1) = uVar3;
    *(undefined4 *)outw->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(outw->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    outw->t[0] = lVar1;
    outw->t[1] = lVar4;
    outw->t[2] = lVar7;
    GS_135_OBJ_22C();
    return;
  }
  if ((m->flg != DAT_80065dac) && (m->flg != 0)) {
    uVar5 = *(undefined4 *)((m->workm).m + 2);
    uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
    uVar6 = *(undefined4 *)(m->workm).m[2];
    *(undefined4 *)outw->m = *(undefined4 *)(m->workm).m;
    *(undefined4 *)(outw->m + 2) = uVar5;
    *(undefined4 *)(outw->m[1] + 1) = uVar3;
    *(undefined4 *)outw->m[2] = uVar6;
    lVar1 = (m->workm).t[0];
    lVar4 = (m->workm).t[1];
    lVar7 = (m->workm).t[2];
    *(undefined4 *)(outw->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
    outw->t[0] = lVar1;
    outw->t[1] = lVar4;
    outw->t[2] = lVar7;
    GS_135_OBJ_22C();
    return;
  }
  uVar5 = *(undefined4 *)((m->coord).m + 2);
  uVar3 = *(undefined4 *)((m->coord).m[1] + 1);
  uVar6 = *(undefined4 *)(m->coord).m[2];
  *(undefined4 *)(m->workm).m = *(undefined4 *)(m->coord).m;
  *(undefined4 *)((m->workm).m + 2) = uVar5;
  *(undefined4 *)((m->workm).m[1] + 1) = uVar3;
  *(undefined4 *)(m->workm).m[2] = uVar6;
  lVar1 = (m->coord).t[0];
  lVar4 = (m->coord).t[1];
  lVar7 = (m->coord).t[2];
  *(undefined4 *)((m->workm).m[2] + 2) = *(undefined4 *)((m->coord).m[2] + 2);
  (m->workm).t[0] = lVar1;
  (m->workm).t[1] = lVar4;
  (m->workm).t[2] = lVar7;
  uVar5 = *(undefined4 *)((m->workm).m + 2);
  uVar3 = *(undefined4 *)((m->workm).m[1] + 1);
  uVar6 = *(undefined4 *)(m->workm).m[2];
  *(undefined4 *)outw->m = *(undefined4 *)(m->workm).m;
  *(undefined4 *)(outw->m + 2) = uVar5;
  *(undefined4 *)(outw->m[1] + 1) = uVar3;
  *(undefined4 *)outw->m[2] = uVar6;
  lVar1 = (m->workm).t[0];
  lVar4 = (m->workm).t[1];
  lVar7 = (m->workm).t[2];
  *(undefined4 *)(outw->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
  outw->t[0] = lVar1;
  outw->t[1] = lVar4;
  outw->t[2] = lVar7;
  m->flg = DAT_80065dac;
  GS_135_OBJ_22C();
  return;
}



void GS_135_OBJ_38(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t0;
  int unaff_s1;
  int *unaff_s2;
  
  *(int **)(unaff_s1 * 4 + param_4) = param_3;
  iVar1 = DAT_800654a0;
  if (param_3[0x12] != 0) {
    if (*param_3 == DAT_80065dac) {
      iVar1 = param_3[10];
      iVar2 = param_3[0xb];
      iVar3 = param_3[0xc];
      *unaff_s2 = param_3[9];
      unaff_s2[1] = iVar1;
      unaff_s2[2] = iVar2;
      unaff_s2[3] = iVar3;
      iVar1 = param_3[0xe];
      iVar2 = param_3[0xf];
      iVar3 = param_3[0x10];
      unaff_s2[4] = param_3[0xd];
      unaff_s2[5] = iVar1;
      unaff_s2[6] = iVar2;
      unaff_s2[7] = iVar3;
      GS_135_OBJ_22C();
      return;
    }
    GS_135_OBJ_38();
    return;
  }
  if ((*param_3 != DAT_80065dac) && (*param_3 != 0)) {
    if (param_2 == in_t0) {
      iVar2 = *(int *)(DAT_800654a0 + 0x28);
      iVar3 = *(int *)(DAT_800654a0 + 0x2c);
      iVar4 = *(int *)(DAT_800654a0 + 0x30);
      *unaff_s2 = *(int *)(DAT_800654a0 + 0x24);
      unaff_s2[1] = iVar2;
      unaff_s2[2] = iVar3;
      unaff_s2[3] = iVar4;
      iVar2 = *(int *)(iVar1 + 0x38);
      iVar3 = *(int *)(iVar1 + 0x3c);
      iVar4 = *(int *)(iVar1 + 0x40);
      unaff_s2[4] = *(int *)(iVar1 + 0x34);
      unaff_s2[5] = iVar2;
      unaff_s2[6] = iVar3;
      unaff_s2[7] = iVar4;
      GS_135_OBJ_22C();
      return;
    }
    iVar1 = *(int *)((param_2 + 1) * 4 + param_4);
    iVar2 = *(int *)(iVar1 + 0x28);
    iVar3 = *(int *)(iVar1 + 0x2c);
    iVar4 = *(int *)(iVar1 + 0x30);
    *unaff_s2 = *(int *)(iVar1 + 0x24);
    unaff_s2[1] = iVar2;
    unaff_s2[2] = iVar3;
    unaff_s2[3] = iVar4;
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar4 = *(int *)(iVar1 + 0x40);
    unaff_s2[4] = *(int *)(iVar1 + 0x34);
    unaff_s2[5] = iVar2;
    unaff_s2[6] = iVar3;
    unaff_s2[7] = iVar4;
    GS_135_OBJ_22C();
    return;
  }
  param_3[9] = param_3[1];
  param_3[10] = param_3[2];
  param_3[0xb] = param_3[3];
  param_3[0xc] = param_3[4];
  param_3[0xd] = param_3[5];
  param_3[0xe] = param_3[6];
  param_3[0xf] = param_3[7];
  param_3[0x10] = param_3[8];
  iVar1 = param_3[10];
  iVar2 = param_3[0xb];
  iVar3 = param_3[0xc];
  *unaff_s2 = param_3[9];
  unaff_s2[1] = iVar1;
  unaff_s2[2] = iVar2;
  unaff_s2[3] = iVar3;
  iVar1 = param_3[0xe];
  iVar2 = param_3[0xf];
  iVar3 = param_3[0x10];
  unaff_s2[4] = param_3[0xd];
  unaff_s2[5] = iVar1;
  unaff_s2[6] = iVar2;
  unaff_s2[7] = iVar3;
  *param_3 = DAT_80065dac;
  GS_135_OBJ_22C();
  return;
}



void GS_135_OBJ_22C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  int unaff_s1;
  MATRIX *unaff_s2;
  MATRIX *unaff_s3;
  
  if (0 < unaff_s1) {
    piVar9 = &DAT_8006549c + unaff_s1;
    do {
      GsMulCoord3(unaff_s2,(MATRIX *)(*piVar9 + 4));
      iVar1 = *piVar9;
      unaff_s1 = unaff_s1 + -1;
      uVar3 = *(undefined4 *)(unaff_s2->m + 2);
      uVar5 = *(undefined4 *)(unaff_s2->m[1] + 1);
      uVar7 = *(undefined4 *)unaff_s2->m[2];
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)unaff_s2->m;
      *(undefined4 *)(iVar1 + 0x28) = uVar3;
      *(undefined4 *)(iVar1 + 0x2c) = uVar5;
      *(undefined4 *)(iVar1 + 0x30) = uVar7;
      lVar4 = unaff_s2->t[0];
      lVar6 = unaff_s2->t[1];
      lVar8 = unaff_s2->t[2];
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_s2->m[2] + 2);
      *(long *)(iVar1 + 0x38) = lVar4;
      *(long *)(iVar1 + 0x3c) = lVar6;
      *(long *)(iVar1 + 0x40) = lVar8;
      puVar2 = (undefined4 *)*piVar9;
      piVar9 = piVar9 + -1;
      *puVar2 = DAT_80065dac;
    } while (0 < unaff_s1);
  }
  uVar3 = *(undefined4 *)(unaff_s2->m + 2);
  uVar5 = *(undefined4 *)(unaff_s2->m[1] + 1);
  uVar7 = *(undefined4 *)unaff_s2->m[2];
  *(undefined4 *)unaff_s3->m = *(undefined4 *)unaff_s2->m;
  *(undefined4 *)(unaff_s3->m + 2) = uVar3;
  *(undefined4 *)(unaff_s3->m[1] + 1) = uVar5;
  *(undefined4 *)unaff_s3->m[2] = uVar7;
  lVar4 = unaff_s2->t[0];
  lVar6 = unaff_s2->t[1];
  lVar8 = unaff_s2->t[2];
  *(undefined4 *)(unaff_s3->m[2] + 2) = *(undefined4 *)(unaff_s2->m[2] + 2);
  unaff_s3->t[0] = lVar4;
  unaff_s3->t[1] = lVar6;
  unaff_s3->t[2] = lVar8;
  GsMulCoord2((MATRIX *)&DAT_800639f8,unaff_s3);
  return;
}



void GsLinkObject4(ulong tmd_base,GsDOBJ2 *objp,int n)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar8 = 0;
  sVar5 = 0;
  puVar1 = (ulong *)(tmd_base + n * 0x1c);
  objp->tmd = puVar1;
  puVar2 = (uint *)puVar1[4];
  uVar10 = puVar1[5];
  uVar3 = 0;
  uVar6 = 0;
  puVar9 = puVar2;
  if (uVar10 == 0) {
OBJT_OBJ_14C:
    *(short *)puVar9 = sVar5;
    return;
  }
OBJT_OBJ_5C:
  uVar7 = *puVar2 >> 0x18;
  uVar4 = *puVar2 >> 0x10;
  if ((uVar6 != 0) && ((uVar7 != uVar6 || ((uVar4 & 0xff) != (uVar3 & 0xff))))) {
    *(short *)puVar9 = sVar5;
    sVar5 = 0;
    puVar9 = puVar2;
  }
  switch(uVar7 & 0xfd) {
  case 0x20:
    if ((uVar4 & 4) == 0) goto OBJT_OBJ_108;
  case 0x24:
  case 0x31:
OBJT_OBJ_D0:
    puVar2 = puVar2 + 6;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    puVar2 = puVar2 + 4;
    break;
  default:
    printf("GPU CODE %02xH not assigned.\n",uVar7);
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((uVar4 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    puVar2 = puVar2 + 8;
    break;
  case 0x30:
    if ((uVar4 & 4) == 0) goto OBJT_OBJ_100;
    goto OBJT_OBJ_E4;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    puVar2 = puVar2 + 9;
    break;
  case 0x38:
    if ((uVar4 & 4) != 0) goto OBJT_OBJ_124;
    goto OBJT_OBJ_D0;
  case 0x3d:
    puVar2 = puVar2 + 0xb;
  }
code_r0x8002723c:
  uVar8 = uVar8 + 1;
  sVar5 = sVar5 + 1;
  uVar3 = uVar4;
  uVar6 = uVar7;
  if (uVar10 <= uVar8) goto OBJT_OBJ_14C;
  goto OBJT_OBJ_5C;
OBJT_OBJ_E4:
  puVar2 = puVar2 + 7;
  goto code_r0x8002723c;
}



void OBJT_OBJ_C4(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271c4:
  if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
OBJT_OBJ_D0:
  unaff_s0 = unaff_s0 + 6;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    goto code_r0x800271c4;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    uVar2 = unaff_s1;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    goto OBJT_OBJ_D0;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
  case 0x25:
  case 0x34:
  case 0x39:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
    goto OBJT_OBJ_124;
  case 0x38:
    goto OBJT_OBJ_118;
  case 0x3d:
    break;
  }
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
OBJT_OBJ_118:
  if ((unaff_s1 & 4) != 0) {
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  }
  goto OBJT_OBJ_D0;
}



void OBJT_OBJ_D0(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271d0:
  unaff_s0 = unaff_s0 + 6;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) != 0) goto code_r0x800271d0;
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  case 0x21:
  case 0x29:
    goto OBJT_OBJ_108;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    goto code_r0x800271d0;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
OBJT_OBJ_E4:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
    goto OBJT_OBJ_124;
  case 0x38:
    if ((unaff_s1 & 4) == 0) goto code_r0x800271d0;
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x3d:
    break;
  }
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_D8(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271d8:
  if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
    OBJT_OBJ_13C();
    return;
  }
OBJT_OBJ_E4:
  unaff_s0 = unaff_s0 + 7;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_F8;
    goto OBJT_OBJ_100;
  case 0x2c:
  case 0x2d:
OBJT_OBJ_F8:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    goto code_r0x800271d8;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_E4(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271e4:
  unaff_s0 = unaff_s0 + 7;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto code_r0x800271e4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
    goto code_r0x800271e4;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_EC(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271ec:
  if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
    OBJT_OBJ_13C();
    return;
  }
OBJT_OBJ_F8:
  unaff_s0 = unaff_s0 + 8;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    goto code_r0x800271ec;
  case 0x2c:
  case 0x2d:
    goto OBJT_OBJ_F8;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
OBJT_OBJ_E4:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_F8(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x800271f8:
  unaff_s0 = unaff_s0 + 8;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    goto OBJT_OBJ_EC;
  case 0x2c:
  case 0x2d:
    goto code_r0x800271f8;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
OBJT_OBJ_E4:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
OBJT_OBJ_EC:
  if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
    OBJT_OBJ_13C();
    return;
  }
  goto code_r0x800271f8;
}



void OBJT_OBJ_108(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x80027208:
  unaff_s0 = unaff_s0 + 4;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto code_r0x80027208;
    break;
  case 0x21:
  case 0x29:
    goto code_r0x80027208;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
OBJT_OBJ_E4:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_110(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x80027210:
  unaff_s0 = unaff_s0 + 0xb;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
    goto OBJT_OBJ_E4;
  case 0x35:
  case 0x3c:
    goto OBJT_OBJ_124;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto code_r0x80027210;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_124:
  unaff_s0 = unaff_s0 + 9;
  goto code_r0x8002723c;
OBJT_OBJ_E4:
  unaff_s0 = unaff_s0 + 7;
  goto code_r0x8002723c;
}



void OBJT_OBJ_118(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x80027218:
  if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_D0;
  goto OBJT_OBJ_124;
code_r0x8002723c:
  do {
    unaff_s4 = unaff_s4 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (unaff_s6 <= unaff_s4) {
      *(short *)unaff_s5 = unaff_s2;
      return;
    }
    uVar1 = unaff_s3 & 0xff;
    unaff_s3 = *unaff_s0 >> 0x18;
    unaff_s1 = *unaff_s0 >> 0x10;
    if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
      *(short *)unaff_s5 = unaff_s2;
      unaff_s2 = 0;
      unaff_s5 = unaff_s0;
    }
    uVar2 = unaff_s1;
    switch(unaff_s3 & 0xfd) {
    case 0x20:
      if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    case 0x24:
    case 0x31:
OBJT_OBJ_D0:
      unaff_s0 = unaff_s0 + 6;
      uVar2 = unaff_s1;
      break;
    case 0x21:
    case 0x29:
OBJT_OBJ_108:
      unaff_s0 = unaff_s0 + 4;
      break;
    default:
      printf("GPU CODE %02xH not assigned.\n",unaff_s3);
      break;
    case 0x25:
    case 0x34:
    case 0x39:
      goto OBJT_OBJ_E4;
    case 0x28:
      if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
        OBJT_OBJ_13C();
        return;
      }
    case 0x2c:
    case 0x2d:
      unaff_s0 = unaff_s0 + 8;
      break;
    case 0x30:
      if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
      goto OBJT_OBJ_E4;
    case 0x35:
    case 0x3c:
OBJT_OBJ_124:
      unaff_s0 = unaff_s0 + 9;
      uVar2 = unaff_s1;
      break;
    case 0x38:
      goto code_r0x80027218;
    case 0x3d:
      goto OBJT_OBJ_110;
    }
  } while( true );
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
OBJT_OBJ_E4:
  unaff_s0 = unaff_s0 + 7;
  goto code_r0x8002723c;
}



void OBJT_OBJ_124(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x80027224:
  unaff_s0 = unaff_s0 + 9;
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
OBJT_OBJ_E4:
    unaff_s0 = unaff_s0 + 7;
    goto code_r0x8002723c;
  case 0x35:
  case 0x3c:
    goto code_r0x80027224;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto code_r0x80027224;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
}



void OBJT_OBJ_12C(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint unaff_s1;
  uint uVar2;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x8002722c:
  printf("GPU CODE %02xH not assigned.\n",unaff_s3);
  uVar2 = unaff_s1;
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  unaff_s1 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((unaff_s1 & 0xff) != (uVar2 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  uVar2 = unaff_s1;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    goto code_r0x8002722c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((unaff_s1 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((unaff_s1 & 4) == 0) goto OBJT_OBJ_100;
    goto OBJT_OBJ_E4;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((unaff_s1 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
OBJT_OBJ_E4:
  unaff_s0 = unaff_s0 + 7;
  goto code_r0x8002723c;
}



void OBJT_OBJ_13C(void)

{
  uint uVar1;
  uint *unaff_s0;
  uint uVar2;
  uint unaff_s1;
  short unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint *unaff_s5;
  uint unaff_s6;
  
code_r0x8002723c:
  unaff_s4 = unaff_s4 + 1;
  unaff_s2 = unaff_s2 + 1;
  if (unaff_s6 <= unaff_s4) {
    *(short *)unaff_s5 = unaff_s2;
    return;
  }
  uVar1 = unaff_s3 & 0xff;
  unaff_s3 = *unaff_s0 >> 0x18;
  uVar2 = *unaff_s0 >> 0x10;
  if ((uVar1 != 0) && ((unaff_s3 != uVar1 || ((uVar2 & 0xff) != (unaff_s1 & 0xff))))) {
    *(short *)unaff_s5 = unaff_s2;
    unaff_s2 = 0;
    unaff_s5 = unaff_s0;
  }
  unaff_s1 = uVar2;
  switch(unaff_s3 & 0xfd) {
  case 0x20:
    if ((uVar2 & 4) == 0) goto OBJT_OBJ_108;
    break;
  case 0x21:
  case 0x29:
OBJT_OBJ_108:
    unaff_s0 = unaff_s0 + 4;
    goto code_r0x8002723c;
  default:
    printf("GPU CODE %02xH not assigned.\n",unaff_s3);
    goto code_r0x8002723c;
  case 0x24:
  case 0x31:
    break;
  case 0x25:
  case 0x34:
  case 0x39:
    goto OBJT_OBJ_E4;
  case 0x28:
    if ((uVar2 & 4) == 0) {
OBJT_OBJ_100:
      OBJT_OBJ_13C();
      return;
    }
  case 0x2c:
  case 0x2d:
    unaff_s0 = unaff_s0 + 8;
    goto code_r0x8002723c;
  case 0x30:
    if ((uVar2 & 4) == 0) goto OBJT_OBJ_100;
    goto OBJT_OBJ_E4;
  case 0x35:
  case 0x3c:
OBJT_OBJ_124:
    unaff_s0 = unaff_s0 + 9;
    goto code_r0x8002723c;
  case 0x38:
    if ((uVar2 & 4) != 0) goto OBJT_OBJ_124;
    break;
  case 0x3d:
    goto OBJT_OBJ_110;
  }
  unaff_s0 = unaff_s0 + 6;
  goto code_r0x8002723c;
OBJT_OBJ_110:
  unaff_s0 = unaff_s0 + 0xb;
  goto code_r0x8002723c;
OBJT_OBJ_E4:
  unaff_s0 = unaff_s0 + 7;
  goto code_r0x8002723c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Possible OBJT3.OBJ/GsSortObject4J

void GsSortObject4(GsDOBJ2 *objp,GsOT *ot,int shift,u_long *scratch)

{
  u_long uVar1;
  u_long uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = DAT_80063708;
  uVar1 = DAT_80063704;
  if (-1 < (int)objp->attribute) {
    DAT_800588fc = objp->attribute & 7;
    uVar3 = objp->attribute >> 3;
    DAT_800583c4 = uVar3 & 3;
    DAT_800588a8 = objp->attribute >> 5 & 1;
    DAT_800583c0 = objp->attribute >> 6 & 1;
    uVar6 = objp->attribute >> 9 & 7;
    _DAT_80065488 = objp->attribute >> 0x1e & 1;
    DAT_80065e54 = uVar6;
    if (uVar6 != 0) {
      *scratch = uVar6;
      scratch[1] = uVar1;
      scratch[2] = uVar2;
      OBJT2_OBJ_E0(objp,uVar6,1);
      return;
    }
    iVar5 = 2;
    if (DAT_800583c0 != 1) {
      if ((DAT_800588a8 == 0) && ((DAT_80065520 & 1) != 0)) {
OBJT2_OBJ_140:
        OBJT2_OBJ_14C();
        return;
      }
      if (DAT_800588a8 == 1) {
        iVar5 = 0;
        if ((uVar3 & 1) != 0) goto OBJT2_OBJ_140;
      }
      else {
        iVar5 = 0;
      }
    }
    puVar4 = objp->tmd;
    puVar7 = (undefined2 *)puVar4[4];
    uVar8 = puVar4[5];
    uVar9 = *puVar4;
    uVar10 = puVar4[2];
    while (uVar8 != 0) {
      uVar3 = *(byte *)((int)puVar7 + 3) & 0xfd;
      switch(uVar3) {
      case 0x20:
        if ((puVar7[1] & 4) != 0) {
          OBJT2_OBJ_660(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
          return;
        }
        OBJT2_OBJ_60C(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        return;
      case 0x21:
        OBJT2_OBJ_608(puVar7,uVar3,DAT_800588f8,*puVar7,shift,ot,scratch);
        return;
      default:
        printf("non supported code %x %x\n",uVar3,puVar7);
        break;
      case 0x24:
        OBJT2_OBJ_660(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        return;
      case 0x25:
        DAT_800588f8 = GsTMDfastTNF3(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_82C();
        return;
      case 0x28:
        if ((puVar7[1] & 4) != 0) {
          OBJT2_OBJ_7B0(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
          return;
        }
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastF4L_800438c8)[iVar5])
                                 (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_830();
        return;
      case 0x29:
        DAT_800588f8 = GsTMDfastNF4(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_84C();
        return;
      case 0x2c:
        OBJT2_OBJ_7B0(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        return;
      case 0x2d:
        DAT_800588f8 = GsTMDfastTNF4(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_84C();
        return;
      case 0x30:
        if ((puVar7[1] & 4) != 0) {
          DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG3GL_80043954)[iVar5])
                                   (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
          OBJT2_OBJ_82C();
          return;
        }
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG3L_80043868)[iVar5])
                                 (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_830();
        return;
      case 0x31:
        DAT_800588f8 = GsTMDfastNG3(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_84C();
        return;
      case 0x34:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTG3L_800438a8)[iVar5])
                                 (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_82C();
        return;
      case 0x35:
        DAT_800588f8 = GsTMDfastTNG3(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_830();
        return;
      case 0x38:
        if ((puVar7[1] & 4) != 0) {
          DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG4GL_8004396c)[iVar5])
                                   (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
          OBJT2_OBJ_830();
          return;
        }
        OBJT2_OBJ_660(puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        return;
      case 0x39:
        DAT_800588f8 = GsTMDfastNG4(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_82C();
        return;
      case 0x3c:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTG4L_80043928)[iVar5])
                                 (puVar7,uVar9,uVar10,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_830();
        return;
      case 0x3d:
        DAT_800588f8 = GsTMDfastTNG4(puVar7,uVar9,DAT_800588f8,*puVar7,shift,ot,scratch);
        OBJT2_OBJ_84C();
        return;
      }
    }
  }
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_E0

void OBJT2_OBJ_E0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = 2;
  if (DAT_800583c0 != 1) {
    if ((DAT_800588a8 == 0) && ((DAT_80065520 & 1) != 0)) {
OBJT2_OBJ_140:
      OBJT2_OBJ_14C();
      return;
    }
    if (DAT_800588a8 == 1) {
      iVar2 = 0;
      if ((DAT_800583c4 & 1) != 0) goto OBJT2_OBJ_140;
    }
    else {
      iVar2 = 0;
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar4 = (undefined2 *)puVar1[4];
  iVar5 = puVar1[5];
  uVar6 = *puVar1;
  uVar7 = puVar1[2];
  do {
    if (iVar5 == 0) {
      return;
    }
    uVar3 = *(byte *)((int)puVar4 + 3) & 0xfd;
    switch(uVar3) {
    case 0x20:
      if ((puVar4[1] & 4) != 0) {
        OBJT2_OBJ_660(puVar4,uVar6,uVar7,DAT_800588f8);
        return;
      }
      OBJT2_OBJ_60C(puVar4,uVar6,uVar7,DAT_800588f8);
      return;
    case 0x21:
      OBJT2_OBJ_608(puVar4,uVar3,DAT_800588f8,*puVar4);
      return;
    default:
      printf("non supported code %x %x\n",uVar3,puVar4);
      break;
    case 0x24:
      OBJT2_OBJ_660(puVar4,uVar6,uVar7,DAT_800588f8);
      return;
    case 0x25:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNF3_800438a0)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_82C();
      return;
    case 0x28:
      if ((puVar4[1] & 4) != 0) {
        OBJT2_OBJ_7B0(puVar4,uVar6,uVar7,DAT_800588f8);
        return;
      }
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastF4L_800438c8)[param_3 * 3 + iVar2])
                               (puVar4,uVar6,uVar7,DAT_800588f8);
      OBJT2_OBJ_830();
      return;
    case 0x29:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNF4_800438e0)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_84C();
      return;
    case 0x2c:
      OBJT2_OBJ_7B0(puVar4,uVar6,uVar7,DAT_800588f8);
      return;
    case 0x2d:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNF4_80043920)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_84C();
      return;
    case 0x30:
      if ((puVar4[1] & 4) != 0) {
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG3GL_80043954)[iVar2])
                                 (puVar4,uVar6,uVar7,DAT_800588f8);
        OBJT2_OBJ_82C();
        return;
      }
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG3L_80043868)[param_3 * 3 + iVar2])
                               (puVar4,uVar6,uVar7,DAT_800588f8);
      OBJT2_OBJ_830();
      return;
    case 0x31:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNG3_80043880)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_84C();
      return;
    case 0x34:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTG3L_800438a8)[param_3 * 3 + iVar2])
                               (puVar4,uVar6,uVar7,DAT_800588f8);
      OBJT2_OBJ_82C();
      return;
    case 0x35:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNG3_800438c0)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_830();
      return;
    case 0x38:
      if ((puVar4[1] & 4) != 0) {
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG4GL_8004396c)[iVar2])
                                 (puVar4,uVar6,uVar7,DAT_800588f8);
        OBJT2_OBJ_830();
        return;
      }
      OBJT2_OBJ_660(puVar4,uVar6,uVar7,DAT_800588f8);
      return;
    case 0x39:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNG4_80043900)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_82C();
      return;
    case 0x3c:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTG4L_80043928)[param_3 * 3 + iVar2])
                               (puVar4,uVar6,uVar7,DAT_800588f8);
      OBJT2_OBJ_830();
      return;
    case 0x3d:
      DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNG4_80043940)[param_3])
                               (puVar4,uVar6,DAT_800588f8,*puVar4);
      OBJT2_OBJ_84C();
      return;
    }
  } while( true );
}



// Possible OBJT3.OBJ/OBJT3_OBJ_14C

void OBJT2_OBJ_14C(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int in_v1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack00000020;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = (undefined2 *)puVar1[4];
  iVar4 = puVar1[5];
  uVar5 = *puVar1;
  uVar7 = puVar1[2];
  iVar6 = in_v1 * 4;
  if (iVar4 != 0) {
    iStack00000020 = param_3 * 0xc;
    do {
      uVar2 = *(byte *)((int)puVar3 + 3) & 0xfd;
      switch(uVar2) {
      case 0x20:
        if ((puVar3[1] & 4) != 0) {
          OBJT2_OBJ_660(puVar3,uVar5,uVar7,DAT_800588f8);
          return;
        }
        OBJT2_OBJ_60C(puVar3,uVar5,uVar7,DAT_800588f8);
        return;
      case 0x21:
        OBJT2_OBJ_608(puVar3,uVar2,DAT_800588f8,*puVar3);
        return;
      case 0x24:
        OBJT2_OBJ_660(puVar3,uVar5,uVar7,DAT_800588f8);
        return;
      case 0x25:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNF3_800438a0)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_82C();
        return;
      case 0x28:
        if ((puVar3[1] & 4) != 0) {
          OBJT2_OBJ_7B0(puVar3,uVar5,uVar7,DAT_800588f8);
          return;
        }
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastF4L_800438c8 + iVar6 + iStack00000020))
                                 (puVar3,uVar5,uVar7,DAT_800588f8);
        OBJT2_OBJ_830();
        return;
      case 0x29:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNF4_800438e0)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_84C();
        return;
      case 0x2c:
        OBJT2_OBJ_7B0(puVar3,uVar5,uVar7,DAT_800588f8);
        return;
      case 0x2d:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNF4_80043920)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_84C();
        return;
      case 0x30:
        if ((puVar3[1] & 4) != 0) {
          DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG3GL_80043954)[in_v1])
                                   (puVar3,uVar5,uVar7,DAT_800588f8);
          OBJT2_OBJ_82C();
          return;
        }
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3L_80043868 + iVar6 + iStack00000020))
                                 (puVar3,uVar5,uVar7,DAT_800588f8);
        OBJT2_OBJ_830();
        return;
      case 0x31:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNG3_80043880)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_84C();
        return;
      case 0x34:
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG3L_800438a8 + iVar6 + iStack00000020))
                                 (puVar3,uVar5,uVar7,DAT_800588f8);
        OBJT2_OBJ_82C();
        return;
      case 0x35:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNG3_800438c0)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_830();
        return;
      case 0x38:
        if ((puVar3[1] & 4) != 0) {
          DAT_800588f8 = (*(code *)(&PTR_GsTMDfastG4GL_8004396c)[in_v1])
                                   (puVar3,uVar5,uVar7,DAT_800588f8);
          OBJT2_OBJ_830();
          return;
        }
        OBJT2_OBJ_660(puVar3,uVar5,uVar7,DAT_800588f8);
        return;
      case 0x39:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastNG4_80043900)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_82C();
        return;
      case 0x3c:
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG4L_80043928 + iVar6 + iStack00000020))
                                 (puVar3,uVar5,uVar7,DAT_800588f8);
        OBJT2_OBJ_830();
        return;
      case 0x3d:
        DAT_800588f8 = (*(code *)(&PTR_GsTMDfastTNG4_80043940)[param_3])
                                 (puVar3,uVar5,DAT_800588f8,*puVar3);
        OBJT2_OBJ_84C();
        return;
      }
      printf("non supported code %x %x\n",uVar2,puVar3);
    } while (iVar4 != 0);
  }
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_1B4

void OBJT2_OBJ_1B4(void)

{
  ushort *unaff_s0;
  uint uStack00000010;
  
  if ((unaff_s0[1] & 4) != 0) {
    uStack00000010 = (uint)*unaff_s0;
    OBJT2_OBJ_660();
    return;
  }
  uStack00000010 = (uint)*unaff_s0;
  OBJT2_OBJ_60C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_23C

void OBJT2_OBJ_23C(void)

{
  ushort *unaff_s0;
  uint uStack00000010;
  
  uStack00000010 = (uint)*unaff_s0;
  OBJT2_OBJ_660();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_280

void OBJT2_OBJ_280(void)

{
  ushort *unaff_s0;
  int unaff_s6;
  uint uStack00000010;
  int in_stack_00000020;
  
  if ((unaff_s0[1] & 4) != 0) {
    uStack00000010 = (uint)*unaff_s0;
    DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3GL_80043954 + unaff_s6))();
    OBJT2_OBJ_82C();
    return;
  }
  uStack00000010 = (uint)*unaff_s0;
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3L_80043868 + unaff_s6 + in_stack_00000020))();
  OBJT2_OBJ_830();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_34C

void OBJT2_OBJ_34C(void)

{
  ushort *unaff_s0;
  int unaff_s6;
  uint uStack00000010;
  int in_stack_00000020;
  
  uStack00000010 = (uint)*unaff_s0;
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG3L_800438a8 + unaff_s6 + in_stack_00000020))();
  OBJT2_OBJ_82C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_3B0

void OBJT2_OBJ_3B0(void)

{
  ushort *unaff_s0;
  int unaff_s6;
  uint uStack00000010;
  int in_stack_00000020;
  
  if ((unaff_s0[1] & 4) != 0) {
    uStack00000010 = (uint)*unaff_s0;
    OBJT2_OBJ_7B0();
    return;
  }
  uStack00000010 = (uint)*unaff_s0;
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastF4L_800438c8 + unaff_s6 + in_stack_00000020))();
  OBJT2_OBJ_830();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_45C

void OBJT2_OBJ_45C(void)

{
  ushort *unaff_s0;
  uint uStack00000010;
  
  uStack00000010 = (uint)*unaff_s0;
  OBJT2_OBJ_7B0();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_4A0

void OBJT2_OBJ_4A0(void)

{
  ushort *unaff_s0;
  int unaff_s6;
  uint uStack00000010;
  
  if ((unaff_s0[1] & 4) != 0) {
    uStack00000010 = (uint)*unaff_s0;
    DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG4GL_8004396c + unaff_s6))();
    OBJT2_OBJ_830();
    return;
  }
  uStack00000010 = (uint)*unaff_s0;
  OBJT2_OBJ_660();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_54C

void OBJT2_OBJ_54C(void)

{
  ushort *unaff_s0;
  int unaff_s6;
  uint uStack00000010;
  int in_stack_00000020;
  
  uStack00000010 = (uint)*unaff_s0;
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG4L_80043928 + unaff_s6 + in_stack_00000020))();
  OBJT2_OBJ_830();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_5B4

void OBJT2_OBJ_5B4(void)

{
  OBJT2_OBJ_608();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_5E0

void OBJT2_OBJ_5E0(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNF4_800438e0 + unaff_s8))();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_608

void OBJT2_OBJ_608(void)

{
  code *in_v0;
  
  DAT_800588f8 = (*in_v0)();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_60C

void OBJT2_OBJ_60C(void)

{
  code *in_v0;
  
  DAT_800588f8 = (*in_v0)();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_634

void OBJT2_OBJ_634(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG3_80043880 + unaff_s8))();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_660

void OBJT2_OBJ_660(void)

{
  code *in_v0;
  
  DAT_800588f8 = (*in_v0)();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_690

void OBJT2_OBJ_690(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF3_800438a0 + unaff_s8))();
  OBJT2_OBJ_82C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_6E0

void OBJT2_OBJ_6E0(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG3_800438c0 + unaff_s8))();
  OBJT2_OBJ_830();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_734

void OBJT2_OBJ_734(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG4_80043900 + unaff_s8))();
  OBJT2_OBJ_82C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_784

void OBJT2_OBJ_784(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF4_80043920 + unaff_s8))();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_7B0

void OBJT2_OBJ_7B0(void)

{
  code *in_v0;
  
  DAT_800588f8 = (*in_v0)();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_7D8

void OBJT2_OBJ_7D8(void)

{
  int unaff_s8;
  
  DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG4_80043940 + unaff_s8))();
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_82C

void OBJT2_OBJ_82C(void)

{
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_830

void OBJT2_OBJ_830(void)

{
  OBJT2_OBJ_84C();
  return;
}



// Possible OBJT3.OBJ/OBJT3_OBJ_83C

void OBJT2_OBJ_83C(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s6;
  int unaff_s8;
  int in_stack_00000020;
  
  do {
    printf("non supported code %x %x\n");
    if (unaff_s1 == 0) {
      return;
    }
    switch(*(byte *)(unaff_s0 + 3) & 0xfd) {
    case 0x20:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        OBJT2_OBJ_660();
        return;
      }
      OBJT2_OBJ_60C();
      return;
    case 0x21:
      OBJT2_OBJ_608();
      return;
    case 0x24:
      OBJT2_OBJ_660();
      return;
    case 0x25:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF3_800438a0 + unaff_s8))();
      OBJT2_OBJ_82C();
      return;
    case 0x28:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        OBJT2_OBJ_7B0();
        return;
      }
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastF4L_800438c8 + unaff_s6 + in_stack_00000020))()
      ;
      OBJT2_OBJ_830();
      return;
    case 0x29:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNF4_800438e0 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x2c:
      OBJT2_OBJ_7B0();
      return;
    case 0x2d:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF4_80043920 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x30:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3GL_80043954 + unaff_s6))();
        OBJT2_OBJ_82C();
        return;
      }
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3L_80043868 + unaff_s6 + in_stack_00000020))()
      ;
      OBJT2_OBJ_830();
      return;
    case 0x31:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG3_80043880 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x34:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG3L_800438a8 + unaff_s6 + in_stack_00000020))
                               ();
      OBJT2_OBJ_82C();
      return;
    case 0x35:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG3_800438c0 + unaff_s8))();
      OBJT2_OBJ_830();
      return;
    case 0x38:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG4GL_8004396c + unaff_s6))();
        OBJT2_OBJ_830();
        return;
      }
      OBJT2_OBJ_660();
      return;
    case 0x39:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG4_80043900 + unaff_s8))();
      OBJT2_OBJ_82C();
      return;
    case 0x3c:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG4L_80043928 + unaff_s6 + in_stack_00000020))
                               ();
      OBJT2_OBJ_830();
      return;
    case 0x3d:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG4_80043940 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    }
  } while( true );
}



// Possible OBJT3.OBJ/OBJT3_OBJ_84C

void OBJT2_OBJ_84C(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s6;
  int unaff_s8;
  int in_stack_00000020;
  
  do {
    if (unaff_s1 == 0) {
      return;
    }
    switch(*(byte *)(unaff_s0 + 3) & 0xfd) {
    case 0x20:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        OBJT2_OBJ_660();
        return;
      }
      OBJT2_OBJ_60C();
      return;
    case 0x21:
      OBJT2_OBJ_608();
      return;
    default:
      printf("non supported code %x %x\n");
      break;
    case 0x24:
      OBJT2_OBJ_660();
      return;
    case 0x25:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF3_800438a0 + unaff_s8))();
      OBJT2_OBJ_82C();
      return;
    case 0x28:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        OBJT2_OBJ_7B0();
        return;
      }
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastF4L_800438c8 + unaff_s6 + in_stack_00000020))()
      ;
      OBJT2_OBJ_830();
      return;
    case 0x29:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNF4_800438e0 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x2c:
      OBJT2_OBJ_7B0();
      return;
    case 0x2d:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNF4_80043920 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x30:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3GL_80043954 + unaff_s6))();
        OBJT2_OBJ_82C();
        return;
      }
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG3L_80043868 + unaff_s6 + in_stack_00000020))()
      ;
      OBJT2_OBJ_830();
      return;
    case 0x31:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG3_80043880 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    case 0x34:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG3L_800438a8 + unaff_s6 + in_stack_00000020))
                               ();
      OBJT2_OBJ_82C();
      return;
    case 0x35:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG3_800438c0 + unaff_s8))();
      OBJT2_OBJ_830();
      return;
    case 0x38:
      if ((*(ushort *)(unaff_s0 + 2) & 4) != 0) {
        DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastG4GL_8004396c + unaff_s6))();
        OBJT2_OBJ_830();
        return;
      }
      OBJT2_OBJ_660();
      return;
    case 0x39:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastNG4_80043900 + unaff_s8))();
      OBJT2_OBJ_82C();
      return;
    case 0x3c:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTG4L_80043928 + unaff_s6 + in_stack_00000020))
                               ();
      OBJT2_OBJ_830();
      return;
    case 0x3d:
      DAT_800588f8 = (**(code **)((int)&PTR_GsTMDfastTNG4_80043940 + unaff_s8))();
      OBJT2_OBJ_84C();
      return;
    }
  } while( true );
}



// Possible DVF3_01.OBJ/GsTMDdivF3LFG

undefined4
GsTMDdivF3L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
           int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *v3;
  byte *pbVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  ushort local_48;
  long lStack68;
  int local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      v3 = (SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8);
      lVar2 = RotAverageNclipColorCol3
                        (_2,_3,v2,v3,v3,(SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                         (CVECTOR *)(param_1 + 4),(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                         (long *)(param_8 + 0x58),(CVECTOR *)(param_8 + 0x10),
                         (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54),(long *)&local_48,
                         &lStack68);
      param_1 = param_1 + 0x10;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_48 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF3A(param_4,param_8,0,local_38);
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 0x10;
    } while (uVar5 < param_5);
  }
  return param_4;
}



// Possible REG04.OBJ/ReadSZfifo3

void FUN_80027d3c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = getCopReg(2,0x11);
  *param_1 = uVar1;
  uVar1 = getCopReg(2,0x12);
  *param_2 = uVar1;
  uVar1 = getCopReg(2,0x13);
  *param_3 = uVar1;
  return;
}



// WARNING: Instruction at (ram,0x80027db0) overlaps instruction at (ram,0x80027dac)
// 

long RotAverageNclipColorCol3
               (SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,SVECTOR *v3,SVECTOR *v4,SVECTOR *v5,CVECTOR *v6,
               long *sxy0,long *sxy1,long *sxy2,CVECTOR *v7,CVECTOR *v8,CVECTOR *v9,long *otz,
               long *flag)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  int iVar2;
  undefined4 in_v1;
  long lVar3;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0x280030);
  lVar3 = getCopControlWord(2,0xf800);
  *flag = lVar3;
  copFunction(2,0x1400006);
  iVar2 = getCopReg(2,0xc000);
  if (iVar2 < 1) {
    setCopReg(2,in_zero,*(undefined4 *)v3);
  }
  else {
    setCopReg(2,in_zero,*(undefined4 *)v3);
    setCopReg(2,in_at,*(undefined4 *)&v3->vz);
    setCopReg(2,iVar2,*(undefined4 *)v4);
    setCopReg(2,in_v1,*(undefined4 *)&v4->vz);
    setCopReg(2,_2,*(undefined4 *)v5);
    setCopReg(2,_3,*(undefined4 *)&v5->vz);
    setCopReg(2,v2,*v6);
    copFunction(2,0x118043f);
    lVar3 = getCopReg(2,0xc);
    *sxy0 = lVar3;
    lVar3 = getCopReg(2,0xd);
    *sxy1 = lVar3;
    lVar3 = getCopReg(2,0xe);
    *sxy2 = lVar3;
    CVar1 = (CVECTOR)getCopReg(2,0x14);
    *v7 = CVar1;
    CVar1 = (CVECTOR)getCopReg(2,0x15);
    *v8 = CVar1;
    CVar1 = (CVECTOR)getCopReg(2,0x16);
    *v9 = CVar1;
    copFunction(2,0x158002d);
    lVar3 = getCopReg(2,0x3800);
    *otz = lVar3;
  }
  return iVar2;
}



// Possible DVF3_00.OBJ/GsTMDdivF3L
// Possible DVF3_01.OBJ/GsTMDdivF3LFG

undefined4
FUN_80027e2c(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *v3;
  byte *pbVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  ushort local_48;
  long lStack68;
  int local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      v3 = (SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8);
      lVar2 = RotAverageNclipColorDpq3
                        (_2,_3,v2,v3,v3,(SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                         (CVECTOR *)(param_1 + 4),(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                         (long *)(param_8 + 0x58),(CVECTOR *)(param_8 + 0x10),
                         (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54),(long *)&local_48,
                         &lStack68);
      param_1 = param_1 + 0x10;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_48 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF3A(param_4,param_8,0,local_38);
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 0x10;
    } while (uVar5 < param_5);
  }
  return param_4;
}



// WARNING: Instruction at (ram,0x800280b8) overlaps instruction at (ram,0x800280b4)
// 

long RotAverageNclipColorDpq3
               (SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,SVECTOR *v3,SVECTOR *v4,SVECTOR *v5,CVECTOR *v6,
               long *sxy0,long *sxy1,long *sxy2,CVECTOR *v7,CVECTOR *v8,CVECTOR *v9,long *otz,
               long *flag)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  int iVar2;
  undefined4 in_v1;
  long lVar3;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0x280030);
  lVar3 = getCopControlWord(2,0xf800);
  *flag = lVar3;
  copFunction(2,0x1400006);
  iVar2 = getCopReg(2,0xc000);
  if (iVar2 < 1) {
    setCopReg(2,in_zero,*(undefined4 *)v3);
  }
  else {
    setCopReg(2,in_zero,*(undefined4 *)v3);
    setCopReg(2,in_at,*(undefined4 *)&v3->vz);
    setCopReg(2,iVar2,*(undefined4 *)v4);
    setCopReg(2,in_v1,*(undefined4 *)&v4->vz);
    setCopReg(2,_2,*(undefined4 *)v5);
    setCopReg(2,_3,*(undefined4 *)&v5->vz);
    setCopReg(2,v2,*v6);
    copFunction(2,0xf80416);
    lVar3 = getCopReg(2,0xc);
    *sxy0 = lVar3;
    lVar3 = getCopReg(2,0xd);
    *sxy1 = lVar3;
    lVar3 = getCopReg(2,0xe);
    *sxy2 = lVar3;
    CVar1 = (CVECTOR)getCopReg(2,0x14);
    *v7 = CVar1;
    CVar1 = (CVECTOR)getCopReg(2,0x15);
    *v8 = CVar1;
    CVar1 = (CVECTOR)getCopReg(2,0x16);
    *v9 = CVar1;
    copFunction(2,0x158002d);
    lVar3 = getCopReg(2,0x3800);
    *otz = lVar3;
  }
  return iVar2;
}



undefined4
GsTMDdivF3NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint param_6
            ,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(undefined4 *)(param_8 + 0x10) = *(undefined4 *)(pbVar4 + 1);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF3A(param_4,param_8,0,local_38);
      }
      pbVar4 = pbVar4 + 0x10;
    } while (uVar5 < param_5);
  }
  return param_4;
}



long RotAverageNclip3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,long *sxy0,long *sxy1,long *sxy2,long *p,
                     long *otz,long *flag)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  int iVar1;
  undefined4 in_v1;
  long lVar2;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0x280030);
  lVar2 = getCopControlWord(2,0xf800);
  *flag = lVar2;
  copFunction(2,0x1400006);
  iVar1 = getCopReg(2,0xc000);
  if (0 < iVar1) {
    lVar2 = getCopReg(2,0xc);
    *sxy0 = lVar2;
    lVar2 = getCopReg(2,0xd);
    *sxy1 = lVar2;
    lVar2 = getCopReg(2,0xe);
    *sxy2 = lVar2;
    lVar2 = getCopReg(2,8);
    *p = lVar2;
    copFunction(2,0x158002d);
    lVar2 = getCopReg(2,0x3800);
    *otz = lVar2;
  }
  return iVar1;
}



undefined4
GsTMDdivNF3(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
           int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  local_38 = param_7 + 0x60;
  *(SVECTOR **)(param_7 + 0xa8) = _2;
  *(SVECTOR **)(param_7 + 0xac) = _3;
  *(SVECTOR **)(param_7 + 0xb0) = v2;
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 5) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_44 - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(undefined4 *)(param_7 + 0x10) = *(undefined4 *)(pbVar4 + 1);
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_3 = RCpolyF3A(param_3,param_7,0,local_38);
      }
      pbVar4 = pbVar4 + 0x10;
    } while (uVar5 < param_4);
  }
  return param_3;
}



undefined4
GsTMDdivTF3L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *pSVar4;
  undefined4 *puVar5;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar6;
  CVECTOR local_48;
  ushort local_44;
  long lStack64;
  long lStack60;
  int local_38;
  
  local_48 = (CVECTOR)0x24808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar6 = 0;
  if (param_5 != 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar5 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      if ((*(byte *)((int)puVar5 + -10) & 2) == 0) {
        pSVar4 = (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8);
        lVar2 = RotAverageNclipColorCol3
                          (_2,_3,v2,pSVar4,pSVar4,
                           (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8),&local_48,
                           (long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                           (long *)(param_8 + 0x58),(CVECTOR *)(param_8 + 0x10),
                           (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54),(long *)&local_44
                           ,&lStack64);
        if (0 < lVar2) {
          uVar3 = DVFT3_00_OBJ_210(param_8 + 0x2c);
          return uVar3;
        }
      }
      else {
        lVar2 = RotAverage3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                            (long *)(param_8 + 0x58),&lStack60,&lStack64);
        local_44 = (ushort)lVar2;
        pSVar4 = (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8);
        NormalColorCol3(pSVar4,pSVar4,pSVar4,&local_48,(CVECTOR *)(param_8 + 0x10),
                        (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54));
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar5 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar5 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar5 + -2);
        *(undefined4 *)(param_8 + 0x20) = puVar5[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar5[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar5;
        param_4 = RCpolyFT3A(param_4,param_8,0,local_38);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 6;
    } while (uVar6 < param_5);
  }
  return param_4;
}



undefined4 DVFT3_00_OBJ_210(short *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *pSVar4;
  undefined4 *unaff_s0;
  undefined4 *puVar5;
  SVECTOR *unaff_s1;
  SVECTOR *unaff_s2;
  SVECTOR *unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  ushort in_stack_00000044;
  undefined4 in_stack_00000050;
  uint in_stack_00000098;
  uint in_stack_0000009c;
  int in_stack_000000a0;
  
  do {
    FUN_80027d3c(param_1,&unaff_s2[2].vz,&unaff_s1[2].vz);
    *(uint *)(unaff_s4 + 0x14) =
         ((uint)in_stack_00000044 - *(int *)(in_stack_000000a0 + 8) >> (in_stack_0000009c & 0x1f)) *
         4 + *(int *)(in_stack_000000a0 + 4);
    *(byte *)(unaff_s4 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)unaff_s0 + -9);
    *(undefined2 *)(unaff_s4 + 0xc) = *(undefined2 *)((int)unaff_s0 + -6);
    *(undefined2 *)(unaff_s4 + 0xe) = *(undefined2 *)((int)unaff_s0 + -2);
    *(undefined4 *)(unaff_s3 + 1) = unaff_s0[-2];
    *(undefined4 *)(unaff_s2 + 1) = unaff_s0[-1];
    *(undefined4 *)(unaff_s1 + 1) = *unaff_s0;
    unaff_s5 = RCpolyFT3A(unaff_s5);
    puVar5 = unaff_s0;
    while( true ) {
      unaff_s6 = unaff_s6 + 1;
      unaff_s0 = puVar5 + 6;
      if (in_stack_00000098 <= unaff_s6) {
        return unaff_s5;
      }
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x1e) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s3 = *puVar1;
      *(undefined4 *)&unaff_s3->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar5 + 8) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s2 = *puVar1;
      *(undefined4 *)&unaff_s2->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x22) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s1 = *puVar1;
      *(undefined4 *)&unaff_s1->vz = uVar3;
      if ((*(byte *)((int)puVar5 + 0xe) & 2) != 0) break;
      pSVar4 = (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8);
      lVar2 = RotAverageNclipColorCol3
                        (unaff_s3,unaff_s2,unaff_s1,pSVar4,pSVar4,
                         (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8),
                         (CVECTOR *)&stack0x00000040,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                         (long *)(unaff_s1 + 2),(CVECTOR *)(unaff_s4 + 0x10),
                         (CVECTOR *)&unaff_s2[1].vz,(CVECTOR *)&unaff_s1[1].vz,
                         (long *)&stack0x00000044,(long *)&stack0x00000048);
      puVar5 = unaff_s0;
      if (0 < lVar2) {
        uVar3 = DVFT3_00_OBJ_210(&unaff_s3[2].vz);
        return uVar3;
      }
    }
    lVar2 = RotAverage3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                        (long *)(unaff_s1 + 2),(long *)&stack0x0000004c,(long *)&stack0x00000048);
    in_stack_00000044 = (ushort)lVar2;
    pSVar4 = (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8);
    NormalColorCol3(pSVar4,pSVar4,pSVar4,(CVECTOR *)&stack0x00000040,(CVECTOR *)(unaff_s4 + 0x10),
                    (CVECTOR *)&unaff_s2[1].vz,(CVECTOR *)&unaff_s1[1].vz);
    param_1 = &unaff_s3[2].vz;
  } while( true );
}



// Possible SMP.OBJ/LocalLight

void LocalLight(SVECTOR *_2,VECTOR *_3)

{
  long lVar1;
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  copFunction(2,0x4a6412);
  lVar1 = getCopReg(2,9);
  _3->vx = lVar1;
  lVar1 = getCopReg(2,10);
  _3->vy = lVar1;
  lVar1 = getCopReg(2,0xb);
  _3->vz = lVar1;
  return;
}



// Possible SMP.OBJ/DpqColor

void DpqColor(CVECTOR *_2,long p,CVECTOR *_3)

{
  CVECTOR CVar1;
  
  setCopReg(2,_3,*_2);
  setCopReg(2,0x4000,p);
  copFunction(2,0x780010);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *_3 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColor

void NormalColor(SVECTOR *_2,CVECTOR *_3)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  copFunction(2,0xc8041e);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *_3 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColor3

void NormalColor3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,CVECTOR *v3,CVECTOR *v4,CVECTOR *v5)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0xd80420);
  CVar1 = (CVECTOR)getCopReg(2,0x14);
  *v3 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x15);
  *v4 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v5 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColorDpq

void NormalColorDpq(SVECTOR *_2,CVECTOR *_3,long p,CVECTOR *v2)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,p,*_3);
  setCopReg(2,0x4000,p);
  copFunction(2,0xe80413);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v2 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColorDpq3

void NormalColorDpq3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,CVECTOR *v3,long p,CVECTOR *v4,CVECTOR *v5,
                    CVECTOR *v6)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  undefined4 in_t0;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  setCopReg(2,v2,*v3);
  setCopReg(2,in_t0,p);
  copFunction(2,0xf80416);
  CVar1 = (CVECTOR)getCopReg(2,0x14);
  *v4 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x15);
  *v5 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v6 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColorCol

void NormalColorCol(SVECTOR *_2,CVECTOR *_3,CVECTOR *v2)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,v2,*_3);
  copFunction(2,0x108041b);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v2 = CVar1;
  return;
}



// Possible SMP.OBJ/NormalColorCol3

void NormalColorCol3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,CVECTOR *v3,CVECTOR *v4,CVECTOR *v5,
                    CVECTOR *v6)

{
  CVECTOR CVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  setCopReg(2,v2,*v3);
  copFunction(2,0x118043f);
  CVar1 = (CVECTOR)getCopReg(2,0x14);
  *v4 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x15);
  *v5 = CVar1;
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v6 = CVar1;
  return;
}



// Possible SMP.OBJ/ColorDpq

void ColorDpq(VECTOR *_2,CVECTOR *_3,long p,CVECTOR *v2)

{
  CVECTOR CVar1;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  
  setCopReg(2,in_t1,_2->vx);
  setCopReg(2,in_t2,_2->vy);
  setCopReg(2,in_t3,_2->vz);
  setCopReg(2,p,*_3);
  setCopReg(2,0x4000,p);
  copFunction(2,0x1280414);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v2 = CVar1;
  return;
}



// Possible SMP.OBJ/ColorCol

void ColorCol(VECTOR *_2,CVECTOR *_3,CVECTOR *v2)

{
  CVECTOR CVar1;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  
  setCopReg(2,in_t1,_2->vx);
  setCopReg(2,in_t2,_2->vy);
  setCopReg(2,in_t3,_2->vz);
  setCopReg(2,v2,*_3);
  copFunction(2,0x138041c);
  CVar1 = (CVECTOR)getCopReg(2,0x16);
  *v2 = CVar1;
  return;
}



// Possible SMP.OBJ/AverageSZ3

undefined4 AverageSZ3(void)

{
  undefined4 uVar1;
  
  copFunction(2,0x158002d);
  uVar1 = getCopReg(2,0x3800);
  return uVar1;
}



// Possible SMP.OBJ/AverageSZ4

undefined4 AverageSZ4(void)

{
  undefined4 uVar1;
  
  copFunction(2,0x168002e);
  uVar1 = getCopReg(2,0x3800);
  return uVar1;
}



long RotAverage3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,long *sxy0,long *sxy1,long *sxy2,long *p,
                long *flag)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  long lVar1;
  undefined4 in_v1;
  long lVar2;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0x280030);
  lVar1 = getCopReg(2,0xc);
  *sxy0 = lVar1;
  lVar1 = getCopReg(2,0xd);
  *sxy1 = lVar1;
  lVar1 = getCopReg(2,0xe);
  *sxy2 = lVar1;
  lVar2 = getCopControlWord(2,0xf800);
  lVar1 = getCopReg(2,8);
  *p = lVar1;
  *flag = lVar2;
  copFunction(2,0x158002d);
  lVar1 = getCopReg(2,0x3800);
  return lVar1;
}



undefined4
GsTMDdivTF3LFG(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
              int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *pSVar4;
  undefined4 *puVar5;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar6;
  CVECTOR local_48;
  ushort local_44;
  long lStack64;
  long local_3c;
  int local_38;
  
  local_48 = (CVECTOR)0x24808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar6 = 0;
  if (param_5 != 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar5 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      if ((*(byte *)((int)puVar5 + -10) & 2) == 0) {
        pSVar4 = (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8);
        lVar2 = RotAverageNclipColorDpq3
                          (_2,_3,v2,pSVar4,pSVar4,
                           (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8),&local_48,
                           (long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                           (long *)(param_8 + 0x58),(CVECTOR *)(param_8 + 0x10),
                           (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54),(long *)&local_44
                           ,&lStack64);
        if (0 < lVar2) {
          uVar3 = DVFT3_01_OBJ_218(param_8 + 0x2c);
          return uVar3;
        }
      }
      else {
        lVar2 = RotAverage3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                            (long *)(param_8 + 0x58),&local_3c,&lStack64);
        local_44 = (ushort)lVar2;
        pSVar4 = (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar5 + 1) * 8);
        NormalColorDpq3(pSVar4,pSVar4,pSVar4,&local_48,local_3c,(CVECTOR *)(param_8 + 0x10),
                        (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54));
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar5 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar5 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar5 + -2);
        *(undefined4 *)(param_8 + 0x20) = puVar5[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar5[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar5;
        param_4 = RCpolyFT3A(param_4,param_8,0,local_38);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 6;
    } while (uVar6 < param_5);
  }
  return param_4;
}



undefined4 DVFT3_01_OBJ_218(short *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  SVECTOR *pSVar4;
  undefined4 *unaff_s0;
  undefined4 *puVar5;
  SVECTOR *unaff_s1;
  SVECTOR *unaff_s2;
  SVECTOR *unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  ushort in_stack_00000044;
  long in_stack_0000004c;
  undefined4 in_stack_00000050;
  uint in_stack_00000098;
  uint in_stack_0000009c;
  int in_stack_000000a0;
  
  do {
    FUN_80027d3c(param_1,&unaff_s2[2].vz,&unaff_s1[2].vz);
    *(uint *)(unaff_s4 + 0x14) =
         ((uint)in_stack_00000044 - *(int *)(in_stack_000000a0 + 8) >> (in_stack_0000009c & 0x1f)) *
         4 + *(int *)(in_stack_000000a0 + 4);
    *(byte *)(unaff_s4 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)unaff_s0 + -9);
    *(undefined2 *)(unaff_s4 + 0xc) = *(undefined2 *)((int)unaff_s0 + -6);
    *(undefined2 *)(unaff_s4 + 0xe) = *(undefined2 *)((int)unaff_s0 + -2);
    *(undefined4 *)(unaff_s3 + 1) = unaff_s0[-2];
    *(undefined4 *)(unaff_s2 + 1) = unaff_s0[-1];
    *(undefined4 *)(unaff_s1 + 1) = *unaff_s0;
    unaff_s5 = RCpolyFT3A(unaff_s5);
    puVar5 = unaff_s0;
    while( true ) {
      unaff_s6 = unaff_s6 + 1;
      unaff_s0 = puVar5 + 6;
      if (in_stack_00000098 <= unaff_s6) {
        return unaff_s5;
      }
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x1e) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s3 = *puVar1;
      *(undefined4 *)&unaff_s3->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar5 + 8) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s2 = *puVar1;
      *(undefined4 *)&unaff_s2->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x22) * 8 + unaff_s7);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s1 = *puVar1;
      *(undefined4 *)&unaff_s1->vz = uVar3;
      if ((*(byte *)((int)puVar5 + 0xe) & 2) != 0) break;
      pSVar4 = (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8);
      lVar2 = RotAverageNclipColorDpq3
                        (unaff_s3,unaff_s2,unaff_s1,pSVar4,pSVar4,
                         (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8),
                         (CVECTOR *)&stack0x00000040,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                         (long *)(unaff_s1 + 2),(CVECTOR *)(unaff_s4 + 0x10),
                         (CVECTOR *)&unaff_s2[1].vz,(CVECTOR *)&unaff_s1[1].vz,
                         (long *)&stack0x00000044,(long *)&stack0x00000048);
      puVar5 = unaff_s0;
      if (0 < lVar2) {
        uVar3 = DVFT3_01_OBJ_218(&unaff_s3[2].vz);
        return uVar3;
      }
    }
    lVar2 = RotAverage3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                        (long *)(unaff_s1 + 2),(long *)&stack0x0000004c,(long *)&stack0x00000048);
    in_stack_00000044 = (ushort)lVar2;
    pSVar4 = (SVECTOR *)(unaff_s8 + (uint)*(ushort *)(puVar5 + 7) * 8);
    NormalColorDpq3(pSVar4,pSVar4,pSVar4,(CVECTOR *)&stack0x00000040,in_stack_0000004c,
                    (CVECTOR *)(unaff_s4 + 0x10),(CVECTOR *)&unaff_s2[1].vz,
                    (CVECTOR *)&unaff_s1[1].vz);
    param_1 = &unaff_s3[2].vz;
  } while( true );
}



undefined4
GsTMDdivTF3NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             uint param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar7;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  undefined4 local_40;
  int local_38;
  
  local_40 = 0x24808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar7 = 0;
  if (param_5 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 6) * 8 + param_2);
      uVar4 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar4;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar6 + 2) * 8 + param_2);
      uVar4 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar4;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 10) * 8 + param_2);
      uVar4 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar4;
      if ((*(byte *)((int)puVar6 + -10) & 2) == 0) {
        lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                                 (long *)(param_8 + 0x58),&lStack80,(long *)&local_4c,alStack72);
        if (0 < lVar2) {
          uVar4 = DVFT3_02_OBJ_1A8(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
          return uVar4;
        }
      }
      else {
        lVar2 = RotAverage3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                            (long *)(param_8 + 0x58),&lStack80,alStack72);
        local_4c = (ushort)lVar2;
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        iVar3 = *(int *)(param_7 + 8);
        iVar5 = *(int *)(param_7 + 4);
        *(undefined4 *)(param_8 + 0x10) = local_40;
        *(uint *)(param_8 + 0x14) = ((uint)local_4c - iVar3 >> (param_6 & 0x1f)) * 4 + iVar5;
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar6 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar6 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar6 + -2);
        *(undefined4 *)(param_8 + 0x20) = puVar6[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar6[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar6;
        param_4 = RCpolyFT3A(param_4,param_8,0,local_38);
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar7 < param_5);
  }
  return param_4;
}



undefined4 DVFT3_02_OBJ_1A8(short *param_1,short *param_2,short *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_s0;
  undefined4 *puVar6;
  SVECTOR *unaff_s1;
  SVECTOR *unaff_s2;
  SVECTOR *unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  ushort in_stack_0000002c;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  uint in_stack_00000088;
  uint in_stack_0000008c;
  
  do {
    FUN_80027d3c(param_1,param_2,param_3);
    iVar3 = *(int *)(unaff_s7 + 8);
    iVar5 = *(int *)(unaff_s7 + 4);
    *(undefined4 *)(unaff_s4 + 0x10) = in_stack_00000038;
    *(uint *)(unaff_s4 + 0x14) =
         ((uint)in_stack_0000002c - iVar3 >> (in_stack_0000008c & 0x1f)) * 4 + iVar5;
    *(byte *)(unaff_s4 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)unaff_s0 + -9);
    *(undefined2 *)(unaff_s4 + 0xc) = *(undefined2 *)((int)unaff_s0 + -6);
    *(undefined2 *)(unaff_s4 + 0xe) = *(undefined2 *)((int)unaff_s0 + -2);
    *(undefined4 *)(unaff_s3 + 1) = unaff_s0[-2];
    *(undefined4 *)(unaff_s2 + 1) = unaff_s0[-1];
    *(undefined4 *)(unaff_s1 + 1) = *unaff_s0;
    unaff_s5 = RCpolyFT3A(unaff_s5);
    puVar6 = unaff_s0;
    while( true ) {
      unaff_s6 = unaff_s6 + 1;
      unaff_s0 = puVar6 + 6;
      if (in_stack_00000088 <= unaff_s6) {
        return unaff_s5;
      }
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 0x1e) * 8 + unaff_s8);
      uVar4 = puVar1[1];
      *(undefined4 *)unaff_s3 = *puVar1;
      *(undefined4 *)&unaff_s3->vz = uVar4;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar6 + 8) * 8 + unaff_s8);
      uVar4 = puVar1[1];
      *(undefined4 *)unaff_s2 = *puVar1;
      *(undefined4 *)&unaff_s2->vz = uVar4;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 0x22) * 8 + unaff_s8);
      uVar4 = puVar1[1];
      *(undefined4 *)unaff_s1 = *puVar1;
      *(undefined4 *)&unaff_s1->vz = uVar4;
      if ((*(byte *)((int)puVar6 + 0xe) & 2) != 0) break;
      lVar2 = RotAverageNclip3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),
                               (long *)(unaff_s2 + 2),(long *)(unaff_s1 + 2),
                               (long *)&stack0x00000028,(long *)&stack0x0000002c,
                               (long *)&stack0x00000030);
      puVar6 = unaff_s0;
      if (0 < lVar2) {
        uVar4 = DVFT3_02_OBJ_1A8(&unaff_s3[2].vz,&unaff_s2[2].vz,&unaff_s1[2].vz);
        return uVar4;
      }
    }
    lVar2 = RotAverage3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                        (long *)(unaff_s1 + 2),(long *)&stack0x00000028,(long *)&stack0x00000030);
    param_1 = &unaff_s3[2].vz;
    param_2 = &unaff_s2[2].vz;
    param_3 = &unaff_s1[2].vz;
    in_stack_0000002c = (ushort)lVar2;
  } while( true );
}



undefined4
GsTMDdivTNF3(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  uint local_40;
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  *(SVECTOR **)(param_7 + 0xa8) = _2;
  *(SVECTOR **)(param_7 + 0xac) = _3;
  *(SVECTOR **)(param_7 + 0xb0) = v2;
  local_38 = param_7 + 0x60;
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    local_40 = param_4;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 3) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      if ((*(byte *)((int)puVar4 + -10) & 2) == 0) {
        lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                                 (long *)(param_7 + 0x58),&lStack80,(long *)&local_4c,alStack72);
        if (0 < lVar2) {
          uVar3 = DVFT3_03_OBJ_19C(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c);
          return uVar3;
        }
      }
      else {
        lVar2 = RotAverage3(_2,_3,v2,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                            (long *)(param_7 + 0x58),&lStack80,alStack72);
        local_4c = (ushort)lVar2;
        FUN_80027d3c(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_4c - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(undefined4 *)(param_7 + 0x10) = puVar4[1];
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -9) & 0xfe;
        *(undefined2 *)(param_7 + 0xc) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined2 *)(param_7 + 0xe) = *(undefined2 *)((int)puVar4 + -2);
        *(undefined4 *)(param_7 + 0x20) = puVar4[-2];
        *(undefined4 *)(param_7 + 0x38) = puVar4[-1];
        *(undefined4 *)(param_7 + 0x50) = *puVar4;
        param_3 = RCpolyFT3A(param_3,param_7,0,local_38);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 7;
    } while (uVar5 < local_40);
  }
  return param_3;
}



undefined4 DVFT3_03_OBJ_19C(short *param_1,short *param_2,short *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *unaff_s0;
  undefined4 *puVar4;
  SVECTOR *unaff_s1;
  SVECTOR *unaff_s2;
  SVECTOR *unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int unaff_s8;
  ushort in_stack_0000002c;
  uint in_stack_00000038;
  undefined4 in_stack_00000040;
  uint in_stack_00000088;
  
  do {
    FUN_80027d3c(param_1,param_2,param_3);
    *(uint *)(unaff_s4 + 0x14) =
         ((uint)in_stack_0000002c - *(int *)(unaff_s7 + 8) >> (in_stack_00000088 & 0x1f)) * 4 +
         *(int *)(unaff_s7 + 4);
    *(undefined4 *)(unaff_s4 + 0x10) = unaff_s0[1];
    *(byte *)(unaff_s4 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)unaff_s0 + -9) & 0xfe;
    *(undefined2 *)(unaff_s4 + 0xc) = *(undefined2 *)((int)unaff_s0 + -6);
    *(undefined2 *)(unaff_s4 + 0xe) = *(undefined2 *)((int)unaff_s0 + -2);
    *(undefined4 *)(unaff_s3 + 1) = unaff_s0[-2];
    *(undefined4 *)(unaff_s2 + 1) = unaff_s0[-1];
    *(undefined4 *)(unaff_s1 + 1) = *unaff_s0;
    unaff_s5 = RCpolyFT3A(unaff_s5);
    puVar4 = unaff_s0;
    while( true ) {
      unaff_s6 = unaff_s6 + 1;
      unaff_s0 = puVar4 + 7;
      if (in_stack_00000038 <= unaff_s6) {
        return unaff_s5;
      }
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 9) * 8 + unaff_s8);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s3 = *puVar1;
      *(undefined4 *)&unaff_s3->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0x26) * 8 + unaff_s8);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s2 = *puVar1;
      *(undefined4 *)&unaff_s2->vz = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 10) * 8 + unaff_s8);
      uVar3 = puVar1[1];
      *(undefined4 *)unaff_s1 = *puVar1;
      *(undefined4 *)&unaff_s1->vz = uVar3;
      if ((*(byte *)((int)puVar4 + 0x12) & 2) != 0) break;
      lVar2 = RotAverageNclip3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),
                               (long *)(unaff_s2 + 2),(long *)(unaff_s1 + 2),
                               (long *)&stack0x00000028,(long *)&stack0x0000002c,
                               (long *)&stack0x00000030);
      puVar4 = unaff_s0;
      if (0 < lVar2) {
        uVar3 = DVFT3_03_OBJ_19C(&unaff_s3[2].vz,&unaff_s2[2].vz,&unaff_s1[2].vz);
        return uVar3;
      }
    }
    lVar2 = RotAverage3(unaff_s3,unaff_s2,unaff_s1,(long *)(unaff_s3 + 2),(long *)(unaff_s2 + 2),
                        (long *)(unaff_s1 + 2),(long *)&stack0x00000028,(long *)&stack0x00000030);
    param_1 = &unaff_s3[2].vz;
    param_2 = &unaff_s2[2].vz;
    param_3 = &unaff_s1[2].vz;
    in_stack_0000002c = (ushort)lVar2;
  } while( true );
}



// Possible DVG3_01.OBJ/GsTMDdivG3LFG

undefined4
GsTMDdivG3L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
           int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  ushort local_48;
  long lStack68;
  int local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xf) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      lVar2 = RotAverageNclipColorCol3
                        (_2,_3,v2,(SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                         (SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 9) * 8),
                         (SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 0xd) * 8),
                         (CVECTOR *)(param_1 + 4),(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                         (long *)(param_8 + 0x58),(CVECTOR *)(param_8 + 0x24),
                         (CVECTOR *)(param_8 + 0x3c),(CVECTOR *)(param_8 + 0x54),(long *)&local_48,
                         &lStack68);
      param_1 = param_1 + 0x14;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_48 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyG3A(param_4,param_8,0,local_38);
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 < param_5);
  }
  return param_4;
}



// Possible DVG3_00.OBJ/GsTMDdivG3L
// Possible DVG3_01.OBJ/GsTMDdivG3LFG

undefined4
FUN_80029520(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ushort local_48 [2];
  undefined auStack68 [4];
  int local_40;
  int local_38;
  
  puVar7 = (undefined4 *)(param_8 + 0x18);
  puVar6 = (undefined4 *)(param_8 + 0x30);
  puVar5 = (undefined4 *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(undefined4 **)(param_8 + 0xa8) = puVar7;
  *(undefined4 **)(param_8 + 0xac) = puVar6;
  *(undefined4 **)(param_8 + 0xb0) = puVar5;
  uVar8 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar7 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xf) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      iVar2 = RotAverageNclipColorDpq3_1
                        (puVar7,puVar6,puVar5,local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8,
                         local_40 + (uint)*(ushort *)(pbVar4 + 9) * 8,
                         local_40 + (uint)*(ushort *)(pbVar4 + 0xd) * 8,param_1 + 4,param_8 + 0x28,
                         param_8 + 0x40,param_8 + 0x58,param_8 + 0x24,param_8 + 0x3c,param_8 + 0x54,
                         local_48,auStack68);
      param_1 = param_1 + 0x14;
      if (0 < iVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_48[0] - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyG3A(param_4,param_8,0,local_38);
      }
      uVar8 = uVar8 + 1;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar8 < param_5);
  }
  return param_4;
}



void RotAverageNclipColorDpq3_1
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
               undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
               undefined4 *param_13,undefined4 *param_14,undefined4 *param_15)

{
  undefined4 in_zero;
  undefined4 in_at;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,in_at,param_1[1]);
  copFunction(2,0x180001);
  uVar3 = getCopReg(2,0x4000);
  setCopReg(2,in_zero,*param_2);
  setCopReg(2,in_at,param_2[1]);
  copFunction(2,0x180001);
  uVar4 = getCopReg(2,0x4000);
  setCopReg(2,in_zero,*param_3);
  setCopReg(2,in_at,param_3[1]);
  copFunction(2,0x180001);
  uVar5 = getCopReg(2,0x4000);
  uVar2 = getCopControlWord(2,0xf800);
  *param_15 = uVar2;
  copFunction(2,0x1400006);
  iVar1 = getCopReg(2,0xc000);
  if (0 < iVar1) {
    setCopReg(2,in_zero,*param_4);
    setCopReg(2,in_at,param_4[1]);
    setCopReg(2,param_3,*param_7);
    setCopReg(2,0x4000,uVar3);
    copFunction(2,0xe80413);
    uVar2 = getCopReg(2,0xc);
    *param_8 = uVar2;
    uVar2 = getCopReg(2,0x16);
    *param_11 = uVar2;
    setCopReg(2,in_zero,*param_5);
    setCopReg(2,in_at,param_5[1]);
    setCopReg(2,0x4000,uVar4);
    copFunction(2,0xe80413);
    uVar2 = getCopReg(2,0xd);
    *param_9 = uVar2;
    uVar2 = getCopReg(2,0x16);
    *param_12 = uVar2;
    setCopReg(2,in_zero,*param_6);
    setCopReg(2,in_at,param_6[1]);
    setCopReg(2,0x4000,uVar5);
    copFunction(2,0xe80413);
    uVar2 = getCopReg(2,0xe);
    *param_10 = uVar2;
    uVar2 = getCopReg(2,0x16);
    *param_13 = uVar2;
    copFunction(2,0x158002d);
    uVar2 = getCopReg(2,0x3800);
    *param_14 = uVar2;
  }
  return;
}



undefined4
GsTMDdivG3NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint param_6
            ,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 4);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -1);
        *(undefined4 *)(param_8 + 0x24) = *puVar4;
        *(undefined4 *)(param_8 + 0x3c) = *puVar4;
        *(undefined4 *)(param_8 + 0x54) = *puVar4;
        param_4 = RCpolyG3A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 5;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivNG3(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
           int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  local_38 = param_7 + 0x60;
  *(SVECTOR **)(param_7 + 0xa8) = _2;
  *(SVECTOR **)(param_7 + 0xac) = _3;
  *(SVECTOR **)(param_7 + 0xb0) = v2;
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 1) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_44 - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -9);
        *(undefined4 *)(param_7 + 0x24) = puVar4[-2];
        *(undefined4 *)(param_7 + 0x3c) = puVar4[-1];
        *(undefined4 *)(param_7 + 0x54) = *puVar4;
        param_3 = RCpolyG3A(param_3,param_7,0,local_38);
      }
      puVar4 = puVar4 + 6;
    } while (uVar5 < param_4);
  }
  return param_3;
}



// Possible DVGT3_01.OBJ/GsTMDdivTG3LFG

undefined4
GsTMDdivTG3L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  CVECTOR local_48;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  local_48 = (CVECTOR)0x34808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      lVar2 = RotAverageNclipColorCol3
                        (_2,_3,v2,(SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 1) * 8),
                         (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 2) * 8),
                         (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 3) * 8),&local_48,
                         (long *)(param_8 + 0x28),(long *)(param_8 + 0x40),(long *)(param_8 + 0x58),
                         (CVECTOR *)(param_8 + 0x24),(CVECTOR *)(param_8 + 0x3c),
                         (CVECTOR *)(param_8 + 0x54),(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -2);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar4;
        param_4 = RCpolyGT3A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 7;
    } while (uVar5 < param_5);
  }
  return param_4;
}



// Possible DVGT3_00.OBJ/GsTMDdivTG3L
// Possible DVGT3_01.OBJ/GsTMDdivTG3LFG

undefined4
FUN_80029ed8(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_48;
  ushort local_44 [2];
  undefined auStack64 [8];
  int local_38;
  
  local_48 = 0x34808080;
  puVar7 = (undefined4 *)(param_8 + 0x18);
  puVar6 = (undefined4 *)(param_8 + 0x30);
  puVar5 = (undefined4 *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(undefined4 **)(param_8 + 0xa8) = puVar7;
  *(undefined4 **)(param_8 + 0xac) = puVar6;
  *(undefined4 **)(param_8 + 0xb0) = puVar5;
  uVar8 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar7 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      iVar2 = RotAverageNclipColorDpq3_1
                        (puVar7,puVar6,puVar5,param_3 + (uint)*(ushort *)(puVar4 + 1) * 8,
                         param_3 + (uint)*(ushort *)(puVar4 + 2) * 8,
                         param_3 + (uint)*(ushort *)(puVar4 + 3) * 8,&local_48,param_8 + 0x28,
                         param_8 + 0x40,param_8 + 0x58,param_8 + 0x24,param_8 + 0x3c,param_8 + 0x54,
                         local_44,auStack64);
      uVar8 = uVar8 + 1;
      if (0 < iVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44[0] - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -2);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar4;
        param_4 = RCpolyGT3A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 7;
    } while (uVar8 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivTG3NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             uint param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  local_38 = param_8 + 0x60;
  *(SVECTOR **)(param_8 + 0xa8) = _2;
  *(SVECTOR **)(param_8 + 0xac) = _3;
  *(SVECTOR **)(param_8 + 0xb0) = v2;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      lVar2 = RotAverageNclip3(_2,_3,v2,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_80027d3c(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -9);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -2);
        *(undefined4 *)(param_8 + 0x24) = 0x34808080;
        *(undefined4 *)(param_8 + 0x3c) = 0x34808080;
        *(undefined4 *)(param_8 + 0x54) = 0x34808080;
        *(undefined4 *)(param_8 + 0x20) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x50) = *puVar4;
        param_4 = RCpolyGT3A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 7;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivTNG3(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar6;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  uVar6 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  local_38 = param_7 + 0x60;
  *(SVECTOR **)(param_7 + 0xa8) = _2;
  *(SVECTOR **)(param_7 + 0xac) = _3;
  *(SVECTOR **)(param_7 + 0xb0) = v2;
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar2 = (undefined4 *)((uint)*(ushort *)(puVar5 + 4) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)_2 = *puVar2;
      *(undefined4 *)(param_7 + 0x1c) = uVar4;
      puVar2 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x12) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)_3 = *puVar2;
      *(undefined4 *)(param_7 + 0x34) = uVar4;
      puVar2 = (undefined4 *)((uint)*(ushort *)(puVar5 + 5) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)v2 = *puVar2;
      *(undefined4 *)(param_7 + 0x4c) = uVar4;
      lVar3 = RotAverageNclip3(_2,_3,v2,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),&lStack72,(long *)&local_44,alStack64);
      uVar6 = uVar6 + 1;
      if (0 < lVar3) {
        FUN_80027d3c(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c);
        cVar1 = DAT_80065488;
        *(uint *)(param_7 + 0x14) =
             ((uint)local_44 - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(byte *)(param_7 + 0x13) = cVar1 << 1 | *(byte *)((int)puVar5 + -9) & 0xfe;
        *(undefined2 *)(param_7 + 0xc) = *(undefined2 *)((int)puVar5 + -6);
        *(undefined2 *)(param_7 + 0xe) = *(undefined2 *)((int)puVar5 + -2);
        *(undefined4 *)(param_7 + 0x24) = puVar5[1];
        *(undefined4 *)(param_7 + 0x3c) = puVar5[2];
        *(undefined4 *)(param_7 + 0x54) = puVar5[3];
        *(undefined4 *)(param_7 + 0x20) = puVar5[-2];
        *(undefined4 *)(param_7 + 0x38) = puVar5[-1];
        *(undefined4 *)(param_7 + 0x50) = *puVar5;
        param_3 = RCpolyGT3A(param_3,param_7,0,local_38);
      }
      puVar5 = puVar5 + 9;
    } while (uVar6 < param_4);
  }
  return param_3;
}



undefined4
GsTMDdivF4L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
           int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack88;
  ushort local_54;
  long alStack80 [2];
  int local_48;
  int local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_48 = param_1;
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xd) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack88,
                               (long *)&local_54,alStack80);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorCol((SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                       (CVECTOR *)(local_48 + 4),(CVECTOR *)(param_8 + 0x10));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_54 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF4A(param_4,param_8,0,local_38);
      }
      local_48 = local_48 + 0x14;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 < param_5);
  }
  return param_4;
}



// Possible REG05.OBJ/ReadSZfifo4

void FUN_8002a830(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = getCopReg(2,0x10);
  *param_1 = uVar1;
  uVar1 = getCopReg(2,0x11);
  *param_2 = uVar1;
  uVar1 = getCopReg(2,0x12);
  *param_3 = uVar1;
  uVar1 = getCopReg(2,0x13);
  *param_4 = uVar1;
  return;
}



long RotAverageNclip4(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,SVECTOR *v3,long *sxy0,long *sxy1,
                     long *sxy2,long *sxy3,long *p,long *otz,long *flag)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 in_v0;
  int iVar1;
  undefined4 in_v1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  setCopReg(2,in_zero,*(undefined4 *)_2);
  setCopReg(2,in_at,*(undefined4 *)&_2->vz);
  setCopReg(2,in_v0,*(undefined4 *)_3);
  setCopReg(2,in_v1,*(undefined4 *)&_3->vz);
  setCopReg(2,_2,*(undefined4 *)v2);
  setCopReg(2,_3,*(undefined4 *)&v2->vz);
  copFunction(2,0x280030);
  uVar2 = getCopControlWord(2,0xf800);
  *flag = uVar2;
  copFunction(2,0x1400006);
  iVar1 = getCopReg(2,0xc000);
  if (0 < iVar1) {
    lVar3 = getCopReg(2,0xc);
    *sxy0 = lVar3;
    lVar3 = getCopReg(2,0xd);
    *sxy1 = lVar3;
    lVar3 = getCopReg(2,0xe);
    *sxy2 = lVar3;
    setCopReg(2,in_zero,*(undefined4 *)v3);
    setCopReg(2,in_at,*(undefined4 *)&v3->vz);
    copFunction(2,0x180001);
    lVar3 = getCopReg(2,0xe);
    *sxy3 = lVar3;
    uVar4 = getCopControlWord(2,0xf800);
    lVar3 = getCopReg(2,8);
    *p = lVar3;
    *flag = uVar4 | uVar2;
    copFunction(2,0x168002e);
    lVar3 = getCopReg(2,0x3800);
    *otz = lVar3;
  }
  return iVar1;
}



undefined4
GsTMDdivF4LFG(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
             int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long local_58;
  ushort local_54;
  long alStack80 [2];
  int local_48;
  int local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_48 = param_1;
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xd) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&local_58,
                               (long *)&local_54,alStack80);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorDpq((SVECTOR *)(local_40 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                       (CVECTOR *)(local_48 + 4),local_58,(CVECTOR *)(param_8 + 0x10));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_54 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF4A(param_4,param_8,0,local_38);
      }
      local_48 = local_48 + 0x14;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivF4NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint param_6
            ,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xd) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack72,
                               (long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(undefined4 *)(param_8 + 0x10) = *(undefined4 *)(pbVar4 + 1);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_4 = RCpolyF4A(param_4,param_8,0,local_38);
      }
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivNF4(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
           int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  uint local_40;
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  v3 = (SVECTOR *)(param_7 + 0x60);
  local_38 = param_7 + 0x78;
  *(SVECTOR **)(param_7 + 0xf0) = _2;
  *(SVECTOR **)(param_7 + 0xf4) = _3;
  *(SVECTOR **)(param_7 + 0xf8) = v2;
  *(SVECTOR **)(param_7 + 0xfc) = v3;
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_40 = param_4;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 5) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 9) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_7 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),(long *)(param_7 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c,param_7 + 0x74);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_4c - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(undefined4 *)(param_7 + 0x10) = *(undefined4 *)(pbVar4 + 1);
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        param_3 = RCpolyF4A(param_3,param_7,0,local_38);
      }
      pbVar4 = pbVar4 + 0x10;
    } while (uVar5 < local_40);
  }
  return param_3;
}



undefined4
GsTMDdivTF4L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long lStack72;
  CVECTOR local_44;
  int local_40;
  int local_38;
  
  local_44 = (CVECTOR)0x2c808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 3) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack80,
                               (long *)&local_4c,&lStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorCol((SVECTOR *)(local_40 + (uint)*(ushort *)(puVar4 + 1) * 8),&local_44,
                       (CVECTOR *)(param_8 + 0x10));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_4c - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar4;
        param_4 = RCpolyFT4A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 8;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivTF4LFG(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
              int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long local_50;
  ushort local_4c;
  long lStack72;
  CVECTOR local_44;
  int local_40;
  int local_38;
  
  local_44 = (CVECTOR)0x2c808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    local_40 = param_3;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 3) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&local_50,
                               (long *)&local_4c,&lStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorDpq((SVECTOR *)(local_40 + (uint)*(ushort *)(puVar4 + 1) * 8),&local_44,local_50,
                       (CVECTOR *)(param_8 + 0x10));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_4c - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar4;
        param_4 = RCpolyFT4A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 8;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivTF4NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             uint param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar7;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  undefined4 local_40;
  int local_38;
  
  local_40 = 0x2c808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar7 = 0;
  if (param_5 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 6) * 8 + param_2);
      uVar5 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar5;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar6 + 2) * 8 + param_2);
      uVar5 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar5;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar6 + 10) * 8 + param_2);
      uVar5 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar5;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar6 + 3) * 8 + param_2);
      uVar5 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar5;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar7 = uVar7 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        iVar3 = *(int *)(param_7 + 8);
        iVar4 = *(int *)(param_7 + 4);
        *(undefined4 *)(param_8 + 0x10) = local_40;
        *(uint *)(param_8 + 0x14) = ((uint)local_4c - iVar3 >> (param_6 & 0x1f)) * 4 + iVar4;
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar6 + -0xd);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar6 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar6 + -6);
        *(undefined4 *)(param_8 + 0x20) = puVar6[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar6[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar6[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar6;
        param_4 = RCpolyFT4A(param_4,param_8,0,local_38);
      }
      puVar6 = puVar6 + 8;
    } while (uVar7 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivTNF4(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  uint local_40;
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  v3 = (SVECTOR *)(param_7 + 0x60);
  local_38 = param_7 + 0x78;
  *(SVECTOR **)(param_7 + 0xf0) = _2;
  *(SVECTOR **)(param_7 + 0xf4) = _3;
  *(SVECTOR **)(param_7 + 0xf8) = v2;
  *(SVECTOR **)(param_7 + 0xfc) = v3;
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    local_40 = param_4;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 3) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_7 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),(long *)(param_7 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c,param_7 + 0x74);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_4c - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(undefined4 *)(param_7 + 0x10) = puVar4[1];
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd) & 0xfe;
        *(undefined2 *)(param_7 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_7 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_7 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_7 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_7 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_7 + 0x68) = *puVar4;
        param_3 = RCpolyFT4A(param_3,param_7,0,local_38);
      }
      puVar4 = puVar4 + 8;
    } while (uVar5 < local_40);
  }
  return param_3;
}



undefined4
GsTMDdivG4L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
           int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  CVECTOR *v3;
  byte *pbVar4;
  SVECTOR *v3_00;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  long lStack96;
  ushort local_5c;
  long alStack88 [2];
  int local_50;
  undefined4 local_48;
  uint local_40;
  int local_38;
  
  local_40 = 0;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3_00 = (SVECTOR *)(param_8 + 0x60);
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3_00;
  local_38 = param_8 + 0x78;
  local_48 = param_4;
  if (param_5 != 0) {
    pbVar4 = (byte *)(param_1 + 3);
    local_50 = param_1;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xf) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0x13) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3_00 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3_00,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack96,
                               (long *)&local_5c,alStack88);
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        v3 = (CVECTOR *)(local_50 + 4);
        NormalColorCol3((SVECTOR *)(param_3 + (uint)*(ushort *)(pbVar4 + 5) * 8),
                        (SVECTOR *)(param_3 + (uint)*(ushort *)(pbVar4 + 9) * 8),
                        (SVECTOR *)(param_3 + (uint)*(ushort *)(pbVar4 + 0xd) * 8),v3,
                        (CVECTOR *)(param_8 + 0x24),(CVECTOR *)(param_8 + 0x3c),
                        (CVECTOR *)(param_8 + 0x54));
        NormalColorCol((SVECTOR *)(param_3 + (uint)*(ushort *)(pbVar4 + 0x11) * 8),v3,
                       (CVECTOR *)(param_8 + 0x6c));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_5c - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        local_48 = RCpolyG4A(local_48,param_8,0,local_38);
      }
      pbVar4 = pbVar4 + 0x18;
      local_50 = local_50 + 0x18;
      local_40 = local_40 + 1;
    } while (local_40 < param_5);
  }
  return local_48;
}



undefined4
GsTMDdivG4LFG(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
             int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  CVECTOR *_3;
  SVECTOR *_2;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ushort local_68 [2];
  long lStack100;
  long local_60 [2];
  int local_58;
  undefined4 local_50;
  uint local_48;
  int local_40;
  long *local_38;
  
  local_48 = 0;
  puVar7 = (undefined4 *)(param_8 + 0x18);
  puVar6 = (undefined4 *)(param_8 + 0x30);
  puVar5 = (undefined4 *)(param_8 + 0x48);
  _2 = (SVECTOR *)(param_8 + 0x60);
  *(undefined4 **)(param_8 + 0xf0) = puVar7;
  *(undefined4 **)(param_8 + 0xf4) = puVar6;
  *(undefined4 **)(param_8 + 0xf8) = puVar5;
  *(SVECTOR **)(param_8 + 0xfc) = _2;
  local_40 = param_8 + 0x78;
  local_50 = param_4;
  if (param_5 != 0) {
    local_38 = &lStack100;
    pbVar4 = (byte *)(param_1 + 3);
    local_58 = param_1;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 7) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar7 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xb) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0xf) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(pbVar4 + 0x13) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      _3 = (CVECTOR *)(local_58 + 4);
      iVar2 = RotAverageNclipColorDpq3_1
                        (puVar7,puVar6,puVar5,param_3 + (uint)*(ushort *)(pbVar4 + 5) * 8,
                         param_3 + (uint)*(ushort *)(pbVar4 + 9) * 8,
                         param_3 + (uint)*(ushort *)(pbVar4 + 0xd) * 8,_3,param_8 + 0x28,
                         param_8 + 0x40,param_8 + 0x58,param_8 + 0x24,param_8 + 0x3c,param_8 + 0x54,
                         local_68,local_38);
      if (0 < iVar2) {
        RotTransPers(_2,(long *)(param_8 + 0x70),local_60,local_38);
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorDpq((SVECTOR *)(param_3 + (uint)*(ushort *)(pbVar4 + 0x11) * 8),_3,local_60[0],
                       (CVECTOR *)(param_8 + 0x6c));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_68[0] - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *pbVar4;
        local_50 = RCpolyG4A(local_50,param_8,0,local_40);
      }
      pbVar4 = pbVar4 + 0x18;
      local_58 = local_58 + 0x18;
      local_48 = local_48 + 1;
    } while (local_48 < param_5);
  }
  return local_50;
}



undefined4
GsTMDdivG4NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint param_6
            ,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack72;
  ushort local_44;
  long alStack64 [2];
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 4);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0x12) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack72,
                               (long *)&local_44,alStack64);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_44 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -1);
        *(undefined4 *)(param_8 + 0x24) = *puVar4;
        *(undefined4 *)(param_8 + 0x3c) = *puVar4;
        *(undefined4 *)(param_8 + 0x54) = *puVar4;
        *(undefined4 *)(param_8 + 0x6c) = *puVar4;
        param_4 = RCpolyG4A(param_4,param_8,0,local_38);
      }
      puVar4 = puVar4 + 6;
    } while (uVar5 < param_5);
  }
  return param_4;
}



undefined4
GsTMDdivNG4(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
           int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  uint local_40;
  int local_38;
  
  uVar5 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  v3 = (SVECTOR *)(param_7 + 0x60);
  local_38 = param_7 + 0x78;
  *(SVECTOR **)(param_7 + 0xf0) = _2;
  *(SVECTOR **)(param_7 + 0xf4) = _3;
  *(SVECTOR **)(param_7 + 0xf8) = v2;
  *(SVECTOR **)(param_7 + 0xfc) = v3;
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    local_40 = param_4;
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 1) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_7 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_7 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)(puVar4 + 2) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_7 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_7 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),(long *)(param_7 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c,param_7 + 0x74);
        *(uint *)(param_7 + 0x14) =
             ((uint)local_4c - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(byte *)(param_7 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd);
        *(undefined4 *)(param_7 + 0x24) = puVar4[-3];
        *(undefined4 *)(param_7 + 0x3c) = puVar4[-2];
        *(undefined4 *)(param_7 + 0x54) = puVar4[-1];
        *(undefined4 *)(param_7 + 0x6c) = *puVar4;
        param_3 = RCpolyG4A(param_3,param_7,0,local_38);
      }
      puVar4 = puVar4 + 7;
    } while (uVar5 < local_40);
  }
  return param_3;
}



undefined4
GsTMDdivTG4L(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack88;
  ushort local_54;
  long lStack80;
  CVECTOR local_4c;
  undefined4 local_48;
  int local_40;
  CVECTOR *local_38;
  
  local_4c = (CVECTOR)0x3c808080;
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_40 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  local_48 = param_4;
  if (param_5 != 0) {
    local_38 = &local_4c;
    puVar4 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0x12) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack88,
                               (long *)&local_54,&lStack80);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorCol3((SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 1) * 8),
                        (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 2) * 8),
                        (SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 3) * 8),local_38,
                        (CVECTOR *)(param_8 + 0x24),(CVECTOR *)(param_8 + 0x3c),
                        (CVECTOR *)(param_8 + 0x54));
        NormalColorCol((SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 4) * 8),local_38,
                       (CVECTOR *)(param_8 + 0x6c));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_54 - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd) & 0xfe;
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar4;
        local_48 = RCpolyGT4A(local_48,param_8,0,local_40);
      }
      puVar4 = puVar4 + 9;
    } while (uVar5 < param_5);
  }
  return local_48;
}



undefined4
GsTMDdivTG4LFG(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
              int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *_2;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  CVECTOR local_60;
  ushort local_5c [2];
  long lStack88;
  long local_54;
  undefined4 local_50;
  int local_48;
  long *local_40;
  CVECTOR *local_38;
  
  local_60 = (CVECTOR)0x3c808080;
  puVar7 = (undefined4 *)(param_8 + 0x18);
  puVar6 = (undefined4 *)(param_8 + 0x30);
  puVar5 = (undefined4 *)(param_8 + 0x48);
  _2 = (SVECTOR *)(param_8 + 0x60);
  local_48 = param_8 + 0x78;
  *(undefined4 **)(param_8 + 0xf0) = puVar7;
  *(undefined4 **)(param_8 + 0xf4) = puVar6;
  *(undefined4 **)(param_8 + 0xf8) = puVar5;
  *(SVECTOR **)(param_8 + 0xfc) = _2;
  uVar8 = 0;
  local_50 = param_4;
  if (param_5 != 0) {
    local_38 = &local_60;
    local_40 = &lStack88;
    puVar4 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar7 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0x12) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      iVar2 = RotAverageNclipColorDpq3_1
                        (puVar7,puVar6,puVar5,param_3 + (uint)*(ushort *)(puVar4 + 1) * 8,
                         param_3 + (uint)*(ushort *)(puVar4 + 2) * 8,
                         param_3 + (uint)*(ushort *)(puVar4 + 3) * 8,local_38,param_8 + 0x28,
                         param_8 + 0x40,param_8 + 0x58,param_8 + 0x24,param_8 + 0x3c,param_8 + 0x54,
                         local_5c,local_40);
      uVar8 = uVar8 + 1;
      if (0 < iVar2) {
        RotTransPers(_2,(long *)(param_8 + 0x70),&local_54,local_40);
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        NormalColorDpq((SVECTOR *)(param_3 + (uint)*(ushort *)(puVar4 + 4) * 8),local_38,local_54,
                       (CVECTOR *)(param_8 + 0x6c));
        *(uint *)(param_8 + 0x14) =
             ((uint)local_5c[0] - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_8 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar4;
        local_50 = RCpolyGT4A(local_50,param_8,0,local_48);
      }
      puVar4 = puVar4 + 9;
    } while (uVar8 < param_5);
  }
  return local_50;
}



undefined4
GsTMDdivTG4NL(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             uint param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar5;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  undefined4 local_40;
  int local_38;
  
  _2 = (SVECTOR *)(param_8 + 0x18);
  _3 = (SVECTOR *)(param_8 + 0x30);
  v2 = (SVECTOR *)(param_8 + 0x48);
  v3 = (SVECTOR *)(param_8 + 0x60);
  local_38 = param_8 + 0x78;
  *(SVECTOR **)(param_8 + 0xf0) = _2;
  *(SVECTOR **)(param_8 + 0xf4) = _3;
  *(SVECTOR **)(param_8 + 0xf8) = v2;
  *(SVECTOR **)(param_8 + 0xfc) = v3;
  uVar5 = 0;
  local_40 = param_4;
  if (param_5 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 6) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_2 = *puVar1;
      *(undefined4 *)(param_8 + 0x1c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 10) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)_3 = *puVar1;
      *(undefined4 *)(param_8 + 0x34) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0xe) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v2 = *puVar1;
      *(undefined4 *)(param_8 + 0x4c) = uVar3;
      puVar1 = (undefined4 *)((uint)*(ushort *)((int)puVar4 + 0x12) * 8 + param_2);
      uVar3 = puVar1[1];
      *(undefined4 *)v3 = *puVar1;
      *(undefined4 *)(param_8 + 100) = uVar3;
      lVar2 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_8 + 0x28),(long *)(param_8 + 0x40),
                               (long *)(param_8 + 0x58),(long *)(param_8 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar5 = uVar5 + 1;
      if (0 < lVar2) {
        FUN_8002a830(param_8 + 0x2c,param_8 + 0x44,param_8 + 0x5c,param_8 + 0x74);
        *(uint *)(param_8 + 0x14) =
             ((uint)local_4c - *(int *)(param_7 + 8) >> (param_6 & 0x1f)) * 4 +
             *(int *)(param_7 + 4);
        *(byte *)(param_8 + 0x13) = DAT_80065488 << 1 | *(byte *)((int)puVar4 + -0xd);
        *(undefined2 *)(param_8 + 0xc) = *(undefined2 *)((int)puVar4 + -10);
        *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)((int)puVar4 + -6);
        *(undefined4 *)(param_8 + 0x24) = 0x3c808080;
        *(undefined4 *)(param_8 + 0x3c) = 0x3c808080;
        *(undefined4 *)(param_8 + 0x54) = 0x3c808080;
        *(undefined4 *)(param_8 + 0x6c) = 0x3c808080;
        *(undefined4 *)(param_8 + 0x20) = puVar4[-3];
        *(undefined4 *)(param_8 + 0x38) = puVar4[-2];
        *(undefined4 *)(param_8 + 0x50) = puVar4[-1];
        *(undefined4 *)(param_8 + 0x68) = *puVar4;
        local_40 = RCpolyGT4A(local_40,param_8,0,local_38);
      }
      puVar4 = puVar4 + 9;
    } while (uVar5 < param_5);
  }
  return local_40;
}



undefined4
GsTMDdivTNG4(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
            int param_7)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  SVECTOR *v3;
  SVECTOR *v2;
  SVECTOR *_3;
  SVECTOR *_2;
  uint uVar6;
  long lStack80;
  ushort local_4c;
  long alStack72 [2];
  uint local_40;
  int local_38;
  
  uVar6 = 0;
  _2 = (SVECTOR *)(param_7 + 0x18);
  _3 = (SVECTOR *)(param_7 + 0x30);
  v2 = (SVECTOR *)(param_7 + 0x48);
  v3 = (SVECTOR *)(param_7 + 0x60);
  local_38 = param_7 + 0x78;
  *(SVECTOR **)(param_7 + 0xf0) = _2;
  *(SVECTOR **)(param_7 + 0xf4) = _3;
  *(SVECTOR **)(param_7 + 0xf8) = v2;
  *(SVECTOR **)(param_7 + 0xfc) = v3;
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_1 + 0x10);
    local_40 = param_4;
    do {
      puVar2 = (undefined4 *)((uint)*(ushort *)(puVar5 + 5) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)_2 = *puVar2;
      *(undefined4 *)(param_7 + 0x1c) = uVar4;
      puVar2 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x16) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)_3 = *puVar2;
      *(undefined4 *)(param_7 + 0x34) = uVar4;
      puVar2 = (undefined4 *)((uint)*(ushort *)(puVar5 + 6) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)v2 = *puVar2;
      *(undefined4 *)(param_7 + 0x4c) = uVar4;
      puVar2 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x1a) * 8 + param_2);
      uVar4 = puVar2[1];
      *(undefined4 *)v3 = *puVar2;
      *(undefined4 *)(param_7 + 100) = uVar4;
      lVar3 = RotAverageNclip4(_2,_3,v2,v3,(long *)(param_7 + 0x28),(long *)(param_7 + 0x40),
                               (long *)(param_7 + 0x58),(long *)(param_7 + 0x70),&lStack80,
                               (long *)&local_4c,alStack72);
      uVar6 = uVar6 + 1;
      if (0 < lVar3) {
        FUN_8002a830(param_7 + 0x2c,param_7 + 0x44,param_7 + 0x5c,param_7 + 0x74);
        cVar1 = DAT_80065488;
        *(uint *)(param_7 + 0x14) =
             ((uint)local_4c - *(int *)(param_6 + 8) >> (param_5 & 0x1f)) * 4 +
             *(int *)(param_6 + 4);
        *(byte *)(param_7 + 0x13) = cVar1 << 1 | *(byte *)((int)puVar5 + -0xd) & 0xfe;
        *(undefined2 *)(param_7 + 0xc) = *(undefined2 *)((int)puVar5 + -10);
        *(undefined2 *)(param_7 + 0xe) = *(undefined2 *)((int)puVar5 + -6);
        *(undefined4 *)(param_7 + 0x24) = puVar5[1];
        *(undefined4 *)(param_7 + 0x3c) = puVar5[2];
        *(undefined4 *)(param_7 + 0x54) = puVar5[3];
        *(undefined4 *)(param_7 + 0x6c) = puVar5[4];
        *(undefined4 *)(param_7 + 0x20) = puVar5[-3];
        *(undefined4 *)(param_7 + 0x38) = puVar5[-2];
        *(undefined4 *)(param_7 + 0x50) = puVar5[-1];
        *(undefined4 *)(param_7 + 0x68) = *puVar5;
        param_3 = RCpolyGT4A(param_3,param_7,0,local_38);
      }
      puVar5 = puVar5 + 0xb;
    } while (uVar6 < local_40);
  }
  return param_3;
}



// Possible DIVF3A.OBJ/RCpolyF3

undefined4 RCpolyF3(undefined4 param_1,int *param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 in_zero;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int unaff_retaddr;
  
  psVar8 = (short *)param_2[0x2a];
  psVar9 = (short *)param_2[0x2b];
  psVar10 = (short *)param_2[0x2c];
  iVar12 = getCopControlWord(2,0xd000);
  uVar11 = iVar12 >> 1;
  if (((*(uint *)(psVar8 + 10) < uVar11) && (*(uint *)(psVar9 + 10) < uVar11)) &&
     (*(uint *)(psVar10 + 10) < uVar11)) {
    return param_1;
  }
  iVar13 = getCopControlWord(2,0xc000);
  uVar11 = (uint)param_2[1] >> 1;
  uVar6 = (uint)param_2[2] >> 1;
  iVar12 = (iVar13 >> 0x10) + uVar11;
  if (((iVar12 < psVar8[8]) && (iVar12 < psVar9[8])) && (iVar12 < psVar10[8])) {
    return param_1;
  }
  iVar12 = (iVar13 >> 0x10) - uVar11;
  if (((psVar8[8] < iVar12) && (psVar9[8] < iVar12)) && (psVar10[8] < iVar12)) {
    return param_1;
  }
  iVar13 = getCopControlWord(2,0xc800);
  iVar12 = (iVar13 >> 0x10) + uVar6;
  if (((iVar12 < psVar8[9]) && (iVar12 < psVar9[9])) && (iVar12 < psVar10[9])) {
    return param_1;
  }
  iVar12 = (iVar13 >> 0x10) - uVar6;
  uVar5 = (uint)(psVar9[9] < iVar12);
  if (((psVar8[9] < iVar12) && (bVar1 = uVar5 != 0, uVar5 = (uint)(psVar10[9] < iVar12), bVar1)) &&
     (uVar5 != 0)) {
    return param_1;
  }
  sVar2 = *psVar8;
  sVar3 = *psVar9;
  sVar4 = *psVar10;
  *(short *)(param_2 + 0x18) = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)(param_2 + 0x1e) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar4 + (int)sVar2 >> 1);
  sVar2 = psVar8[1];
  sVar3 = psVar9[1];
  sVar4 = psVar10[1];
  *(short *)((int)param_2 + 0x62) = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)((int)param_2 + 0x7a) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar4 + (int)sVar2 >> 1);
  sVar2 = psVar8[2];
  sVar3 = psVar9[2];
  sVar4 = psVar10[2];
  *(short *)(param_2 + 0x19) = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)(param_2 + 0x1f) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar4 + (int)sVar2 >> 1);
  setCopReg(2,in_zero,param_2[0x18]);
  setCopReg(2,uVar5,param_2[0x19]);
  setCopReg(2,uVar11,param_2[0x1e]);
  setCopReg(2,uVar6,param_2[0x1f]);
  setCopReg(2,param_1,param_2[0x24]);
  setCopReg(2,param_2,param_2[0x25]);
  copFunction(2,0x280030);
  if (*param_2 == 1) {
    iVar12 = getCopReg(2,0xc);
    param_2[0x1c] = iVar12;
    iVar12 = getCopReg(2,0xd);
    param_2[0x22] = iVar12;
    iVar12 = getCopReg(2,0xe);
    param_2[0x28] = iVar12;
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
  }
  else {
    piVar7 = param_2 + 0x2e;
    param_2[0x43] = unaff_retaddr;
    param_2[0x40] = param_2[0x2a];
    param_2[0x41] = (int)(param_2 + 0x18);
    param_2[0x42] = (int)(param_2 + 0x24);
    iVar12 = getCopReg(2,0x11);
    param_2[0x1d] = iVar12;
    iVar12 = getCopReg(2,0x12);
    param_2[0x23] = iVar12;
    iVar12 = getCopReg(2,0x13);
    param_2[0x29] = iVar12;
    iVar12 = getCopReg(2,0xc);
    param_2[0x1c] = iVar12;
    iVar12 = getCopReg(2,0xd);
    param_2[0x22] = iVar12;
    iVar12 = getCopReg(2,0xe);
    param_2[0x28] = iVar12;
    RCpolyF3A();
    piVar7[0x12] = piVar7[-3];
    piVar7[0x13] = (int)(piVar7 + -0x10);
    piVar7[0x14] = (int)(piVar7 + -0x16);
    RCpolyF3A();
    piVar7[0x12] = piVar7[-2];
    piVar7[0x13] = (int)(piVar7 + -10);
    piVar7[0x14] = (int)(piVar7 + -0x10);
    RCpolyF3A();
    piVar7[0x12] = (int)(piVar7 + -0x16);
    piVar7[0x13] = (int)(piVar7 + -0x10);
    piVar7[0x14] = (int)(piVar7 + -10);
    RCpolyF3A();
  }
  return param_1;
}



// Possible DIVF3A.OBJ/RCpolyF3A

undefined4 RCpolyF3A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 in_zero;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 unaff_retaddr;
  
  psVar9 = (short *)param_4[0x12];
  psVar10 = (short *)param_4[0x13];
  psVar11 = (short *)param_4[0x14];
  iVar13 = getCopControlWord(2,0xd000);
  uVar12 = iVar13 >> 1;
  if (((*(uint *)(psVar9 + 10) < uVar12) && (*(uint *)(psVar10 + 10) < uVar12)) &&
     (*(uint *)(psVar11 + 10) < uVar12)) {
    return param_1;
  }
  iVar14 = getCopControlWord(2,0xc000);
  uVar12 = (uint)param_2[1] >> 1;
  uVar7 = (uint)param_2[2] >> 1;
  iVar13 = (iVar14 >> 0x10) + uVar12;
  if (((iVar13 < psVar9[8]) && (iVar13 < psVar10[8])) && (iVar13 < psVar11[8])) {
    return param_1;
  }
  iVar13 = (iVar14 >> 0x10) - uVar12;
  if (((psVar9[8] < iVar13) && (psVar10[8] < iVar13)) && (psVar11[8] < iVar13)) {
    return param_1;
  }
  iVar14 = getCopControlWord(2,0xc800);
  iVar13 = (iVar14 >> 0x10) + uVar7;
  if (((iVar13 < psVar9[9]) && (iVar13 < psVar10[9])) && (iVar13 < psVar11[9])) {
    return param_1;
  }
  iVar13 = (iVar14 >> 0x10) - uVar7;
  uVar6 = (uint)(psVar10[9] < iVar13);
  if (((psVar9[9] < iVar13) && (bVar1 = uVar6 != 0, uVar6 = (uint)(psVar11[9] < iVar13), bVar1)) &&
     (uVar6 != 0)) {
    return param_1;
  }
  sVar2 = *psVar9;
  sVar3 = *psVar10;
  sVar4 = *psVar11;
  *(short *)param_4 = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)(param_4 + 0xc) = (short)((int)sVar4 + (int)sVar2 >> 1);
  sVar2 = psVar9[1];
  sVar3 = psVar10[1];
  sVar4 = psVar11[1];
  *(short *)((int)param_4 + 2) = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar4 + (int)sVar2 >> 1);
  sVar2 = psVar9[2];
  sVar3 = psVar10[2];
  sVar4 = psVar11[2];
  *(short *)(param_4 + 1) = (short)((int)sVar2 + (int)sVar3 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar3 + (int)sVar4 >> 1);
  *(short *)(param_4 + 0xd) = (short)((int)sVar4 + (int)sVar2 >> 1);
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar6,param_4[1]);
  setCopReg(2,uVar12,param_4[6]);
  setCopReg(2,uVar7,param_4[7]);
  setCopReg(2,param_1,param_4[0xc]);
  setCopReg(2,param_2,param_4[0xd]);
  copFunction(2,0x280030);
  if (*param_2 == param_3 + 1) {
    uVar5 = getCopReg(2,0xc);
    param_4[4] = uVar5;
    uVar5 = getCopReg(2,0xd);
    param_4[10] = uVar5;
    uVar5 = getCopReg(2,0xe);
    param_4[0x10] = uVar5;
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
    DIVF3A_OBJ_320();
  }
  else {
    puVar8 = param_4 + 0x16;
    param_4[0x2b] = unaff_retaddr;
    param_4[0x28] = param_4[0x12];
    param_4[0x29] = param_4;
    param_4[0x2a] = param_4 + 0xc;
    uVar5 = getCopReg(2,0x11);
    param_4[5] = uVar5;
    uVar5 = getCopReg(2,0x12);
    param_4[0xb] = uVar5;
    uVar5 = getCopReg(2,0x13);
    param_4[0x11] = uVar5;
    uVar5 = getCopReg(2,0xc);
    param_4[4] = uVar5;
    uVar5 = getCopReg(2,0xd);
    param_4[10] = uVar5;
    uVar5 = getCopReg(2,0xe);
    param_4[0x10] = uVar5;
    RCpolyF3A();
    puVar8[0x12] = puVar8[-3];
    puVar8[0x13] = puVar8 + -0x10;
    puVar8[0x14] = puVar8 + -0x16;
    RCpolyF3A();
    puVar8[0x12] = puVar8[-2];
    puVar8[0x13] = puVar8 + -10;
    puVar8[0x14] = puVar8 + -0x10;
    RCpolyF3A();
    puVar8[0x12] = puVar8 + -0x16;
    puVar8[0x13] = puVar8 + -0x10;
    puVar8[0x14] = puVar8 + -10;
    RCpolyF3A();
  }
  return param_1;
}



// Possible DIVF3A.OBJ/DIVF3A_OBJ_320

void DIVF3A_OBJ_320(uint *param_1,int param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar1 = *(uint *)(in_t1 + 0x10);
  uVar2 = *(uint *)(in_t2 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[1] = uVar3;
  uVar1 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  *param_1 = uVar1 | 0x4000000;
  return;
}



// Possible DIVFT3A.OBJ/RCpolyFT3

undefined4 RCpolyFT3(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 in_zero;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int unaff_retaddr;
  
  psVar11 = (short *)param_2[0x2a];
  psVar12 = (short *)param_2[0x2b];
  psVar13 = (short *)param_2[0x2c];
  iVar15 = getCopControlWord(2,0xd000);
  uVar14 = iVar15 >> 1;
  if (((*(uint *)(psVar11 + 10) < uVar14) && (*(uint *)(psVar12 + 10) < uVar14)) &&
     (*(uint *)(psVar13 + 10) < uVar14)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc000);
  uVar14 = (uint)param_2[1] >> 1;
  uVar9 = (uint)param_2[2] >> 1;
  iVar15 = (iVar16 >> 0x10) + uVar14;
  if (((iVar15 < psVar11[8]) && (iVar15 < psVar12[8])) && (iVar15 < psVar13[8])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar14;
  if (((psVar11[8] < iVar15) && (psVar12[8] < iVar15)) && (psVar13[8] < iVar15)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc800);
  iVar15 = (iVar16 >> 0x10) + uVar9;
  if (((iVar15 < psVar11[9]) && (iVar15 < psVar12[9])) && (iVar15 < psVar13[9])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar9;
  uVar8 = (uint)(psVar12[9] < iVar15);
  if (((psVar11[9] < iVar15) && (bVar1 = uVar8 != 0, uVar8 = (uint)(psVar13[9] < iVar15), bVar1)) &&
     (uVar8 != 0)) {
    return param_1;
  }
  sVar5 = *psVar11;
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  *(short *)(param_2 + 0x18) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1e) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[1];
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  *(short *)((int)param_2 + 0x62) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_2 + 0x7a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[2];
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  *(short *)(param_2 + 0x19) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1f) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,param_2[0x18]);
  setCopReg(2,uVar8,param_2[0x19]);
  setCopReg(2,uVar14,param_2[0x1e]);
  setCopReg(2,uVar9,param_2[0x1f]);
  setCopReg(2,param_1,param_2[0x24]);
  setCopReg(2,param_2,param_2[0x25]);
  bVar2 = *(byte *)(psVar11 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar12 + 4);
  bVar4 = *(byte *)(psVar13 + 4);
  *(char *)(param_2 + 0x1a) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_2 + 0x20) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_2 + 0x26) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar11 + 9);
  bVar3 = *(byte *)((int)psVar12 + 9);
  bVar4 = *(byte *)((int)psVar13 + 9);
  *(char *)((int)param_2 + 0x69) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x81) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x99) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == 1) {
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
  }
  else {
    iVar15 = getCopReg(2,0x11);
    param_2[0x1d] = iVar15;
    iVar15 = getCopReg(2,0x12);
    param_2[0x23] = iVar15;
    iVar15 = getCopReg(2,0x13);
    param_2[0x29] = iVar15;
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    piVar10 = param_2 + 0x2e;
    param_2[0x43] = unaff_retaddr;
    param_2[0x40] = param_2[0x2a];
    param_2[0x41] = (int)(param_2 + 0x18);
    param_2[0x42] = (int)(param_2 + 0x24);
    RCpolyFT3A();
    piVar10[0x12] = piVar10[-3];
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -0x16);
    RCpolyFT3A();
    piVar10[0x12] = piVar10[-2];
    piVar10[0x13] = (int)(piVar10 + -10);
    piVar10[0x14] = (int)(piVar10 + -0x10);
    RCpolyFT3A();
    piVar10[0x12] = (int)(piVar10 + -0x16);
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -10);
    RCpolyFT3A();
  }
  return param_1;
}



// Possible DIVFT3A.OBJ/RCpolyFT3A

undefined4 RCpolyFT3A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 in_zero;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_retaddr;
  
  psVar12 = (short *)param_4[0x12];
  psVar13 = (short *)param_4[0x13];
  psVar14 = (short *)param_4[0x14];
  iVar16 = getCopControlWord(2,0xd000);
  uVar15 = iVar16 >> 1;
  if (((*(uint *)(psVar12 + 10) < uVar15) && (*(uint *)(psVar13 + 10) < uVar15)) &&
     (*(uint *)(psVar14 + 10) < uVar15)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc000);
  uVar15 = (uint)param_2[1] >> 1;
  uVar10 = (uint)param_2[2] >> 1;
  iVar16 = (iVar17 >> 0x10) + uVar15;
  if (((iVar16 < psVar12[8]) && (iVar16 < psVar13[8])) && (iVar16 < psVar14[8])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar15;
  if (((psVar12[8] < iVar16) && (psVar13[8] < iVar16)) && (psVar14[8] < iVar16)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc800);
  iVar16 = (iVar17 >> 0x10) + uVar10;
  if (((iVar16 < psVar12[9]) && (iVar16 < psVar13[9])) && (iVar16 < psVar14[9])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar10;
  uVar9 = (uint)(psVar13[9] < iVar16);
  if (((psVar12[9] < iVar16) && (bVar1 = uVar9 != 0, uVar9 = (uint)(psVar14[9] < iVar16), bVar1)) &&
     (uVar9 != 0)) {
    return param_1;
  }
  sVar5 = *psVar12;
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  *(short *)param_4 = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xc) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[1];
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  *(short *)((int)param_4 + 2) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[2];
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  *(short *)(param_4 + 1) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xd) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar9,param_4[1]);
  setCopReg(2,uVar15,param_4[6]);
  setCopReg(2,uVar10,param_4[7]);
  setCopReg(2,param_1,param_4[0xc]);
  setCopReg(2,param_2,param_4[0xd]);
  bVar2 = *(byte *)(psVar12 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 4);
  bVar4 = *(byte *)(psVar14 + 4);
  *(char *)(param_4 + 2) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_4 + 8) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_4 + 0xe) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar12 + 9);
  bVar3 = *(byte *)((int)psVar13 + 9);
  bVar4 = *(byte *)((int)psVar14 + 9);
  *(char *)((int)param_4 + 9) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x21) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x39) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == param_3 + 1) {
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
    DIVFT3A_OBJ_37C();
  }
  else {
    uVar8 = getCopReg(2,0x11);
    param_4[5] = uVar8;
    uVar8 = getCopReg(2,0x12);
    param_4[0xb] = uVar8;
    uVar8 = getCopReg(2,0x13);
    param_4[0x11] = uVar8;
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    puVar11 = param_4 + 0x16;
    param_4[0x2b] = unaff_retaddr;
    param_4[0x28] = param_4[0x12];
    param_4[0x29] = param_4;
    param_4[0x2a] = param_4 + 0xc;
    RCpolyFT3A();
    puVar11[0x12] = puVar11[-3];
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -0x16;
    RCpolyFT3A();
    puVar11[0x12] = puVar11[-2];
    puVar11[0x13] = puVar11 + -10;
    puVar11[0x14] = puVar11 + -0x10;
    RCpolyFT3A();
    puVar11[0x12] = puVar11 + -0x16;
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -10;
    RCpolyFT3A();
  }
  return param_1;
}



// Possible DIVFT3A.OBJ/DIVFT3A_OBJ_37C

void DIVFT3A_OBJ_37C(uint *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int in_t0;
  int in_t1;
  int in_t2;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar2 = *(ushort *)(in_t1 + 8);
  uVar3 = *(ushort *)(in_t2 + 8);
  uVar4 = *(uint *)(param_2 + 0x10);
  param_1[3] = (uint)*(ushort *)(in_t0 + 8) + (uint)*(ushort *)(param_2 + 0xc) * 0x10000;
  param_1[5] = (uint)uVar2 + (uint)uVar1 * 0x10000;
  param_1[7] = (uint)uVar3;
  param_1[1] = uVar4;
  uVar4 = *(uint *)(in_t1 + 0x10);
  uVar5 = *(uint *)(in_t2 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[4] = uVar4;
  param_1[6] = uVar5;
  uVar4 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  *param_1 = uVar4 | 0x7000000;
  return;
}



// Possible DIVG3A.OBJ/RCpolyG3

undefined4 RCpolyG3(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 in_zero;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int unaff_retaddr;
  
  psVar11 = (short *)param_2[0x2a];
  psVar12 = (short *)param_2[0x2b];
  psVar13 = (short *)param_2[0x2c];
  iVar15 = getCopControlWord(2,0xd000);
  uVar14 = iVar15 >> 1;
  if (((*(uint *)(psVar11 + 10) < uVar14) && (*(uint *)(psVar12 + 10) < uVar14)) &&
     (*(uint *)(psVar13 + 10) < uVar14)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc000);
  uVar14 = (uint)param_2[1] >> 1;
  uVar9 = (uint)param_2[2] >> 1;
  iVar15 = (iVar16 >> 0x10) + uVar14;
  if (((iVar15 < psVar11[8]) && (iVar15 < psVar12[8])) && (iVar15 < psVar13[8])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar14;
  if (((psVar11[8] < iVar15) && (psVar12[8] < iVar15)) && (psVar13[8] < iVar15)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc800);
  iVar15 = (iVar16 >> 0x10) + uVar9;
  if (((iVar15 < psVar11[9]) && (iVar15 < psVar12[9])) && (iVar15 < psVar13[9])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar9;
  uVar8 = (uint)(psVar12[9] < iVar15);
  if (((psVar11[9] < iVar15) && (bVar1 = uVar8 != 0, uVar8 = (uint)(psVar13[9] < iVar15), bVar1)) &&
     (uVar8 != 0)) {
    return param_1;
  }
  sVar5 = *psVar11;
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  *(short *)(param_2 + 0x18) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1e) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[1];
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  *(short *)((int)param_2 + 0x62) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_2 + 0x7a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[2];
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  *(short *)(param_2 + 0x19) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1f) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,param_2[0x18]);
  setCopReg(2,uVar8,param_2[0x19]);
  setCopReg(2,uVar14,param_2[0x1e]);
  setCopReg(2,uVar9,param_2[0x1f]);
  setCopReg(2,param_1,param_2[0x24]);
  setCopReg(2,param_2,param_2[0x25]);
  bVar2 = *(byte *)(psVar11 + 6);
  bVar3 = *(byte *)(psVar12 + 6);
  bVar4 = *(byte *)(psVar13 + 6);
  copFunction(2,0x280030);
  *(char *)(param_2 + 0x1b) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_2 + 0x21) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_2 + 0x27) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar11 + 0xd);
  bVar3 = *(byte *)((int)psVar12 + 0xd);
  bVar4 = *(byte *)((int)psVar13 + 0xd);
  *(char *)((int)param_2 + 0x6d) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x85) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x9d) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar11 + 7);
  bVar3 = *(byte *)(psVar12 + 7);
  bVar4 = *(byte *)(psVar13 + 7);
  *(char *)((int)param_2 + 0x6e) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x86) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x9e) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == 1) {
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
  }
  else {
    iVar15 = getCopReg(2,0x11);
    param_2[0x1d] = iVar15;
    iVar15 = getCopReg(2,0x12);
    param_2[0x23] = iVar15;
    iVar15 = getCopReg(2,0x13);
    param_2[0x29] = iVar15;
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    piVar10 = param_2 + 0x2e;
    param_2[0x43] = unaff_retaddr;
    param_2[0x40] = param_2[0x2a];
    param_2[0x41] = (int)(param_2 + 0x18);
    param_2[0x42] = (int)(param_2 + 0x24);
    RCpolyG3A();
    piVar10[0x12] = piVar10[-3];
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -0x16);
    RCpolyG3A();
    piVar10[0x12] = piVar10[-2];
    piVar10[0x13] = (int)(piVar10 + -10);
    piVar10[0x14] = (int)(piVar10 + -0x10);
    RCpolyG3A();
    piVar10[0x12] = (int)(piVar10 + -0x16);
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -10);
    RCpolyG3A();
  }
  return param_1;
}



// Possible DIVG3A.OBJ/RCpolyG3A

undefined4 RCpolyG3A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 in_zero;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_retaddr;
  
  psVar12 = (short *)param_4[0x12];
  psVar13 = (short *)param_4[0x13];
  psVar14 = (short *)param_4[0x14];
  iVar16 = getCopControlWord(2,0xd000);
  uVar15 = iVar16 >> 1;
  if (((*(uint *)(psVar12 + 10) < uVar15) && (*(uint *)(psVar13 + 10) < uVar15)) &&
     (*(uint *)(psVar14 + 10) < uVar15)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc000);
  uVar15 = (uint)param_2[1] >> 1;
  uVar10 = (uint)param_2[2] >> 1;
  iVar16 = (iVar17 >> 0x10) + uVar15;
  if (((iVar16 < psVar12[8]) && (iVar16 < psVar13[8])) && (iVar16 < psVar14[8])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar15;
  if (((psVar12[8] < iVar16) && (psVar13[8] < iVar16)) && (psVar14[8] < iVar16)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc800);
  iVar16 = (iVar17 >> 0x10) + uVar10;
  if (((iVar16 < psVar12[9]) && (iVar16 < psVar13[9])) && (iVar16 < psVar14[9])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar10;
  uVar9 = (uint)(psVar13[9] < iVar16);
  if (((psVar12[9] < iVar16) && (bVar1 = uVar9 != 0, uVar9 = (uint)(psVar14[9] < iVar16), bVar1)) &&
     (uVar9 != 0)) {
    return param_1;
  }
  sVar5 = *psVar12;
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  *(short *)param_4 = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xc) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[1];
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  *(short *)((int)param_4 + 2) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[2];
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  *(short *)(param_4 + 1) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xd) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar9,param_4[1]);
  setCopReg(2,uVar15,param_4[6]);
  setCopReg(2,uVar10,param_4[7]);
  setCopReg(2,param_1,param_4[0xc]);
  setCopReg(2,param_2,param_4[0xd]);
  bVar2 = *(byte *)(psVar12 + 6);
  bVar3 = *(byte *)(psVar13 + 6);
  bVar4 = *(byte *)(psVar14 + 6);
  copFunction(2,0x280030);
  *(char *)(param_4 + 3) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_4 + 9) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_4 + 0xf) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar12 + 0xd);
  bVar3 = *(byte *)((int)psVar13 + 0xd);
  bVar4 = *(byte *)((int)psVar14 + 0xd);
  *(char *)((int)param_4 + 0xd) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x25) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x3d) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar12 + 7);
  bVar3 = *(byte *)(psVar13 + 7);
  bVar4 = *(byte *)(psVar14 + 7);
  *(char *)((int)param_4 + 0xe) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x26) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x3e) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == param_3 + 1) {
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
    DIVG3A_OBJ_3AC();
  }
  else {
    uVar8 = getCopReg(2,0x11);
    param_4[5] = uVar8;
    uVar8 = getCopReg(2,0x12);
    param_4[0xb] = uVar8;
    uVar8 = getCopReg(2,0x13);
    param_4[0x11] = uVar8;
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    puVar11 = param_4 + 0x16;
    param_4[0x2b] = unaff_retaddr;
    param_4[0x28] = param_4[0x12];
    param_4[0x29] = param_4;
    param_4[0x2a] = param_4 + 0xc;
    RCpolyG3A();
    puVar11[0x12] = puVar11[-3];
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -0x16;
    RCpolyG3A();
    puVar11[0x12] = puVar11[-2];
    puVar11[0x13] = puVar11 + -10;
    puVar11[0x14] = puVar11 + -0x10;
    RCpolyG3A();
    puVar11[0x12] = puVar11 + -0x16;
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -10;
    RCpolyG3A();
  }
  return param_1;
}



// Possible DIVG3A.OBJ/DIVG3A_OBJ_3AC

void DIVG3A_OBJ_3AC(uint *param_1,int param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined *)(in_t0 + 0xf) = *(undefined *)(param_2 + 0x13);
  uVar1 = *(uint *)(in_t1 + 0x10);
  uVar2 = *(uint *)(in_t2 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[4] = uVar1;
  param_1[6] = uVar2;
  uVar3 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  uVar1 = *(uint *)(in_t1 + 0xc);
  uVar2 = *(uint *)(in_t2 + 0xc);
  param_1[1] = *(uint *)(in_t0 + 0xc);
  param_1[3] = uVar1;
  param_1[5] = uVar2;
  *param_1 = uVar3 | 0x6000000;
  return;
}



// Possible DIVGT3A.OBJ/RCpolyGT3

undefined4 RCpolyGT3(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 in_zero;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int unaff_retaddr;
  
  psVar11 = (short *)param_2[0x2a];
  psVar12 = (short *)param_2[0x2b];
  psVar13 = (short *)param_2[0x2c];
  iVar15 = getCopControlWord(2,0xd000);
  uVar14 = iVar15 >> 1;
  if (((*(uint *)(psVar11 + 10) < uVar14) && (*(uint *)(psVar12 + 10) < uVar14)) &&
     (*(uint *)(psVar13 + 10) < uVar14)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc000);
  uVar14 = (uint)param_2[1] >> 1;
  uVar9 = (uint)param_2[2] >> 1;
  iVar15 = (iVar16 >> 0x10) + uVar14;
  if (((iVar15 < psVar11[8]) && (iVar15 < psVar12[8])) && (iVar15 < psVar13[8])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar14;
  if (((psVar11[8] < iVar15) && (psVar12[8] < iVar15)) && (psVar13[8] < iVar15)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc800);
  iVar15 = (iVar16 >> 0x10) + uVar9;
  if (((iVar15 < psVar11[9]) && (iVar15 < psVar12[9])) && (iVar15 < psVar13[9])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar9;
  uVar8 = (uint)(psVar12[9] < iVar15);
  if (((psVar11[9] < iVar15) && (bVar1 = uVar8 != 0, uVar8 = (uint)(psVar13[9] < iVar15), bVar1)) &&
     (uVar8 != 0)) {
    return param_1;
  }
  sVar5 = *psVar11;
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  *(short *)(param_2 + 0x18) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1e) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[1];
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  *(short *)((int)param_2 + 0x62) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_2 + 0x7a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar11[2];
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  *(short *)(param_2 + 0x19) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x1f) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,param_2[0x18]);
  setCopReg(2,uVar8,param_2[0x19]);
  setCopReg(2,uVar14,param_2[0x1e]);
  setCopReg(2,uVar9,param_2[0x1f]);
  setCopReg(2,param_1,param_2[0x24]);
  setCopReg(2,param_2,param_2[0x25]);
  bVar2 = *(byte *)(psVar11 + 4);
  bVar3 = *(byte *)(psVar12 + 4);
  bVar4 = *(byte *)(psVar13 + 4);
  *(char *)(param_2 + 0x1a) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_2 + 0x20) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_2 + 0x26) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  copFunction(2,0x280030);
  bVar2 = *(byte *)((int)psVar11 + 9);
  bVar3 = *(byte *)((int)psVar12 + 9);
  bVar4 = *(byte *)((int)psVar13 + 9);
  *(char *)((int)param_2 + 0x69) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x81) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x99) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar11 + 6);
  bVar3 = *(byte *)(psVar12 + 6);
  bVar4 = *(byte *)(psVar13 + 6);
  *(char *)(param_2 + 0x1b) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_2 + 0x21) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_2 + 0x27) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar11 + 0xd);
  bVar3 = *(byte *)((int)psVar12 + 0xd);
  bVar4 = *(byte *)((int)psVar13 + 0xd);
  *(char *)((int)param_2 + 0x6d) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x85) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x9d) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar11 + 7);
  bVar3 = *(byte *)(psVar12 + 7);
  bVar4 = *(byte *)(psVar13 + 7);
  *(char *)((int)param_2 + 0x6e) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_2 + 0x86) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_2 + 0x9e) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == 1) {
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
  }
  else {
    iVar15 = getCopReg(2,0x11);
    param_2[0x1d] = iVar15;
    iVar15 = getCopReg(2,0x12);
    param_2[0x23] = iVar15;
    iVar15 = getCopReg(2,0x13);
    param_2[0x29] = iVar15;
    iVar15 = getCopReg(2,0xc);
    param_2[0x1c] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x22] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x28] = iVar15;
    piVar10 = param_2 + 0x2e;
    param_2[0x43] = unaff_retaddr;
    param_2[0x40] = param_2[0x2a];
    param_2[0x41] = (int)(param_2 + 0x18);
    param_2[0x42] = (int)(param_2 + 0x24);
    RCpolyGT3A();
    piVar10[0x12] = piVar10[-3];
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -0x16);
    RCpolyGT3A();
    piVar10[0x12] = piVar10[-2];
    piVar10[0x13] = (int)(piVar10 + -10);
    piVar10[0x14] = (int)(piVar10 + -0x10);
    RCpolyGT3A();
    piVar10[0x12] = (int)(piVar10 + -0x16);
    piVar10[0x13] = (int)(piVar10 + -0x10);
    piVar10[0x14] = (int)(piVar10 + -10);
    RCpolyGT3A();
  }
  return param_1;
}



// Possible DIVGT3A.OBJ/RCpolyGT3A

undefined4 RCpolyGT3A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 in_zero;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_retaddr;
  
  psVar12 = (short *)param_4[0x12];
  psVar13 = (short *)param_4[0x13];
  psVar14 = (short *)param_4[0x14];
  iVar16 = getCopControlWord(2,0xd000);
  uVar15 = iVar16 >> 1;
  if (((*(uint *)(psVar12 + 10) < uVar15) && (*(uint *)(psVar13 + 10) < uVar15)) &&
     (*(uint *)(psVar14 + 10) < uVar15)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc000);
  uVar15 = (uint)param_2[1] >> 1;
  uVar10 = (uint)param_2[2] >> 1;
  iVar16 = (iVar17 >> 0x10) + uVar15;
  if (((iVar16 < psVar12[8]) && (iVar16 < psVar13[8])) && (iVar16 < psVar14[8])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar15;
  if (((psVar12[8] < iVar16) && (psVar13[8] < iVar16)) && (psVar14[8] < iVar16)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc800);
  iVar16 = (iVar17 >> 0x10) + uVar10;
  if (((iVar16 < psVar12[9]) && (iVar16 < psVar13[9])) && (iVar16 < psVar14[9])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar10;
  uVar9 = (uint)(psVar13[9] < iVar16);
  if (((psVar12[9] < iVar16) && (bVar1 = uVar9 != 0, uVar9 = (uint)(psVar14[9] < iVar16), bVar1)) &&
     (uVar9 != 0)) {
    return param_1;
  }
  sVar5 = *psVar12;
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  *(short *)param_4 = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xc) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[1];
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  *(short *)((int)param_4 + 2) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar7 + (int)sVar5 >> 1);
  sVar5 = psVar12[2];
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  *(short *)(param_4 + 1) = (short)((int)sVar5 + (int)sVar6 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar7 >> 1);
  *(short *)(param_4 + 0xd) = (short)((int)sVar7 + (int)sVar5 >> 1);
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar9,param_4[1]);
  setCopReg(2,uVar15,param_4[6]);
  setCopReg(2,uVar10,param_4[7]);
  setCopReg(2,param_1,param_4[0xc]);
  setCopReg(2,param_2,param_4[0xd]);
  bVar2 = *(byte *)(psVar12 + 4);
  bVar3 = *(byte *)(psVar13 + 4);
  bVar4 = *(byte *)(psVar14 + 4);
  *(char *)(param_4 + 2) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_4 + 8) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_4 + 0xe) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  copFunction(2,0x280030);
  bVar2 = *(byte *)((int)psVar12 + 9);
  bVar3 = *(byte *)((int)psVar13 + 9);
  bVar4 = *(byte *)((int)psVar14 + 9);
  *(char *)((int)param_4 + 9) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x21) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x39) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar12 + 6);
  bVar3 = *(byte *)(psVar13 + 6);
  bVar4 = *(byte *)(psVar14 + 6);
  *(char *)(param_4 + 3) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)(param_4 + 9) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)(param_4 + 0xf) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)((int)psVar12 + 0xd);
  bVar3 = *(byte *)((int)psVar13 + 0xd);
  bVar4 = *(byte *)((int)psVar14 + 0xd);
  *(char *)((int)param_4 + 0xd) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x25) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x3d) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  bVar2 = *(byte *)(psVar12 + 7);
  bVar3 = *(byte *)(psVar13 + 7);
  bVar4 = *(byte *)(psVar14 + 7);
  *(char *)((int)param_4 + 0xe) = (char)((uint)bVar2 + (uint)bVar3 >> 1);
  *(char *)((int)param_4 + 0x26) = (char)((uint)bVar3 + (uint)bVar4 >> 1);
  *(char *)((int)param_4 + 0x3e) = (char)((uint)bVar4 + (uint)bVar2 >> 1);
  if (*param_2 == param_3 + 1) {
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
    DIVGT3A_OBJ_40C();
  }
  else {
    uVar8 = getCopReg(2,0x11);
    param_4[5] = uVar8;
    uVar8 = getCopReg(2,0x12);
    param_4[0xb] = uVar8;
    uVar8 = getCopReg(2,0x13);
    param_4[0x11] = uVar8;
    uVar8 = getCopReg(2,0xc);
    param_4[4] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[10] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x10] = uVar8;
    puVar11 = param_4 + 0x16;
    param_4[0x2b] = unaff_retaddr;
    param_4[0x28] = param_4[0x12];
    param_4[0x29] = param_4;
    param_4[0x2a] = param_4 + 0xc;
    RCpolyGT3A();
    puVar11[0x12] = puVar11[-3];
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -0x16;
    RCpolyGT3A();
    puVar11[0x12] = puVar11[-2];
    puVar11[0x13] = puVar11 + -10;
    puVar11[0x14] = puVar11 + -0x10;
    RCpolyGT3A();
    puVar11[0x12] = puVar11 + -0x16;
    puVar11[0x13] = puVar11 + -0x10;
    puVar11[0x14] = puVar11 + -10;
    RCpolyGT3A();
  }
  return param_1;
}



// Possible DIVGT3A.OBJ/DIVGT3A_OBJ_40C

void DIVGT3A_OBJ_40C(uint *param_1,int param_2)

{
  undefined uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int in_t0;
  int in_t1;
  int in_t2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar3 = *(ushort *)(in_t1 + 8);
  uVar4 = *(ushort *)(in_t2 + 8);
  uVar1 = *(undefined *)(param_2 + 0x13);
  param_1[3] = (uint)*(ushort *)(in_t0 + 8) + (uint)*(ushort *)(param_2 + 0xc) * 0x10000;
  param_1[6] = (uint)uVar3 + (uint)uVar2 * 0x10000;
  param_1[9] = (uint)uVar4;
  *(undefined *)(in_t0 + 0xf) = uVar1;
  uVar5 = *(uint *)(in_t1 + 0x10);
  uVar6 = *(uint *)(in_t2 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[5] = uVar5;
  param_1[8] = uVar6;
  uVar7 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  uVar5 = *(uint *)(in_t1 + 0xc);
  uVar6 = *(uint *)(in_t2 + 0xc);
  param_1[1] = *(uint *)(in_t0 + 0xc);
  param_1[4] = uVar5;
  param_1[7] = uVar6;
  *param_1 = uVar7 | 0x9000000;
  return;
}



// Possible DIVF4A.OBJ/RCpolyF4

undefined4 RCpolyF4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 in_zero;
  uint uVar8;
  int *piVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int unaff_retaddr;
  
  piVar9 = param_2 + 0x1e;
  psVar10 = (short *)param_2[0x3c];
  psVar11 = (short *)param_2[0x3d];
  psVar12 = (short *)param_2[0x3e];
  psVar13 = (short *)param_2[0x3f];
  iVar15 = getCopControlWord(2,0xd000);
  uVar14 = iVar15 >> 1;
  if ((((*(uint *)(psVar10 + 10) < uVar14) && (*(uint *)(psVar11 + 10) < uVar14)) &&
      (*(uint *)(psVar12 + 10) < uVar14)) && (*(uint *)(psVar13 + 10) < uVar14)) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc000);
  uVar14 = (uint)param_2[2] >> 1;
  iVar15 = (iVar16 >> 0x10) + ((uint)param_2[1] >> 1);
  if (((iVar15 < psVar10[8]) && (iVar15 < psVar11[8])) &&
     ((iVar15 < psVar12[8] && (iVar15 < psVar13[8])))) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - ((uint)param_2[1] >> 1);
  if (((psVar10[8] < iVar15) && (psVar11[8] < iVar15)) &&
     ((psVar12[8] < iVar15 && (psVar13[8] < iVar15)))) {
    return param_1;
  }
  iVar16 = getCopControlWord(2,0xc800);
  iVar15 = (iVar16 >> 0x10) + uVar14;
  if ((((iVar15 < psVar10[9]) && (iVar15 < psVar11[9])) && (iVar15 < psVar12[9])) &&
     (iVar15 < psVar13[9])) {
    return param_1;
  }
  iVar15 = (iVar16 >> 0x10) - uVar14;
  uVar8 = (uint)(psVar11[9] < iVar15);
  if (((psVar10[9] < iVar15) && (bVar1 = uVar8 != 0, uVar8 = (uint)(psVar12[9] < iVar15), bVar1)) &&
     ((bVar1 = uVar8 != 0, uVar8 = (uint)(psVar13[9] < iVar15), bVar1 && (uVar8 != 0)))) {
    return param_1;
  }
  sVar2 = *psVar10;
  sVar3 = psVar10[1];
  sVar4 = psVar10[2];
  sVar5 = psVar11[1];
  sVar6 = psVar11[2];
  *(short *)piVar9 = (short)((int)sVar2 + (int)*psVar11 >> 1);
  *(short *)((int)param_2 + 0x7a) = (short)((int)sVar3 + (int)sVar5 >> 1);
  *(short *)(param_2 + 0x1f) = (short)((int)sVar4 + (int)sVar6 >> 1);
  sVar5 = *psVar12;
  sVar6 = psVar12[1];
  sVar7 = psVar12[2];
  *(short *)(param_2 + 0x24) = (short)((int)sVar2 + (int)sVar5 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar3 + (int)sVar6 >> 1);
  iVar15 = (int)sVar4 + (int)sVar7 >> 1;
  *(short *)(param_2 + 0x25) = (short)iVar15;
  setCopReg(2,in_zero,*piVar9);
  setCopReg(2,uVar8,param_2[0x1f]);
  setCopReg(2,iVar15,param_2[0x24]);
  setCopReg(2,uVar14,param_2[0x25]);
  copFunction(2,0x280030);
  sVar2 = *psVar13;
  sVar3 = psVar13[1];
  sVar4 = psVar13[2];
  *(short *)(param_2 + 0x30) = (short)((int)sVar2 + (int)sVar5 >> 1);
  *(short *)((int)param_2 + 0xc2) = (short)((int)sVar3 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x31) = (short)((int)sVar4 + (int)sVar7 >> 1);
  sVar5 = psVar11[1];
  sVar6 = psVar11[2];
  *(short *)(param_2 + 0x2a) = (short)((int)sVar2 + (int)*psVar11 >> 1);
  *(short *)((int)param_2 + 0xaa) = (short)((int)sVar3 + (int)sVar5 >> 1);
  *(short *)(param_2 + 0x2b) = (short)((int)sVar4 + (int)sVar6 >> 1);
  *(short *)(param_2 + 0x36) = (short)((int)*(short *)piVar9 + (int)*(short *)(param_2 + 0x30) >> 1)
  ;
  *(short *)((int)param_2 + 0xda) =
       (short)((int)*(short *)((int)param_2 + 0x7a) + (int)*(short *)((int)param_2 + 0xc2) >> 1);
  iVar16 = (int)*(short *)(param_2 + 0x1f) + (int)*(short *)(param_2 + 0x31) >> 1;
  *(short *)(param_2 + 0x37) = (short)iVar16;
  iVar15 = getCopReg(2,0xc);
  param_2[0x22] = iVar15;
  iVar15 = getCopReg(2,0xd);
  param_2[0x28] = iVar15;
  iVar15 = getCopReg(2,0x11);
  param_2[0x23] = iVar15;
  iVar15 = getCopReg(2,0x12);
  param_2[0x29] = iVar15;
  setCopReg(2,in_zero,param_2[0x2a]);
  setCopReg(2,uVar8,param_2[0x2b]);
  setCopReg(2,iVar16,param_2[0x30]);
  setCopReg(2,uVar14,param_2[0x31]);
  setCopReg(2,param_1,param_2[0x36]);
  setCopReg(2,param_2,param_2[0x37]);
  copFunction(2,0x280030);
  if (*param_2 == 1) {
    iVar15 = getCopReg(2,0xc);
    param_2[0x2e] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x34] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x3a] = iVar15;
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
  }
  else {
    piVar9 = param_2 + 0x41;
    param_2[99] = unaff_retaddr;
    param_2[0x5f] = param_2[0x3c];
    param_2[0x60] = (int)(param_2 + 0x1e);
    param_2[0x61] = (int)(param_2 + 0x24);
    param_2[0x62] = (int)(param_2 + 0x36);
    iVar15 = getCopReg(2,0xc);
    param_2[0x2e] = iVar15;
    iVar15 = getCopReg(2,0xd);
    param_2[0x34] = iVar15;
    iVar15 = getCopReg(2,0xe);
    param_2[0x3a] = iVar15;
    iVar15 = getCopReg(2,0x11);
    param_2[0x2f] = iVar15;
    iVar15 = getCopReg(2,0x12);
    param_2[0x35] = iVar15;
    iVar15 = getCopReg(2,0x13);
    param_2[0x3b] = iVar15;
    RCpolyF4A();
    piVar9[0x1e] = piVar9[-4];
    piVar9[0x1f] = (int)(piVar9 + -0x17);
    piVar9[0x20] = (int)(piVar9 + -0x23);
    piVar9[0x21] = (int)(piVar9 + -0xb);
    RCpolyF4A();
    piVar9[0x1e] = piVar9[-3];
    piVar9[0x1f] = (int)(piVar9 + -0x1d);
    piVar9[0x20] = (int)(piVar9 + -0x11);
    piVar9[0x21] = (int)(piVar9 + -0xb);
    RCpolyF4A();
    piVar9[0x1e] = piVar9[-2];
    piVar9[0x1f] = (int)(piVar9 + -0x11);
    piVar9[0x20] = (int)(piVar9 + -0x17);
    piVar9[0x21] = (int)(piVar9 + -0xb);
    RCpolyF4A();
  }
  return param_1;
}



// Possible DIVF4A.OBJ/RCpolyF4A

undefined4 RCpolyF4A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 in_zero;
  uint uVar9;
  undefined4 *puVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_retaddr;
  
  psVar11 = (short *)param_4[0x1e];
  psVar12 = (short *)param_4[0x1f];
  psVar13 = (short *)param_4[0x20];
  psVar14 = (short *)param_4[0x21];
  iVar16 = getCopControlWord(2,0xd000);
  uVar15 = iVar16 >> 1;
  if ((((*(uint *)(psVar11 + 10) < uVar15) && (*(uint *)(psVar12 + 10) < uVar15)) &&
      (*(uint *)(psVar13 + 10) < uVar15)) && (*(uint *)(psVar14 + 10) < uVar15)) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc000);
  uVar15 = (uint)param_2[2] >> 1;
  iVar16 = (iVar17 >> 0x10) + ((uint)param_2[1] >> 1);
  if (((iVar16 < psVar11[8]) && (iVar16 < psVar12[8])) &&
     ((iVar16 < psVar13[8] && (iVar16 < psVar14[8])))) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - ((uint)param_2[1] >> 1);
  if (((psVar11[8] < iVar16) && (psVar12[8] < iVar16)) &&
     ((psVar13[8] < iVar16 && (psVar14[8] < iVar16)))) {
    return param_1;
  }
  iVar17 = getCopControlWord(2,0xc800);
  iVar16 = (iVar17 >> 0x10) + uVar15;
  if ((((iVar16 < psVar11[9]) && (iVar16 < psVar12[9])) && (iVar16 < psVar13[9])) &&
     (iVar16 < psVar14[9])) {
    return param_1;
  }
  iVar16 = (iVar17 >> 0x10) - uVar15;
  uVar9 = (uint)(psVar12[9] < iVar16);
  if (((psVar11[9] < iVar16) && (bVar1 = uVar9 != 0, uVar9 = (uint)(psVar13[9] < iVar16), bVar1)) &&
     ((bVar1 = uVar9 != 0, uVar9 = (uint)(psVar14[9] < iVar16), bVar1 && (uVar9 != 0)))) {
    return param_1;
  }
  sVar2 = *psVar11;
  sVar3 = psVar11[1];
  sVar4 = psVar11[2];
  sVar5 = psVar12[1];
  sVar6 = psVar12[2];
  *(short *)param_4 = (short)((int)sVar2 + (int)*psVar12 >> 1);
  *(short *)((int)param_4 + 2) = (short)((int)sVar3 + (int)sVar5 >> 1);
  *(short *)(param_4 + 1) = (short)((int)sVar4 + (int)sVar6 >> 1);
  sVar5 = *psVar13;
  sVar6 = psVar13[1];
  sVar7 = psVar13[2];
  *(short *)(param_4 + 6) = (short)((int)sVar2 + (int)sVar5 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar3 + (int)sVar6 >> 1);
  iVar16 = (int)sVar4 + (int)sVar7 >> 1;
  *(short *)(param_4 + 7) = (short)iVar16;
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar9,param_4[1]);
  setCopReg(2,iVar16,param_4[6]);
  setCopReg(2,uVar15,param_4[7]);
  copFunction(2,0x280030);
  sVar2 = *psVar14;
  sVar3 = psVar14[1];
  sVar4 = psVar14[2];
  *(short *)(param_4 + 0x12) = (short)((int)sVar2 + (int)sVar5 >> 1);
  *(short *)((int)param_4 + 0x4a) = (short)((int)sVar3 + (int)sVar6 >> 1);
  *(short *)(param_4 + 0x13) = (short)((int)sVar4 + (int)sVar7 >> 1);
  sVar5 = psVar12[1];
  sVar6 = psVar12[2];
  *(short *)(param_4 + 0xc) = (short)((int)sVar2 + (int)*psVar12 >> 1);
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar3 + (int)sVar5 >> 1);
  *(short *)(param_4 + 0xd) = (short)((int)sVar4 + (int)sVar6 >> 1);
  *(short *)(param_4 + 0x18) =
       (short)((int)*(short *)param_4 + (int)*(short *)(param_4 + 0x12) >> 1);
  *(short *)((int)param_4 + 0x62) =
       (short)((int)*(short *)((int)param_4 + 2) + (int)*(short *)((int)param_4 + 0x4a) >> 1);
  iVar16 = (int)*(short *)(param_4 + 1) + (int)*(short *)(param_4 + 0x13) >> 1;
  *(short *)(param_4 + 0x19) = (short)iVar16;
  uVar8 = getCopReg(2,0xc);
  param_4[4] = uVar8;
  uVar8 = getCopReg(2,0xd);
  param_4[10] = uVar8;
  uVar8 = getCopReg(2,0x11);
  param_4[5] = uVar8;
  uVar8 = getCopReg(2,0x12);
  param_4[0xb] = uVar8;
  setCopReg(2,in_zero,param_4[0xc]);
  setCopReg(2,uVar9,param_4[0xd]);
  setCopReg(2,iVar16,param_4[0x12]);
  setCopReg(2,uVar15,param_4[0x13]);
  setCopReg(2,param_1,param_4[0x18]);
  setCopReg(2,param_2,param_4[0x19]);
  copFunction(2,0x280030);
  if (*param_2 == param_3 + 1) {
    uVar8 = getCopReg(2,0xc);
    param_4[0x10] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[0x16] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x1c] = uVar8;
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
    DIVF4A_OBJ_428();
  }
  else {
    puVar10 = param_4 + 0x23;
    param_4[0x45] = unaff_retaddr;
    param_4[0x41] = param_4[0x1e];
    param_4[0x42] = param_4;
    param_4[0x43] = param_4 + 6;
    param_4[0x44] = param_4 + 0x18;
    uVar8 = getCopReg(2,0xc);
    param_4[0x10] = uVar8;
    uVar8 = getCopReg(2,0xd);
    param_4[0x16] = uVar8;
    uVar8 = getCopReg(2,0xe);
    param_4[0x1c] = uVar8;
    uVar8 = getCopReg(2,0x11);
    param_4[0x11] = uVar8;
    uVar8 = getCopReg(2,0x12);
    param_4[0x17] = uVar8;
    uVar8 = getCopReg(2,0x13);
    param_4[0x1d] = uVar8;
    RCpolyF4A();
    puVar10[0x1e] = puVar10[-4];
    puVar10[0x1f] = puVar10 + -0x17;
    puVar10[0x20] = puVar10 + -0x23;
    puVar10[0x21] = puVar10 + -0xb;
    RCpolyF4A();
    puVar10[0x1e] = puVar10[-3];
    puVar10[0x1f] = puVar10 + -0x1d;
    puVar10[0x20] = puVar10 + -0x11;
    puVar10[0x21] = puVar10 + -0xb;
    RCpolyF4A();
    puVar10[0x1e] = puVar10[-2];
    puVar10[0x1f] = puVar10 + -0x11;
    puVar10[0x20] = puVar10 + -0x17;
    puVar10[0x21] = puVar10 + -0xb;
    RCpolyF4A();
  }
  return param_1;
}



// Possible DIVF4A.OBJ/DIVF4A_OBJ_428

void DIVF4A_OBJ_428(uint *param_1,int param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_t0 + 0x10);
  uVar2 = *(uint *)(in_t1 + 0x10);
  uVar3 = *(uint *)(in_t2 + 0x10);
  uVar4 = *(uint *)(in_t3 + 0x10);
  param_1[1] = *(uint *)(param_2 + 0x10);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  uVar1 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  *param_1 = uVar1 | 0x5000000;
  return;
}



// Possible DIVFT4A.OBJ/RCpolyFT4

undefined4 RCpolyFT4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 in_zero;
  uint uVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int unaff_retaddr;
  
  psVar12 = (short *)param_2[0x3c];
  psVar13 = (short *)param_2[0x3d];
  psVar14 = (short *)param_2[0x3e];
  psVar15 = (short *)param_2[0x3f];
  iVar17 = getCopControlWord(2,0xd000);
  uVar16 = iVar17 >> 1;
  if ((((*(uint *)(psVar12 + 10) < uVar16) && (*(uint *)(psVar13 + 10) < uVar16)) &&
      (*(uint *)(psVar14 + 10) < uVar16)) && (*(uint *)(psVar15 + 10) < uVar16)) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc000);
  uVar16 = (uint)param_2[1] >> 1;
  iVar17 = (iVar18 >> 0x10) + uVar16;
  if (((iVar17 < psVar12[8]) && (iVar17 < psVar13[8])) &&
     ((iVar17 < psVar14[8] && (iVar17 < psVar15[8])))) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - uVar16;
  if (((psVar12[8] < iVar17) && (psVar13[8] < iVar17)) &&
     ((psVar14[8] < iVar17 && (psVar15[8] < iVar17)))) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc800);
  iVar17 = (iVar18 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar17 < psVar12[9]) && (iVar17 < psVar13[9])) && (iVar17 < psVar14[9])) &&
     (iVar17 < psVar15[9])) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar10 = (uint)(psVar13[9] < iVar17);
  if (((psVar12[9] < iVar17) && (bVar1 = uVar10 != 0, uVar10 = (uint)(psVar14[9] < iVar17), bVar1))
     && ((bVar1 = uVar10 != 0, uVar10 = (uint)(psVar15[9] < iVar17), bVar1 && (uVar10 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  sVar8 = *psVar14;
  sVar9 = *psVar15;
  *(short *)(param_2 + 0x2a) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)(param_2 + 0x1e) = (short)(iVar17 >> 1);
  *(short *)(param_2 + 0x30) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x36) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  sVar8 = psVar14[1];
  sVar9 = psVar15[1];
  *(short *)((int)param_2 + 0xaa) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_2 + 0x7a) = (short)(iVar17 >> 1);
  *(short *)((int)param_2 + 0xc2) = (short)(iVar18 >> 1);
  *(short *)((int)param_2 + 0xda) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  sVar8 = psVar14[2];
  sVar9 = psVar15[2];
  *(short *)(param_2 + 0x2b) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  iVar17 = iVar18 + iVar19 >> 2;
  *(short *)(param_2 + 0x1f) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x31) = (short)(iVar19 >> 1);
  *(short *)(param_2 + 0x37) = (short)iVar17;
  setCopReg(2,in_zero,param_2[0x1e]);
  setCopReg(2,uVar10,param_2[0x1f]);
  setCopReg(2,uVar16,param_2[0x24]);
  setCopReg(2,iVar17,param_2[0x25]);
  setCopReg(2,param_1,param_2[0x36]);
  setCopReg(2,param_2,param_2[0x37]);
  bVar2 = *(byte *)(psVar12 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 4);
  bVar4 = *(byte *)(psVar14 + 4);
  bVar5 = *(byte *)(psVar15 + 4);
  *(char *)(param_2 + 0x2c) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_2 + 0x26) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar17 + iVar19 >> 2;
  *(char *)(param_2 + 0x20) = (char)(iVar17 >> 1);
  *(char *)(param_2 + 0x32) = (char)(iVar19 >> 1);
  *(char *)(param_2 + 0x38) = (char)iVar18;
  iVar17 = getCopReg(2,0xc);
  param_2[0x22] = iVar17;
  iVar17 = getCopReg(2,0xd);
  param_2[0x28] = iVar17;
  iVar17 = getCopReg(2,0xe);
  param_2[0x3a] = iVar17;
  iVar17 = getCopReg(2,0x11);
  param_2[0x23] = iVar17;
  iVar17 = getCopReg(2,0x12);
  param_2[0x29] = iVar17;
  iVar17 = getCopReg(2,0x13);
  param_2[0x3b] = iVar17;
  setCopReg(2,in_zero,param_2[0x2a]);
  setCopReg(2,uVar10,param_2[0x2b]);
  setCopReg(2,uVar16,param_2[0x30]);
  setCopReg(2,iVar18,param_2[0x31]);
  bVar2 = *(byte *)((int)psVar12 + 9);
  copFunction(2,0x280030);
  bVar3 = *(byte *)((int)psVar13 + 9);
  bVar4 = *(byte *)((int)psVar14 + 9);
  bVar5 = *(byte *)((int)psVar15 + 9);
  *(char *)((int)param_2 + 0xb1) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x99) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_2 + 0x81) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xc9) = (char)(iVar18 >> 1);
  *(char *)((int)param_2 + 0xe1) = (char)(iVar17 + iVar18 >> 2);
  if (*param_2 == 1) {
    iVar17 = getCopReg(2,0xc);
    param_2[0x2e] = iVar17;
    iVar17 = getCopReg(2,0xd);
    param_2[0x34] = iVar17;
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
  }
  else {
    piVar11 = param_2 + 0x41;
    param_2[99] = unaff_retaddr;
    param_2[0x5f] = param_2[0x3c];
    param_2[0x60] = (int)(param_2 + 0x1e);
    param_2[0x61] = (int)(param_2 + 0x24);
    param_2[0x62] = (int)(param_2 + 0x36);
    iVar17 = getCopReg(2,0xc);
    param_2[0x2e] = iVar17;
    iVar17 = getCopReg(2,0xd);
    param_2[0x34] = iVar17;
    iVar17 = getCopReg(2,0x11);
    param_2[0x2f] = iVar17;
    iVar17 = getCopReg(2,0x12);
    param_2[0x35] = iVar17;
    RCpolyFT4A();
    piVar11[0x1e] = piVar11[-4];
    piVar11[0x1f] = (int)(piVar11 + -0x17);
    piVar11[0x20] = (int)(piVar11 + -0x23);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyFT4A();
    piVar11[0x1e] = piVar11[-3];
    piVar11[0x1f] = (int)(piVar11 + -0x1d);
    piVar11[0x20] = (int)(piVar11 + -0x11);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyFT4A();
    piVar11[0x1e] = piVar11[-2];
    piVar11[0x1f] = (int)(piVar11 + -0x11);
    piVar11[0x20] = (int)(piVar11 + -0x17);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyFT4A();
  }
  return param_1;
}



// Possible DIVFT4A.OBJ/RCpolyFT4A

undefined4 RCpolyFT4A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 in_zero;
  uint uVar11;
  undefined4 *puVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 unaff_retaddr;
  
  psVar13 = (short *)param_4[0x1e];
  psVar14 = (short *)param_4[0x1f];
  psVar15 = (short *)param_4[0x20];
  psVar16 = (short *)param_4[0x21];
  iVar18 = getCopControlWord(2,0xd000);
  uVar17 = iVar18 >> 1;
  if ((((*(uint *)(psVar13 + 10) < uVar17) && (*(uint *)(psVar14 + 10) < uVar17)) &&
      (*(uint *)(psVar15 + 10) < uVar17)) && (*(uint *)(psVar16 + 10) < uVar17)) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc000);
  uVar17 = (uint)param_2[1] >> 1;
  iVar18 = (iVar19 >> 0x10) + uVar17;
  if (((iVar18 < psVar13[8]) && (iVar18 < psVar14[8])) &&
     ((iVar18 < psVar15[8] && (iVar18 < psVar16[8])))) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - uVar17;
  if (((psVar13[8] < iVar18) && (psVar14[8] < iVar18)) &&
     ((psVar15[8] < iVar18 && (psVar16[8] < iVar18)))) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc800);
  iVar18 = (iVar19 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar18 < psVar13[9]) && (iVar18 < psVar14[9])) && (iVar18 < psVar15[9])) &&
     (iVar18 < psVar16[9])) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar11 = (uint)(psVar14[9] < iVar18);
  if (((psVar13[9] < iVar18) && (bVar1 = uVar11 != 0, uVar11 = (uint)(psVar15[9] < iVar18), bVar1))
     && ((bVar1 = uVar11 != 0, uVar11 = (uint)(psVar16[9] < iVar18), bVar1 && (uVar11 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  sVar8 = *psVar15;
  sVar9 = *psVar16;
  *(short *)(param_4 + 0xc) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)param_4 = (short)(iVar18 >> 1);
  *(short *)(param_4 + 0x12) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x18) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  sVar8 = psVar15[1];
  sVar9 = psVar16[1];
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_4 + 2) = (short)(iVar18 >> 1);
  *(short *)((int)param_4 + 0x4a) = (short)(iVar19 >> 1);
  *(short *)((int)param_4 + 0x62) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  sVar8 = psVar15[2];
  sVar9 = psVar16[2];
  *(short *)(param_4 + 0xd) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar19 = (int)sVar6 + (int)sVar7;
  iVar20 = (int)sVar9 + (int)sVar8;
  iVar18 = iVar19 + iVar20 >> 2;
  *(short *)(param_4 + 1) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x13) = (short)(iVar20 >> 1);
  *(short *)(param_4 + 0x19) = (short)iVar18;
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar11,param_4[1]);
  setCopReg(2,uVar17,param_4[6]);
  setCopReg(2,iVar18,param_4[7]);
  setCopReg(2,param_1,param_4[0x18]);
  setCopReg(2,param_2,param_4[0x19]);
  bVar2 = *(byte *)(psVar13 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar14 + 4);
  bVar4 = *(byte *)(psVar15 + 4);
  bVar5 = *(byte *)(psVar16 + 4);
  *(char *)(param_4 + 0xe) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_4 + 8) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar19 = (uint)bVar2 + (uint)bVar3;
  iVar20 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar19 + iVar20 >> 2;
  *(char *)(param_4 + 2) = (char)(iVar19 >> 1);
  *(char *)(param_4 + 0x14) = (char)(iVar20 >> 1);
  *(char *)(param_4 + 0x1a) = (char)iVar18;
  uVar10 = getCopReg(2,0xc);
  param_4[4] = uVar10;
  uVar10 = getCopReg(2,0xd);
  param_4[10] = uVar10;
  uVar10 = getCopReg(2,0xe);
  param_4[0x1c] = uVar10;
  uVar10 = getCopReg(2,0x11);
  param_4[5] = uVar10;
  uVar10 = getCopReg(2,0x12);
  param_4[0xb] = uVar10;
  uVar10 = getCopReg(2,0x13);
  param_4[0x1d] = uVar10;
  setCopReg(2,in_zero,param_4[0xc]);
  setCopReg(2,uVar11,param_4[0xd]);
  setCopReg(2,uVar17,param_4[0x12]);
  setCopReg(2,iVar18,param_4[0x13]);
  bVar2 = *(byte *)((int)psVar13 + 9);
  copFunction(2,0x280030);
  bVar3 = *(byte *)((int)psVar14 + 9);
  bVar4 = *(byte *)((int)psVar15 + 9);
  bVar5 = *(byte *)((int)psVar16 + 9);
  *(char *)((int)param_4 + 0x39) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x21) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_4 + 9) = (char)(iVar18 >> 1);
  *(char *)((int)param_4 + 0x51) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x69) = (char)(iVar18 + iVar19 >> 2);
  if (*param_2 == param_3 + 1) {
    uVar10 = getCopReg(2,0xc);
    param_4[0x10] = uVar10;
    uVar10 = getCopReg(2,0xd);
    param_4[0x16] = uVar10;
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
    DIVFT4A_OBJ_490();
  }
  else {
    puVar12 = param_4 + 0x23;
    param_4[0x45] = unaff_retaddr;
    param_4[0x41] = param_4[0x1e];
    param_4[0x42] = param_4;
    param_4[0x43] = param_4 + 6;
    param_4[0x44] = param_4 + 0x18;
    uVar10 = getCopReg(2,0xc);
    param_4[0x10] = uVar10;
    uVar10 = getCopReg(2,0xd);
    param_4[0x16] = uVar10;
    uVar10 = getCopReg(2,0x11);
    param_4[0x11] = uVar10;
    uVar10 = getCopReg(2,0x12);
    param_4[0x17] = uVar10;
    RCpolyFT4A();
    puVar12[0x1e] = puVar12[-4];
    puVar12[0x1f] = puVar12 + -0x17;
    puVar12[0x20] = puVar12 + -0x23;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyFT4A();
    puVar12[0x1e] = puVar12[-3];
    puVar12[0x1f] = puVar12 + -0x1d;
    puVar12[0x20] = puVar12 + -0x11;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyFT4A();
    puVar12[0x1e] = puVar12[-2];
    puVar12[0x1f] = puVar12 + -0x11;
    puVar12[0x20] = puVar12 + -0x17;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyFT4A();
  }
  return param_1;
}



// Possible DIVFT4A.OBJ/DIVFT4A_OBJ_490

void DIVFT4A_OBJ_490(uint *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar2 = *(ushort *)(in_t1 + 8);
  uVar3 = *(ushort *)(in_t2 + 8);
  uVar4 = *(ushort *)(in_t3 + 8);
  uVar5 = *(uint *)(param_2 + 0x10);
  param_1[3] = (uint)*(ushort *)(in_t0 + 8) + (uint)*(ushort *)(param_2 + 0xc) * 0x10000;
  param_1[5] = (uint)uVar2 + (uint)uVar1 * 0x10000;
  param_1[7] = (uint)uVar3;
  param_1[9] = (uint)uVar4;
  param_1[1] = uVar5;
  uVar5 = *(uint *)(in_t1 + 0x10);
  uVar6 = *(uint *)(in_t2 + 0x10);
  uVar7 = *(uint *)(in_t3 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[4] = uVar5;
  param_1[6] = uVar6;
  param_1[8] = uVar7;
  uVar5 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  *param_1 = uVar5 | 0x9000000;
  return;
}



// Possible DIVG4A.OBJ/RCpolyG4

undefined4 RCpolyG4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 in_zero;
  uint uVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int unaff_retaddr;
  
  psVar12 = (short *)param_2[0x3c];
  psVar13 = (short *)param_2[0x3d];
  psVar14 = (short *)param_2[0x3e];
  psVar15 = (short *)param_2[0x3f];
  iVar17 = getCopControlWord(2,0xd000);
  uVar16 = iVar17 >> 1;
  if ((((*(uint *)(psVar12 + 10) < uVar16) && (*(uint *)(psVar13 + 10) < uVar16)) &&
      (*(uint *)(psVar14 + 10) < uVar16)) && (*(uint *)(psVar15 + 10) < uVar16)) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc000);
  uVar16 = (uint)param_2[1] >> 1;
  iVar17 = (iVar18 >> 0x10) + uVar16;
  if (((iVar17 < psVar12[8]) && (iVar17 < psVar13[8])) &&
     ((iVar17 < psVar14[8] && (iVar17 < psVar15[8])))) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - uVar16;
  if (((psVar12[8] < iVar17) && (psVar13[8] < iVar17)) &&
     ((psVar14[8] < iVar17 && (psVar15[8] < iVar17)))) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc800);
  iVar17 = (iVar18 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar17 < psVar12[9]) && (iVar17 < psVar13[9])) && (iVar17 < psVar14[9])) &&
     (iVar17 < psVar15[9])) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar10 = (uint)(psVar13[9] < iVar17);
  if (((psVar12[9] < iVar17) && (bVar1 = uVar10 != 0, uVar10 = (uint)(psVar14[9] < iVar17), bVar1))
     && ((bVar1 = uVar10 != 0, uVar10 = (uint)(psVar15[9] < iVar17), bVar1 && (uVar10 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  sVar8 = *psVar14;
  sVar9 = *psVar15;
  *(short *)(param_2 + 0x2a) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)(param_2 + 0x1e) = (short)(iVar17 >> 1);
  *(short *)(param_2 + 0x30) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x36) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  sVar8 = psVar14[1];
  sVar9 = psVar15[1];
  *(short *)((int)param_2 + 0xaa) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_2 + 0x7a) = (short)(iVar17 >> 1);
  *(short *)((int)param_2 + 0xc2) = (short)(iVar18 >> 1);
  *(short *)((int)param_2 + 0xda) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  sVar8 = psVar14[2];
  sVar9 = psVar15[2];
  *(short *)(param_2 + 0x2b) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  iVar17 = iVar18 + iVar19 >> 2;
  *(short *)(param_2 + 0x1f) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x31) = (short)(iVar19 >> 1);
  *(short *)(param_2 + 0x37) = (short)iVar17;
  setCopReg(2,in_zero,param_2[0x1e]);
  setCopReg(2,uVar10,param_2[0x1f]);
  setCopReg(2,uVar16,param_2[0x24]);
  setCopReg(2,iVar17,param_2[0x25]);
  setCopReg(2,param_1,param_2[0x36]);
  setCopReg(2,param_2,param_2[0x37]);
  bVar2 = *(byte *)(psVar12 + 6);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 6);
  bVar4 = *(byte *)(psVar14 + 6);
  bVar5 = *(byte *)(psVar15 + 6);
  *(char *)(param_2 + 0x2d) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_2 + 0x27) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_2 + 0x21) = (char)(iVar17 >> 1);
  *(char *)(param_2 + 0x33) = (char)(iVar18 >> 1);
  *(char *)(param_2 + 0x39) = (char)(iVar17 + iVar18 >> 2);
  bVar2 = *(byte *)((int)psVar12 + 0xd);
  bVar3 = *(byte *)((int)psVar13 + 0xd);
  bVar4 = *(byte *)((int)psVar14 + 0xd);
  bVar5 = *(byte *)((int)psVar15 + 0xd);
  *(char *)((int)param_2 + 0xb5) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x9d) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar17 + iVar19 >> 2;
  *(char *)((int)param_2 + 0x85) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xcd) = (char)(iVar19 >> 1);
  *(char *)((int)param_2 + 0xe5) = (char)iVar18;
  iVar17 = getCopReg(2,0xc);
  param_2[0x22] = iVar17;
  iVar17 = getCopReg(2,0xd);
  param_2[0x28] = iVar17;
  iVar17 = getCopReg(2,0xe);
  param_2[0x3a] = iVar17;
  iVar17 = getCopReg(2,0x11);
  param_2[0x23] = iVar17;
  iVar17 = getCopReg(2,0x12);
  param_2[0x29] = iVar17;
  iVar17 = getCopReg(2,0x13);
  param_2[0x3b] = iVar17;
  setCopReg(2,in_zero,param_2[0x2a]);
  setCopReg(2,uVar10,param_2[0x2b]);
  setCopReg(2,uVar16,param_2[0x30]);
  setCopReg(2,iVar18,param_2[0x31]);
  bVar2 = *(byte *)(psVar12 + 7);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 7);
  bVar4 = *(byte *)(psVar14 + 7);
  bVar5 = *(byte *)(psVar15 + 7);
  *(char *)((int)param_2 + 0xb6) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x9e) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_2 + 0x86) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xce) = (char)(iVar18 >> 1);
  *(char *)((int)param_2 + 0xe6) = (char)(iVar17 + iVar18 >> 2);
  if (*param_2 == 1) {
    iVar17 = getCopReg(2,0xc);
    param_2[0x2e] = iVar17;
    iVar17 = getCopReg(2,0xd);
    param_2[0x34] = iVar17;
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
  }
  else {
    piVar11 = param_2 + 0x41;
    param_2[99] = unaff_retaddr;
    param_2[0x5f] = param_2[0x3c];
    param_2[0x60] = (int)(param_2 + 0x1e);
    param_2[0x61] = (int)(param_2 + 0x24);
    param_2[0x62] = (int)(param_2 + 0x36);
    iVar17 = getCopReg(2,0xc);
    param_2[0x2e] = iVar17;
    iVar17 = getCopReg(2,0xd);
    param_2[0x34] = iVar17;
    iVar17 = getCopReg(2,0x11);
    param_2[0x2f] = iVar17;
    iVar17 = getCopReg(2,0x12);
    param_2[0x35] = iVar17;
    RCpolyG4A();
    piVar11[0x1e] = piVar11[-4];
    piVar11[0x1f] = (int)(piVar11 + -0x17);
    piVar11[0x20] = (int)(piVar11 + -0x23);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyG4A();
    piVar11[0x1e] = piVar11[-3];
    piVar11[0x1f] = (int)(piVar11 + -0x1d);
    piVar11[0x20] = (int)(piVar11 + -0x11);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyG4A();
    piVar11[0x1e] = piVar11[-2];
    piVar11[0x1f] = (int)(piVar11 + -0x11);
    piVar11[0x20] = (int)(piVar11 + -0x17);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyG4A();
  }
  return param_1;
}



// Possible DIVG4A.OBJ/RCpolyG4A

undefined4 RCpolyG4A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 in_zero;
  uint uVar11;
  undefined4 *puVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 unaff_retaddr;
  
  psVar13 = (short *)param_4[0x1e];
  psVar14 = (short *)param_4[0x1f];
  psVar15 = (short *)param_4[0x20];
  psVar16 = (short *)param_4[0x21];
  iVar18 = getCopControlWord(2,0xd000);
  uVar17 = iVar18 >> 1;
  if ((((*(uint *)(psVar13 + 10) < uVar17) && (*(uint *)(psVar14 + 10) < uVar17)) &&
      (*(uint *)(psVar15 + 10) < uVar17)) && (*(uint *)(psVar16 + 10) < uVar17)) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc000);
  uVar17 = (uint)param_2[1] >> 1;
  iVar18 = (iVar19 >> 0x10) + uVar17;
  if (((iVar18 < psVar13[8]) && (iVar18 < psVar14[8])) &&
     ((iVar18 < psVar15[8] && (iVar18 < psVar16[8])))) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - uVar17;
  if (((psVar13[8] < iVar18) && (psVar14[8] < iVar18)) &&
     ((psVar15[8] < iVar18 && (psVar16[8] < iVar18)))) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc800);
  iVar18 = (iVar19 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar18 < psVar13[9]) && (iVar18 < psVar14[9])) && (iVar18 < psVar15[9])) &&
     (iVar18 < psVar16[9])) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar11 = (uint)(psVar14[9] < iVar18);
  if (((psVar13[9] < iVar18) && (bVar1 = uVar11 != 0, uVar11 = (uint)(psVar15[9] < iVar18), bVar1))
     && ((bVar1 = uVar11 != 0, uVar11 = (uint)(psVar16[9] < iVar18), bVar1 && (uVar11 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  sVar8 = *psVar15;
  sVar9 = *psVar16;
  *(short *)(param_4 + 0xc) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)param_4 = (short)(iVar18 >> 1);
  *(short *)(param_4 + 0x12) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x18) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  sVar8 = psVar15[1];
  sVar9 = psVar16[1];
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_4 + 2) = (short)(iVar18 >> 1);
  *(short *)((int)param_4 + 0x4a) = (short)(iVar19 >> 1);
  *(short *)((int)param_4 + 0x62) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  sVar8 = psVar15[2];
  sVar9 = psVar16[2];
  *(short *)(param_4 + 0xd) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar19 = (int)sVar6 + (int)sVar7;
  iVar20 = (int)sVar9 + (int)sVar8;
  iVar18 = iVar19 + iVar20 >> 2;
  *(short *)(param_4 + 1) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x13) = (short)(iVar20 >> 1);
  *(short *)(param_4 + 0x19) = (short)iVar18;
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar11,param_4[1]);
  setCopReg(2,uVar17,param_4[6]);
  setCopReg(2,iVar18,param_4[7]);
  setCopReg(2,param_1,param_4[0x18]);
  setCopReg(2,param_2,param_4[0x19]);
  bVar2 = *(byte *)(psVar13 + 6);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar14 + 6);
  bVar4 = *(byte *)(psVar15 + 6);
  bVar5 = *(byte *)(psVar16 + 6);
  *(char *)(param_4 + 0xf) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_4 + 9) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_4 + 3) = (char)(iVar18 >> 1);
  *(char *)(param_4 + 0x15) = (char)(iVar19 >> 1);
  *(char *)(param_4 + 0x1b) = (char)(iVar18 + iVar19 >> 2);
  bVar2 = *(byte *)((int)psVar13 + 0xd);
  bVar3 = *(byte *)((int)psVar14 + 0xd);
  bVar4 = *(byte *)((int)psVar15 + 0xd);
  bVar5 = *(byte *)((int)psVar16 + 0xd);
  *(char *)((int)param_4 + 0x3d) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x25) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar19 = (uint)bVar2 + (uint)bVar3;
  iVar20 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar19 + iVar20 >> 2;
  *(char *)((int)param_4 + 0xd) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x55) = (char)(iVar20 >> 1);
  *(char *)((int)param_4 + 0x6d) = (char)iVar18;
  uVar10 = getCopReg(2,0xc);
  param_4[4] = uVar10;
  uVar10 = getCopReg(2,0xd);
  param_4[10] = uVar10;
  uVar10 = getCopReg(2,0xe);
  param_4[0x1c] = uVar10;
  uVar10 = getCopReg(2,0x11);
  param_4[5] = uVar10;
  uVar10 = getCopReg(2,0x12);
  param_4[0xb] = uVar10;
  uVar10 = getCopReg(2,0x13);
  param_4[0x1d] = uVar10;
  setCopReg(2,in_zero,param_4[0xc]);
  setCopReg(2,uVar11,param_4[0xd]);
  setCopReg(2,uVar17,param_4[0x12]);
  setCopReg(2,iVar18,param_4[0x13]);
  bVar2 = *(byte *)(psVar13 + 7);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar14 + 7);
  bVar4 = *(byte *)(psVar15 + 7);
  bVar5 = *(byte *)(psVar16 + 7);
  *(char *)((int)param_4 + 0x3e) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x26) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_4 + 0xe) = (char)(iVar18 >> 1);
  *(char *)((int)param_4 + 0x56) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x6e) = (char)(iVar18 + iVar19 >> 2);
  if (*param_2 == param_3 + 1) {
    uVar10 = getCopReg(2,0xc);
    param_4[0x10] = uVar10;
    uVar10 = getCopReg(2,0xd);
    param_4[0x16] = uVar10;
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
    DIVG4A_OBJ_4DC();
  }
  else {
    puVar12 = param_4 + 0x23;
    param_4[0x45] = unaff_retaddr;
    param_4[0x41] = param_4[0x1e];
    param_4[0x42] = param_4;
    param_4[0x43] = param_4 + 6;
    param_4[0x44] = param_4 + 0x18;
    uVar10 = getCopReg(2,0xc);
    param_4[0x10] = uVar10;
    uVar10 = getCopReg(2,0xd);
    param_4[0x16] = uVar10;
    uVar10 = getCopReg(2,0x11);
    param_4[0x11] = uVar10;
    uVar10 = getCopReg(2,0x12);
    param_4[0x17] = uVar10;
    RCpolyG4A();
    puVar12[0x1e] = puVar12[-4];
    puVar12[0x1f] = puVar12 + -0x17;
    puVar12[0x20] = puVar12 + -0x23;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyG4A();
    puVar12[0x1e] = puVar12[-3];
    puVar12[0x1f] = puVar12 + -0x1d;
    puVar12[0x20] = puVar12 + -0x11;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyG4A();
    puVar12[0x1e] = puVar12[-2];
    puVar12[0x1f] = puVar12 + -0x11;
    puVar12[0x20] = puVar12 + -0x17;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyG4A();
  }
  return param_1;
}



// Possible DIVG4A.OBJ/DIVG4A_OBJ_4DC

void DIVG4A_OBJ_4DC(uint *param_1,int param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_t1 + 0x10);
  uVar2 = *(uint *)(in_t2 + 0x10);
  uVar3 = *(uint *)(in_t3 + 0x10);
  *(undefined *)(in_t0 + 0xf) = *(undefined *)(param_2 + 0x13);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[4] = uVar1;
  param_1[6] = uVar2;
  param_1[8] = uVar3;
  uVar4 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  uVar1 = *(uint *)(in_t1 + 0xc);
  uVar2 = *(uint *)(in_t2 + 0xc);
  uVar3 = *(uint *)(in_t3 + 0xc);
  param_1[1] = *(uint *)(in_t0 + 0xc);
  param_1[3] = uVar1;
  param_1[5] = uVar2;
  param_1[7] = uVar3;
  *param_1 = uVar4 | 0x8000000;
  return;
}



// Possible DIVGT4A.OBJ/RCpolyGT4

undefined4 RCpolyGT4(undefined4 param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 in_zero;
  uint uVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int unaff_retaddr;
  
  psVar12 = (short *)param_2[0x3c];
  psVar13 = (short *)param_2[0x3d];
  psVar14 = (short *)param_2[0x3e];
  psVar15 = (short *)param_2[0x3f];
  iVar17 = getCopControlWord(2,0xd000);
  uVar16 = iVar17 >> 1;
  if ((((*(uint *)(psVar12 + 10) < uVar16) && (*(uint *)(psVar13 + 10) < uVar16)) &&
      (*(uint *)(psVar14 + 10) < uVar16)) && (*(uint *)(psVar15 + 10) < uVar16)) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc000);
  uVar16 = (uint)param_2[1] >> 1;
  iVar17 = (iVar18 >> 0x10) + uVar16;
  if (((iVar17 < psVar12[8]) && (iVar17 < psVar13[8])) &&
     ((iVar17 < psVar14[8] && (iVar17 < psVar15[8])))) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - uVar16;
  if (((psVar12[8] < iVar17) && (psVar13[8] < iVar17)) &&
     ((psVar14[8] < iVar17 && (psVar15[8] < iVar17)))) {
    return param_1;
  }
  iVar18 = getCopControlWord(2,0xc800);
  iVar17 = (iVar18 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar17 < psVar12[9]) && (iVar17 < psVar13[9])) && (iVar17 < psVar14[9])) &&
     (iVar17 < psVar15[9])) {
    return param_1;
  }
  iVar17 = (iVar18 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar10 = (uint)(psVar13[9] < iVar17);
  if (((psVar12[9] < iVar17) && (bVar1 = uVar10 != 0, uVar10 = (uint)(psVar14[9] < iVar17), bVar1))
     && ((bVar1 = uVar10 != 0, uVar10 = (uint)(psVar15[9] < iVar17), bVar1 && (uVar10 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar12;
  sVar7 = *psVar13;
  sVar8 = *psVar14;
  sVar9 = *psVar15;
  *(short *)(param_2 + 0x2a) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x24) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)(param_2 + 0x1e) = (short)(iVar17 >> 1);
  *(short *)(param_2 + 0x30) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x36) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[1];
  sVar7 = psVar13[1];
  sVar8 = psVar14[1];
  sVar9 = psVar15[1];
  *(short *)((int)param_2 + 0xaa) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_2 + 0x92) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar17 = (int)sVar6 + (int)sVar7;
  iVar18 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_2 + 0x7a) = (short)(iVar17 >> 1);
  *(short *)((int)param_2 + 0xc2) = (short)(iVar18 >> 1);
  *(short *)((int)param_2 + 0xda) = (short)(iVar17 + iVar18 >> 2);
  sVar6 = psVar12[2];
  sVar7 = psVar13[2];
  sVar8 = psVar14[2];
  sVar9 = psVar15[2];
  *(short *)(param_2 + 0x2b) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_2 + 0x25) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  iVar17 = iVar18 + iVar19 >> 2;
  *(short *)(param_2 + 0x1f) = (short)(iVar18 >> 1);
  *(short *)(param_2 + 0x31) = (short)(iVar19 >> 1);
  *(short *)(param_2 + 0x37) = (short)iVar17;
  setCopReg(2,in_zero,param_2[0x1e]);
  setCopReg(2,uVar10,param_2[0x1f]);
  setCopReg(2,uVar16,param_2[0x24]);
  setCopReg(2,iVar17,param_2[0x25]);
  setCopReg(2,param_1,param_2[0x36]);
  setCopReg(2,param_2,param_2[0x37]);
  bVar2 = *(byte *)(psVar12 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 4);
  bVar4 = *(byte *)(psVar14 + 4);
  bVar5 = *(byte *)(psVar15 + 4);
  *(char *)(param_2 + 0x2c) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_2 + 0x26) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_2 + 0x20) = (char)(iVar17 >> 1);
  *(char *)(param_2 + 0x32) = (char)(iVar18 >> 1);
  *(char *)(param_2 + 0x38) = (char)(iVar17 + iVar18 >> 2);
  bVar2 = *(byte *)((int)psVar12 + 9);
  bVar3 = *(byte *)((int)psVar13 + 9);
  bVar4 = *(byte *)((int)psVar14 + 9);
  bVar5 = *(byte *)((int)psVar15 + 9);
  *(char *)((int)param_2 + 0xb1) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x99) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar17 + iVar19 >> 2;
  *(char *)((int)param_2 + 0x81) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xc9) = (char)(iVar19 >> 1);
  *(char *)((int)param_2 + 0xe1) = (char)iVar18;
  iVar17 = getCopReg(2,0xc);
  param_2[0x22] = iVar17;
  iVar17 = getCopReg(2,0xd);
  param_2[0x28] = iVar17;
  iVar17 = getCopReg(2,0xe);
  param_2[0x3a] = iVar17;
  iVar17 = getCopReg(2,0x11);
  param_2[0x23] = iVar17;
  iVar17 = getCopReg(2,0x12);
  param_2[0x29] = iVar17;
  iVar17 = getCopReg(2,0x13);
  param_2[0x3b] = iVar17;
  setCopReg(2,in_zero,param_2[0x2a]);
  setCopReg(2,uVar10,param_2[0x2b]);
  setCopReg(2,uVar16,param_2[0x30]);
  setCopReg(2,iVar18,param_2[0x31]);
  bVar2 = *(byte *)(psVar12 + 6);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar13 + 6);
  bVar4 = *(byte *)(psVar14 + 6);
  bVar5 = *(byte *)(psVar15 + 6);
  *(char *)(param_2 + 0x2d) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_2 + 0x27) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_2 + 0x21) = (char)(iVar17 >> 1);
  *(char *)(param_2 + 0x33) = (char)(iVar18 >> 1);
  *(char *)(param_2 + 0x39) = (char)(iVar17 + iVar18 >> 2);
  bVar2 = *(byte *)((int)psVar12 + 0xd);
  bVar3 = *(byte *)((int)psVar13 + 0xd);
  bVar4 = *(byte *)((int)psVar14 + 0xd);
  bVar5 = *(byte *)((int)psVar15 + 0xd);
  *(char *)((int)param_2 + 0xb5) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x9d) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_2 + 0x85) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xcd) = (char)(iVar18 >> 1);
  *(char *)((int)param_2 + 0xe5) = (char)(iVar17 + iVar18 >> 2);
  bVar2 = *(byte *)(psVar12 + 7);
  bVar3 = *(byte *)(psVar13 + 7);
  bVar4 = *(byte *)(psVar14 + 7);
  bVar5 = *(byte *)(psVar15 + 7);
  *(char *)((int)param_2 + 0xb6) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_2 + 0x9e) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar17 = (uint)bVar2 + (uint)bVar3;
  iVar18 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_2 + 0x86) = (char)(iVar17 >> 1);
  *(char *)((int)param_2 + 0xce) = (char)(iVar18 >> 1);
  *(char *)((int)param_2 + 0xe6) = (char)(iVar17 + iVar18 >> 2);
  iVar17 = getCopReg(2,0xc);
  param_2[0x2e] = iVar17;
  iVar17 = getCopReg(2,0xd);
  param_2[0x34] = iVar17;
  iVar17 = getCopReg(2,0x11);
  param_2[0x2f] = iVar17;
  iVar17 = getCopReg(2,0x12);
  param_2[0x35] = iVar17;
  if (*param_2 == 1) {
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
  }
  else {
    piVar11 = param_2 + 0x41;
    param_2[99] = unaff_retaddr;
    param_2[0x5f] = param_2[0x3c];
    param_2[0x60] = (int)(param_2 + 0x1e);
    param_2[0x61] = (int)(param_2 + 0x24);
    param_2[0x62] = (int)(param_2 + 0x36);
    RCpolyGT4A();
    piVar11[0x1e] = piVar11[-4];
    piVar11[0x1f] = (int)(piVar11 + -0x17);
    piVar11[0x20] = (int)(piVar11 + -0x23);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyGT4A();
    piVar11[0x1e] = piVar11[-3];
    piVar11[0x1f] = (int)(piVar11 + -0x1d);
    piVar11[0x20] = (int)(piVar11 + -0x11);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyGT4A();
    piVar11[0x1e] = piVar11[-2];
    piVar11[0x1f] = (int)(piVar11 + -0x11);
    piVar11[0x20] = (int)(piVar11 + -0x17);
    piVar11[0x21] = (int)(piVar11 + -0xb);
    RCpolyGT4A();
  }
  return param_1;
}



// Possible DIVGT4A.OBJ/RCpolyGT4A

undefined4 RCpolyGT4A(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 in_zero;
  uint uVar11;
  undefined4 *puVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 unaff_retaddr;
  
  psVar13 = (short *)param_4[0x1e];
  psVar14 = (short *)param_4[0x1f];
  psVar15 = (short *)param_4[0x20];
  psVar16 = (short *)param_4[0x21];
  iVar18 = getCopControlWord(2,0xd000);
  uVar17 = iVar18 >> 1;
  if ((((*(uint *)(psVar13 + 10) < uVar17) && (*(uint *)(psVar14 + 10) < uVar17)) &&
      (*(uint *)(psVar15 + 10) < uVar17)) && (*(uint *)(psVar16 + 10) < uVar17)) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc000);
  uVar17 = (uint)param_2[1] >> 1;
  iVar18 = (iVar19 >> 0x10) + uVar17;
  if (((iVar18 < psVar13[8]) && (iVar18 < psVar14[8])) &&
     ((iVar18 < psVar15[8] && (iVar18 < psVar16[8])))) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - uVar17;
  if (((psVar13[8] < iVar18) && (psVar14[8] < iVar18)) &&
     ((psVar15[8] < iVar18 && (psVar16[8] < iVar18)))) {
    return param_1;
  }
  iVar19 = getCopControlWord(2,0xc800);
  iVar18 = (iVar19 >> 0x10) + ((uint)param_2[2] >> 1);
  if ((((iVar18 < psVar13[9]) && (iVar18 < psVar14[9])) && (iVar18 < psVar15[9])) &&
     (iVar18 < psVar16[9])) {
    return param_1;
  }
  iVar18 = (iVar19 >> 0x10) - ((uint)param_2[2] >> 1);
  uVar11 = (uint)(psVar14[9] < iVar18);
  if (((psVar13[9] < iVar18) && (bVar1 = uVar11 != 0, uVar11 = (uint)(psVar15[9] < iVar18), bVar1))
     && ((bVar1 = uVar11 != 0, uVar11 = (uint)(psVar16[9] < iVar18), bVar1 && (uVar11 != 0)))) {
    return param_1;
  }
  sVar6 = *psVar13;
  sVar7 = *psVar14;
  sVar8 = *psVar15;
  sVar9 = *psVar16;
  *(short *)(param_4 + 0xc) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 6) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)param_4 = (short)(iVar18 >> 1);
  *(short *)(param_4 + 0x12) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x18) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[1];
  sVar7 = psVar14[1];
  sVar8 = psVar15[1];
  sVar9 = psVar16[1];
  *(short *)((int)param_4 + 0x32) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)((int)param_4 + 0x1a) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar18 = (int)sVar6 + (int)sVar7;
  iVar19 = (int)sVar9 + (int)sVar8;
  *(short *)((int)param_4 + 2) = (short)(iVar18 >> 1);
  *(short *)((int)param_4 + 0x4a) = (short)(iVar19 >> 1);
  *(short *)((int)param_4 + 0x62) = (short)(iVar18 + iVar19 >> 2);
  sVar6 = psVar13[2];
  sVar7 = psVar14[2];
  sVar8 = psVar15[2];
  sVar9 = psVar16[2];
  *(short *)(param_4 + 0xd) = (short)((int)sVar9 + (int)sVar7 >> 1);
  *(short *)(param_4 + 7) = (short)((int)sVar6 + (int)sVar8 >> 1);
  iVar19 = (int)sVar6 + (int)sVar7;
  iVar20 = (int)sVar9 + (int)sVar8;
  iVar18 = iVar19 + iVar20 >> 2;
  *(short *)(param_4 + 1) = (short)(iVar19 >> 1);
  *(short *)(param_4 + 0x13) = (short)(iVar20 >> 1);
  *(short *)(param_4 + 0x19) = (short)iVar18;
  setCopReg(2,in_zero,*param_4);
  setCopReg(2,uVar11,param_4[1]);
  setCopReg(2,uVar17,param_4[6]);
  setCopReg(2,iVar18,param_4[7]);
  setCopReg(2,param_1,param_4[0x18]);
  setCopReg(2,param_2,param_4[0x19]);
  bVar2 = *(byte *)(psVar13 + 4);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar14 + 4);
  bVar4 = *(byte *)(psVar15 + 4);
  bVar5 = *(byte *)(psVar16 + 4);
  *(char *)(param_4 + 0xe) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_4 + 8) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_4 + 2) = (char)(iVar18 >> 1);
  *(char *)(param_4 + 0x14) = (char)(iVar19 >> 1);
  *(char *)(param_4 + 0x1a) = (char)(iVar18 + iVar19 >> 2);
  bVar2 = *(byte *)((int)psVar13 + 9);
  bVar3 = *(byte *)((int)psVar14 + 9);
  bVar4 = *(byte *)((int)psVar15 + 9);
  bVar5 = *(byte *)((int)psVar16 + 9);
  *(char *)((int)param_4 + 0x39) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x21) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar19 = (uint)bVar2 + (uint)bVar3;
  iVar20 = (uint)bVar5 + (uint)bVar4;
  iVar18 = iVar19 + iVar20 >> 2;
  *(char *)((int)param_4 + 9) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x51) = (char)(iVar20 >> 1);
  *(char *)((int)param_4 + 0x69) = (char)iVar18;
  uVar10 = getCopReg(2,0xc);
  param_4[4] = uVar10;
  uVar10 = getCopReg(2,0xd);
  param_4[10] = uVar10;
  uVar10 = getCopReg(2,0xe);
  param_4[0x1c] = uVar10;
  uVar10 = getCopReg(2,0x11);
  param_4[5] = uVar10;
  uVar10 = getCopReg(2,0x12);
  param_4[0xb] = uVar10;
  uVar10 = getCopReg(2,0x13);
  param_4[0x1d] = uVar10;
  setCopReg(2,in_zero,param_4[0xc]);
  setCopReg(2,uVar11,param_4[0xd]);
  setCopReg(2,uVar17,param_4[0x12]);
  setCopReg(2,iVar18,param_4[0x13]);
  bVar2 = *(byte *)(psVar13 + 6);
  copFunction(2,0x280030);
  bVar3 = *(byte *)(psVar14 + 6);
  bVar4 = *(byte *)(psVar15 + 6);
  bVar5 = *(byte *)(psVar16 + 6);
  *(char *)(param_4 + 0xf) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)(param_4 + 9) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)(param_4 + 3) = (char)(iVar18 >> 1);
  *(char *)(param_4 + 0x15) = (char)(iVar19 >> 1);
  *(char *)(param_4 + 0x1b) = (char)(iVar18 + iVar19 >> 2);
  bVar2 = *(byte *)((int)psVar13 + 0xd);
  bVar3 = *(byte *)((int)psVar14 + 0xd);
  bVar4 = *(byte *)((int)psVar15 + 0xd);
  bVar5 = *(byte *)((int)psVar16 + 0xd);
  *(char *)((int)param_4 + 0x3d) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x25) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_4 + 0xd) = (char)(iVar18 >> 1);
  *(char *)((int)param_4 + 0x55) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x6d) = (char)(iVar18 + iVar19 >> 2);
  bVar2 = *(byte *)(psVar13 + 7);
  bVar3 = *(byte *)(psVar14 + 7);
  bVar4 = *(byte *)(psVar15 + 7);
  bVar5 = *(byte *)(psVar16 + 7);
  *(char *)((int)param_4 + 0x3e) = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
  *(char *)((int)param_4 + 0x26) = (char)((int)((uint)bVar2 + (uint)bVar4) >> 1);
  iVar18 = (uint)bVar2 + (uint)bVar3;
  iVar19 = (uint)bVar5 + (uint)bVar4;
  *(char *)((int)param_4 + 0xe) = (char)(iVar18 >> 1);
  *(char *)((int)param_4 + 0x56) = (char)(iVar19 >> 1);
  *(char *)((int)param_4 + 0x6e) = (char)(iVar18 + iVar19 >> 2);
  uVar10 = getCopReg(2,0xc);
  param_4[0x10] = uVar10;
  uVar10 = getCopReg(2,0xd);
  param_4[0x16] = uVar10;
  uVar10 = getCopReg(2,0x11);
  param_4[0x11] = uVar10;
  uVar10 = getCopReg(2,0x12);
  param_4[0x17] = uVar10;
  if (*param_2 == param_3 + 1) {
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
    DIVGT4A_OBJ_56C();
  }
  else {
    puVar12 = param_4 + 0x23;
    param_4[0x45] = unaff_retaddr;
    param_4[0x41] = param_4[0x1e];
    param_4[0x42] = param_4;
    param_4[0x43] = param_4 + 6;
    param_4[0x44] = param_4 + 0x18;
    RCpolyGT4A();
    puVar12[0x1e] = puVar12[-4];
    puVar12[0x1f] = puVar12 + -0x17;
    puVar12[0x20] = puVar12 + -0x23;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyGT4A();
    puVar12[0x1e] = puVar12[-3];
    puVar12[0x1f] = puVar12 + -0x1d;
    puVar12[0x20] = puVar12 + -0x11;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyGT4A();
    puVar12[0x1e] = puVar12[-2];
    puVar12[0x1f] = puVar12 + -0x11;
    puVar12[0x20] = puVar12 + -0x17;
    puVar12[0x21] = puVar12 + -0xb;
    RCpolyGT4A();
  }
  return param_1;
}



// Possible DIVGT4A.OBJ/DIVGT4A_OBJ_56C

void DIVGT4A_OBJ_56C(uint *param_1,int param_2)

{
  undefined uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar3 = *(ushort *)(in_t1 + 8);
  uVar4 = *(ushort *)(in_t2 + 8);
  uVar5 = *(ushort *)(in_t3 + 8);
  uVar1 = *(undefined *)(param_2 + 0x13);
  param_1[3] = (uint)*(ushort *)(in_t0 + 8) + (uint)*(ushort *)(param_2 + 0xc) * 0x10000;
  param_1[6] = (uint)uVar3 + (uint)uVar2 * 0x10000;
  param_1[9] = (uint)uVar4;
  param_1[0xc] = (uint)uVar5;
  *(undefined *)(in_t0 + 0xf) = uVar1;
  uVar6 = *(uint *)(in_t1 + 0x10);
  uVar7 = *(uint *)(in_t2 + 0x10);
  uVar8 = *(uint *)(in_t3 + 0x10);
  param_1[2] = *(uint *)(in_t0 + 0x10);
  param_1[5] = uVar6;
  param_1[8] = uVar7;
  param_1[0xb] = uVar8;
  uVar9 = **(uint **)(param_2 + 0x14);
  **(uint **)(param_2 + 0x14) = (uint)param_1 & 0xffffff;
  uVar6 = *(uint *)(in_t1 + 0xc);
  uVar7 = *(uint *)(in_t2 + 0xc);
  uVar8 = *(uint *)(in_t3 + 0xc);
  param_1[1] = *(uint *)(in_t0 + 0xc);
  param_1[4] = uVar6;
  param_1[7] = uVar7;
  param_1[10] = uVar8;
  *param_1 = uVar9 | 0xc000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastNF3(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_6 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    iVar5 = (uVar3 >> 0x10) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0xc) * 8;
    do {
      puVar4 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xb000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar5 = (uVar3 >> 0x10) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x1c) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar8 = getCopReg(2,0x3800);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_3 = uVar7 & 0xffffff | 0x4000000;
          in_v0 = ((uint)param_3 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0x16);
          param_3[1] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_3[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_3[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_3[4] = uVar7;
          param_3 = param_3 + 5;
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x10;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF3NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                    uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar3 = (uint)*(ushort *)(param_1 + 10) * 8;
    iVar6 = (uVar4 >> 0x10) * 8;
    do {
      puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*puVar5);
      setCopReg(2,in_v1,puVar5[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xb000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      uVar4 = *(uint *)(param_1 + 0x1c);
      iVar3 = (uint)*(ushort *)(param_1 + 0x1a) << 3;
      iVar6 = (uVar4 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar8 = getCopReg(2,0x3800);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_4 = uVar7 & 0xffffff | 0x4000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          param_4 = param_4 + 5;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x10;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF3L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                   int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar4 = *(uint *)(param_1 + 0x1c);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          setCopReg(2,in_zero,*puVar6);
          setCopReg(2,in_at,puVar6[1]);
          iVar8 = getCopReg(2,0x3800);
          copFunction(2,0x108041b);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_4 = uVar7 & 0xffffff | 0x4000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          param_4 = param_4 + 5;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x10;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF3LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                     int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar4 = *(uint *)(param_1 + 0x1c);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          setCopReg(2,in_zero,*puVar6);
          setCopReg(2,in_at,puVar6[1]);
          iVar8 = getCopReg(2,0x3800);
          copFunction(2,0xe80413);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_4 = uVar7 & 0xffffff | 0x4000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          param_4 = param_4 + 5;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x10;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastNF4(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_6 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    iVar5 = (uVar3 >> 0x10) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0xc) * 8;
    do {
      puVar4 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xb000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0xe) * 8 + param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar5 = (uVar3 >> 0x10) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x1c) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0x16);
          param_3[1] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_3[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_3[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_3[4] = uVar7;
          copFunction(2,0x180001);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar8 = getCopReg(2,0x3800);
            uVar7 = getCopReg(2,0xe);
            param_3[5] = uVar7;
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_3 = uVar7 & 0xffffff | 0x5000000;
            in_v0 = ((uint)param_3 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            param_3 = param_3 + 6;
          }
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x10;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF4NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                    uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar3 = (uint)*(ushort *)(param_1 + 10) * 8;
    iVar6 = (uVar4 >> 0x10) * 8;
    do {
      puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*puVar5);
      setCopReg(2,in_v1,puVar5[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xb000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) * 8 + param_2);
      uVar4 = *(uint *)(param_1 + 0x20);
      iVar3 = (uint)*(ushort *)(param_1 + 0x1e) << 3;
      iVar6 = (uVar4 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          copFunction(2,0x180001);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar8 = getCopReg(2,0x3800);
            uVar7 = getCopReg(2,0xe);
            param_4[5] = uVar7;
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x5000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            param_4 = param_4 + 6;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x14;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF4L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                   int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) * 8 + param_2);
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar4 = *(uint *)(param_1 + 0x20);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          copFunction(2,0x180001);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            setCopReg(2,in_zero,*puVar6);
            setCopReg(2,in_at,puVar6[1]);
            iVar8 = getCopReg(2,0x3800);
            copFunction(2,0x108041b);
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x5000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            uVar7 = getCopReg(2,0xe);
            param_4[5] = uVar7;
            uVar7 = getCopReg(2,0x16);
            param_4[1] = uVar7;
            param_4 = param_4 + 6;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x14;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastF4LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                     int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) * 8 + param_2);
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar4 = *(uint *)(param_1 + 0x20);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[3] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[4] = uVar7;
          copFunction(2,0x180001);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            setCopReg(2,in_zero,*puVar6);
            setCopReg(2,in_at,puVar6[1]);
            iVar8 = getCopReg(2,0x3800);
            copFunction(2,0xe80413);
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x5000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            uVar7 = getCopReg(2,0xe);
            param_4[5] = uVar7;
            uVar7 = getCopReg(2,0x16);
            param_4[1] = uVar7;
            param_4 = param_4 + 6;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x14;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastNG3(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  
  iVar1 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_6 + 8);
    uVar3 = *(uint *)(param_1 + 0x10);
    iVar5 = (uVar3 >> 0x10) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0x14) * 8;
    do {
      puVar4 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xa000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      setCopReg(2,unaff_s5,*(undefined4 *)(param_1 + 8));
      setCopReg(2,unaff_s6,*(undefined4 *)(param_1 + 0xc));
      uVar3 = *(uint *)(param_1 + 0x28);
      iVar5 = (uVar3 >> 0x10) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x2c) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar8 = getCopReg(2,0x3800);
          uVar7 = getCopReg(2,0x14);
          param_3[1] = uVar7;
          uVar7 = getCopReg(2,0x15);
          param_3[3] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_3[5] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_3[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_3[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_3[6] = uVar7;
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_3 = uVar7 & 0xffffff | 0x6000000;
          in_v0 = ((uint)param_3 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          param_3 = param_3 + 7;
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x18;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG3NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                    uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    iVar3 = (uint)*(ushort *)(param_1 + 10) * 8;
    iVar4 = (uint)*(ushort *)(param_1 + 0xe) * 8;
    iVar5 = (uint)*(ushort *)(param_1 + 0x12) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar4 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar4 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar5 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xa000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      iVar3 = (uint)*(ushort *)(param_1 + 0x1e) << 3;
      iVar4 = (uint)*(ushort *)(param_1 + 0x22) << 3;
      iVar5 = (uint)*(ushort *)(param_1 + 0x26) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar7 = getCopReg(2,0x3800);
          puVar8 = (uint *)(((uint)(iVar7 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar6 = *puVar8;
          *param_4 = uVar6 & 0xffffff | 0x6000000;
          in_v0 = ((uint)param_4 ^ uVar6) & 0xffffff;
          in_v1 = in_v0 ^ uVar6;
          *puVar8 = in_v1;
          uVar6 = getCopReg(2,0x14);
          param_4[1] = uVar6;
          uVar6 = getCopReg(2,0x14);
          param_4[3] = uVar6;
          uVar6 = getCopReg(2,0x14);
          param_4[5] = uVar6;
          uVar6 = getCopReg(2,0xc);
          param_4[2] = uVar6;
          uVar6 = getCopReg(2,0xd);
          param_4[4] = uVar6;
          uVar6 = getCopReg(2,0xe);
          param_4[6] = uVar6;
          param_4 = param_4 + 7;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x14;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG3L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                   int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar7 = *(uint *)(param_1 + 0x10);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
        in_v0 = getCopReg(2,0xc000);
        if ((int)in_v0 < 1) break;
        copFunction(2,0x158002d);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        setCopReg(2,in_v0,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        iVar10 = getCopReg(2,0x3800);
        copFunction(2,0x118043f);
        puVar11 = (uint *)(((uint)(iVar10 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar11;
        *param_4 = uVar4 & 0xffffff | 0x6000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = in_v0 ^ uVar4;
        *puVar11 = in_v1;
        uVar4 = *(uint *)(param_1 + 0x1c);
        uVar5 = *(uint *)(param_1 + 0x20);
        uVar7 = *(uint *)(param_1 + 0x24);
        uVar1 = getCopReg(2,0xc);
        param_4[2] = uVar1;
        uVar1 = getCopReg(2,0xd);
        param_4[4] = uVar1;
        uVar1 = getCopReg(2,0xe);
        param_4[6] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[3] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[5] = uVar1;
        param_4 = param_4 + 7;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x14;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x14;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG3LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                     int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar7 = *(uint *)(param_1 + 0x10);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,0x3000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
        in_v0 = getCopReg(2,0xc000);
        if ((int)in_v0 < 1) break;
        copFunction(2,0x158002d);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        setCopReg(2,in_v0,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        iVar10 = getCopReg(2,0x3800);
        copFunction(2,0xf80416);
        puVar11 = (uint *)(((uint)(iVar10 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar11;
        *param_4 = uVar4 & 0xffffff | 0x6000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = in_v0 ^ uVar4;
        *puVar11 = in_v1;
        uVar4 = *(uint *)(param_1 + 0x1c);
        uVar5 = *(uint *)(param_1 + 0x20);
        uVar7 = *(uint *)(param_1 + 0x24);
        uVar1 = getCopReg(2,0xc);
        param_4[2] = uVar1;
        uVar1 = getCopReg(2,0xd);
        param_4[4] = uVar1;
        uVar1 = getCopReg(2,0xe);
        param_4[6] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[3] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[5] = uVar1;
        param_4 = param_4 + 7;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x14;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x14;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastNG4(uint param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint uVar1;
  uint in_v1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  
  iVar3 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar4 = *(int *)(param_6 + 8);
    uVar5 = *(uint *)(param_1 + 0x14);
    iVar7 = (uVar5 >> 0x10) * 8;
    iVar8 = (uint)*(ushort *)(param_1 + 0x18) * 8;
    do {
      puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar6);
      setCopReg(2,in_at,puVar6[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar7 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar7 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar8 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar8 + param_2))[1]);
      copFunction(2,0x280030);
      uVar2 = param_1 + 0x1c;
      puVar6 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x1a) * 8 + param_2);
      uVar5 = *(uint *)(param_1 + 0x30);
      iVar7 = (uVar5 >> 0x10) << 3;
      iVar8 = (uint)*(ushort *)(param_1 + 0x34) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*puVar6);
        setCopReg(2,in_at,puVar6[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar1 = getCopReg(2,0xc);
          param_3[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          param_3[4] = uVar1;
          uVar1 = getCopReg(2,0xe);
          param_3[6] = uVar1;
          copFunction(2,0x180001);
          uVar9 = *(uint *)(param_1 + 8);
          uVar1 = *(uint *)(param_1 + 0xc);
          param_3[1] = *(uint *)(param_1 + 4) | _DAT_80065488 << 0x19;
          param_3[3] = uVar9;
          param_3[5] = uVar1;
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar10 = getCopReg(2,0x3800);
            param_3[7] = *(uint *)(param_1 + 0x10);
            uVar1 = getCopReg(2,0xe);
            param_3[8] = uVar1;
            puVar11 = (uint *)(((uint)(iVar10 - iVar4) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar3);
            param_1 = *puVar11;
            *param_3 = param_1 & 0xffffff | 0x8000000;
            in_v0 = ((uint)param_3 ^ param_1) & 0xffffff;
            param_1 = in_v0 ^ param_1;
            *puVar11 = param_1;
            param_3 = param_3 + 9;
          }
        }
      }
      param_4 = param_4 + -1;
      in_v1 = param_1;
      param_1 = uVar2;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG4NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                    uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    iVar3 = (uint)*(ushort *)(param_1 + 10) * 8;
    iVar4 = (uint)*(ushort *)(param_1 + 0xe) * 8;
    iVar5 = (uint)*(ushort *)(param_1 + 0x12) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar4 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar4 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar5 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xa000,*(uint *)(param_1 + 4) | _DAT_80065488 << 0x19);
      puVar6 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x16) * 8 + param_2);
      iVar3 = (uint)*(ushort *)(param_1 + 0x22) << 3;
      iVar4 = (uint)*(ushort *)(param_1 + 0x26) << 3;
      iVar5 = (uint)*(ushort *)(param_1 + 0x2a) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*puVar6);
        setCopReg(2,in_at,puVar6[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          copFunction(2,0x180001);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar8 = getCopReg(2,0x3800);
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x8000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = in_v0 ^ uVar7;
            *puVar9 = in_v1;
            uVar7 = getCopReg(2,0x14);
            param_4[1] = uVar7;
            uVar7 = getCopReg(2,0x14);
            param_4[3] = uVar7;
            uVar7 = getCopReg(2,0x14);
            param_4[5] = uVar7;
            uVar7 = getCopReg(2,0x14);
            param_4[7] = uVar7;
            uVar7 = getCopReg(2,0xe);
            param_4[8] = uVar7;
            param_4 = param_4 + 9;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x18;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG4L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                   int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar7 = *(uint *)(param_1 + 0x10);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v1 = (undefined4 *)((*(uint *)(param_1 + 0x14) >> 0x10) * 8 + param_2);
        puVar10 = (undefined4 *)(((*(uint *)(param_1 + 0x14) << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v1 = (undefined4 *)getCopReg(2,0xc000);
        if ((int)in_v1 < 1) break;
        uVar4 = getCopReg(2,0xc);
        param_4[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        param_4[4] = uVar4;
        uVar4 = getCopReg(2,0xe);
        param_4[6] = uVar4;
        copFunction(2,0x180001);
        uVar4 = *(uint *)(param_1 + 4) | _DAT_80065488 << 0x19;
        setCopReg(2,0x3000,uVar4);
        setCopReg(2,uVar4,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x168002e);
        setCopReg(2,in_zero,*puVar10);
        setCopReg(2,in_at,puVar10[1]);
        iVar11 = getCopReg(2,0x3800);
        copFunction(2,0x108041b);
        uVar4 = getCopReg(2,0x16);
        param_4[7] = uVar4;
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        copFunction(2,0x118043f);
        puVar12 = (uint *)(((uint)(iVar11 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar12;
        *param_4 = uVar4 & 0xffffff | 0x8000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = (undefined4 *)(in_v0 ^ uVar4);
        *puVar12 = (uint)in_v1;
        uVar4 = *(uint *)(param_1 + 0x20);
        uVar5 = *(uint *)(param_1 + 0x24);
        uVar7 = *(uint *)(param_1 + 0x28);
        uVar1 = getCopReg(2,0xe);
        param_4[8] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[3] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[5] = uVar1;
        param_4 = param_4 + 9;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x18;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x18;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastG4LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                     int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar7 = *(uint *)(param_1 + 0x10);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v1 = (undefined4 *)((*(uint *)(param_1 + 0x14) >> 0x10) * 8 + param_2);
        puVar10 = (undefined4 *)(((*(uint *)(param_1 + 0x14) << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v1 = (undefined4 *)getCopReg(2,0xc000);
        if ((int)in_v1 < 1) break;
        uVar4 = getCopReg(2,0xc);
        param_4[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        param_4[4] = uVar4;
        uVar4 = getCopReg(2,0xe);
        param_4[6] = uVar4;
        copFunction(2,0x180001);
        uVar4 = *(uint *)(param_1 + 4) | _DAT_80065488 << 0x19;
        setCopReg(2,0x3000,uVar4);
        setCopReg(2,uVar4,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x168002e);
        setCopReg(2,in_zero,*puVar10);
        setCopReg(2,in_at,puVar10[1]);
        iVar11 = getCopReg(2,0x3800);
        copFunction(2,0xe80413);
        uVar4 = getCopReg(2,0x16);
        param_4[7] = uVar4;
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        copFunction(2,0xf80416);
        puVar12 = (uint *)(((uint)(iVar11 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar12;
        *param_4 = uVar4 & 0xffffff | 0x8000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = (undefined4 *)(in_v0 ^ uVar4);
        *puVar12 = (uint)in_v1;
        uVar4 = *(uint *)(param_1 + 0x20);
        uVar5 = *(uint *)(param_1 + 0x24);
        uVar7 = *(uint *)(param_1 + 0x28);
        uVar1 = getCopReg(2,0xe);
        param_4[8] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[3] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[5] = uVar1;
        param_4 = param_4 + 9;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x18;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x18;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTNF3(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_6 + 8);
    uVar3 = *(uint *)(param_1 + 0x14);
    iVar5 = (uVar3 >> 0x10) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0x18) * 8;
    do {
      puVar4 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xb000,((uint)((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) >> 1) << 0x19 |
                         *(uint *)(param_1 + 0x10) & 0xffffff);
      uVar3 = *(uint *)(param_1 + 8);
      uVar7 = *(uint *)(param_1 + 0xc);
      param_3[3] = *(uint *)(param_1 + 4);
      param_3[5] = uVar3;
      param_3[7] = uVar7;
      uVar3 = *(uint *)(param_1 + 0x30);
      iVar5 = (uVar3 >> 0x10) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x34) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar8 = getCopReg(2,0x3800);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_3 = uVar7 & 0xffffff | 0x7000000;
          in_v0 = ((uint)param_3 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0x16);
          param_3[1] = uVar7;
          uVar7 = getCopReg(2,0xc);
          param_3[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_3[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_3[6] = uVar7;
          param_3 = param_3 + 8;
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x1c;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF3NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                     uint param_6,int param_7)

{
  char cVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    uVar5 = *(uint *)(param_1 + 0x14);
    iVar4 = (uint)*(ushort *)(param_1 + 0x12) * 8;
    iVar8 = (uVar5 >> 0x10) * 8;
    do {
      puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*(undefined4 *)(iVar4 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar4 + param_2))[1]);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar8 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar8 + param_2))[1]);
      copFunction(2,0x280030);
      cVar1 = *(char *)(param_1 + 3);
      uVar5 = _DAT_80065488 << 1;
      uVar7 = *(uint *)(param_1 + 8);
      uVar9 = *(uint *)(param_1 + 0xc);
      param_4[3] = *(uint *)(param_1 + 4);
      param_4[5] = uVar7;
      param_4[7] = uVar9;
      param_4[1] = ((int)cVar1 | uVar5) << 0x18 | 0x808080;
      uVar5 = *(uint *)(param_1 + 0x2c);
      iVar4 = (uint)*(ushort *)(param_1 + 0x2a) << 3;
      iVar8 = (uVar5 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar10 = getCopReg(2,0x3800);
          puVar11 = (uint *)(((uint)(iVar10 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
          uVar7 = *puVar11;
          *param_4 = uVar7 & 0xffffff | 0x7000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar11 = in_v1;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          param_4 = param_4 + 8;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x18;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF3L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                    int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = *(uint *)(param_1 + 0xc);
      param_4[3] = *(uint *)(param_1 + 4);
      param_4[5] = uVar3;
      param_4[7] = uVar4;
      uVar3 = *(uint *)(param_1 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x2c);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          setCopReg(2,in_zero,*puVar6);
          setCopReg(2,in_at,puVar6[1]);
          iVar8 = getCopReg(2,0x3800);
          copFunction(2,0x108041b);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_4 = uVar7 & 0xffffff | 0x7000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          param_4 = param_4 + 8;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x18;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF3LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                      int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = *(uint *)(param_1 + 0xc);
      param_4[3] = *(uint *)(param_1 + 4);
      param_4[5] = uVar3;
      param_4[7] = uVar4;
      uVar3 = *(uint *)(param_1 + 0x28);
      uVar4 = *(uint *)(param_1 + 0x2c);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          setCopReg(2,in_zero,*puVar6);
          setCopReg(2,in_at,puVar6[1]);
          iVar8 = getCopReg(2,0x3800);
          copFunction(2,0xe80413);
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_4 = uVar7 & 0xffffff | 0x7000000;
          in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_4[1] = uVar7;
          param_4 = param_4 + 8;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x18;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTNF4(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  ushort uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar3 = *(int *)(param_6 + 8);
    uVar4 = *(uint *)(param_1 + 0x18);
    iVar6 = (uVar4 >> 0x10) * 8;
    iVar7 = (uint)*(ushort *)(param_1 + 0x1c) * 8;
    do {
      puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar5);
      setCopReg(2,in_at,puVar5[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar6 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar7 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar7 + param_2))[1]);
      copFunction(2,0x280030);
      uVar1 = *(ushort *)(param_1 + 0x1e);
      param_3[1] = *(uint *)(param_1 + 0x14) & 0xffffff |
                   ((uint)((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) >> 1) << 0x19;
      in_v1 = (undefined4 *)((uint)uVar1 * 8 + param_2);
      uVar4 = *(uint *)(param_1 + 0x38);
      iVar6 = (uVar4 >> 0x10) << 3;
      iVar7 = (uint)*(ushort *)(param_1 + 0x3c) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar8 = getCopReg(2,0xc);
          param_3[2] = uVar8;
          uVar8 = getCopReg(2,0xd);
          param_3[4] = uVar8;
          uVar8 = getCopReg(2,0xe);
          param_3[6] = uVar8;
          copFunction(2,0x180001);
          uVar8 = *(uint *)(param_1 + 8);
          param_3[3] = *(uint *)(param_1 + 4);
          param_3[5] = uVar8;
          in_v1 = *(undefined4 **)(param_1 + 0xc);
          uVar8 = *(uint *)(param_1 + 0x10);
          param_3[7] = (uint)in_v1;
          param_3[9] = uVar8;
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar9 = getCopReg(2,0x3800);
            uVar8 = getCopReg(2,0xe);
            param_3[8] = uVar8;
            puVar10 = (uint *)(((uint)(iVar9 - iVar3) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar2);
            uVar8 = *puVar10;
            *param_3 = uVar8 & 0xffffff | 0x9000000;
            in_v0 = ((uint)param_3 ^ uVar8) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar8);
            *puVar10 = (uint)in_v1;
            param_3 = param_3 + 10;
          }
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x20;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF4NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                     uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar4 = *(uint *)(param_1 + 0x18);
    iVar3 = (uint)*(ushort *)(param_1 + 0x16) * 8;
    iVar6 = (uVar4 >> 0x10) * 8;
    do {
      puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*puVar5);
      setCopReg(2,in_v1,puVar5[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x1c) * 8 + param_2);
      uVar4 = *(uint *)(param_1 + 0x38);
      iVar3 = (uint)*(ushort *)(param_1 + 0x36) << 3;
      iVar6 = (uVar4 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          copFunction(2,0x180001);
          uVar7 = *(uint *)(param_1 + 8);
          param_4[3] = *(uint *)(param_1 + 4);
          param_4[5] = uVar7;
          uVar7 = *(uint *)(param_1 + 0x10);
          param_4[7] = *(uint *)(param_1 + 0xc);
          param_4[9] = uVar7;
          in_v1 = (undefined4 *)
                  (((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
          param_4[1] = (uint)in_v1;
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            iVar8 = getCopReg(2,0x3800);
            uVar7 = getCopReg(2,0xe);
            param_4[8] = uVar7;
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x9000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            param_4 = param_4 + 10;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x20;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF4L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                    int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar4 = *(uint *)(param_1 + 0x18);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x1c) * 8 + param_2);
      uVar3 = *(uint *)(param_1 + 0x34);
      uVar4 = *(uint *)(param_1 + 0x38);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          copFunction(2,0x180001);
          uVar7 = *(uint *)(param_1 + 8);
          param_4[3] = *(uint *)(param_1 + 4);
          param_4[5] = uVar7;
          in_v1 = *(undefined4 **)(param_1 + 0xc);
          uVar7 = *(uint *)(param_1 + 0x10);
          param_4[7] = (uint)in_v1;
          param_4[9] = uVar7;
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            setCopReg(2,in_zero,*puVar6);
            setCopReg(2,in_at,puVar6[1]);
            iVar8 = getCopReg(2,0x3800);
            copFunction(2,0x108041b);
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x9000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            uVar7 = getCopReg(2,0xe);
            param_4[8] = uVar7;
            uVar7 = getCopReg(2,0x16);
            param_4[1] = uVar7;
            param_4 = param_4 + 10;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x20;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTF4LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                      int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar4 = *(uint *)(param_1 + 0x18);
    iVar5 = (uVar3 >> 0x10) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      puVar6 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_v0,*puVar6);
      setCopReg(2,in_v1,puVar6[1]);
      puVar6 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
      setCopReg(2,param_1,*puVar6);
      setCopReg(2,param_2,puVar6[1]);
      copFunction(2,0x280030);
      setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
      puVar6 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
      in_v1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x1c) * 8 + param_2);
      uVar3 = *(uint *)(param_1 + 0x34);
      uVar4 = *(uint *)(param_1 + 0x38);
      iVar5 = (uVar3 >> 0x10) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar7 = getCopReg(2,0xc);
          param_4[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_4[4] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_4[6] = uVar7;
          copFunction(2,0x180001);
          uVar7 = *(uint *)(param_1 + 8);
          param_4[3] = *(uint *)(param_1 + 4);
          param_4[5] = uVar7;
          in_v1 = *(undefined4 **)(param_1 + 0xc);
          uVar7 = *(uint *)(param_1 + 0x10);
          param_4[7] = (uint)in_v1;
          param_4[9] = uVar7;
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            setCopReg(2,in_zero,*puVar6);
            setCopReg(2,in_at,puVar6[1]);
            iVar8 = getCopReg(2,0x3800);
            copFunction(2,0xe80413);
            puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
            uVar7 = *puVar9;
            *param_4 = uVar7 & 0xffffff | 0x9000000;
            in_v0 = ((uint)param_4 ^ uVar7) & 0xffffff;
            in_v1 = (undefined4 *)(in_v0 ^ uVar7);
            *puVar9 = (uint)in_v1;
            uVar7 = getCopReg(2,0xe);
            param_4[8] = uVar7;
            uVar7 = getCopReg(2,0x16);
            param_4[1] = uVar7;
            param_4 = param_4 + 10;
          }
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x20;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTNG3(int param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  
  iVar1 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar2 = *(int *)(param_6 + 8);
    uVar3 = *(uint *)(param_1 + 0x1c);
    iVar5 = (uVar3 >> 0x10) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0x20) * 8;
    do {
      puVar4 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar4);
      setCopReg(2,in_at,puVar4[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar6 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xa000,((uint)((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) >> 1) << 0x19 |
                         *(uint *)(param_1 + 0x10) & 0xffffff);
      setCopReg(2,unaff_s5,*(undefined4 *)(param_1 + 0x14));
      setCopReg(2,unaff_s6,*(undefined4 *)(param_1 + 0x18));
      uVar3 = *(uint *)(param_1 + 8);
      uVar7 = *(uint *)(param_1 + 0xc);
      param_3[3] = *(uint *)(param_1 + 4);
      param_3[6] = uVar3;
      param_3[9] = uVar7;
      uVar3 = *(uint *)(param_1 + 0x40);
      iVar5 = (uVar3 >> 0x10) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x44) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar8 = getCopReg(2,0x3800);
          uVar7 = getCopReg(2,0xc);
          param_3[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          param_3[5] = uVar7;
          uVar7 = getCopReg(2,0xe);
          param_3[8] = uVar7;
          uVar7 = getCopReg(2,0x14);
          param_3[1] = uVar7;
          uVar7 = getCopReg(2,0x15);
          param_3[4] = uVar7;
          uVar7 = getCopReg(2,0x16);
          param_3[7] = uVar7;
          puVar9 = (uint *)(((uint)(iVar8 - iVar2) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar7 = *puVar9;
          *param_3 = uVar7 & 0xffffff | 0x9000000;
          in_v0 = ((uint)param_3 ^ uVar7) & 0xffffff;
          in_v1 = in_v0 ^ uVar7;
          *puVar9 = in_v1;
          param_3 = param_3 + 10;
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 0x24;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG3NL(int param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                     uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    iVar3 = (uint)*(ushort *)(param_1 + 0x12) * 8;
    iVar4 = (uint)*(ushort *)(param_1 + 0x16) * 8;
    iVar5 = (uint)*(ushort *)(param_1 + 0x1a) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar3 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar3 + param_2))[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar4 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar4 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar5 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,unaff_s4,*(undefined4 *)(param_1 + 4));
      setCopReg(2,unaff_s5,*(undefined4 *)(param_1 + 8));
      setCopReg(2,unaff_s6,*(undefined4 *)(param_1 + 0xc));
      in_v1 = (_DAT_80065488 << 1 | (int)*(char *)(param_1 + 3) & 2U) << 0x18 | 0x25808080;
      param_4[1] = in_v1;
      iVar3 = (uint)*(ushort *)(param_1 + 0x2e) << 3;
      iVar4 = (uint)*(ushort *)(param_1 + 0x32) << 3;
      iVar5 = (uint)*(ushort *)(param_1 + 0x36) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          copFunction(2,0x158002d);
          iVar7 = getCopReg(2,0x3800);
          uVar6 = getCopReg(2,0x14);
          param_4[3] = uVar6;
          uVar6 = getCopReg(2,0x15);
          param_4[5] = uVar6;
          uVar6 = getCopReg(2,0x16);
          param_4[7] = uVar6;
          uVar6 = getCopReg(2,0xc);
          param_4[2] = uVar6;
          uVar6 = getCopReg(2,0xd);
          param_4[4] = uVar6;
          uVar6 = getCopReg(2,0xe);
          param_4[6] = uVar6;
          puVar8 = (uint *)(((uint)(iVar7 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
          uVar6 = *puVar8;
          *param_4 = uVar6 & 0xffffff | 0x7000000;
          in_v0 = ((uint)param_4 ^ uVar6) & 0xffffff;
          in_v1 = in_v0 ^ uVar6;
          *puVar8 = in_v1;
          param_4 = param_4 + 8;
        }
      }
      param_5 = param_5 + -1;
      param_1 = param_1 + 0x1c;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG3L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                    int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar6 = *(uint *)(param_1 + 0x18);
      while( true ) {
        puVar8 = (undefined4 *)((uVar3 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar8);
        setCopReg(2,in_at,puVar8[1]);
        puVar8 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar8);
        setCopReg(2,in_v1,puVar8[1]);
        puVar8 = (undefined4 *)((uVar6 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        copFunction(2,0x280030);
        setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
        puVar8 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
        puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar7 = (undefined4 *)(((uVar6 << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if ((int)in_v0 < 1) break;
        copFunction(2,0x158002d);
        setCopReg(2,in_zero,*puVar8);
        setCopReg(2,in_at,puVar8[1]);
        setCopReg(2,in_v0,*puVar5);
        setCopReg(2,in_v1,puVar5[1]);
        setCopReg(2,param_1,*puVar7);
        setCopReg(2,param_2,puVar7[1]);
        iVar9 = getCopReg(2,0x3800);
        copFunction(2,0x118043f);
        puVar10 = (uint *)(((uint)(iVar9 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
        uVar3 = *puVar10;
        *param_4 = uVar3 & 0xffffff | 0x9000000;
        in_v0 = ((uint)param_4 ^ uVar3) & 0xffffff;
        in_v1 = in_v0 ^ uVar3;
        *puVar10 = in_v1;
        uVar3 = *(uint *)(param_1 + 8);
        uVar4 = *(uint *)(param_1 + 0xc);
        param_4[3] = *(uint *)(param_1 + 4);
        param_4[6] = uVar3;
        param_4[9] = uVar4;
        uVar3 = getCopReg(2,0xc);
        param_4[2] = uVar3;
        uVar3 = getCopReg(2,0xd);
        param_4[5] = uVar3;
        uVar3 = getCopReg(2,0xe);
        param_4[8] = uVar3;
        uVar3 = getCopReg(2,0x14);
        param_4[1] = uVar3;
        uVar3 = getCopReg(2,0x15);
        param_4[4] = uVar3;
        uVar3 = getCopReg(2,0x16);
        param_4[7] = uVar3;
        uVar3 = *(uint *)(param_1 + 0x2c);
        uVar4 = *(uint *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x34);
        param_4 = param_4 + 10;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x1c;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x1c;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG3LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                      int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint in_v1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  
  iVar1 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar2 = *(int *)(param_7 + 8);
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar6 = *(uint *)(param_1 + 0x18);
      while( true ) {
        puVar8 = (undefined4 *)((uVar3 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar8);
        setCopReg(2,in_at,puVar8[1]);
        puVar8 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar8);
        setCopReg(2,in_v1,puVar8[1]);
        puVar8 = (undefined4 *)((uVar6 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        copFunction(2,0x280030);
        setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
        puVar8 = (undefined4 *)(((uVar3 << 0x10) >> 0xd) + param_3);
        puVar5 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar7 = (undefined4 *)(((uVar6 << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        in_v0 = getCopReg(2,0xc000);
        if ((int)in_v0 < 1) break;
        copFunction(2,0x158002d);
        setCopReg(2,in_zero,*puVar8);
        setCopReg(2,in_at,puVar8[1]);
        setCopReg(2,in_v0,*puVar5);
        setCopReg(2,in_v1,puVar5[1]);
        setCopReg(2,param_1,*puVar7);
        setCopReg(2,param_2,puVar7[1]);
        iVar9 = getCopReg(2,0x3800);
        copFunction(2,0xf80416);
        puVar10 = (uint *)(((uint)(iVar9 - iVar2) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar1);
        uVar3 = *puVar10;
        *param_4 = uVar3 & 0xffffff | 0x9000000;
        in_v0 = ((uint)param_4 ^ uVar3) & 0xffffff;
        in_v1 = in_v0 ^ uVar3;
        *puVar10 = in_v1;
        uVar3 = *(uint *)(param_1 + 8);
        uVar4 = *(uint *)(param_1 + 0xc);
        param_4[3] = *(uint *)(param_1 + 4);
        param_4[6] = uVar3;
        param_4[9] = uVar4;
        uVar3 = getCopReg(2,0xc);
        param_4[2] = uVar3;
        uVar3 = getCopReg(2,0xd);
        param_4[5] = uVar3;
        uVar3 = getCopReg(2,0xe);
        param_4[8] = uVar3;
        uVar3 = getCopReg(2,0x14);
        param_4[1] = uVar3;
        uVar3 = getCopReg(2,0x15);
        param_4[4] = uVar3;
        uVar3 = getCopReg(2,0x16);
        param_4[7] = uVar3;
        uVar3 = *(uint *)(param_1 + 0x2c);
        uVar4 = *(uint *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0x34);
        param_4 = param_4 + 10;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x1c;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x1c;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTNG4(uint param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint uVar1;
  uint in_v1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  
  iVar3 = *(int *)(param_6 + 4);
  if (param_4 != 0) {
    iVar4 = *(int *)(param_6 + 8);
    uVar5 = *(uint *)(param_1 + 0x24);
    iVar7 = (uVar5 >> 0x10) * 8;
    iVar8 = (uint)*(ushort *)(param_1 + 0x28) * 8;
    do {
      puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_2);
      setCopReg(2,in_zero,*puVar6);
      setCopReg(2,in_at,puVar6[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar7 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar7 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar8 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar8 + param_2))[1]);
      copFunction(2,0x280030);
      setCopReg(2,0xa000,((uint)((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) >> 1) << 0x19 |
                         *(uint *)(param_1 + 0x14) & 0xffffff);
      setCopReg(2,unaff_s5,*(undefined4 *)(param_1 + 0x18));
      setCopReg(2,unaff_s6,*(undefined4 *)(param_1 + 0x1c));
      setCopReg(2,param_3,*(undefined4 *)(param_1 + 0x20));
      uVar2 = param_1 + 0x2c;
      puVar6 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x2a) * 8 + param_2);
      uVar5 = *(uint *)(param_1 + 0x50);
      iVar7 = (uVar5 >> 0x10) << 3;
      iVar8 = (uint)*(ushort *)(param_1 + 0x54) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*puVar6);
        setCopReg(2,in_at,puVar6[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar9 = getCopReg(2,0xc);
          param_3[2] = uVar9;
          uVar9 = getCopReg(2,0xd);
          param_3[5] = uVar9;
          uVar9 = getCopReg(2,0xe);
          param_3[8] = uVar9;
          copFunction(2,0x180001);
          uVar9 = *(uint *)(param_1 + 8);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            uVar1 = *(uint *)(param_1 + 0xc);
            param_3[3] = *(uint *)(param_1 + 4);
            param_3[6] = uVar9;
            param_3[9] = uVar1;
            iVar10 = getCopReg(2,0x3800);
            param_3[0xc] = *(uint *)(param_1 + 0x10);
            uVar9 = getCopReg(2,0xe);
            param_3[0xb] = uVar9;
            uVar9 = getCopReg(2,0x14);
            param_3[1] = uVar9;
            uVar9 = getCopReg(2,0x15);
            param_3[4] = uVar9;
            uVar9 = getCopReg(2,0x16);
            param_3[7] = uVar9;
            uVar9 = getCopReg(2,6);
            param_3[10] = uVar9;
            puVar11 = (uint *)(((uint)(iVar10 - iVar4) >> (param_5 & 0x1f) & 0xffff) * 4 + iVar3);
            param_1 = *puVar11;
            *param_3 = param_1 & 0xffffff | 0xc000000;
            in_v0 = ((uint)param_3 ^ param_1) & 0xffffff;
            param_1 = in_v0 ^ param_1;
            *puVar11 = param_1;
            param_3 = param_3 + 0xd;
          }
        }
      }
      param_4 = param_4 + -1;
      in_v1 = param_1;
      param_1 = uVar2;
    } while (param_4 != 0);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG4NL(uint param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                     uint param_6,int param_7)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  uint uVar1;
  uint in_v1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  
  iVar3 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar4 = *(int *)(param_7 + 8);
    iVar5 = (uint)*(ushort *)(param_1 + 0x16) * 8;
    iVar6 = (uint)*(ushort *)(param_1 + 0x1a) * 8;
    iVar7 = (uint)*(ushort *)(param_1 + 0x1e) * 8;
    do {
      setCopReg(2,in_zero,*(undefined4 *)(iVar5 + param_2));
      setCopReg(2,in_at,((undefined4 *)(iVar5 + param_2))[1]);
      setCopReg(2,in_v0,*(undefined4 *)(iVar6 + param_2));
      setCopReg(2,in_v1,((undefined4 *)(iVar6 + param_2))[1]);
      setCopReg(2,param_1,*(undefined4 *)(iVar7 + param_2));
      setCopReg(2,param_2,((undefined4 *)(iVar7 + param_2))[1]);
      copFunction(2,0x280030);
      uVar2 = param_1 + 0x24;
      puVar8 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x22) * 8 + param_2);
      iVar5 = (uint)*(ushort *)(param_1 + 0x3a) << 3;
      iVar6 = (uint)*(ushort *)(param_1 + 0x3e) << 3;
      iVar7 = (uint)*(ushort *)(param_1 + 0x42) << 3;
      in_v0 = getCopControlWord(2,0xf800);
      if (-1 < (int)in_v0) {
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*puVar8);
        setCopReg(2,in_at,puVar8[1]);
        in_v0 = getCopReg(2,0xc000);
        if (0 < (int)in_v0) {
          uVar9 = getCopReg(2,0xc);
          param_4[2] = uVar9;
          uVar9 = getCopReg(2,0xd);
          param_4[4] = uVar9;
          uVar9 = getCopReg(2,0xe);
          param_4[6] = uVar9;
          copFunction(2,0x180001);
          param_4[1] = (_DAT_80065488 << 1 | (int)*(char *)(param_1 + 3) & 2U) << 0x18 | 0x2d808080;
          uVar9 = *(uint *)(param_1 + 8);
          in_v0 = getCopControlWord(2,0xf800);
          if (-1 < (int)in_v0) {
            copFunction(2,0x168002e);
            uVar1 = *(uint *)(param_1 + 0xc);
            param_4[3] = *(uint *)(param_1 + 4);
            param_4[5] = uVar9;
            param_4[7] = uVar1;
            iVar10 = getCopReg(2,0x3800);
            param_4[9] = *(uint *)(param_1 + 0x10);
            uVar9 = getCopReg(2,0xe);
            param_4[8] = uVar9;
            puVar11 = (uint *)(((uint)(iVar10 - iVar4) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar3);
            param_1 = *puVar11;
            *param_4 = param_1 & 0xffffff | 0x9000000;
            in_v0 = ((uint)param_4 ^ param_1) & 0xffffff;
            param_1 = in_v0 ^ param_1;
            *puVar11 = param_1;
            param_4 = param_4 + 10;
          }
        }
      }
      param_5 = param_5 + -1;
      in_v1 = param_1;
      param_1 = uVar2;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG4L(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                    int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar7 = *(uint *)(param_1 + 0x1c);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v1 = (undefined4 *)((*(uint *)(param_1 + 0x20) >> 0x10) * 8 + param_2);
        puVar10 = (undefined4 *)(((*(uint *)(param_1 + 0x20) << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v1 = (undefined4 *)getCopReg(2,0xc000);
        if ((int)in_v1 < 1) break;
        uVar4 = getCopReg(2,0xc);
        param_4[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        param_4[5] = uVar4;
        uVar4 = getCopReg(2,0xe);
        param_4[8] = uVar4;
        copFunction(2,0x180001);
        setCopReg(2,in_v0,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x168002e);
        setCopReg(2,in_zero,*puVar10);
        setCopReg(2,in_at,puVar10[1]);
        iVar11 = getCopReg(2,0x3800);
        copFunction(2,0x108041b);
        uVar4 = *(uint *)(param_1 + 8);
        uVar5 = *(uint *)(param_1 + 0xc);
        uVar7 = *(uint *)(param_1 + 0x10);
        param_4[3] = *(uint *)(param_1 + 4);
        param_4[6] = uVar4;
        param_4[9] = uVar5;
        param_4[0xc] = uVar7;
        uVar4 = getCopReg(2,0x16);
        param_4[10] = uVar4;
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        copFunction(2,0x118043f);
        puVar12 = (uint *)(((uint)(iVar11 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar12;
        *param_4 = uVar4 & 0xffffff | 0xc000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = (undefined4 *)(in_v0 ^ uVar4);
        *puVar12 = (uint)in_v1;
        uVar4 = *(uint *)(param_1 + 0x38);
        uVar5 = *(uint *)(param_1 + 0x3c);
        uVar7 = *(uint *)(param_1 + 0x40);
        uVar1 = getCopReg(2,0xe);
        param_4[0xb] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[4] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[7] = uVar1;
        param_4 = param_4 + 0xd;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x24;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x24;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * GsTMDfastTG4LFG(int param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
                      int param_7)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint in_v0;
  undefined4 *in_v1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  
  iVar2 = *(int *)(param_7 + 4);
  if (param_5 != 0) {
    iVar3 = *(int *)(param_7 + 8);
    do {
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar7 = *(uint *)(param_1 + 0x1c);
      while( true ) {
        puVar9 = (undefined4 *)((uVar4 >> 0x10) * 8 + param_2);
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        puVar9 = (undefined4 *)((uVar5 >> 0x10) * 8 + param_2);
        setCopReg(2,in_v0,*puVar9);
        setCopReg(2,in_v1,puVar9[1]);
        puVar9 = (undefined4 *)((uVar7 >> 0x10) * 8 + param_2);
        setCopReg(2,param_1,*puVar9);
        setCopReg(2,param_2,puVar9[1]);
        copFunction(2,0x280030);
        setCopReg(2,0x3000,((int)*(char *)(param_1 + 3) | _DAT_80065488 << 1) << 0x18 | 0x808080);
        puVar9 = (undefined4 *)(((uVar4 << 0x10) >> 0xd) + param_3);
        puVar6 = (undefined4 *)(((uVar5 << 0x10) >> 0xd) + param_3);
        puVar8 = (undefined4 *)(((uVar7 << 0x10) >> 0xd) + param_3);
        in_v1 = (undefined4 *)((*(uint *)(param_1 + 0x20) >> 0x10) * 8 + param_2);
        puVar10 = (undefined4 *)(((*(uint *)(param_1 + 0x20) << 0x10) >> 0xd) + param_3);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x1400006);
        setCopReg(2,in_zero,*in_v1);
        setCopReg(2,in_at,in_v1[1]);
        in_v1 = (undefined4 *)getCopReg(2,0xc000);
        if ((int)in_v1 < 1) break;
        uVar4 = getCopReg(2,0xc);
        param_4[2] = uVar4;
        uVar4 = getCopReg(2,0xd);
        param_4[5] = uVar4;
        uVar4 = getCopReg(2,0xe);
        param_4[8] = uVar4;
        copFunction(2,0x180001);
        setCopReg(2,in_v0,*puVar6);
        setCopReg(2,in_v1,puVar6[1]);
        setCopReg(2,param_1,*puVar8);
        setCopReg(2,param_2,puVar8[1]);
        in_v0 = getCopControlWord(2,0xf800);
        if ((int)in_v0 < 0) break;
        copFunction(2,0x168002e);
        setCopReg(2,in_zero,*puVar10);
        setCopReg(2,in_at,puVar10[1]);
        iVar11 = getCopReg(2,0x3800);
        copFunction(2,0xe80413);
        uVar4 = *(uint *)(param_1 + 8);
        uVar5 = *(uint *)(param_1 + 0xc);
        uVar7 = *(uint *)(param_1 + 0x10);
        param_4[3] = *(uint *)(param_1 + 4);
        param_4[6] = uVar4;
        param_4[9] = uVar5;
        param_4[0xc] = uVar7;
        uVar4 = getCopReg(2,0x16);
        param_4[10] = uVar4;
        setCopReg(2,in_zero,*puVar9);
        setCopReg(2,in_at,puVar9[1]);
        copFunction(2,0xf80416);
        puVar12 = (uint *)(((uint)(iVar11 - iVar3) >> (param_6 & 0x1f) & 0xffff) * 4 + iVar2);
        uVar4 = *puVar12;
        *param_4 = uVar4 & 0xffffff | 0xc000000;
        in_v0 = ((uint)param_4 ^ uVar4) & 0xffffff;
        in_v1 = (undefined4 *)(in_v0 ^ uVar4);
        *puVar12 = (uint)in_v1;
        uVar4 = *(uint *)(param_1 + 0x38);
        uVar5 = *(uint *)(param_1 + 0x3c);
        uVar7 = *(uint *)(param_1 + 0x40);
        uVar1 = getCopReg(2,0xe);
        param_4[0xb] = uVar1;
        uVar1 = getCopReg(2,0x14);
        param_4[1] = uVar1;
        uVar1 = getCopReg(2,0x15);
        param_4[4] = uVar1;
        uVar1 = getCopReg(2,0x16);
        param_4[7] = uVar1;
        param_4 = param_4 + 0xd;
        param_5 = param_5 + -1;
        param_1 = param_1 + 0x24;
        if (param_5 == 0) {
          return param_4;
        }
      }
      param_1 = param_1 + 0x24;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return param_4;
}



PACKET * GsTMDfastG3GL(TMD_P_G3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                      u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n2;
    do {
      pVVar5 = vp + puVar6[-3];
      pVVar4 = vp + puVar6[-1];
      pVVar2 = vp + puVar6[1];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      uVar8 = getCopControlWord(2,0xf800);
      scratch[9] = uVar8;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          copFunction(2,0x158002d);
          uVar8 = getCopReg(2,7);
          scratch[6] = uVar8;
          setCopReg(2,np,*(undefined4 *)&op->r0);
          setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-4]));
          setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-4]].vz);
          copFunction(2,0x108041b);
          scratch[0xd] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 4) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r1);
          setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-2]));
          setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-2]].vz);
          copFunction(2,0x108041b);
          *(uint *)pk = *(uint *)scratch[0xd] & 0xffffff | 0x6000000;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0xc) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r2);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0x108041b);
          *(uint *)scratch[0xd] = (uint)pk & 0xffffff;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0x14) = uVar1;
          pk = (PACKET *)((int)pk + 0x1c);
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0xe;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastG3GLFG(TMD_P_G3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                        u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n2;
    do {
      pVVar5 = vp + puVar6[-3];
      pVVar4 = vp + puVar6[-1];
      pVVar2 = vp + puVar6[1];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      uVar8 = getCopControlWord(2,0xf800);
      scratch[9] = uVar8;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          copFunction(2,0x158002d);
          uVar8 = getCopReg(2,7);
          scratch[6] = uVar8;
          setCopReg(2,np,*(undefined4 *)&op->r0);
          setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-4]));
          setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-4]].vz);
          copFunction(2,0xe80413);
          scratch[0xd] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 4) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r1);
          setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-2]));
          setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-2]].vz);
          copFunction(2,0xe80413);
          *(uint *)pk = *(uint *)scratch[0xd] & 0xffffff | 0x6000000;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0xc) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r2);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0xe80413);
          *(uint *)scratch[0xd] = (uint)pk & 0xffffff;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0x14) = uVar1;
          pk = (PACKET *)((int)pk + 0x1c);
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0xe;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastG3GNL(TMD_P_G3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                       u_long *scratch)

{
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar1;
  uint *puVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  uint uVar5;
  VERT *pVVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  u_long uVar10;
  
  pGVar3 = ot->org;
  iVar9 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar7 = (undefined4 *)&op->r2;
    puVar8 = (undefined4 *)(pk + 0x14);
    do {
      pVVar6 = vp + *(ushort *)((int)puVar7 + 6);
      pVVar4 = vp + *(ushort *)((int)puVar7 + 10);
      pVVar1 = vp + *(ushort *)((int)puVar7 + 0xe);
      setCopReg(2,in_zero,*(undefined4 *)pVVar6);
      setCopReg(2,in_at,*(undefined4 *)&pVVar6->vz);
      setCopReg(2,pVVar1,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar6,*(undefined4 *)pVVar1);
      setCopReg(2,vp,*(undefined4 *)&pVVar1->vz);
      copFunction(2,0x280030);
      puVar8[-4] = puVar7[-2];
      uVar10 = getCopControlWord(2,0xf800);
      scratch[9] = uVar10;
      iVar9 = iVar9 + 1;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        puVar8[-2] = puVar7[-1];
        uVar10 = getCopReg(2,0x18);
        scratch[6] = uVar10;
        if (0 < (int)scratch[6]) {
          uVar5 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar5;
          uVar5 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar5;
          uVar5 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar5;
          copFunction(2,0x158002d);
          *puVar8 = *puVar7;
          uVar10 = getCopReg(2,7);
          scratch[6] = uVar10;
          puVar8 = puVar8 + 7;
          puVar2 = (uint *)(((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4]);
          scratch[0xd] = (u_long)puVar2;
          *(uint *)pk = *puVar2 & 0xffffff | 0x6000000;
          uVar5 = (uint)pk & 0xffffff;
          pk = (PACKET *)((int)pk + 0x1c);
          *(uint *)scratch[0xd] = uVar5;
        }
      }
      puVar7 = puVar7 + 7;
    } while (iVar9 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF3GL(TMD_P_F3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                      u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n0;
    do {
      pVVar5 = vp + puVar6[1];
      pVVar4 = vp + puVar6[2];
      pVVar2 = vp + puVar6[3];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      *scratch = *(u_long *)(puVar6 + -6);
      *(byte *)((int)scratch + 3) = *(byte *)((int)puVar6 + -0xd) | 0x10;
      uVar8 = getCopControlWord(2,0xf800);
      scratch[9] = uVar8;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          copFunction(2,0x158002d);
          uVar8 = getCopReg(2,7);
          scratch[6] = uVar8;
          setCopReg(2,np,*scratch);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0x108041b);
          scratch[0xd] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 4) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r1);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0x108041b);
          *(uint *)pk = *(uint *)scratch[0xd] & 0xffffff | 0x6000000;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0xc) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r2);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0x108041b);
          *(uint *)scratch[0xd] = (uint)pk & 0xffffff;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0x14) = uVar1;
          pk = (PACKET *)((int)pk + 0x1c);
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0xc;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF3GLFG(TMD_P_F3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                        u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n0;
    do {
      pVVar5 = vp + puVar6[1];
      pVVar4 = vp + puVar6[2];
      pVVar2 = vp + puVar6[3];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      *scratch = *(u_long *)(puVar6 + -6);
      *(byte *)((int)scratch + 3) = *(byte *)((int)puVar6 + -0xd) | 0x10;
      uVar8 = getCopControlWord(2,0xf800);
      scratch[9] = uVar8;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          copFunction(2,0x158002d);
          uVar8 = getCopReg(2,7);
          scratch[6] = uVar8;
          setCopReg(2,np,*scratch);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0xe80413);
          scratch[0xd] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 4) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r1);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0xe80413);
          *(uint *)pk = *(uint *)scratch[0xd] & 0xffffff | 0x6000000;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0xc) = uVar1;
          setCopReg(2,np,*(undefined4 *)&op->r2);
          setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
          setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
          copFunction(2,0xe80413);
          *(uint *)scratch[0xd] = (uint)pk & 0xffffff;
          uVar1 = getCopReg(2,0x16);
          *(uint *)((int)pk + 0x14) = uVar1;
          pk = (PACKET *)((int)pk + 0x1c);
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0xc;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF3GNL(TMD_P_F3G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                       u_long *scratch)

{
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar1;
  uint *puVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  uint uVar5;
  VERT *pVVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  u_long uVar10;
  
  pGVar3 = ot->org;
  iVar9 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar7 = (undefined4 *)&op->r2;
    puVar8 = (undefined4 *)(pk + 0x14);
    do {
      pVVar6 = vp + *(ushort *)((int)puVar7 + 6);
      pVVar4 = vp + *(ushort *)(puVar7 + 2);
      pVVar1 = vp + *(ushort *)((int)puVar7 + 10);
      setCopReg(2,in_zero,*(undefined4 *)pVVar6);
      setCopReg(2,in_at,*(undefined4 *)&pVVar6->vz);
      setCopReg(2,pVVar1,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar6,*(undefined4 *)pVVar1);
      setCopReg(2,vp,*(undefined4 *)&pVVar1->vz);
      copFunction(2,0x280030);
      puVar8[-4] = puVar7[-2] & 0xffffff;
      *(byte *)((int)puVar8 + -0xd) = *(byte *)((int)puVar7 + -9) | 0x10;
      uVar10 = getCopControlWord(2,0xf800);
      scratch[9] = uVar10;
      iVar9 = iVar9 + 1;
      if (-1 < (int)scratch[9]) {
        copFunction(2,0x1400006);
        puVar8[-2] = puVar7[-1];
        uVar10 = getCopReg(2,0x18);
        scratch[6] = uVar10;
        if (0 < (int)scratch[6]) {
          uVar5 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar5;
          uVar5 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar5;
          uVar5 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar5;
          copFunction(2,0x158002d);
          *puVar8 = *puVar7;
          uVar10 = getCopReg(2,7);
          scratch[6] = uVar10;
          puVar8 = puVar8 + 7;
          puVar2 = (uint *)(((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4]);
          scratch[0xd] = (u_long)puVar2;
          *(uint *)pk = *puVar2 & 0xffffff | 0x6000000;
          uVar5 = (uint)pk & 0xffffff;
          pk = (PACKET *)((int)pk + 0x1c);
          *(uint *)scratch[0xd] = uVar5;
        }
      }
      puVar7 = puVar7 + 6;
    } while (iVar9 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF4GL(TMD_P_F4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                      u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n0;
    do {
      pVVar5 = vp + puVar6[1];
      pVVar4 = vp + puVar6[2];
      pVVar2 = vp + puVar6[3];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      *scratch = *(u_long *)(puVar6 + -8);
      *(byte *)((int)scratch + 3) = *(byte *)((int)puVar6 + -0x11) | 0x10;
      uVar8 = getCopControlWord(2,0xf800);
      scratch[10] = uVar8;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          setCopReg(2,in_zero,*(undefined4 *)(vp + puVar6[4]));
          setCopReg(2,in_at,*(undefined4 *)&vp[puVar6[4]].vz);
          copFunction(2,0x180001);
          uVar8 = getCopControlWord(2,0xf800);
          scratch[10] = uVar8;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar1 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar1;
            copFunction(2,0x168002e);
            uVar8 = getCopReg(2,7);
            scratch[6] = uVar8;
            setCopReg(2,np,*scratch);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0x108041b);
            scratch[0xe] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 4) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r1);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0x108041b);
            *(uint *)pk = *(uint *)scratch[0xe] & 0xffffff | 0x8000000;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0xc) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r2);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0x108041b);
            *(uint *)scratch[0xe] = (uint)pk & 0xffffff;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x14) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r3);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0x108041b);
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x1c) = uVar1;
            pk = (PACKET *)((int)pk + 0x24);
          }
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x10;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF4GLFG(TMD_P_F4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                        u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n0;
    do {
      pVVar5 = vp + puVar6[1];
      pVVar4 = vp + puVar6[2];
      pVVar2 = vp + puVar6[3];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      *scratch = *(u_long *)(puVar6 + -8);
      *(byte *)((int)scratch + 3) = *(byte *)((int)puVar6 + -0x11) | 0x10;
      uVar8 = getCopControlWord(2,0xf800);
      scratch[10] = uVar8;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          setCopReg(2,in_zero,*(undefined4 *)(vp + puVar6[4]));
          setCopReg(2,in_at,*(undefined4 *)&vp[puVar6[4]].vz);
          copFunction(2,0x180001);
          uVar8 = getCopControlWord(2,0xf800);
          scratch[10] = uVar8;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar1 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar1;
            copFunction(2,0x168002e);
            uVar8 = getCopReg(2,7);
            scratch[6] = uVar8;
            setCopReg(2,np,*scratch);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0xe80413);
            scratch[0xe] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 4) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r1);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0xe80413);
            *(uint *)pk = *(uint *)scratch[0xe] & 0xffffff | 0x8000000;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0xc) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r2);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0xe80413);
            *(uint *)scratch[0xe] = (uint)pk & 0xffffff;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x14) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r3);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0xe80413);
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x1c) = uVar1;
            pk = (PACKET *)((int)pk + 0x24);
          }
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x10;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastF4GNL(TMD_P_F4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                       u_long *scratch)

{
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar1;
  uint *puVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  uint uVar5;
  VERT *pVVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  u_long uVar10;
  
  pGVar3 = ot->org;
  iVar9 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar7 = (undefined4 *)&op->r3;
    puVar8 = (undefined4 *)(pk + 0x1c);
    do {
      pVVar6 = vp + *(ushort *)((int)puVar7 + 6);
      pVVar4 = vp + *(ushort *)(puVar7 + 2);
      pVVar1 = vp + *(ushort *)((int)puVar7 + 10);
      setCopReg(2,in_zero,*(undefined4 *)pVVar6);
      setCopReg(2,in_at,*(undefined4 *)&pVVar6->vz);
      setCopReg(2,pVVar1,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar6,*(undefined4 *)pVVar1);
      setCopReg(2,vp,*(undefined4 *)&pVVar1->vz);
      copFunction(2,0x280030);
      puVar8[-6] = puVar7[-3] & 0xffffff;
      *(byte *)((int)puVar8 + -0x15) = *(byte *)((int)puVar7 + -0xd) | 0x10;
      uVar10 = getCopControlWord(2,0xf800);
      scratch[10] = uVar10;
      iVar9 = iVar9 + 1;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        puVar8[-4] = puVar7[-2];
        uVar10 = getCopReg(2,0x18);
        scratch[6] = uVar10;
        if (0 < (int)scratch[6]) {
          uVar5 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar5;
          uVar5 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar5;
          uVar5 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar5;
          setCopReg(2,in_zero,*(undefined4 *)(vp + *(ushort *)(puVar7 + 3)));
          setCopReg(2,in_at,*(undefined4 *)&vp[*(ushort *)(puVar7 + 3)].vz);
          copFunction(2,0x180001);
          puVar8[-2] = puVar7[-1];
          uVar10 = getCopControlWord(2,0xf800);
          scratch[10] = uVar10;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar5 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar5;
            copFunction(2,0x168002e);
            *puVar8 = *puVar7;
            uVar10 = getCopReg(2,7);
            scratch[6] = uVar10;
            puVar8 = puVar8 + 9;
            puVar2 = (uint *)(((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4]);
            scratch[0xe] = (u_long)puVar2;
            *(uint *)pk = *puVar2 & 0xffffff | 0x8000000;
            uVar5 = (uint)pk & 0xffffff;
            pk = (PACKET *)((int)pk + 0x24);
            *(uint *)scratch[0xe] = uVar5;
          }
        }
      }
      puVar7 = puVar7 + 8;
    } while (iVar9 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastG4GL(TMD_P_G4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                      u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n3;
    do {
      pVVar5 = vp + puVar6[-5];
      pVVar4 = vp + puVar6[-3];
      pVVar2 = vp + puVar6[-1];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      uVar8 = getCopControlWord(2,0xf800);
      scratch[10] = uVar8;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          setCopReg(2,in_zero,*(undefined4 *)(vp + puVar6[1]));
          setCopReg(2,in_at,*(undefined4 *)&vp[puVar6[1]].vz);
          copFunction(2,0x180001);
          uVar8 = getCopControlWord(2,0xf800);
          scratch[10] = uVar8;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar1 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar1;
            copFunction(2,0x168002e);
            uVar8 = getCopReg(2,7);
            scratch[6] = uVar8;
            setCopReg(2,np,*(undefined4 *)&op->r0);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-6]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-6]].vz);
            copFunction(2,0x108041b);
            scratch[0xe] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 4) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r1);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-4]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-4]].vz);
            copFunction(2,0x108041b);
            *(uint *)pk = *(uint *)scratch[0xe] & 0xffffff | 0x8000000;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0xc) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r2);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-2]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-2]].vz);
            copFunction(2,0x108041b);
            *(uint *)scratch[0xe] = (uint)pk & 0xffffff;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x14) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r3);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0x108041b);
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x1c) = uVar1;
            pk = (PACKET *)((int)pk + 0x24);
          }
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x12;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastG4GLFG(TMD_P_G4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                        u_long *scratch)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  VERT *pVVar5;
  ushort *puVar6;
  int iVar7;
  u_long uVar8;
  
  pGVar3 = ot->org;
  iVar7 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar6 = &op->n3;
    do {
      pVVar5 = vp + puVar6[-5];
      pVVar4 = vp + puVar6[-3];
      pVVar2 = vp + puVar6[-1];
      setCopReg(2,in_zero,*(undefined4 *)pVVar5);
      setCopReg(2,in_at,*(undefined4 *)&pVVar5->vz);
      setCopReg(2,pVVar2,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar5,*(undefined4 *)pVVar2);
      setCopReg(2,vp,*(undefined4 *)&pVVar2->vz);
      copFunction(2,0x280030);
      uVar8 = getCopControlWord(2,0xf800);
      scratch[10] = uVar8;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        uVar8 = getCopReg(2,0x18);
        scratch[6] = uVar8;
        if (0 < (int)scratch[6]) {
          uVar1 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar1;
          setCopReg(2,in_zero,*(undefined4 *)(vp + puVar6[1]));
          setCopReg(2,in_at,*(undefined4 *)&vp[puVar6[1]].vz);
          copFunction(2,0x180001);
          uVar8 = getCopControlWord(2,0xf800);
          scratch[10] = uVar8;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar1 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar1;
            copFunction(2,0x168002e);
            uVar8 = getCopReg(2,7);
            scratch[6] = uVar8;
            setCopReg(2,np,*(undefined4 *)&op->r0);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-6]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-6]].vz);
            copFunction(2,0xe80413);
            scratch[0xe] = ((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4];
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 4) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r1);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-4]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-4]].vz);
            copFunction(2,0xe80413);
            *(uint *)pk = *(uint *)scratch[0xe] & 0xffffff | 0x8000000;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0xc) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r2);
            setCopReg(2,in_zero,*(undefined4 *)(np + puVar6[-2]));
            setCopReg(2,in_at,*(undefined4 *)&np[puVar6[-2]].vz);
            copFunction(2,0xe80413);
            *(uint *)scratch[0xe] = (uint)pk & 0xffffff;
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x14) = uVar1;
            setCopReg(2,np,*(undefined4 *)&op->r3);
            setCopReg(2,in_zero,*(undefined4 *)(np + *puVar6));
            setCopReg(2,in_at,*(undefined4 *)&np[*puVar6].vz);
            copFunction(2,0xe80413);
            uVar1 = getCopReg(2,0x16);
            *(uint *)((int)pk + 0x1c) = uVar1;
            pk = (PACKET *)((int)pk + 0x24);
          }
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x12;
      op = op + 1;
    } while (iVar7 < n);
  }
  return (PACKET *)(uint *)pk;
}



PACKET * GsTMDfastG4GNL(TMD_P_G4G *op,VERT *vp,VERT *np,PACKET *pk,int n,int shift,GsOT *ot,
                       u_long *scratch)

{
  undefined4 in_zero;
  undefined4 in_at;
  VERT *pVVar1;
  uint *puVar2;
  GsOT_TAG *pGVar3;
  VERT *pVVar4;
  uint uVar5;
  VERT *pVVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  u_long uVar10;
  
  pGVar3 = ot->org;
  iVar9 = 0;
  scratch[3] = shift;
  scratch[4] = (u_long)pGVar3;
  if (0 < n) {
    puVar7 = (undefined4 *)&op->r3;
    puVar8 = (undefined4 *)(pk + 0x1c);
    do {
      pVVar6 = vp + *(ushort *)((int)puVar7 + 6);
      pVVar4 = vp + *(ushort *)((int)puVar7 + 10);
      pVVar1 = vp + *(ushort *)((int)puVar7 + 0xe);
      setCopReg(2,in_zero,*(undefined4 *)pVVar6);
      setCopReg(2,in_at,*(undefined4 *)&pVVar6->vz);
      setCopReg(2,pVVar1,*(undefined4 *)pVVar4);
      setCopReg(2,pVVar4,*(undefined4 *)&pVVar4->vz);
      setCopReg(2,pVVar6,*(undefined4 *)pVVar1);
      setCopReg(2,vp,*(undefined4 *)&pVVar1->vz);
      copFunction(2,0x280030);
      puVar8[-6] = puVar7[-3];
      uVar10 = getCopControlWord(2,0xf800);
      scratch[10] = uVar10;
      iVar9 = iVar9 + 1;
      if ((scratch[10] & 0x80000000) == 0) {
        copFunction(2,0x1400006);
        puVar8[-4] = puVar7[-2];
        uVar10 = getCopReg(2,0x18);
        scratch[6] = uVar10;
        if (0 < (int)scratch[6]) {
          uVar5 = getCopReg(2,0xc);
          *(uint *)((int)pk + 8) = uVar5;
          uVar5 = getCopReg(2,0xd);
          *(uint *)((int)pk + 0x10) = uVar5;
          uVar5 = getCopReg(2,0xe);
          *(uint *)((int)pk + 0x18) = uVar5;
          setCopReg(2,in_zero,*(undefined4 *)(vp + *(ushort *)((int)puVar7 + 0x12)));
          setCopReg(2,in_at,*(undefined4 *)&vp[*(ushort *)((int)puVar7 + 0x12)].vz);
          copFunction(2,0x180001);
          puVar8[-2] = puVar7[-1];
          uVar10 = getCopControlWord(2,0xf800);
          scratch[10] = uVar10;
          if ((scratch[10] & 0x80000000) == 0) {
            uVar5 = getCopReg(2,0xe);
            *(uint *)((int)pk + 0x20) = uVar5;
            copFunction(2,0x168002e);
            *puVar8 = *puVar7;
            uVar10 = getCopReg(2,7);
            scratch[6] = uVar10;
            puVar8 = puVar8 + 9;
            puVar2 = (uint *)(((int)scratch[6] >> (scratch[3] & 0x1f)) * 4 + scratch[4]);
            scratch[0xe] = (u_long)puVar2;
            *(uint *)pk = *puVar2 & 0xffffff | 0x8000000;
            uVar5 = (uint)pk & 0xffffff;
            pk = (PACKET *)((int)pk + 0x24);
            *(uint *)scratch[0xe] = uVar5;
          }
        }
      }
      puVar7 = puVar7 + 9;
    } while (iVar9 < n);
  }
  return (PACKET *)(uint *)pk;
}



u_short LoadTPage(u_long *pix,int tp,int abr,int x,int y,int w,int h)

{
  u_short uVar1;
  RECT local_20;
  
  local_20.x = (short)x;
  local_20.h = (short)h;
  local_20.y = (short)y;
  if (tp == 1) {
    local_20.w = (short)(w / 2);
    uVar1 = EXT_OBJ_A8();
    return uVar1;
  }
  if (tp < 2) {
    if (tp != 0) {
      uVar1 = EXT_OBJ_AC();
      return uVar1;
    }
    if (w < 0) {
      w = w + 3;
    }
    local_20.w = (short)(w >> 2);
    uVar1 = EXT_OBJ_A8(&local_20);
    return uVar1;
  }
  if (tp != 2) {
    uVar1 = EXT_OBJ_AC(&local_20);
    return uVar1;
  }
  local_20.w = (short)w;
  LoadImage(&local_20,pix);
  uVar1 = GetTPage(2,abr,x,y);
  return uVar1;
}



u_short EXT_OBJ_A8(void)

{
  u_short uVar1;
  u_long *in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  LoadImage((RECT *)&stack0x00000010,in_t0);
  uVar1 = GetTPage(unaff_s0,unaff_s2,unaff_s1,unaff_s3);
  return uVar1;
}



u_short EXT_OBJ_AC(RECT *param_1)

{
  u_short uVar1;
  u_long *in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  LoadImage(param_1,in_t0);
  uVar1 = GetTPage(unaff_s0,unaff_s2,unaff_s1,unaff_s3);
  return uVar1;
}



u_short LoadClut(u_long *clut,int x,int y)

{
  u_short uVar1;
  RECT local_18;
  
  local_18.w = 0x100;
  local_18.x = (short)x;
  local_18.y = (short)y;
  local_18.h = 1;
  LoadImage(&local_18,clut);
  uVar1 = GetClut(x,y);
  return uVar1;
}



u_short LoadClut2(u_long *param_1,int param_2,int param_3)

{
  u_short uVar1;
  RECT local_18;
  
  local_18.w = 0x10;
  local_18.x = (short)param_2;
  local_18.y = (short)param_3;
  local_18.h = 1;
  LoadImage(&local_18,param_1);
  uVar1 = GetClut(param_2,param_3);
  return uVar1;
}



DRAWENV * SetDefDrawEnv(DRAWENV *env,int x,int y,int w,int h)

{
  int iVar1;
  DRAWENV *pDVar2;
  
  iVar1 = FUN_8001f7c0();
  (env->clip).x = (short)x;
  (env->clip).y = (short)y;
  (env->clip).w = (short)w;
  (env->tw).x = 0;
  (env->tw).y = 0;
  (env->tw).w = 0;
  (env->tw).h = 0;
  env->r0 = '\0';
  env->g0 = '\0';
  env->b0 = '\0';
  env->dtd = '\x01';
  (env->clip).h = (short)h;
  if (iVar1 != 0) {
    pDVar2 = (DRAWENV *)EXT_OBJ_234();
    return pDVar2;
  }
  env->dfe = h < 0x101;
  env->ofs[0] = (short)x;
  env->ofs[1] = (short)y;
  iVar1 = GetGraphType();
  if (iVar1 != 1) {
    GetGraphType();
  }
  env->tpage = 10;
  env->isbg = '\0';
  return env;
}



void EXT_OBJ_234(void)

{
  undefined in_v0;
  int iVar1;
  int unaff_s1;
  undefined2 unaff_s3;
  undefined2 unaff_s4;
  
  *(undefined *)(unaff_s1 + 0x17) = in_v0;
  *(undefined2 *)(unaff_s1 + 8) = unaff_s3;
  *(undefined2 *)(unaff_s1 + 10) = unaff_s4;
  iVar1 = GetGraphType();
  if (iVar1 != 1) {
    GetGraphType();
  }
  *(undefined2 *)(unaff_s1 + 0x14) = 10;
  *(undefined *)(unaff_s1 + 0x18) = 0;
  return;
}



DISPENV * SetDefDispEnv(DISPENV *env,int x,int y,int w,int h)

{
  (env->disp).x = (short)x;
  (env->disp).y = (short)y;
  (env->disp).w = (short)w;
  (env->screen).x = 0;
  (env->screen).y = 0;
  (env->screen).w = 0;
  (env->screen).h = 0;
  env->isrgb24 = '\0';
  env->isinter = '\0';
  env->pad1 = '\0';
  env->pad0 = '\0';
  (env->disp).h = (short)h;
  return env;
}



u_short GetTPage(int tp,int abr,int x,int y)

{
  u_short uVar1;
  int iVar2;
  
  iVar2 = GetGraphType();
  if (iVar2 != 1) {
    iVar2 = GetGraphType();
    if (iVar2 != 2) {
      return (u_short)((ushort)((tp & 3U) << 7) | (ushort)((abr & 3U) << 5) |
                       (ushort)((int)(y & 0x100U) >> 4) | (ushort)((int)(x & 0x3ffU) >> 6) |
                      (ushort)((y & 0x200U) << 2));
    }
  }
  uVar1 = PRIM_OBJ_A4();
  return uVar1;
}



uint PRIM_OBJ_A4(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0;
}



u_short GetClut(int x,int y)

{
  return (u_short)((ushort)(y << 6) | (ushort)(x >> 4) & 0x3f);
}



void DumpTPage(u_short tpage)

{
  int iVar1;
  
  iVar1 = GetGraphType();
  if (iVar1 != 1) {
    iVar1 = GetGraphType();
    if (iVar1 != 2) {
      printf("tpage: (%d,%d,%d,%d)\n",tpage >> 7 & 3,tpage >> 5 & 3,(tpage & 0x1f) << 6,
             (tpage & 0x10) * 0x10 + (tpage >> 2 & 0x200));
      return;
    }
  }
  printf("tpage: (%d,%d,%d,%d)\n",tpage >> 9 & 3,tpage >> 7 & 3,(tpage & 0x1f) << 6,
         (tpage & 0x60) << 3);
  PRIM_OBJ_19C();
  return;
}



void PRIM_OBJ_19C(void)

{
  return;
}



void DumpClut(u_short clut)

{
  printf("clut: (%d,%d)\n",(clut & 0x3f) << 4,(uint)(clut >> 6));
  return;
}



void * NextPrim(void *p)

{
                    // WARNING: Load size is inaccurate
  return (void *)(*p & 0xffffff | 0x80000000);
}



int IsEndPrim(void *p)

{
                    // WARNING: Load size is inaccurate
  return (uint)((*p & 0xffffff) == 0xffffff);
}



void AddPrim(void *ot,void *p)

{
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  *(uint *)p = *p & 0xff000000 | *ot & 0xffffff;
                    // WARNING: Load size is inaccurate
  *(uint *)ot = *ot & 0xff000000 | (uint)p & 0xffffff;
  return;
}



void AddPrims(void *ot,void *p0,void *p1)

{
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  *(uint *)p1 = *p1 & 0xff000000 | *ot & 0xffffff;
                    // WARNING: Load size is inaccurate
  *(uint *)ot = *ot & 0xff000000 | (uint)p0 & 0xffffff;
  return;
}



void CatPrim(void *p0,void *p1)

{
                    // WARNING: Load size is inaccurate
  *(uint *)p0 = *p0 & 0xff000000 | (uint)p1 & 0xffffff;
  return;
}



void TermPrim(void *p)

{
                    // WARNING: Load size is inaccurate
  *(uint *)p = *p | 0xffffff;
  return;
}



void SetSemiTrans(void *p,int abe)

{
  if (abe != 0) {
    PRIM_OBJ_2FC();
    return;
  }
  *(byte *)((int)p + 7) = *(byte *)((int)p + 7) & 0xfd;
  return;
}



void PRIM_OBJ_2FC(int param_1)

{
  undefined in_v0;
  
  *(undefined *)(param_1 + 7) = in_v0;
  return;
}



void SetShadeTex(void *p,int tge)

{
  if (tge != 0) {
    PRIM_OBJ_324();
    return;
  }
  *(byte *)((int)p + 7) = *(byte *)((int)p + 7) & 0xfe;
  return;
}



void PRIM_OBJ_324(int param_1)

{
  undefined in_v0;
  
  *(undefined *)(param_1 + 7) = in_v0;
  return;
}



void SetPolyF3(POLY_F3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
  p->code = ' ';
  return;
}



void SetPolyFT3(POLY_FT3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 7;
  p->code = '$';
  return;
}



void SetPolyG3(POLY_G3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 6;
  p->code = '0';
  return;
}



void SetPolyGT3(POLY_GT3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
  p->code = '4';
  return;
}



void SetPolyF4(POLY_F4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 5;
  p->code = '(';
  return;
}



void SetPolyFT4(POLY_FT4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
  p->code = ',';
  return;
}



void SetPolyG4(POLY_G4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 8;
  p->code = '8';
  return;
}



void SetPolyGT4(POLY_GT4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 0xc;
  p->code = '<';
  return;
}



void SetSprt8(SPRT_8 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
  p->code = 't';
  return;
}



void SetSprt16(SPRT_16 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
  p->code = '|';
  return;
}



void SetSprt(SPRT *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
  p->code = 'd';
  return;
}



void SetTile1(TILE_1 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
  p->code = 'h';
  return;
}



void SetTile8(TILE_8 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
  p->code = 'p';
  return;
}



void SetTile16(TILE_16 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
  p->code = 'x';
  return;
}



void SetTile(TILE *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
  p->code = '`';
  return;
}



void SetLineF2(LINE_F2 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
  p->code = '@';
  return;
}



void SetLineG2(LINE_G2 *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
  p->code = 'P';
  return;
}



void SetLineF3(LINE_F3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 5;
  p->code = 'H';
  p->pad = 0x55555555;
  return;
}



void SetLineG3(LINE_G3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 7;
  p->code = 'X';
  p->pad = 0x55555555;
  return;
}



void SetLineF4(LINE_F4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 6;
  p->code = 'L';
  p->pad = 0x55555555;
  return;
}



void SetLineG4(LINE_G4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
  p->code = '\\';
  p->pad = 0x55555555;
  return;
}



void SetBlockFill(int param_1)

{
  *(undefined *)(param_1 + 3) = 3;
  *(undefined *)(param_1 + 7) = 2;
  return;
}



void SetDrawTPage(DR_TPAGE *p,int dfe,int dtd,int tpage)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined *)((int)&p->tag + 3) = 1;
  iVar1 = GetGraphType();
  if ((iVar1 != 1) && (iVar1 = GetGraphType(), iVar1 != 2)) {
    uVar3 = 0xe1000000;
    if (dtd != 0) {
      uVar3 = 0xe1000200;
    }
    uVar2 = tpage & 0x9ff;
    if (dfe != 0) {
      uVar2 = uVar2 | 0x400;
    }
    p->code[0] = uVar3 | uVar2;
    return;
  }
  PRIM_OBJ_5A4();
  return;
}



void PRIM_OBJ_5A4(void)

{
  undefined4 in_v0;
  int unaff_s3;
  
  *(undefined4 *)(unaff_s3 + 4) = in_v0;
  return;
}



void SetDrawMove(DR_MOVE *p,RECT *rect,int x,int y)

{
  undefined uVar1;
  u_long uVar2;
  
  uVar1 = 5;
  if ((rect->w == 0) || (rect->h == 0)) {
    uVar1 = 0;
  }
  p->code[0] = 0x1000000;
  p->code[1] = 0x80000000;
  *(undefined *)((int)&p->tag + 3) = uVar1;
  uVar2 = *(u_long *)rect;
  p->code[3] = y << 0x10 | x & 0xffffU;
  p->code[2] = uVar2;
  p->code[4] = *(u_long *)&rect->w;
  return;
}



void SetDrawLoad(DR_LOAD *p,RECT *rect)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ((int)rect->w * (int)rect->h + 1) / 2;
  iVar2 = uVar1 + 4;
  if (0xc < uVar1) {
    iVar2 = 0;
  }
  *(char *)((int)&p->tag + 3) = (char)iVar2;
  p->code[0] = 0xa0000000;
  p->code[1] = *(u_long *)rect;
  p->code[2] = *(u_long *)&rect->w;
  p->code[iVar2 + -1] = 0x1000000;
  return;
}



int MargePrim(void *p0,void *p1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)p0 + 3) + (uint)*(byte *)((int)p1 + 3) + 1;
  if (uVar2 < 0x11) {
    *(char *)((int)p0 + 3) = (char)uVar2;
    *(undefined4 *)p1 = 0;
    iVar1 = PRIM_OBJ_6C4();
    return iVar1;
  }
  return -1;
}



void PRIM_OBJ_6C4(void)

{
  return;
}



void DumpDrawEnv(DRAWENV *env)

{
  ushort uVar1;
  int iVar2;
  
  printf("clip (%3d,%3d)-(%d,%d)\n",(int)(env->clip).x,(int)(env->clip).y,(int)(env->clip).w,
         (int)(env->clip).h);
  printf("ofs  (%3d,%3d)\n",(int)env->ofs[0],(int)env->ofs[1]);
  printf("tw   (%d,%d)-(%d,%d)\n",(int)(env->tw).x,(int)(env->tw).y,(int)(env->tw).w,
         (int)(env->tw).h);
  printf("dtd   %d\n",(uint)env->dtd);
  printf("dfe   %d\n",(uint)env->dfe);
  iVar2 = GetGraphType();
  if ((iVar2 != 1) && (iVar2 = GetGraphType(), iVar2 != 2)) {
    uVar1 = env->tpage;
    printf("tpage: (%d,%d,%d,%d)\n",uVar1 >> 7 & 3,uVar1 >> 5 & 3,(uVar1 & 0x1f) << 6,
           (uVar1 & 0x10) * 0x10 + (uVar1 >> 2 & 0x200));
    return;
  }
  uVar1 = env->tpage;
  printf("tpage: (%d,%d,%d,%d)\n",uVar1 >> 9 & 3,uVar1 >> 7 & 3,(uVar1 & 0x1f) << 6,
         (uVar1 & 0x60) << 3);
  PRIM_OBJ_838();
  return;
}



void PRIM_OBJ_838(void)

{
  return;
}



void DumpDispEnv(DISPENV *env)

{
  printf("disp   (%3d,%3d)-(%d,%d)\n",(int)(env->disp).x,(int)(env->disp).y,(int)(env->disp).w,
         (int)(env->disp).h);
  printf("screen (%3d,%3d)-(%d,%d)\n",(int)(env->screen).x,(int)(env->screen).y,(int)(env->screen).w
         ,(int)(env->screen).h);
  printf("isinter %d\n",(uint)env->isinter);
  printf("isrgb24 %d\n",(uint)env->isrgb24);
  return;
}



int ResetGraph(int mode)

{
  int iVar1;
  
  if (((mode & 7U) != 0) && ((mode & 7U) != 3)) {
    if (1 < debugLevel) {
      printf("ResetGraph(%d)...\n",mode);
    }
    iVar1 = _reset(1);
    return iVar1;
  }
  printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_126_1996_09_13_06_80043980,
         &DAT_800439c8);
  memset(&DAT_800439c8,'\0',0x80);
  ResetCallback();
  GPU_cw(0x43980);
  DAT_800439c8 = _reset(mode);
  DAT_800439c9 = 1;
  DAT_800439cc = *(undefined2 *)(&DAT_80043a48 + (uint)DAT_800439c8 * 4);
  DAT_800439ce = *(undefined2 *)(&DAT_80043a5c + (uint)DAT_800439c8 * 4);
  memset("",0xff,0x5c);
  memset((uchar *)&DAT_80043a34,0xff,0x14);
  iVar1 = SYS_OBJ_144();
  return iVar1;
}



void SYS_OBJ_144(void)

{
  return;
}



int SetGraphReverse(int mode)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_800439cb;
  if (1 < debugLevel) {
    printf("SetGraphReverse(%d)...\n",mode);
  }
  DAT_800439cb = (byte)mode;
  uVar1 = _getctl(8);
  if (DAT_800439cb != 0) {
    uVar3 = SYS_OBJ_1E8();
    return uVar3;
  }
  _ctl(uVar1 | 0x8000000);
  if (DAT_800439c8 == '\x02') {
    uVar2 = 0x20000504;
    if (DAT_800439cb != 0) {
      uVar2 = 0x20000501;
    }
    _ctl(uVar2);
  }
  return uVar3;
}



void SYS_OBJ_1E8(uint param_1)

{
  uint in_v0;
  undefined4 uVar1;
  
  _ctl(param_1 | in_v0);
  if (DAT_800439c8 == '\x02') {
    uVar1 = 0x20000504;
    if (DAT_800439cb != '\0') {
      uVar1 = 0x20000501;
    }
    _ctl(uVar1);
  }
  return;
}



int SetGraphDebug(int level)

{
  uint uVar1;
  
  uVar1 = (uint)debugLevel;
  debugLevel = (byte)level;
  if ((level & 0xffU) != 0) {
    printf("SetGraphDebug:level:%d,type:%d reverse:%d\n",level & 0xff,(uint)DAT_800439c8,
           (uint)DAT_800439cb);
  }
  return uVar1;
}



int SetGraphQueue(int mode)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_800439c9;
  if (1 < debugLevel) {
    printf("SetGrapQue(%d)...\n",mode);
  }
  if (mode != (uint)DAT_800439c9) {
    _reset(1);
    DAT_800439c9 = (byte)mode;
    DMACallback(2,0);
  }
  return uVar1;
}



undefined GetGraphType(void)

{
  return DAT_800439c8;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int GetGraphDebug(void)

{
  return (uint)debugLevel;
}



u_long DrawSyncCallback(func *func)

{
  func *pfVar1;
  
  if (1 < debugLevel) {
    printf("DrawSyncCallback(%08x)...\n",func);
  }
  pfVar1 = DAT_800439d4;
  DAT_800439d4 = func;
  return (u_long)pfVar1;
}



void SetDispMask(int mask)

{
  undefined4 uVar1;
  
  if (1 < debugLevel) {
    printf("SetDispMask(%d)...\n",mask);
  }
  if (mask == 0) {
    memset((uchar *)&DAT_80043a34,0xff,0x14);
  }
  uVar1 = 0x3000001;
  if (mask != 0) {
    uVar1 = 0x3000000;
  }
  _ctl(uVar1);
  return;
}



int DrawSync(int mode)

{
  int queuePos;
  
  if (1 < debugLevel) {
    printf("DrawSync(%d)...\n",mode);
  }
  queuePos = _sync(mode);
  return queuePos;
}



void checkRECT(undefined4 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (debugLevel != '\x01') {
    if (debugLevel == '\x02') {
      printf("%s:",param_1);
      printf("(%d,%d)-(%d,%d)\n",(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
      return;
    }
    SYS_OBJ_620();
    return;
  }
  iVar2 = (int)param_2[2];
  if ((iVar2 <= DAT_800439cc) && (iVar2 + *param_2 <= (int)DAT_800439cc)) {
    iVar1 = (int)param_2[1];
    if (((iVar1 <= DAT_800439ce) &&
        (((iVar1 + param_2[3] <= (int)DAT_800439ce && (0 < iVar2)) && (-1 < *param_2)))) &&
       ((-1 < iVar1 && (0 < param_2[3])))) {
      return;
    }
  }
  SYS_OBJ_5E4("%s:bad RECT");
  return;
}



void SYS_OBJ_5E4(char *param_1)

{
  short *unaff_s0;
  
  printf(param_1);
  printf("(%d,%d)-(%d,%d)\n",(int)*unaff_s0,(int)unaff_s0[1],(int)unaff_s0[2]);
  return;
}



void SYS_OBJ_620(void)

{
  return;
}



int ClearImage(RECT *rect,u_char r,u_char g,u_char b)

{
  int iVar1;
  
  checkRECT("ClearImage",rect);
  iVar1 = _addque2(_clr,rect,8,(uint)b << 0x10 | (uint)g << 8 | (uint)r);
  return iVar1;
}



int ClearImage2(RECT *rect,u_char r,u_char g,u_char b)

{
  int iVar1;
  
  checkRECT("ClearImage",rect);
  iVar1 = _addque2(_clr,rect,8,(uint)b << 0x10 | (uint)g << 8 | 0x80000000 | (uint)r);
  return iVar1;
}



int LoadImage(RECT *rect,u_long *p)

{
  int iVar1;
  
  checkRECT("LoadImage",rect);
  iVar1 = _addque2(_dws,rect,8,p);
  return iVar1;
}



int StoreImage(RECT *rect,u_long *p)

{
  int iVar1;
  
  checkRECT("StoreImage",rect);
  iVar1 = _addque2(_drs,rect,8,p);
  return iVar1;
}



int MoveImage(RECT *rect,int x,int y)

{
  int iVar1;
  
  checkRECT("MoveImage",rect);
  iVar1 = -1;
  if (rect->w != 0) {
    if (rect->h == 0) {
      iVar1 = SYS_OBJ_8D4();
      return iVar1;
    }
    DAT_80043a7c = y << 0x10 | x & 0xffffU;
    DAT_80043a78 = *(undefined4 *)rect;
    DAT_80043a80 = *(undefined4 *)&rect->w;
    iVar1 = _addque2(_cwc,&DAT_80043a70,0x14,0);
  }
  return iVar1;
}



void SYS_OBJ_8D4(void)

{
  return;
}



u_long * ClearOTag(u_long *ot,int n)

{
  int iVar1;
  
  if (1 < debugLevel) {
    printf("ClearOTag(%08x,%d)...\n",ot,n);
  }
  for (iVar1 = n + -1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined *)((int)ot + 3) = 0;
    *ot = *ot & 0xff000000 | (uint)(ot + 1) & 0xffffff;
    ot = ot + 1;
  }
  *ot = 0x43a84;
  return ot;
}



u_long * ClearOTagR(u_long *ot,int n)

{
  if (1 < debugLevel) {
    printf("ClearOTagR(%08x,%d)...\n",ot,n);
  }
  _otc(ot,n);
  *ot = 0x43a84;
  return ot;
}



void DrawPrim(void *p)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)((int)p + 3);
  _sync(0);
  _cwb((int)p + 4,uVar1);
  return;
}



void DrawOTag(u_long *p)

{
  if (1 < debugLevel) {
    printf("DrawOTag(%08x)...\n",p);
  }
  _addque2(_cwc,p,0,0);
  return;
}



DRAWENV * PutDrawEnv(DRAWENV *env)

{
  if (1 < debugLevel) {
    printf("PutDrawEnv(%08x)...\n",env);
  }
  SetDrawEnv(&env->dr_env,env);
  (env->dr_env).tag = (env->dr_env).tag | 0xffffff;
  _addque2(_cwc,&env->dr_env,0x40,0);
  memcpy("",(uchar *)env,0x5c);
  return env;
}



void DrawOTagEnv(u_long *p,DRAWENV *env)

{
  if (1 < debugLevel) {
    printf("DrawOTagEnv(%08x,&08x)...\n",p,env);
  }
  SetDrawEnv(&env->dr_env,env);
  (env->dr_env).tag = (env->dr_env).tag & 0xff000000 | (uint)p & 0xffffff;
  _addque2(_cwc,&env->dr_env,0x40,0);
  memcpy("",(uchar *)env,0x5c);
  return;
}



DRAWENV * GetDrawEnv(DRAWENV *env)

{
  memcpy((uchar *)env,"",0x5c);
  return env;
}



DISPENV * PutDispEnv(DISPENV *env)

{
  short sVar1;
  bool bVar2;
  u_char uVar3;
  DISPENV *pDVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  uVar14 = 0x8000000;
  if (1 < debugLevel) {
    printf("PutDispEnv(%08x)...\n",env);
  }
  if (DAT_800439c8 - 1 < 2) {
    get_dx(env);
    pDVar4 = (DISPENV *)SYS_OBJ_D9C();
    return pDVar4;
  }
  _ctl(((ushort)(env->disp).y & 0x3ff) << 10 | (ushort)(env->disp).x & 0x3ff | 0x5000000);
  if (((((env->screen).x == 0) && ((env->screen).y == 0)) && ((env->screen).w == 0)) &&
     ((env->screen).h == 0)) goto SYS_OBJ_FF4;
  uVar3 = FUN_8001f7c0();
  sVar1 = (env->screen).x;
  env->pad0 = uVar3;
  iVar5 = sVar1 * 10;
  uVar10 = iVar5 + 0x260;
  iVar8 = (int)(env->screen).y;
  iVar12 = iVar8 + 0x13;
  if (env->pad0 == '\0') {
    iVar12 = iVar8 + 0x10;
  }
  iVar6 = (int)(env->screen).w;
  if (iVar6 != 0) {
    pDVar4 = (DISPENV *)SYS_OBJ_E88(iVar8,uVar10,uVar10 + iVar6 * 10);
    return pDVar4;
  }
  uVar11 = iVar5 + 0xc60;
  iVar5 = (int)(env->screen).h;
  uVar13 = iVar12 + iVar5;
  if (iVar5 == 0) {
    uVar13 = iVar12 + 0xf0;
  }
  uVar9 = 500;
  if ((499 < (int)uVar10) && (uVar9 = uVar10, 0xcda < (int)uVar10)) {
    uVar9 = 0xcda;
  }
  uVar10 = uVar9 + 0x50;
  if (((int)(uVar9 + 0x50) <= (int)uVar11) && (uVar10 = uVar11, 0xcda < (int)uVar11)) {
    uVar10 = 0xcda;
  }
  if (iVar12 < 0x10) {
    uVar11 = 0x10;
  }
  else {
    if (env->pad0 == '\0') {
      if (iVar12 < 0x101) {
        pDVar4 = (DISPENV *)SYS_OBJ_F3C(iVar12);
        return pDVar4;
      }
    }
    else {
      if (iVar12 < 0x137) {
        pDVar4 = (DISPENV *)SYS_OBJ_F3C(iVar12);
        return pDVar4;
      }
    }
    uVar11 = 0x100;
    if (env->pad0 != '\0') {
      pDVar4 = (DISPENV *)SYS_OBJ_F3C(0x136);
      return pDVar4;
    }
  }
  uVar7 = uVar11 + 2;
  if ((int)(uVar11 + 2) <= (int)uVar13) {
    if (env->pad0 == '\0') {
      uVar7 = uVar13;
      if ((int)uVar13 < 0x103) goto code_r0x80035988;
    }
    else {
      if ((int)uVar13 < 0x139) {
        pDVar4 = (DISPENV *)SYS_OBJ_F98();
        return pDVar4;
      }
    }
    uVar7 = 0x102;
    if (env->pad0 != '\0') {
      pDVar4 = (DISPENV *)SYS_OBJ_F98();
      return pDVar4;
    }
  }
code_r0x80035988:
  _ctl((uVar10 & 0xfff) << 0xc | uVar9 & 0xfff | 0x6000000);
  _ctl((uVar7 & 0x3ff) << 10 | uVar11 | 0x7000000);
SYS_OBJ_FF4:
  if ((((*(int *)&env->isinter != 0) || ((env->disp).x != 0)) || ((env->disp).y != 0)) ||
     (((env->disp).w != 0 || ((env->disp).h != 0)))) {
    uVar3 = FUN_8001f7c0();
    env->pad0 = uVar3;
    if (env->pad0 == '\x01') {
      uVar14 = 0x8000008;
    }
    if (env->isrgb24 != '\0') {
      uVar14 = uVar14 | 0x10;
    }
    if (env->isinter != '\0') {
      uVar14 = uVar14 | 0x20;
    }
    if (DAT_800439cb != '\0') {
      uVar14 = uVar14 | 0x80;
    }
    sVar1 = (env->disp).w;
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        pDVar4 = (DISPENV *)SYS_OBJ_1128();
        return pDVar4;
      }
      if (sVar1 < 0x191) {
        pDVar4 = (DISPENV *)SYS_OBJ_1128();
        return pDVar4;
      }
      if (sVar1 < 0x231) {
        pDVar4 = (DISPENV *)SYS_OBJ_1128();
        return pDVar4;
      }
      uVar14 = uVar14 | 3;
    }
    sVar1 = (env->disp).h;
    bVar2 = sVar1 < 0x121;
    if (env->pad0 == '\0') {
      bVar2 = sVar1 < 0x101;
    }
    if (!bVar2) {
      uVar14 = uVar14 | 0x24;
    }
    _ctl(uVar14);
  }
  memcpy((uchar *)&DAT_80043a34,(uchar *)env,0x14);
  return env;
}



void SYS_OBJ_D9C(void)

{
  short sVar1;
  bool bVar2;
  undefined uVar3;
  uint in_v0;
  uint in_v1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *unaff_s0;
  int iVar9;
  uint uVar10;
  uint unaff_s3;
  
  _ctl(in_v0 | in_v1);
  if ((((unaff_s0[4] == 0) && (unaff_s0[5] == 0)) && (unaff_s0[6] == 0)) && (unaff_s0[7] == 0))
  goto SYS_OBJ_FF4;
  uVar3 = FUN_8001f7c0();
  *(undefined *)(unaff_s0 + 9) = uVar3;
  uVar7 = unaff_s0[4] * 10 + 0x260;
  iVar5 = (int)unaff_s0[5];
  iVar9 = iVar5 + 0x13;
  if (*(char *)(unaff_s0 + 9) == '\0') {
    iVar9 = iVar5 + 0x10;
  }
  if (unaff_s0[6] != 0) {
    SYS_OBJ_E88(iVar5,uVar7,uVar7 + unaff_s0[6] * 10);
    return;
  }
  uVar8 = unaff_s0[4] * 10 + 0xc60;
  uVar10 = iVar9 + unaff_s0[7];
  if (unaff_s0[7] == 0) {
    uVar10 = iVar9 + 0xf0;
  }
  uVar6 = 500;
  if ((499 < (int)uVar7) && (uVar6 = uVar7, 0xcda < (int)uVar7)) {
    uVar6 = 0xcda;
  }
  uVar7 = uVar6 + 0x50;
  if (((int)(uVar6 + 0x50) <= (int)uVar8) && (uVar7 = uVar8, 0xcda < (int)uVar8)) {
    uVar7 = 0xcda;
  }
  if (iVar9 < 0x10) {
    uVar8 = 0x10;
  }
  else {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      if (iVar9 < 0x101) {
        SYS_OBJ_F3C(iVar9);
        return;
      }
    }
    else {
      if (iVar9 < 0x137) {
        SYS_OBJ_F3C(iVar9);
        return;
      }
    }
    uVar8 = 0x100;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_F3C(0x136);
      return;
    }
  }
  uVar4 = uVar8 + 2;
  if ((int)(uVar8 + 2) <= (int)uVar10) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar4 = uVar10;
      if ((int)uVar10 < 0x103) goto code_r0x80035988;
    }
    else {
      if ((int)uVar10 < 0x139) {
        SYS_OBJ_F98();
        return;
      }
    }
    uVar4 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_F98();
      return;
    }
  }
code_r0x80035988:
  _ctl((uVar7 & 0xfff) << 0xc | uVar6 & 0xfff | 0x6000000);
  _ctl((uVar4 & 0x3ff) << 10 | uVar8 | 0x7000000);
SYS_OBJ_FF4:
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001f7c0();
    *(undefined *)(unaff_s0 + 9) = uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_800439cb != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1128();
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80043a34,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_E88(undefined4 param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *unaff_s0;
  int unaff_s1;
  uint uVar8;
  uint unaff_s3;
  
  uVar8 = unaff_s1 + unaff_s0[7];
  if (unaff_s0[7] == 0) {
    uVar8 = unaff_s1 + 0xf0;
  }
  uVar6 = 500;
  if ((499 < (int)param_2) && (uVar6 = param_2, 0xcda < (int)param_2)) {
    uVar6 = 0xcda;
  }
  uVar4 = uVar6 + 0x50;
  if (((int)(uVar6 + 0x50) <= (int)param_3) && (uVar4 = param_3, 0xcda < (int)param_3)) {
    uVar4 = 0xcda;
  }
  if (unaff_s1 < 0x10) {
    uVar7 = 0x10;
  }
  else {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      if (unaff_s1 < 0x101) {
        SYS_OBJ_F3C();
        return;
      }
    }
    else {
      if (unaff_s1 < 0x137) {
        SYS_OBJ_F3C();
        return;
      }
    }
    uVar7 = 0x100;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_F3C(0x136);
      return;
    }
  }
  uVar5 = uVar7 + 2;
  if ((int)(uVar7 + 2) <= (int)uVar8) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar5 = uVar8;
      if ((int)uVar8 < 0x103) goto code_r0x80035988;
    }
    else {
      if ((int)uVar8 < 0x139) {
        SYS_OBJ_F98();
        return;
      }
    }
    uVar5 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_F98();
      return;
    }
  }
code_r0x80035988:
  _ctl((uVar4 & 0xfff) << 0xc | uVar6 & 0xfff | 0x6000000);
  _ctl((uVar5 & 0x3ff) << 10 | uVar7 | 0x7000000);
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001f7c0();
    *(undefined *)(unaff_s0 + 9) = uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_800439cb != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1128();
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80043a34,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_F3C(uint param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined uVar3;
  uint uVar4;
  short *unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  
  uVar4 = param_1 + 2;
  if ((int)(param_1 + 2) <= (int)unaff_s2) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar4 = unaff_s2;
      if ((int)unaff_s2 < 0x103) goto code_r0x80035988;
    }
    else {
      if ((int)unaff_s2 < 0x139) {
        SYS_OBJ_F98();
        return;
      }
    }
    uVar4 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_F98();
      return;
    }
  }
code_r0x80035988:
  _ctl((param_3 & 0xfff) << 0xc | param_2 & 0xfff | 0x6000000);
  _ctl((uVar4 & 0x3ff) << 10 | param_1 & 0x3ff | 0x7000000);
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001f7c0();
    *(undefined *)(unaff_s0 + 9) = uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_800439cb != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1128();
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80043a34,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_F98(undefined4 param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined uVar3;
  uint in_v1;
  short *unaff_s0;
  uint unaff_s1;
  uint unaff_s3;
  
  _ctl((param_3 & 0xfff) << 0xc | param_2 & 0xfff | 0x6000000);
  _ctl((in_v1 & 0x3ff) << 10 | unaff_s1 & 0x3ff | 0x7000000);
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001f7c0();
    *(undefined *)(unaff_s0 + 9) = uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_800439cb != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1128();
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1128();
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80043a34,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_1128(void)

{
  bool bVar1;
  uchar *unaff_s0;
  uint unaff_s3;
  
  bVar1 = *(short *)(unaff_s0 + 6) < 0x121;
  if (unaff_s0[0x12] == '\0') {
    bVar1 = *(short *)(unaff_s0 + 6) < 0x101;
  }
  if (!bVar1) {
    unaff_s3 = unaff_s3 | 0x24;
  }
  _ctl(unaff_s3);
  memcpy((uchar *)&DAT_80043a34,unaff_s0,0x14);
  return;
}



DISPENV * GetDispEnv(DISPENV *env)

{
  memcpy((uchar *)env,(uchar *)&DAT_80043a34,0x14);
  return env;
}



uint GetODE(void)

{
  uint uVar1;
  
  uVar1 = _status();
  return uVar1 >> 0x1f;
}



void SetTexWindow(DR_TWIN *p,RECT *tw)

{
  u_long uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_tw(tw);
  p->code[0] = uVar1;
  p->code[1] = 0;
  return;
}



void SetDrawArea(DR_AREA *p,RECT *r)

{
  u_long uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_cs((int)r->x,(int)r->y);
  p->code[0] = uVar1;
  uVar1 = get_ce((int)(((uint)(ushort)r->x + (uint)(ushort)r->w + -1) * 0x10000) >> 0x10,
                 (int)(((uint)(ushort)r->y + (uint)(ushort)r->h + -1) * 0x10000) >> 0x10);
  p->code[1] = uVar1;
  return;
}



void SetDrawOffset(DR_OFFSET *p,u_short *ofs)

{
  u_long uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_ofs((int)(short)*ofs,(int)(short)ofs[1]);
  p->code[0] = uVar1;
  p->code[1] = 0;
  return;
}



void SetPriority(DR_PRIO *p,int pbc,int pbw)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = 0xe6000000;
  if (pbc != 0) {
    uVar1 = 0xe6000002;
  }
  p->code[0] = uVar1 | pbw != 0;
  p->code[1] = 0;
  return;
}



void SetDrawMode(DR_MODE *p,int dfe,int dtd,int tpage,RECT *tw)

{
  u_long uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_mode(dfe,dtd,tpage & 0xffff);
  p->code[0] = uVar1;
  uVar1 = get_tw(tw);
  p->code[1] = uVar1;
  return;
}



void SetDrawEnv(DR_ENV *dr_env,DRAWENV *env)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  u_long uVar5;
  char cVar6;
  u_long local_18;
  u_long local_14;
  
  uVar5 = get_cs((int)(env->clip).x,(int)(env->clip).y);
  dr_env->code[0] = uVar5;
  uVar5 = get_ce((int)(((uint)(ushort)(env->clip).w + (uint)(ushort)(env->clip).x + -1) * 0x10000)
                 >> 0x10,(int)(((uint)(ushort)(env->clip).y + (uint)(ushort)(env->clip).h + -1) *
                              0x10000) >> 0x10);
  dr_env->code[1] = uVar5;
  uVar5 = get_ofs((int)env->ofs[0],(int)env->ofs[1]);
  dr_env->code[2] = uVar5;
  uVar5 = get_mode(env->dfe,env->dtd,env->tpage);
  dr_env->code[3] = uVar5;
  uVar5 = get_tw(&env->tw);
  dr_env->code[4] = uVar5;
  dr_env->code[5] = 0xe6000000;
  cVar6 = '\a';
  if (env->isbg != '\0') {
    uVar1 = (env->clip).x;
    uVar5 = *(u_long *)&env->clip;
    uVar2 = (env->clip).w;
    sVar4 = (env->clip).h;
    uVar3 = 0;
    if ((-1 < (short)uVar2) && (uVar3 = uVar2, DAT_800439cc + -1 < (int)(short)uVar2)) {
      uVar3 = (ushort)(DAT_800439cc + -1);
    }
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    else {
      if (DAT_800439ce + -1 < (int)sVar4) {
        SYS_OBJ_14F4();
        return;
      }
    }
    local_14 = CONCAT22(sVar4,uVar3);
    if (((uVar1 & 0x3f) != 0) || ((uVar3 & 0x3f) != 0)) {
      local_18 = CONCAT22((env->clip).y - env->ofs[1],uVar1 - env->ofs[0]);
      dr_env->code[6] = (uint)env->b0 << 0x10 | (uint)env->g0 << 8 | 0x60000000 | (uint)env->r0;
      dr_env->code[7] = local_18;
      dr_env->code[8] = local_14;
      SYS_OBJ_1610();
      return;
    }
    cVar6 = '\n';
    dr_env->code[6] = (uint)env->b0 << 0x10 | (uint)env->g0 << 8 | 0x2000000 | (uint)env->r0;
    dr_env->code[7] = uVar5;
    dr_env->code[8] = local_14;
  }
  *(char *)((int)&dr_env->tag + 3) = cVar6 + -1;
  return;
}



void SYS_OBJ_14F4(void)

{
  undefined2 in_v0;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  short sStack00000010;
  uint in_stack_00000010;
  ushort in_stack_00000014;
  undefined4 uStack00000014;
  
  uStack00000014 = CONCAT22(in_v0,in_stack_00000014);
  if (((in_stack_00000010 & 0x3f) == 0) && ((in_stack_00000014 & 0x3f) == 0)) {
    *(uint *)(in_t0 * 4 + unaff_s1) =
         (uint)*(byte *)(unaff_s0 + 0x1b) << 0x10 |
         (uint)*(byte *)(unaff_s0 + 0x1a) << 8 | 0x2000000 | (uint)*(byte *)(unaff_s0 + 0x19);
    *(uint *)((in_t0 + 1) * 4 + unaff_s1) = in_stack_00000010;
    *(undefined4 *)((in_t0 + 2) * 4 + unaff_s1) = uStack00000014;
    *(char *)(unaff_s1 + 3) = (char)in_t0 + '\x02';
    return;
  }
  in_stack_00000010 =
       CONCAT22((short)(in_stack_00000010 >> 0x10) - *(short *)(unaff_s0 + 10),
                sStack00000010 - *(short *)(unaff_s0 + 8));
  *(uint *)(in_t0 * 4 + unaff_s1) =
       (uint)*(byte *)(unaff_s0 + 0x1b) << 0x10 | (uint)*(byte *)(unaff_s0 + 0x1a) << 8 | 0x60000000
       | (uint)*(byte *)(unaff_s0 + 0x19);
  *(uint *)((in_t0 + 1) * 4 + unaff_s1) = in_stack_00000010;
  *(undefined4 *)((in_t0 + 2) * 4 + unaff_s1) = uStack00000014;
  SYS_OBJ_1610();
  return;
}



void SYS_OBJ_1610(void)

{
  char in_t0;
  int unaff_s1;
  
  *(char *)(unaff_s1 + 3) = in_t0 + -1;
  return;
}



uint get_mode(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (DAT_800439c8 - 1 < 2) {
    uVar1 = 0xe1000000;
    if (param_2 != 0) {
      uVar1 = 0xe1000800;
    }
    param_3 = param_3 & 0x27ff;
    if (param_1 != 0) {
      uVar1 = SYS_OBJ_1684();
      return uVar1;
    }
  }
  else {
    uVar1 = 0xe1000000;
    if (param_2 != 0) {
      uVar1 = 0xe1000200;
    }
    param_3 = param_3 & 0x9ff;
    if (param_1 != 0) {
      param_3 = param_3 | 0x400;
    }
  }
  return uVar1 | param_3;
}



uint SYS_OBJ_1684(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0;
}



uint get_cs(short param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = SEXT24(param_1);
  uVar1 = 0;
  if ((-1 < (int)uVar3) && (uVar1 = uVar3, (int)((int)DAT_800439cc - 1U) < (int)uVar3)) {
    uVar1 = (int)DAT_800439cc - 1U;
  }
  uVar2 = SEXT24(param_2);
  uVar3 = 0;
  if ((-1 < (int)uVar2) && (uVar3 = uVar2, (int)((int)DAT_800439ce - 1U) < (int)uVar2)) {
    uVar3 = (int)DAT_800439ce - 1U;
  }
  if (DAT_800439c8 - 1 < 2) {
    return (uVar3 & 0xfff) << 0xc | uVar1 & 0xfff | 0xe3000000;
  }
  uVar1 = SYS_OBJ_1748();
  return uVar1;
}



uint SYS_OBJ_1748(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe3000000;
}



uint get_ce(short param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = SEXT24(param_1);
  uVar1 = 0;
  if ((-1 < (int)uVar3) && (uVar1 = uVar3, (int)((int)DAT_800439cc - 1U) < (int)uVar3)) {
    uVar1 = (int)DAT_800439cc - 1U;
  }
  uVar2 = SEXT24(param_2);
  uVar3 = 0;
  if ((-1 < (int)uVar2) && (uVar3 = uVar2, (int)((int)DAT_800439ce - 1U) < (int)uVar2)) {
    uVar3 = (int)DAT_800439ce - 1U;
  }
  if (DAT_800439c8 - 1 < 2) {
    return (uVar3 & 0xfff) << 0xc | uVar1 & 0xfff | 0xe4000000;
  }
  uVar1 = SYS_OBJ_1814();
  return uVar1;
}



uint SYS_OBJ_1814(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe4000000;
}



uint get_ofs(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (1 < DAT_800439c8 - 1) {
    uVar1 = SYS_OBJ_185C();
    return uVar1;
  }
  return (param_2 & 0xfff) << 0xc | param_1 & 0xfff | 0xe5000000;
}



uint SYS_OBJ_185C(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe5000000;
}



uint get_tw(byte *param_1)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = SYS_OBJ_18E4();
    return uVar1;
  }
  return (uint)(param_1[2] >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
         ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 |
         (int)(-(int)*(short *)(param_1 + 4) & 0xffU) >> 3;
}



void SYS_OBJ_18E4(void)

{
  return;
}



int get_dx(short *param_1)

{
  int iVar1;
  
  if (DAT_800439c8 == '\x01') {
    if (DAT_800439cb != '\0') {
      iVar1 = SYS_OBJ_19A4((int)*param_1);
      return iVar1;
    }
    return (int)*param_1;
  }
  if (DAT_800439c8 != '\x02') {
    iVar1 = SYS_OBJ_19A0();
    return iVar1;
  }
  if (DAT_800439cb != '\0') {
    iVar1 = SYS_OBJ_193C((int)*param_1);
    return iVar1;
  }
  iVar1 = SYS_OBJ_19A4();
  return iVar1;
}



void SYS_OBJ_193C(void)

{
  SYS_OBJ_19A4();
  return;
}



int SYS_OBJ_19A0(short *param_1)

{
  return (int)*param_1;
}



void SYS_OBJ_19A4(void)

{
  return;
}



dword _status(void)

{
  return GPU_REG1;
}



dword _otc(int param_1,dword param_2)

{
  int iVar1;
  
  DMA_DPCR = DMA_DPCR | 0x8000000;
  DMA_OTC_MADR = param_1 + param_2 * 4 + -4;
  DMA_OTC_CHCR = 0x11000002;
  DMA_OTC_BCR = param_2;
  set_alarm();
  do {
    if ((DMA_OTC_CHCR & 0x1000000) == 0) {
      return param_2;
    }
    iVar1 = get_alarm();
  } while (iVar1 == 0);
  return 0xffffffff;
}



undefined4 _clr(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  else {
    if (DAT_800439cc + -1 < (int)(short)uVar1) {
      uVar2 = SYS_OBJ_1B08();
      return uVar2;
    }
  }
  uVar4 = *(ushort *)((int)param_1 + 6);
  *(ushort *)(param_1 + 1) = uVar1;
  if ((short)uVar4 < 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_800439ce + -1 < (int)(short)uVar4) {
      uVar2 = SYS_OBJ_1B4C();
      return uVar2;
    }
  }
  *(ushort *)((int)param_1 + 6) = uVar4;
  if (((*(ushort *)param_1 & 0x3f) == 0) && ((*(ushort *)(param_1 + 1) & 0x3f) == 0)) {
    DAT_800572c8 = 0x5ffffff;
    DAT_800572cc = 0xe6000000;
    DAT_800572d4 = param_2 & 0xffffff | 0x2000000;
    DAT_800572d0 = GPU_REG1 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_800572d8 = *param_1;
    DAT_800572dc = param_1[1];
    _cwc(&DAT_800572c8);
    return 0;
  }
  DAT_800572c8 = 0x80572ec;
  DAT_800572e0 = param_2 & 0xffffff | 0x60000000;
  DAT_800572d8 = 0xe6000000;
  DAT_800572cc = 0xe3000000;
  DAT_800572d0 = 0xe4ffffff;
  DAT_800572d4 = 0xe5000000;
  DAT_800572dc = GPU_REG1 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
  DAT_800572e4 = *param_1;
  DAT_800572e8 = param_1[1];
  DAT_800572ec = 0x3ffffff;
  uVar3 = _param(3);
  DAT_800572f0 = uVar3 | 0xe3000000;
  uVar3 = _param(4);
  DAT_800572f4 = uVar3 | 0xe4000000;
  uVar3 = _param(5);
  DAT_800572f8 = uVar3 | 0xe5000000;
  uVar2 = SYS_OBJ_1CF0();
  return uVar2;
}



undefined4 SYS_OBJ_1B08(void)

{
  ushort in_v0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 *in_t0;
  uint in_t1;
  
  uVar3 = *(ushort *)((int)in_t0 + 6);
  *(ushort *)(in_t0 + 1) = in_v0;
  if ((short)uVar3 < 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_800439ce + -1 < (int)(short)uVar3) {
      uVar1 = SYS_OBJ_1B4C();
      return uVar1;
    }
  }
  *(ushort *)((int)in_t0 + 6) = uVar3;
  if (((*(ushort *)in_t0 & 0x3f) == 0) && ((*(ushort *)(in_t0 + 1) & 0x3f) == 0)) {
    DAT_800572c8 = 0x5ffffff;
    DAT_800572cc = 0xe6000000;
    DAT_800572d4 = in_t1 & 0xffffff | 0x2000000;
    DAT_800572d0 = GPU_REG1 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
    DAT_800572d8 = *in_t0;
    DAT_800572dc = in_t0[1];
    _cwc(&DAT_800572c8);
    return 0;
  }
  DAT_800572c8 = 0x80572ec;
  DAT_800572e0 = in_t1 & 0xffffff | 0x60000000;
  DAT_800572d8 = 0xe6000000;
  DAT_800572cc = 0xe3000000;
  DAT_800572d0 = 0xe4ffffff;
  DAT_800572d4 = 0xe5000000;
  DAT_800572dc = GPU_REG1 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_800572e4 = *in_t0;
  DAT_800572e8 = in_t0[1];
  DAT_800572ec = 0x3ffffff;
  uVar2 = _param(3);
  DAT_800572f0 = uVar2 | 0xe3000000;
  uVar2 = _param(4);
  DAT_800572f4 = uVar2 | 0xe4000000;
  uVar2 = _param(5);
  DAT_800572f8 = uVar2 | 0xe5000000;
  uVar1 = SYS_OBJ_1CF0();
  return uVar1;
}



undefined4 SYS_OBJ_1B4C(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort in_v1;
  undefined4 *in_t0;
  uint in_t1;
  
  *(ushort *)((int)in_t0 + 6) = in_v1;
  if (((*(ushort *)in_t0 & 0x3f) == 0) && ((*(ushort *)(in_t0 + 1) & 0x3f) == 0)) {
    DAT_800572c8 = 0x5ffffff;
    DAT_800572cc = 0xe6000000;
    DAT_800572d4 = in_t1 & 0xffffff | 0x2000000;
    DAT_800572d0 = GPU_REG1 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
    DAT_800572d8 = *in_t0;
    DAT_800572dc = in_t0[1];
    _cwc(&DAT_800572c8);
    return 0;
  }
  DAT_800572c8 = 0x80572ec;
  DAT_800572e0 = in_t1 & 0xffffff | 0x60000000;
  DAT_800572d8 = 0xe6000000;
  DAT_800572cc = 0xe3000000;
  DAT_800572d0 = 0xe4ffffff;
  DAT_800572d4 = 0xe5000000;
  DAT_800572dc = GPU_REG1 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_800572e4 = *in_t0;
  DAT_800572e8 = in_t0[1];
  DAT_800572ec = 0x3ffffff;
  uVar1 = _param(3);
  DAT_800572f0 = uVar1 | 0xe3000000;
  uVar1 = _param(4);
  DAT_800572f4 = uVar1 | 0xe4000000;
  uVar1 = _param(5);
  DAT_800572f8 = uVar1 | 0xe5000000;
  uVar2 = SYS_OBJ_1CF0();
  return uVar2;
}



undefined4 SYS_OBJ_1CF0(void)

{
  _cwc(&DAT_800572c8);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x80036888)

undefined4 _dws(int param_1,dword *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  set_alarm();
  sVar4 = *(short *)(param_1 + 4);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else {
    if (DAT_800439cc < sVar4) {
      uVar1 = SYS_OBJ_1D8C();
      return uVar1;
    }
  }
  sVar5 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 4) = sVar4;
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  else {
    if (DAT_800439ce < sVar5) {
      uVar1 = SYS_OBJ_1DD4(DAT_800439ce);
      return uVar1;
    }
  }
  *(short *)(param_1 + 6) = sVar5;
  iVar2 = (int)*(short *)(param_1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar2 - (iVar2 >> 0x1f) >> 5;
  if (0 < iVar2 / 2) {
    iVar2 = iVar2 / 2 + iVar6 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(param_1 + 4);
        while (iVar2 = iVar2 + -1, iVar2 != -1) {
          GPU_REG0 = *param_2;
          param_2 = param_2 + 1;
        }
        if (iVar6 != 0) {
          GPU_REG1 = 0x4000002;
          DMA_GPU_BCR = iVar6 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000201;
          DMA_GPU_MADR = (dword)param_2;
        }
        return 0;
      }
      iVar3 = get_alarm();
    } while (iVar3 == 0);
    return 0xffffffff;
  }
  uVar1 = SYS_OBJ_1F48();
  return uVar1;
}



undefined4 SYS_OBJ_1D8C(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_v1;
  short sVar4;
  int iVar5;
  int unaff_s1;
  dword *unaff_s2;
  
  sVar4 = *(short *)(unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 4) = in_v1;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else {
    if (DAT_800439ce < sVar4) {
      uVar1 = SYS_OBJ_1DD4(DAT_800439ce);
      return uVar1;
    }
  }
  *(short *)(unaff_s1 + 6) = sVar4;
  iVar2 = (int)*(short *)(unaff_s1 + 4) * (int)sVar4 + 1;
  iVar5 = iVar2 - (iVar2 >> 0x1f) >> 5;
  if (0 < iVar2 / 2) {
    iVar2 = iVar2 / 2 + iVar5 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(unaff_s1 + 4);
        while (iVar2 = iVar2 + -1, iVar2 != -1) {
          GPU_REG0 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
        }
        if (iVar5 != 0) {
          GPU_REG1 = 0x4000002;
          DMA_GPU_BCR = iVar5 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000201;
          DMA_GPU_MADR = (dword)unaff_s2;
        }
        return 0;
      }
      iVar3 = get_alarm();
    } while (iVar3 == 0);
    return 0xffffffff;
  }
  uVar1 = SYS_OBJ_1F48();
  return uVar1;
}



undefined4 SYS_OBJ_1DD4(undefined2 param_1)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_s1;
  dword *unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 6) = param_1;
  iVar1 = (int)*(short *)(unaff_s1 + 4) * (in_v0 >> 0x10) + 1;
  iVar4 = iVar1 - (iVar1 >> 0x1f) >> 5;
  if (iVar1 / 2 < 1) {
    uVar2 = SYS_OBJ_1F48();
    return uVar2;
  }
  iVar1 = iVar1 / 2 + iVar4 * -0x10;
  do {
    if ((GPU_REG1 & 0x4000000) != 0) {
      GPU_REG1 = 0x4000000;
      GPU_REG0 = *(dword *)(unaff_s1 + 4);
      while (iVar1 = iVar1 + -1, iVar1 != -1) {
        GPU_REG0 = *unaff_s2;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar4 != 0) {
        GPU_REG1 = 0x4000002;
        DMA_GPU_BCR = iVar4 << 0x10 | 0x10;
        DMA_GPU_CHCR = 0x1000201;
        DMA_GPU_MADR = (dword)unaff_s2;
      }
      return 0;
    }
    iVar3 = get_alarm();
  } while (iVar3 == 0);
  return 0xffffffff;
}



void SYS_OBJ_1F48(void)

{
  return;
}



undefined4 _drs(int param_1,dword *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  set_alarm();
  sVar4 = *(short *)(param_1 + 4);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else {
    if (DAT_800439cc < sVar4) {
      uVar1 = SYS_OBJ_1FDC();
      return uVar1;
    }
  }
  sVar5 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 4) = sVar4;
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  else {
    if (DAT_800439ce < sVar5) {
      uVar1 = SYS_OBJ_2024(DAT_800439ce);
      return uVar1;
    }
  }
  *(short *)(param_1 + 6) = sVar5;
  iVar2 = (int)*(short *)(param_1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar2 - (iVar2 >> 0x1f) >> 5;
  if (0 < iVar2 / 2) {
    iVar2 = iVar2 / 2 + iVar6 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(param_1 + 4);
        do {
          iVar3 = get_alarm();
          if (iVar3 != 0) {
            return 0xffffffff;
          }
        } while ((GPU_REG1 & 0x8000000) == 0);
        while (iVar2 = iVar2 + -1, iVar2 != -1) {
          *param_2 = GPU_REG0;
          param_2 = param_2 + 1;
        }
        if (iVar6 != 0) {
          GPU_REG1 = 0x4000003;
          DMA_GPU_BCR = iVar6 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000200;
          DMA_GPU_MADR = (dword)param_2;
        }
        return 0;
      }
      iVar3 = get_alarm();
    } while (iVar3 == 0);
    return 0xffffffff;
  }
  uVar1 = SYS_OBJ_21E8();
  return uVar1;
}



undefined4 SYS_OBJ_1FDC(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_v1;
  short sVar4;
  int iVar5;
  int unaff_s1;
  dword *unaff_s2;
  
  sVar4 = *(short *)(unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 4) = in_v1;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else {
    if (DAT_800439ce < sVar4) {
      uVar1 = SYS_OBJ_2024(DAT_800439ce);
      return uVar1;
    }
  }
  *(short *)(unaff_s1 + 6) = sVar4;
  iVar2 = (int)*(short *)(unaff_s1 + 4) * (int)sVar4 + 1;
  iVar5 = iVar2 - (iVar2 >> 0x1f) >> 5;
  if (0 < iVar2 / 2) {
    iVar2 = iVar2 / 2 + iVar5 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(unaff_s1 + 4);
        do {
          iVar3 = get_alarm();
          if (iVar3 != 0) {
            return 0xffffffff;
          }
        } while ((GPU_REG1 & 0x8000000) == 0);
        while (iVar2 = iVar2 + -1, iVar2 != -1) {
          *unaff_s2 = GPU_REG0;
          unaff_s2 = unaff_s2 + 1;
        }
        if (iVar5 != 0) {
          GPU_REG1 = 0x4000003;
          DMA_GPU_BCR = iVar5 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000200;
          DMA_GPU_MADR = (dword)unaff_s2;
        }
        return 0;
      }
      iVar3 = get_alarm();
    } while (iVar3 == 0);
    return 0xffffffff;
  }
  uVar1 = SYS_OBJ_21E8();
  return uVar1;
}



undefined4 SYS_OBJ_2024(undefined2 param_1)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_s1;
  dword *unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 6) = param_1;
  iVar1 = (int)*(short *)(unaff_s1 + 4) * (in_v0 >> 0x10) + 1;
  iVar4 = iVar1 - (iVar1 >> 0x1f) >> 5;
  if (iVar1 / 2 < 1) {
    uVar2 = SYS_OBJ_21E8();
    return uVar2;
  }
  iVar1 = iVar1 / 2 + iVar4 * -0x10;
  do {
    if ((GPU_REG1 & 0x4000000) != 0) {
      GPU_REG1 = 0x4000000;
      GPU_REG0 = *(dword *)(unaff_s1 + 4);
      do {
        iVar3 = get_alarm();
        if (iVar3 != 0) {
          return 0xffffffff;
        }
      } while ((GPU_REG1 & 0x8000000) == 0);
      while (iVar1 = iVar1 + -1, iVar1 != -1) {
        *unaff_s2 = GPU_REG0;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar4 != 0) {
        GPU_REG1 = 0x4000003;
        DMA_GPU_BCR = iVar4 << 0x10 | 0x10;
        DMA_GPU_CHCR = 0x1000200;
        DMA_GPU_MADR = (dword)unaff_s2;
      }
      return 0;
    }
    iVar3 = get_alarm();
  } while (iVar3 == 0);
  return 0xffffffff;
}



void SYS_OBJ_21E8(void)

{
  return;
}



void _ctl(uint param_1)

{
  GPU_REG1 = param_1;
  (&DAT_8005730c)[param_1 >> 0x18] = (char)param_1;
  return;
}



undefined _getctl(int param_1)

{
  return (&DAT_8005730c)[param_1];
}



undefined4 _cwb(dword *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      GPU_REG0 = *param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  GPU_REG1 = 0x4000000;
  return 0;
}



void _cwc(dword param_1)

{
  DMA_GPU_MADR = param_1;
  DMA_GPU_BCR = 0;
  DMA_GPU_CHCR = 0x1000401;
  GPU_REG1 = 0x4000002;
  return;
}



uint _param(uint param_1)

{
  GPU_REG1 = param_1 | 0x10000000;
  return GPU_REG0 & 0xffffff;
}



void _addque(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _addque2(param_1,param_2,0,param_3);
  return;
}



void _addque2(void)

{
  set_alarm();
  SYS_OBJ_2384();
  return;
}



uint SYS_OBJ_2384(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  code *unaff_s3;
  
  while ((DAT_80043acc + 1 & 0x3f) == DAT_80043ad0) {
    iVar2 = get_alarm();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    _exeque();
  }
  DAT_80043ad4 = SetIntrMask(0);
  DAT_800439d0 = 1;
  if ((DAT_800439c9 == '\0') ||
     (((DAT_80043acc == DAT_80043ad0 && ((DMA_GPU_CHCR & 0x1000000) == 0)) && (DAT_800439d4 == 0))))
  {
    do {
    } while ((GPU_REG1 & 0x4000000) == 0);
    (*unaff_s3)();
    DAT_80043abc = unaff_s3;
    DAT_80043ac0 = unaff_s0;
    DAT_80043ac4 = unaff_s2;
    SetIntrMask(DAT_80043ad4);
    uVar1 = SYS_OBJ_25FC();
    return uVar1;
  }
  DMACallback(2,_exeque);
  if (unaff_s1 == 0) {
    *(undefined4 **)(&DAT_80063c8c + DAT_80043acc * 0x60) = unaff_s0;
    *(undefined4 *)(&DAT_80063c90 + DAT_80043acc * 0x60) = unaff_s2;
    *(code **)(&DAT_80063c88 + DAT_80043acc * 0x60) = unaff_s3;
    DAT_80043acc = DAT_80043acc + 1 & 0x3f;
    SetIntrMask(DAT_80043ad4);
    _exeque();
    return DAT_80043acc - DAT_80043ad0 & 0x3f;
  }
  if (unaff_s1 < 0) {
    unaff_s1 = unaff_s1 + 3;
  }
  if (0 < unaff_s1 >> 2) {
    uVar3 = *unaff_s0;
    iVar2 = DAT_80043acc * 0x60;
    *(undefined4 *)(&DAT_80063c94 + iVar2) = uVar3;
    uVar1 = SYS_OBJ_24AC(&DAT_80063c94 + iVar2,uVar3,1,unaff_s0 + 1);
    return uVar1;
  }
  *(undefined **)(&DAT_80063c8c + DAT_80043acc * 0x60) = &DAT_80063c94 + DAT_80043acc * 0x60;
  uVar1 = SYS_OBJ_2568();
  return uVar1;
}



void SYS_OBJ_24AC(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int in_v0;
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_t0;
  
  if (in_v0 < 0) {
    in_v0 = in_v0 + 3;
  }
  if (param_3 < in_v0 >> 2) {
    uVar2 = *param_4;
    puVar1 = (undefined4 *)(param_3 * 4 + DAT_80043acc * 0x60 + in_t0);
    *puVar1 = uVar2;
    SYS_OBJ_24AC(puVar1,uVar2,param_3 + 1,param_4 + 1);
    return;
  }
  *(undefined **)(&DAT_80063c8c + DAT_80043acc * 0x60) = &DAT_80063c94 + DAT_80043acc * 0x60;
  SYS_OBJ_2568();
  return;
}



uint SYS_OBJ_2568(void)

{
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  *(undefined4 *)(&DAT_80063c90 + DAT_80043acc * 0x60) = unaff_s2;
  *(undefined4 *)(&DAT_80063c88 + DAT_80043acc * 0x60) = unaff_s3;
  DAT_80043acc = DAT_80043acc + 1 & 0x3f;
  SetIntrMask(DAT_80043ad4);
  _exeque();
  return DAT_80043acc - DAT_80043ad0 & 0x3f;
}



void SYS_OBJ_25FC(void)

{
  return;
}



uint _exeque(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((DMA_GPU_CHCR & 0x1000000) == 0) {
    DAT_80043ad8 = SetIntrMask(0);
    if (DAT_80043acc != DAT_80043ad0) {
      do {
        if ((DMA_GPU_CHCR & 0x1000000) != 0) break;
        if (((DAT_80043ad0 + 1 & 0x3f) == DAT_80043acc) && (DAT_800439d4 == (code *)0x0)) {
          DMACallback(2,0);
        }
        do {
        } while ((GPU_REG1 & 0x4000000) == 0);
        (**(code **)(&DAT_80063c88 + DAT_80043ad0 * 0x60))
                  (*(undefined4 *)(&DAT_80063c8c + DAT_80043ad0 * 0x60),
                   *(undefined4 *)(&DAT_80063c90 + DAT_80043ad0 * 0x60));
        DAT_80043abc = *(undefined4 *)(&DAT_80063c88 + DAT_80043ad0 * 0x60);
        DAT_80043ac0 = *(undefined4 *)(&DAT_80063c8c + DAT_80043ad0 * 0x60);
        DAT_80043ac4 = *(undefined4 *)(&DAT_80063c90 + DAT_80043ad0 * 0x60);
        DAT_80043ad0 = DAT_80043ad0 + 1 & 0x3f;
      } while (DAT_80043acc != DAT_80043ad0);
    }
    SetIntrMask(DAT_80043ad8);
    if ((((DAT_80043acc == DAT_80043ad0) && ((DMA_GPU_CHCR & 0x1000000) == 0)) &&
        (DAT_800439d0 != 0)) && (DAT_800439d4 != (code *)0x0)) {
      DAT_800439d0 = 0;
      (*DAT_800439d4)();
    }
    uVar1 = DAT_80043acc - DAT_80043ad0 & 0x3f;
  }
  return uVar1;
}



undefined4 _reset(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_80043adc = SetIntrMask(0);
  DAT_80043ad0 = 0;
  DAT_80043acc = 0;
  uVar2 = param_1 & 7;
  if (uVar2 != 1) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        uVar1 = SYS_OBJ_2A3C();
        return uVar1;
      }
      DMA_GPU_CHCR = 0x401;
      DMA_DPCR = DMA_DPCR | 0x800;
      GPU_REG1 = 0;
      memset(&DAT_8005730c,'\0',0x100);
      memset(&DAT_80063c88,'\0',0x1800);
      uVar1 = SYS_OBJ_2A3C();
      return uVar1;
    }
    if (uVar2 != 3) {
      uVar1 = SYS_OBJ_2A3C();
      return uVar1;
    }
  }
  DMA_GPU_CHCR = 0x401;
  DMA_DPCR = DMA_DPCR | 0x800;
  GPU_REG1 = 0x1000000;
  SetIntrMask(DAT_80043adc);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar1 = _version(param_1);
  }
  return uVar1;
}



undefined4 SYS_OBJ_2A3C(void)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  SetIntrMask(DAT_80043adc);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = _version();
  }
  return uVar1;
}



uint _sync(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    set_alarm();
    uVar1 = SYS_OBJ_2AAC();
    return uVar1;
  }
  uVar1 = DAT_80043acc - DAT_80043ad0 & 0x3f;
  if (uVar1 != 0) {
    _exeque();
  }
  if ((((DMA_GPU_CHCR & 0x1000000) != 0) || ((GPU_REG1 & 0x4000000) == 0)) && (uVar1 == 0)) {
    uVar1 = SYS_OBJ_2BA8();
    return uVar1;
  }
  return uVar1;
}



undefined4 SYS_OBJ_2A94(void)

{
  int iVar1;
  undefined4 uVar2;
  
  _exeque();
  iVar1 = get_alarm();
  if (iVar1 == 0) {
    if (DAT_80043acc != DAT_80043ad0) {
      uVar2 = SYS_OBJ_2A94();
      return uVar2;
    }
    do {
      if (((DMA_GPU_CHCR & 0x1000000) == 0) && ((GPU_REG1 & 0x4000000) != 0)) {
        uVar2 = SYS_OBJ_2BA8();
        return uVar2;
      }
      iVar1 = get_alarm();
    } while (iVar1 == 0);
  }
  return 0xffffffff;
}



undefined4 SYS_OBJ_2AAC(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_80043acc != DAT_80043ad0) {
    uVar1 = SYS_OBJ_2A94();
    return uVar1;
  }
  while (((DMA_GPU_CHCR & 0x1000000) != 0 || ((GPU_REG1 & 0x4000000) == 0))) {
    iVar2 = get_alarm();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = SYS_OBJ_2BA8();
  return uVar1;
}



void SYS_OBJ_2BA8(void)

{
  return;
}



void set_alarm(void)

{
  int iVar1;
  
  iVar1 = VSync(-1);
  DAT_80043ae0 = iVar1 + 0xf0;
  DAT_80043ae4 = 0;
  return;
}



undefined4 get_alarm(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  if ((iVar2 <= DAT_80043ae0) &&
     (iVar2 = DAT_80043ae4 + 1, bVar1 = DAT_80043ae4 < 0xf0001, DAT_80043ae4 = iVar2, bVar1)) {
    return 0;
  }
  printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x,",DAT_80043acc - DAT_80043ad0 & 0x3f,
         GPU_REG1,DMA_GPU_CHCR,DMA_GPU_MADR);
  printf("func=(%08x)(%08x,%08x)\n",DAT_80043abc,DAT_80043ac0,DAT_80043ac4);
  DAT_80043adc = SetIntrMask(0);
  DAT_80043ad0 = 0;
  DAT_80043acc = 0;
  DMA_GPU_CHCR = 0x401;
  DMA_DPCR = DMA_DPCR | 0x800;
  GPU_REG1 = 0x1000000;
  SetIntrMask(DAT_80043adc);
  uVar3 = SYS_OBJ_2D4C();
  return uVar3;
}



void SYS_OBJ_2D4C(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x800377d4)
// WARNING: Removing unreachable block (ram,0x800377dc)
// WARNING: Removing unreachable block (ram,0x800377e4)

undefined4 _version(uint param_1)

{
  undefined4 uVar1;
  
  GPU_REG1 = 0x10000007;
  if ((GPU_REG0 & 0xffffff) != 2) {
    GPU_REG0 = 0xe1001007;
    uVar1 = SYS_OBJ_2E30();
    return uVar1;
  }
  if ((param_1 & 8) == 0) {
    GPU_REG1 = 0x10000007;
    return 3;
  }
  GPU_REG1 = 0x9000001;
  uVar1 = SYS_OBJ_2E30();
  return uVar1;
}



void SYS_OBJ_2E30(void)

{
  return;
}



void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_3 + -1);
  if (param_3 != 0) {
    do {
      *param_1 = param_2;
      pvVar1 = (void *)((int)pvVar1 + -1);
      param_1 = param_1 + 1;
    } while (pvVar1 != (void *)0xffffffff);
  }
  return pvVar1;
}



void DecDCTReset(int mode)

{
  if (mode == 0) {
    ResetCallback();
  }
  MDEC_reset(mode);
  return;
}



DECDCTENV * DecDCTGetEnv(DECDCTENV *env)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  DECDCTENV *pDVar4;
  undefined4 *puVar5;
  
  puVar3 = &DAT_80043aec;
  iVar2 = 0xf;
  pDVar4 = env;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *(undefined4 *)pDVar4->iq_y = uVar1;
    pDVar4 = (DECDCTENV *)(pDVar4->iq_y + 4);
  } while (iVar2 != -1);
  puVar5 = (undefined4 *)env->iq_c;
  puVar3 = &DAT_80043b2c;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar2 != -1);
  puVar5 = (undefined4 *)env->dct;
  puVar3 = &DAT_80043b70;
  iVar2 = 0x1f;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar2 != -1);
  return env;
}



DECDCTENV * DecDCTPutEnv(DECDCTENV *env)

{
  undefined4 uVar1;
  int iVar2;
  DECDCTENV *pDVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = &DAT_80043aec;
  iVar2 = 0xf;
  pDVar3 = env;
  do {
    puVar5 = (undefined4 *)pDVar3->iq_y;
    pDVar3 = (DECDCTENV *)(pDVar3->iq_y + 4);
    iVar2 = iVar2 + -1;
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  puVar5 = &DAT_80043b2c;
  puVar4 = (undefined4 *)env->iq_c;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar2 != -1);
  MDEC_in(&DAT_80043ae8,0x20);
  MDEC_in(&DAT_80043b6c,0x20);
  return env;
}



int DecDCTBufSize(u_long *bs)

{
  return (uint)*(ushort *)bs;
}



void DecDCTin(u_long *buf,int mode)

{
  if ((mode & 1U) != 0) {
    LIBPRESS_OBJ_19C();
    return;
  }
  *buf = *buf | 0x8000000;
  if ((mode & 2U) != 0) {
    LIBPRESS_OBJ_1C8();
    return;
  }
  *buf = *buf & 0xfdffffff;
  MDEC_in(buf,*(undefined2 *)buf);
  return;
}



void LIBPRESS_OBJ_19C(uint *param_1,uint param_2)

{
  uint in_v0;
  
  *param_1 = in_v0;
  if ((param_2 & 2) != 0) {
    LIBPRESS_OBJ_1C8();
    return;
  }
  *param_1 = *param_1 & 0xfdffffff;
  MDEC_in(param_1,*(undefined2 *)param_1);
  return;
}



void LIBPRESS_OBJ_1C8(undefined4 *param_1)

{
  undefined4 in_v0;
  
  *param_1 = in_v0;
  MDEC_in(param_1,*(undefined2 *)param_1);
  return;
}



// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void DecDCTout(u_long *buf,int size)

{
  MDEC_out();
  return;
}



int DecDCTinSync(int mode)

{
  uint uVar1;
  
  if (mode == 0) {
    MDEC_in_sync();
    uVar1 = LIBPRESS_OBJ_234();
    return uVar1;
  }
  uVar1 = MDEC_status();
  return uVar1 >> 0x1d & 1;
}



void LIBPRESS_OBJ_234(void)

{
  return;
}



int DecDCToutSync(int mode)

{
  uint uVar1;
  
  if (mode == 0) {
    MDEC_out_sync();
    uVar1 = LIBPRESS_OBJ_270();
    return uVar1;
  }
  uVar1 = MDEC_status();
  return uVar1 >> 0x18 & 1;
}



void LIBPRESS_OBJ_270(void)

{
  return;
}



int DecDCTinCallback(func *func)

{
  int iVar1;
  
  iVar1 = DMACallback(0,func);
  return iVar1;
}



int DecDCToutCallback(func *func)

{
  int iVar1;
  
  iVar1 = DMACallback(1,func);
  return iVar1;
}



void MDEC_reset(int param_1)

{
  if (param_1 == 0) {
    DMA_MDEC_IN_CHCR = 0;
    DMA_MDEC_OUT_CHCR = 0;
    MDEC_REG1 = 0x60000000;
    MDEC_in(&DAT_80043ae8,0x20);
    MDEC_in(&DAT_80043b6c,0x20);
    LIBPRESS_OBJ_3B4();
    return;
  }
  if (param_1 != 1) {
    LIBPRESS_OBJ_3A4();
    return;
  }
  DMA_MDEC_IN_CHCR = 0;
  DMA_MDEC_OUT_CHCR = 0;
  MDEC_REG1 = 0x60000000;
  LIBPRESS_OBJ_3B4();
  return;
}



void LIBPRESS_OBJ_3A4(void)

{
  printf("MDEC_rest:bad option(%d)\n");
  return;
}



void LIBPRESS_OBJ_3B4(void)

{
  return;
}



void MDEC_in(dword *param_1,uint param_2)

{
  MDEC_in_sync();
  DMA_MDEC_IN_MADR = (dword)(param_1 + 1);
  DMA_MDEC_IN_BCR = (param_2 >> 5) << 0x10 | 0x20;
  DMA_MDEC_IN_CHCR = 0x1000201;
  DMA_DPCR = DMA_DPCR | 0x88;
  MDEC_REG0 = *param_1;
  return;
}



void MDEC_out(dword param_1,uint param_2)

{
  MDEC_out_sync();
  DMA_MDEC_OUT_MADR = param_1;
  DMA_MDEC_OUT_BCR = (param_2 >> 5) << 0x10 | 0x20;
  DMA_MDEC_OUT_CHCR = 0x1000200;
  DMA_DPCR = DMA_DPCR | 0x88;
  return;
}



undefined4 MDEC_in_sync(void)

{
  undefined4 uVar1;
  int local_10;
  
  local_10 = 0x100000;
  do {
    if ((MDEC_REG1 & 0x20000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
  } while (local_10 != -1);
  timeout("MDEC_in_sync");
  uVar1 = LIBPRESS_OBJ_570();
  return uVar1;
}



void LIBPRESS_OBJ_570(void)

{
  return;
}



undefined4 MDEC_out_sync(void)

{
  undefined4 uVar1;
  int local_10;
  
  local_10 = 0x100000;
  do {
    if ((DMA_MDEC_OUT_CHCR & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
  } while (local_10 != -1);
  timeout("MDEC_out_sync");
  uVar1 = LIBPRESS_OBJ_608();
  return uVar1;
}



void LIBPRESS_OBJ_608(void)

{
  return;
}



dword MDEC_status(void)

{
  return MDEC_REG1;
}



undefined4 timeout(undefined4 param_1)

{
  dword dVar1;
  
  printf("%s timeout:\n",param_1);
  dVar1 = MDEC_REG1;
  printf("\t DMA=(%d,%d), ADDR=(0x%08x->0x%08x)\n",DMA_MDEC_IN_CHCR >> 0x18 & 1,
         DMA_MDEC_OUT_CHCR >> 0x18 & 1,DMA_MDEC_IN_MADR,DMA_MDEC_OUT_MADR);
  printf("\t FIFO=(%d,%d),BUSY=%d,DREQ=(%d,%d),RGB24=%d,STP=%d\n",~dVar1 >> 0x1f,dVar1 >> 0x1e & 1,
         dVar1 >> 0x1d & 1,dVar1 >> 0x1c & 1,dVar1 >> 0x1b & 1,dVar1 >> 0x19 & 1,dVar1 >> 0x17 & 1);
  DMA_MDEC_IN_CHCR = 0;
  DMA_MDEC_OUT_CHCR = 0;
  MDEC_REG1 = 0x60000000;
  return 0;
}



undefined4 DecDCTvlcSize(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = VLC_OBJ_0;
  if (0 < param_1 + -1) {
    VLC_OBJ_0 = param_1 << 1;
    return uVar1;
  }
  VLC_OBJ_0 = 0xffffff;
  return uVar1;
}



int DecDCTvlc(u_long *bs,u_long *buf)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  u_long *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined2 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  if (bs == (u_long *)0x0) {
    puVar20 = DAT_8003832c + VLC_OBJ_0;
    uVar8 = DAT_80038330;
    uVar9 = DAT_80038334;
    puVar10 = VLC_OBJ_374;
    puVar6 = DAT_8003832c;
    iVar18 = DAT_80038338;
    uVar19 = DAT_8003833c;
    iVar21 = DAT_80038340;
    iVar22 = DAT_80038344;
    iVar23 = DAT_80038348;
    goto VLC_OBJ_204;
  }
  iVar21 = 0;
  iVar22 = 0;
  iVar23 = 0;
  puVar20 = (undefined2 *)((int)buf + VLC_OBJ_0 * 2);
  uVar2 = *(undefined2 *)((int)bs + 2);
  uVar3 = *(undefined2 *)(bs + 2);
  uVar4 = *(undefined2 *)((int)bs + 10);
  iVar18 = (uint)*(ushort *)(bs + 1) << 10;
  uVar19 = (uint)(-1 < (int)(*(ushort *)((int)bs + 6) - 3));
  puVar10 = bs + 3;
  uVar9 = 0;
  *(undefined2 *)buf = *(undefined2 *)bs;
  *(undefined2 *)((int)buf + 2) = uVar2;
  uVar16 = CONCAT22(uVar3,uVar4);
  puVar12 = (undefined2 *)((int)buf + 2);
VLC_OBJ_E8:
  if (uVar19 == 0) {
    if (uVar16 >> 0x16 == 0x1ff) goto VLC_OBJ_30C;
    uVar8 = uVar16 << 10;
    uVar15 = uVar9 + 10;
    uVar9 = uVar15 & 0xf;
    if ((uVar15 & 0x10) != 0) {
      uVar5 = *(ushort *)puVar10;
      puVar10 = (u_long *)((int)puVar10 + 2);
      uVar8 = uVar8 | (uint)uVar5 << uVar9;
    }
    puVar12[1] = (ushort)iVar18 | (ushort)(uVar16 >> 0x16);
  }
  else {
    if (uVar16 >> 0x16 == 0x3ff) {
VLC_OBJ_30C:
      iVar18 = 0x40;
      do {
        puVar12 = puVar12 + 1;
        *puVar12 = 0xfe00;
        bVar1 = iVar18 != 0;
        iVar18 = iVar18 + -1;
      } while (bVar1);
      setCopReg(0,Status,Status | 0x20000,0);
      return 0;
    }
    puVar7 = &DAT_80044034;
    if (-1 < (int)(uVar19 - 3)) {
      puVar7 = &DAT_80043c34;
    }
    uVar15 = (uint)*(ushort *)(puVar7 + (uVar16 >> 0x18) * 4);
    uVar17 = (uint)*(ushort *)((int)(puVar7 + (uVar16 >> 0x18) * 4) + 2);
    uVar13 = 0;
    uVar8 = uVar16 << (uVar15 & 0x1f);
    if (uVar17 != 0) {
      uVar13 = uVar8 >> (0x20 - uVar17 & 0x1f);
      bVar1 = -1 < (int)uVar8;
      uVar8 = uVar8 << (uVar17 & 0x1f);
      if (bVar1) {
        uVar13 = uVar13 - (0xffffffffU >> (0x20 - uVar17 & 0x1f));
      }
      uVar9 = uVar9 + uVar17;
    }
    uVar15 = uVar9 + uVar15;
    uVar9 = uVar15 & 0xf;
    if ((uVar15 & 0x10) != 0) {
      uVar5 = *(ushort *)puVar10;
      puVar10 = (u_long *)((int)puVar10 + 2);
      uVar8 = uVar8 | (uint)uVar5 << uVar9;
    }
    uVar16 = iVar23 + uVar13;
    if ((int)(uVar19 - 2) < 1) {
      uVar16 = iVar22 + uVar13;
      if (uVar19 == 2) {
        iVar22 = iVar22 + uVar13;
      }
      else {
        uVar16 = iVar21 + uVar13;
        iVar21 = iVar21 + uVar13;
      }
    }
    else {
      iVar23 = iVar23 + uVar13;
    }
    bVar1 = uVar19 == 6;
    puVar12[1] = (ushort)iVar18 | (ushort)((uVar16 & 0xff) << 2);
    uVar19 = uVar19 + 1;
    if (bVar1) {
      uVar19 = 1;
    }
  }
  puVar6 = puVar12 + 2;
  if (-1 < (int)puVar12 + (2 - (int)puVar20)) {
    VLC_OBJ_374 = puVar10;
    DAT_8003832c = puVar12 + 2;
    DAT_80038330 = uVar8;
    DAT_80038334 = uVar9;
    DAT_80038338 = iVar18;
    DAT_8003833c = uVar19;
    DAT_80038340 = iVar21;
    DAT_80038344 = iVar22;
    DAT_80038348 = iVar23;
    return 1;
  }
VLC_OBJ_204:
  puVar11 = puVar6;
  iVar14 = (uVar8 >> 0x13) * 8;
  uVar15 = *(uint *)(&DAT_80044434 + iVar14);
  if (uVar15 == 0) {
    uVar8 = uVar8 << 8;
    uVar16 = uVar9 + 8;
    uVar9 = uVar16 & 0xf;
    if ((uVar16 & 0x10) != 0) {
      uVar5 = *(ushort *)puVar10;
      puVar10 = (u_long *)((int)puVar10 + 2);
      uVar8 = uVar8 | (uint)uVar5 << uVar9;
    }
    uVar15 = *(uint *)(&DAT_80054434 + (uVar8 >> 0x17) * 4);
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(&DAT_80044438 + iVar14);
  }
  uVar8 = uVar8 << (uVar15 & 0x1f);
  uVar16 = uVar9 + (uVar15 & 0xff);
  uVar9 = uVar16 & 0xf;
  if ((uVar16 & 0x10) != 0) {
    uVar5 = *(ushort *)puVar10;
    puVar10 = (u_long *)((int)puVar10 + 2);
    uVar8 = uVar8 | (uint)uVar5 << uVar9;
  }
  puVar12 = puVar11;
  if (uVar15 >> 0x10 == 0x7c1f) goto VLC_OBJ_2E8;
  *puVar11 = (short)(uVar15 >> 0x10);
  uVar16 = uVar8;
  if (uVar15 >> 0x10 != 0xfe00) goto code_r0x80038254;
  goto VLC_OBJ_E8;
code_r0x80038254:
  puVar12 = puVar11 + 1;
  puVar6 = puVar12;
  if (uVar13 != 0) {
    uVar15 = uVar13 & 0xffff;
    if (uVar15 != 0x7c1f) {
      *puVar12 = (short)uVar15;
      if (uVar15 == 0xfe00) goto VLC_OBJ_E8;
      uVar15 = uVar13 >> 0x10;
      puVar12 = puVar11 + 2;
      puVar6 = puVar12;
      if (uVar15 == 0) goto VLC_OBJ_204;
      if (uVar15 != 0x7c1f) {
        *puVar12 = (short)(uVar13 >> 0x10);
        if (uVar15 != 0xfe00) {
          puVar6 = puVar11 + 3;
          goto VLC_OBJ_204;
        }
        goto VLC_OBJ_E8;
      }
    }
VLC_OBJ_2E8:
    *puVar12 = (short)(uVar8 >> 0x10);
    uVar5 = *(ushort *)puVar10;
    puVar10 = (u_long *)((int)puVar10 + 2);
    uVar8 = uVar8 << 0x10 | (uint)uVar5 << uVar9;
    puVar6 = puVar12 + 1;
  }
  goto VLC_OBJ_204;
}



// Possible C112.OBJ/_bu_init

void _bu_init(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



// Possible C171.OBJ/_card_info

void _card_info(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



// Possible C172.OBJ/_card_load

void _card_load(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



// Possible INIT.OBJ/StartCARD

void FUN_800383d0(void)

{
  EnterCriticalSection();
  StartCard();
  ChangeClearPad(0);
  ExitCriticalSection();
  return;
}



// Possible SSINIT_C.OBJ/SsInit
// Possible SSINIT_H.OBJ/SsInitHot
// Possible INIT.OBJ/StopCARD

void FUN_80038408(void)

{
  StopCard();
  _patch_card2();
  FUN_80038608();
  return;
}



// Possible A74.OBJ/InitCARD2

void InitCARD2(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StartCard(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StopCard(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible PATCH.OBJ/PATCH_OBJ_14

void PATCH_OBJ_14(void)

{
  int in_v1;
  
  if ((*(uint *)(in_v1 + 0x1074) & 0x80) != 0) {
    do {
    } while ((*(uint *)(in_v1 + 0x1044) & 0x80) != 0);
                    // WARNING: Could not recover jumptable at 0x800384b0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*DAT_80054cb0)();
    return;
  }
  return;
}



// Possible PATCH.OBJ/_patch_card

void _patch_card(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  DAT_80054cac = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar4 = (undefined4 *)&PATCH_OBJ_0;
  puVar2 = (undefined4 *)
           (*(int *)(*(int *)(iVar1 + 0x18) + 0x70) * 0x10000 +
            (*(uint *)(*(int *)(iVar1 + 0x18) + 0x74) & 0xffff) + 0x28);
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    DAT_80054cb0 = puVar2 + 1;
    *puVar2 = uVar3;
    puVar2 = DAT_80054cb0;
  } while (puVar4 != (undefined4 *)PATCH_OBJ_14);
  FlushCache();
  return;
}



// Possible PATCH.OBJ/PATCH_OBJ_F4

void PATCH_OBJ_F4(void)

{
  int iVar1;
  
  iVar1 = 200;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// Possible PATCH.OBJ/_patch_card2

void _patch_card2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  DAT_80054cac = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  puVar3 = &PATCH_OBJ_E0;
  do {
    uVar2 = *puVar3;
    puVar4 = puVar3 + 1;
    *puVar3 = *(undefined4 *)(iVar1 + 0x9c8);
    *(undefined4 *)(iVar1 + 0x9c8) = uVar2;
    iVar1 = iVar1 + 4;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)PATCH_OBJ_F4);
  FlushCache();
  return;
}



// Possible END.OBJ/_ExitCard

void FUN_80038608(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 unaff_retaddr;
  
  DAT_80054cbc = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar3 = &DAT_80038670;
  iVar1 = *(int *)(iVar1 + 0x18);
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
    iVar1 = iVar1 + 4;
  } while (puVar3 != (undefined4 *)&UNK_8003867c);
  FlushCache();
  ExitCriticalSection();
  return;
}



void std_out_puts(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void SaveState(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



// Possible C21.OBJ/strcat

char * strcat(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)&LAB_000000a0)();
  return pcVar1;
}



int strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



int strncmp(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



// Possible C25.OBJ/strcpy

char * strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)&LAB_000000a0)();
  return pcVar1;
}



int strlen(char *param_1)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



void * memcpy(uchar *param_1,uchar *param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



// Possible C43.OBJ/memset

void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Possible C47.OBJ/rand

int rand(void)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



// Possible C48.OBJ/srand

void srand(uint param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



int printf(char *fmt,...)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



// WARNING (jumptable): Heritage AFTER dead removal. Example location: s0x00000008 : 0x80038898
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// WARNING: Could not reconcile some variable overlaps
// Possible SPRINTF.OBJ/sprintf

int sprintf(char *buffer,char *fmt,...)

{
  bool bVar1;
  uint **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  uint *puVar7;
  uchar *puVar8;
  char cVar9;
  uint uVar10;
  uint *in_a2;
  undefined4 in_a3;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  char *local_res4;
  uint *local_res8;
  undefined4 local_resc;
  undefined uStack57;
  uint uStack56;
  uint *puStack52;
  uint *puStack48;
  uint **local_28;
  
  uVar13 = 0;
  cVar9 = *fmt;
  ppuVar2 = &local_res8;
  local_res8 = in_a2;
  local_resc = in_a3;
  while (cVar9 != '\0') {
    local_28 = ppuVar2;
    if (cVar9 != '%') {
SPRINTF_OBJ_764:
      buffer[uVar13] = cVar9;
      uVar13 = SPRINTF_OBJ_804();
      return uVar13;
    }
    uStack56 = 0;
    puStack52 = (uint *)0x0;
    puStack48 = (uint *)0x0;
    uVar10 = (uint)(byte)fmt[1];
    if (uVar10 == 0x2d) {
      uStack56 = 1;
      uVar13 = SPRINTF_OBJ_90();
      return uVar13;
    }
    if (uVar10 == 0x2b) {
      uStack56 = 2;
      uVar13 = SPRINTF_OBJ_90();
      return uVar13;
    }
    if (uVar10 == 0x20) {
      uStack56 = (uint)(byte)fmt[1] << 8;
      uVar13 = SPRINTF_OBJ_90();
      return uVar13;
    }
    if (uVar10 == 0x23) {
      uStack56 = 4;
      uVar13 = SPRINTF_OBJ_90();
      return uVar13;
    }
    if (uVar10 == 0x30) {
      uStack56 = 8;
      uVar13 = SPRINTF_OBJ_90();
      return uVar13;
    }
    pcVar6 = fmt;
    if (uVar10 == 0x2a) {
      local_28 = ppuVar2 + 1;
      puStack52 = *ppuVar2;
      bVar1 = (int)puStack52 < 0;
      if (bVar1) {
        puStack52 = (uint *)-(int)puStack52;
      }
      uStack56 = (uint)bVar1;
      uVar13 = SPRINTF_OBJ_1C0(fmt,fmt[2]);
      return uVar13;
    }
    while (local_res4 = pcVar6 + 1, pcVar3 = local_res4, uVar10 - 0x30 < 10) {
      puStack52 = (uint *)((int)puStack52 * 10 + -0x30 + uVar10);
      uVar10 = (uint)(byte)pcVar6[2];
      pcVar6 = local_res4;
    }
    if (uVar10 == 0x2e) {
      uVar10 = (uint)(byte)pcVar6[2];
      pcVar4 = pcVar6 + 2;
      if (uVar10 == 0x2a) {
        local_28 = ppuVar2 + 1;
        puStack48 = *ppuVar2;
        uVar13 = SPRINTF_OBJ_260(local_res4,pcVar6[3]);
        return uVar13;
      }
      while (local_res4 = pcVar4, uVar10 - 0x30 < 10) {
        puStack48 = (uint *)((int)puStack48 * 10 + -0x30 + uVar10);
        pcVar4 = local_res4 + 1;
        uVar10 = (uint)(byte)local_res4[1];
      }
      fmt = pcVar3;
      if (-1 < (int)puStack48) {
        uStack56 = 0x10;
      }
    }
    cVar9 = (char)uVar10;
    puVar12 = &uStack56;
    switch(uVar10) {
    case 0x4c:
      uStack56 = uStack56 | 0x80;
      uVar13 = SPRINTF_OBJ_2A4(fmt,local_res4[1]);
      return uVar13;
    default:
      if (uVar10 == 0x25) goto SPRINTF_OBJ_764;
      goto SPRINTF_OBJ_824;
    case 99:
      local_28 = ppuVar2 + 1;
      uVar13 = SPRINTF_OBJ_770();
      return uVar13;
    case 100:
    case 0x69:
      local_28 = ppuVar2 + 1;
      puVar7 = *ppuVar2;
      if ((int)puVar7 < 0) {
        uStack56._0_2_ = CONCAT11(0x2d,(undefined)uStack56);
        uStack56 = (uint)(ushort)uStack56;
        uVar13 = SPRINTF_OBJ_388(-(int)puVar7);
        return uVar13;
      }
      goto code_r0x80038ae0;
    case 0x68:
      uVar13 = SPRINTF_OBJ_2EC();
      return uVar13;
    case 0x6c:
      uVar13 = SPRINTF_OBJ_2EC();
      return uVar13;
    case 0x6e:
      local_28 = ppuVar2 + 1;
      **ppuVar2 = uVar13;
      uVar13 = SPRINTF_OBJ_804();
      return uVar13;
    case 0x6f:
      local_28 = ppuVar2 + 1;
      puVar7 = *ppuVar2;
      if ((uStack56 == 0) && ((int)puStack48 < 1)) {
        puStack48 = (uint *)0x1;
      }
      iVar11 = 0;
      for (; puVar7 != (uint *)0x0; puVar7 = (uint *)((uint)puVar7 >> 3)) {
        puVar12 = (uint *)((int)puVar12 + -1);
        *(byte *)puVar12 = ((byte)puVar7 & 7) + 0x30;
        iVar11 = iVar11 + 1;
      }
      if (iVar11 < (int)puStack48) {
        do {
          puVar12 = (uint *)((int)puVar12 + -1);
          *(char *)puVar12 = '0';
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)puStack48);
        uVar13 = SPRINTF_OBJ_770();
        return uVar13;
      }
      break;
    case 0x70:
      puStack48 = (uint *)0x8;
      uStack56 = 0x50;
    case 0x58:
      uVar13 = SPRINTF_OBJ_590();
      return uVar13;
    case 0x73:
      local_28 = ppuVar2 + 1;
      puVar12 = *ppuVar2;
      if (uStack56 == 0) {
        strlen((char *)puVar12);
        uVar13 = SPRINTF_OBJ_770();
        return uVar13;
      }
      pvVar5 = memchr((uchar *)puVar12,'\0',(int)puStack48);
      iVar11 = (int)pvVar5 - (int)puVar12;
      if (pvVar5 == (void *)0x0) {
        uVar13 = SPRINTF_OBJ_770();
        return uVar13;
      }
      break;
    case 0x75:
      puVar7 = *ppuVar2;
code_r0x80038ae0:
      local_28 = ppuVar2 + 1;
      if ((uStack56 == 0) && ((int)puStack48 < 1)) {
        puStack48 = (uint *)0x1;
      }
      iVar11 = 0;
      while (puVar7 != (uint *)0x0) {
        puVar12 = (uint *)((int)puVar12 + -1);
        iVar11 = iVar11 + 1;
        *(char *)puVar12 = (char)puVar7 + (char)(uint *)((uint)puVar7 / 10) * -10 + '0';
        puVar7 = (uint *)((uint)puVar7 / 10);
      }
      for (; iVar11 < (int)puStack48; iVar11 = iVar11 + 1) {
        puVar12 = (uint *)((int)puVar12 + -1);
        *(char *)puVar12 = '0';
      }
      break;
    case 0x78:
      local_28 = ppuVar2 + 1;
      puVar7 = *ppuVar2;
      if ((uStack56 == 0) && ((int)puStack48 < 1)) {
        puStack48 = (uint *)0x1;
      }
      iVar11 = 0;
      for (; puVar7 != (uint *)0x0; puVar7 = (uint *)((uint)puVar7 >> 4)) {
        puVar12 = (uint *)((int)puVar12 + -1);
        iVar11 = iVar11 + 1;
        *(char *)puVar12 = "0123456789abcdef"[(uint)puVar7 & 0xf];
      }
      for (; iVar11 < (int)puStack48; iVar11 = iVar11 + 1) {
        puVar12 = (uint *)((int)puVar12 + -1);
        *(char *)puVar12 = '0';
      }
    }
    puVar8 = (uchar *)(buffer + uVar13);
    if ((iVar11 < (int)puStack52) && ((uStack56 & 1) == 0)) {
      pcVar6 = buffer + uVar13;
      do {
        *pcVar6 = ' ';
        pcVar6 = pcVar6 + 1;
        puStack52 = (uint *)((int)puStack52 + -1);
        uVar13 = uVar13 + 1;
      } while (iVar11 < (int)puStack52);
      puVar8 = (uchar *)(buffer + uVar13);
    }
    memmove(puVar8,(uchar *)puVar12,iVar11);
    uVar13 = uVar13 + iVar11;
    if (iVar11 < (int)puStack52) {
      pcVar6 = buffer + uVar13;
      do {
        *pcVar6 = ' ';
        pcVar6 = pcVar6 + 1;
        iVar11 = iVar11 + 1;
        uVar13 = uVar13 + 1;
      } while (iVar11 < (int)puStack52);
    }
    fmt = local_res4 + 1;
    ppuVar2 = local_28;
    cVar9 = local_res4[1];
  }
SPRINTF_OBJ_824:
  buffer[uVar13] = '\0';
  return uVar13;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_90

int SPRINTF_OBJ_90(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  uint in_v1;
  undefined *puVar3;
  int *piVar4;
  uchar *puVar5;
  uint uVar6;
  int *piVar7;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar9;
  int in_stack_0000024c;
  int iVar10;
  int iVar11;
  
  do {
    uVar6 = (uint)*(byte *)(in_stack_0000024c + 1);
    if (uVar6 == unaff_s6) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar6 == unaff_s5) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar6 == unaff_s4) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar6 == param_3) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar6 == in_v1) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    iVar1 = in_stack_0000024c;
    if (uVar6 == 0x2a) {
      iVar1 = SPRINTF_OBJ_1C0(in_stack_0000024c,*(undefined *)(in_stack_0000024c + 2));
      return iVar1;
    }
    while (iVar10 = iVar1 + 1, uVar6 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar6;
      uVar6 = (uint)*(byte *)(iVar1 + 2);
      iVar1 = iVar10;
    }
    iVar11 = iVar10;
    if (uVar6 == 0x2e) {
      uVar6 = (uint)*(byte *)(iVar1 + 2);
      iVar11 = iVar1 + 2;
      if (uVar6 == 0x2a) {
        iVar1 = SPRINTF_OBJ_260(iVar10,*(undefined *)(iVar1 + 3));
        return iVar1;
      }
      while (uVar6 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar6;
        uVar6 = (uint)*(byte *)(iVar11 + 1);
        iVar11 = iVar11 + 1;
      }
      in_stack_0000024c = iVar10;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    bVar8 = (byte)uVar6;
    piVar7 = (int *)&stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(uVar6) {
    case 0x4c:
      iVar1 = SPRINTF_OBJ_2A4(in_stack_0000024c,*(undefined *)(iVar11 + 1));
      return iVar1;
    default:
      if (uVar6 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    case 100:
    case 0x69:
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)(int)(short)piVar4;
      }
      if ((int)piVar4 < 0) {
        iVar1 = SPRINTF_OBJ_388(-(int)piVar4);
        return iVar1;
      }
      if ((in_stack_00000210 & 2) != 0) {
        iVar1 = SPRINTF_OBJ_388();
        return iVar1;
      }
      goto code_r0x80038ae0;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6e:
      if ((in_stack_00000210 & 0x20) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar1 = SPRINTF_OBJ_804();
        return iVar1;
      }
      **in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    case 0x6f:
      ppiVar9 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if ((in_stack_00000210 & 8) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = ((byte)piVar4 & 7) + 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((((in_stack_00000210 & 4) != 0) && (uVar6 != 0)) && (*(byte *)piVar7 != 0x30)) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x70:
    case 0x58:
      iVar1 = SPRINTF_OBJ_590();
      return iVar1;
    case 0x73:
      ppiVar9 = in_stack_00000220 + 1;
      piVar7 = *in_stack_00000220;
      if ((in_stack_00000210 & 4) == 0) {
        if ((in_stack_00000210 & 0x10) == 0) {
          strlen((char *)piVar7);
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
        pvVar2 = memchr((uchar *)piVar7,'\0',in_stack_00000218);
        uVar6 = (int)pvVar2 - (int)piVar7;
        if (pvVar2 == (void *)0x0) {
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
      }
      else {
        uVar6 = (uint)*(byte *)piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar6)) {
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
      }
      break;
    case 0x75:
      piVar4 = *in_stack_00000220;
      uVar6 = in_stack_00000210 & 0x20;
      in_stack_00000210 = in_stack_00000210 & 0xff;
      if (uVar6 != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
code_r0x80038ae0:
      ppiVar9 = in_stack_00000220 + 1;
      bVar8 = (byte)(in_stack_00000210 >> 8);
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0)) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      while (piVar4 != (int *)0x0) {
        piVar7 = (int *)((int)piVar7 + -1);
        uVar6 = uVar6 + 1;
        *(byte *)piVar7 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + 0x30;
        piVar4 = (int *)((uint)piVar4 / 10);
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
      }
      if (bVar8 != 0) {
        *(byte *)((int)piVar7 + -1) = bVar8;
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x78:
      ppiVar9 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
        piVar7 = (int *)((int)piVar7 + -1);
        uVar6 = uVar6 + 1;
        *(char *)piVar7 = "0123456789abcdef"[(uint)piVar4 & 0xf];
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
      }
      if ((in_stack_00000210 & 4) != 0) {
        *(byte *)((int)piVar7 + -1) = bVar8;
        *(byte *)((int)piVar7 + -2) = 0x30;
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
    }
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,(uchar *)piVar7,uVar6);
    unaff_s2 = unaff_s2 + uVar6;
    if ((int)uVar6 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        uVar6 = uVar6 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
    }
    in_stack_0000024c = iVar11 + 1;
    bVar8 = *(byte *)(iVar11 + 1);
    if (bVar8 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (bVar8 != 0x25) {
SPRINTF_OBJ_764:
      *(byte *)(unaff_s3 + unaff_s2) = bVar8;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    param_3 = 0x23;
    in_v1 = 0x30;
    in_stack_00000220 = ppiVar9;
  } while( true );
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_1C0

int SPRINTF_OBJ_1C0(int param_1,uint param_2)

{
  uint in_v0;
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  int *piVar4;
  uchar *puVar5;
  uint uVar6;
  int *piVar7;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar9;
  int in_stack_0000024c;
  int iVar10;
  
  do {
    iVar10 = in_stack_0000024c;
    if (param_2 == in_v0) {
      param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
      iVar1 = in_stack_0000024c;
      if (param_2 == 0x2a) {
        iVar1 = SPRINTF_OBJ_260(in_stack_0000024c,*(undefined *)(in_stack_0000024c + 2));
        return iVar1;
      }
      while (iVar10 = iVar1 + 1, param_2 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
        param_2 = (uint)*(byte *)(iVar1 + 2);
        iVar1 = iVar10;
      }
      param_1 = in_stack_0000024c;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    piVar7 = (int *)&stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(param_2) {
    case 0x4c:
      iVar1 = SPRINTF_OBJ_2A4(param_1,*(undefined *)(iVar10 + 1));
      return iVar1;
    default:
      if (param_2 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    case 100:
    case 0x69:
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)(int)(short)piVar4;
      }
      if ((int)piVar4 < 0) {
        iVar1 = SPRINTF_OBJ_388(-(int)piVar4);
        return iVar1;
      }
      if ((in_stack_00000210 & 2) != 0) {
        iVar1 = SPRINTF_OBJ_388();
        return iVar1;
      }
      goto code_r0x80038ae0;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6e:
      if ((in_stack_00000210 & 0x20) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar1 = SPRINTF_OBJ_804();
        return iVar1;
      }
      **in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    case 0x6f:
      ppiVar9 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if ((in_stack_00000210 & 8) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = ((byte)piVar4 & 7) + 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((((in_stack_00000210 & 4) != 0) && (uVar6 != 0)) && (*(byte *)piVar7 != 0x30)) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x70:
    case 0x58:
      iVar1 = SPRINTF_OBJ_590();
      return iVar1;
    case 0x73:
      ppiVar9 = in_stack_00000220 + 1;
      piVar7 = *in_stack_00000220;
      if ((in_stack_00000210 & 4) == 0) {
        if ((in_stack_00000210 & 0x10) == 0) {
          strlen((char *)piVar7);
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
        pvVar2 = memchr((uchar *)piVar7,'\0',in_stack_00000218);
        uVar6 = (int)pvVar2 - (int)piVar7;
        if (pvVar2 == (void *)0x0) {
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
      }
      else {
        uVar6 = (uint)*(byte *)piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar6)) {
          iVar1 = SPRINTF_OBJ_770();
          return iVar1;
        }
      }
      break;
    case 0x75:
      piVar4 = *in_stack_00000220;
      uVar6 = in_stack_00000210 & 0x20;
      in_stack_00000210 = in_stack_00000210 & 0xff;
      if (uVar6 != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
code_r0x80038ae0:
      ppiVar9 = in_stack_00000220 + 1;
      bVar8 = (byte)(in_stack_00000210 >> 8);
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0)) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      while (piVar4 != (int *)0x0) {
        piVar7 = (int *)((int)piVar7 + -1);
        uVar6 = uVar6 + 1;
        *(byte *)piVar7 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + 0x30;
        piVar4 = (int *)((uint)piVar4 / 10);
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
      }
      if (bVar8 != 0) {
        *(byte *)((int)piVar7 + -1) = bVar8;
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x78:
      ppiVar9 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
        piVar7 = (int *)((int)piVar7 + -1);
        uVar6 = uVar6 + 1;
        *(char *)piVar7 = "0123456789abcdef"[(uint)piVar4 & 0xf];
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        piVar7 = (int *)((int)piVar7 + -1);
        *(byte *)piVar7 = 0x30;
      }
      if ((in_stack_00000210 & 4) != 0) {
        *(byte *)((int)piVar7 + -1) = (byte)param_2;
        *(byte *)((int)piVar7 + -2) = 0x30;
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
    }
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,(uchar *)piVar7,uVar6);
    unaff_s2 = unaff_s2 + uVar6;
    if ((int)uVar6 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        uVar6 = uVar6 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
    }
    param_1 = iVar10 + 1;
    param_2 = (uint)*(byte *)(iVar10 + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    param_2 = (uint)*(byte *)(iVar10 + 2);
    if (param_2 == unaff_s6) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (param_2 == unaff_s5) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (param_2 == unaff_s4) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (param_2 == 0x23) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (param_2 == 0x30) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    in_stack_0000024c = iVar10 + 2;
    if (param_2 == 0x2a) {
      iVar1 = SPRINTF_OBJ_1C0(param_1,*(undefined *)(iVar10 + 3));
      return iVar1;
    }
    while (in_v0 = 0x2e, in_stack_00000220 = ppiVar9, param_2 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
      in_stack_0000024c = in_stack_0000024c + 1;
    }
  } while( true );
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_260

int SPRINTF_OBJ_260(int param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uchar *puVar5;
  uint uVar6;
  int *piVar7;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar9;
  int in_stack_0000024c;
  
  do {
    iVar2 = param_1;
    ppiVar9 = in_stack_00000220;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
    do {
      piVar7 = (int *)&stack0x00000210;
      if ((in_stack_00000210 & 1) != 0) {
        in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
      }
      switch(param_2) {
      case 0x4c:
        iVar2 = SPRINTF_OBJ_2A4(iVar2,*(undefined *)(in_stack_0000024c + 1));
        return iVar2;
      default:
        if (param_2 != 0x25) goto SPRINTF_OBJ_824;
        goto SPRINTF_OBJ_764;
      case 99:
        iVar2 = SPRINTF_OBJ_770();
        return iVar2;
      case 100:
      case 0x69:
        piVar4 = *ppiVar9;
        if ((in_stack_00000210 & 0x20) != 0) {
          piVar4 = (int *)(int)(short)piVar4;
        }
        if ((int)piVar4 < 0) {
          iVar2 = SPRINTF_OBJ_388(-(int)piVar4);
          return iVar2;
        }
        if ((in_stack_00000210 & 2) != 0) {
          iVar2 = SPRINTF_OBJ_388();
          return iVar2;
        }
        goto code_r0x80038ae0;
      case 0x68:
        iVar2 = SPRINTF_OBJ_2EC();
        return iVar2;
      case 0x6c:
        iVar2 = SPRINTF_OBJ_2EC();
        return iVar2;
      case 0x6e:
        if ((in_stack_00000210 & 0x20) != 0) {
          *(short *)*ppiVar9 = (short)unaff_s2;
          iVar2 = SPRINTF_OBJ_804();
          return iVar2;
        }
        **ppiVar9 = unaff_s2;
        iVar2 = SPRINTF_OBJ_804();
        return iVar2;
      case 0x6f:
        in_stack_00000220 = ppiVar9 + 1;
        piVar4 = *ppiVar9;
        if ((in_stack_00000210 & 0x20) != 0) {
          piVar4 = (int *)((uint)piVar4 & 0xffff);
        }
        if ((in_stack_00000210 & 0x10) == 0) {
          if ((in_stack_00000210 & 8) != 0) {
            in_stack_00000218 = in_stack_00000214;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar6 = 0;
        for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = ((byte)piVar4 & 7) + 0x30;
          uVar6 = uVar6 + 1;
        }
        if ((((in_stack_00000210 & 4) != 0) && (uVar6 != 0)) && (*(byte *)piVar7 != 0x30)) {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = 0x30;
          uVar6 = uVar6 + 1;
        }
        if ((int)uVar6 < in_stack_00000218) {
          do {
            piVar7 = (int *)((int)piVar7 + -1);
            *(byte *)piVar7 = 0x30;
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < in_stack_00000218);
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
        break;
      case 0x70:
      case 0x58:
        iVar2 = SPRINTF_OBJ_590();
        return iVar2;
      case 0x73:
        in_stack_00000220 = ppiVar9 + 1;
        piVar7 = *ppiVar9;
        if ((in_stack_00000210 & 4) == 0) {
          if ((in_stack_00000210 & 0x10) == 0) {
            strlen((char *)piVar7);
            iVar2 = SPRINTF_OBJ_770();
            return iVar2;
          }
          pvVar1 = memchr((uchar *)piVar7,'\0',in_stack_00000218);
          uVar6 = (int)pvVar1 - (int)piVar7;
          if (pvVar1 == (void *)0x0) {
            iVar2 = SPRINTF_OBJ_770();
            return iVar2;
          }
        }
        else {
          uVar6 = (uint)*(byte *)piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar6)) {
            iVar2 = SPRINTF_OBJ_770();
            return iVar2;
          }
        }
        break;
      case 0x75:
        piVar4 = *ppiVar9;
        uVar6 = in_stack_00000210 & 0x20;
        in_stack_00000210 = in_stack_00000210 & 0xff;
        if (uVar6 != 0) {
          piVar4 = (int *)((uint)piVar4 & 0xffff);
        }
code_r0x80038ae0:
        in_stack_00000220 = ppiVar9 + 1;
        bVar8 = (byte)(in_stack_00000210 >> 8);
        if ((in_stack_00000210 & 0x10) == 0) {
          if (((in_stack_00000210 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0))
          {
            in_stack_00000218 = in_stack_00000214 + -1;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar6 = 0;
        while (piVar4 != (int *)0x0) {
          piVar7 = (int *)((int)piVar7 + -1);
          uVar6 = uVar6 + 1;
          *(byte *)piVar7 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + 0x30;
          piVar4 = (int *)((uint)piVar4 / 10);
        }
        for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = 0x30;
        }
        if (bVar8 != 0) {
          *(byte *)((int)piVar7 + -1) = bVar8;
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
        break;
      case 0x78:
        in_stack_00000220 = ppiVar9 + 1;
        piVar4 = *ppiVar9;
        if ((in_stack_00000210 & 0x20) != 0) {
          piVar4 = (int *)((uint)piVar4 & 0xffff);
        }
        if ((in_stack_00000210 & 0x10) == 0) {
          if (((in_stack_00000210 & 8) != 0) &&
             (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
            in_stack_00000218 = in_stack_00000214 + -2;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar6 = 0;
        for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
          piVar7 = (int *)((int)piVar7 + -1);
          uVar6 = uVar6 + 1;
          *(char *)piVar7 = "0123456789abcdef"[(uint)piVar4 & 0xf];
        }
        for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
          piVar7 = (int *)((int)piVar7 + -1);
          *(byte *)piVar7 = 0x30;
        }
        if ((in_stack_00000210 & 4) != 0) {
          *(byte *)((int)piVar7 + -1) = (byte)param_2;
          *(byte *)((int)piVar7 + -2) = 0x30;
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
      }
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
      if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
        puVar3 = (undefined *)(unaff_s2 + unaff_s3);
        do {
          *puVar3 = (char)unaff_s4;
          puVar3 = puVar3 + 1;
          in_stack_00000214 = in_stack_00000214 + -1;
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar6 < in_stack_00000214);
        puVar5 = (uchar *)(unaff_s3 + unaff_s2);
      }
      memmove(puVar5,(uchar *)piVar7,uVar6);
      unaff_s2 = unaff_s2 + uVar6;
      if ((int)uVar6 < in_stack_00000214) {
        puVar3 = (undefined *)(unaff_s2 + unaff_s3);
        do {
          *puVar3 = (char)unaff_s4;
          puVar3 = puVar3 + 1;
          uVar6 = uVar6 + 1;
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar6 < in_stack_00000214);
      }
      iVar2 = in_stack_0000024c + 1;
      param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
      if (param_2 == 0) {
SPRINTF_OBJ_824:
        *(undefined *)(unaff_s3 + unaff_s2) = 0;
        return unaff_s2;
      }
      if (param_2 != 0x25) {
SPRINTF_OBJ_764:
        *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
        iVar2 = SPRINTF_OBJ_804();
        return iVar2;
      }
      in_stack_00000210 = 0;
      in_stack_00000214 = 0;
      in_stack_00000218 = 0;
      param_2 = (uint)*(byte *)(in_stack_0000024c + 2);
      if (param_2 == unaff_s6) {
        iVar2 = SPRINTF_OBJ_90();
        return iVar2;
      }
      if (param_2 == unaff_s5) {
        iVar2 = SPRINTF_OBJ_90();
        return iVar2;
      }
      if (param_2 == unaff_s4) {
        iVar2 = SPRINTF_OBJ_90();
        return iVar2;
      }
      if (param_2 == 0x23) {
        iVar2 = SPRINTF_OBJ_90();
        return iVar2;
      }
      if (param_2 == 0x30) {
        iVar2 = SPRINTF_OBJ_90();
        return iVar2;
      }
      param_1 = in_stack_0000024c + 2;
      if (param_2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_1C0(iVar2,*(undefined *)(in_stack_0000024c + 3));
        return iVar2;
      }
      while (param_2 - 0x30 < 10) {
        in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
        param_2 = (uint)*(byte *)(param_1 + 1);
        param_1 = param_1 + 1;
      }
      ppiVar9 = in_stack_00000220;
      in_stack_0000024c = param_1;
    } while (param_2 != 0x2e);
    param_2 = (uint)*(byte *)(param_1 + 1);
    iVar2 = param_1;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_260(param_1,*(undefined *)(param_1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar2 + 2);
      iVar2 = in_stack_0000024c;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x800389ec)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_2A4

int SPRINTF_OBJ_2A4(int param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int in_v1;
  undefined *puVar3;
  int *piVar4;
  uchar *puVar5;
  uint uVar6;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar8;
  int iVar9;
  int in_stack_0000024c;
  
  do {
    switch(in_v1) {
    case 0:
      iVar2 = SPRINTF_OBJ_2A4(param_1,*(undefined *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (param_2 == 0x25) goto SPRINTF_OBJ_764;
      goto SPRINTF_OBJ_824;
    case 0x17:
      *(byte *)((int)unaff_s1 + -1) = *(byte *)in_stack_00000220;
      iVar2 = SPRINTF_OBJ_770();
      return iVar2;
    case 0x18:
    case 0x1d:
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)(int)(short)piVar4;
      }
      if ((int)piVar4 < 0) {
        iVar2 = SPRINTF_OBJ_388(-(int)piVar4);
        return iVar2;
      }
      if ((in_stack_00000210 & 2) != 0) {
        iVar2 = SPRINTF_OBJ_388();
        return iVar2;
      }
      goto code_r0x80038ae0;
    case 0x1c:
      iVar2 = SPRINTF_OBJ_2EC();
      return iVar2;
    case 0x20:
      iVar2 = SPRINTF_OBJ_2EC();
      return iVar2;
    case 0x22:
      if ((in_stack_00000210 & 0x20) == 0) {
        **in_stack_00000220 = unaff_s2;
        iVar2 = SPRINTF_OBJ_804();
        return iVar2;
      }
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar2 = SPRINTF_OBJ_804();
      return iVar2;
    case 0x23:
      ppiVar8 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if ((in_stack_00000210 & 8) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((((in_stack_00000210 & 4) != 0) && (uVar6 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
        iVar2 = SPRINTF_OBJ_770();
        return iVar2;
      }
      break;
    case 0x24:
    case 0xc:
      iVar2 = SPRINTF_OBJ_590();
      return iVar2;
    case 0x27:
      ppiVar8 = in_stack_00000220 + 1;
      unaff_s1 = *in_stack_00000220;
      if ((in_stack_00000210 & 4) == 0) {
        if ((in_stack_00000210 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
        pvVar1 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
        uVar6 = (int)pvVar1 - (int)unaff_s1;
        if (pvVar1 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
      }
      else {
        uVar6 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar6)) {
          iVar2 = SPRINTF_OBJ_770();
          return iVar2;
        }
      }
      break;
    case 0x29:
      piVar4 = *in_stack_00000220;
      uVar6 = in_stack_00000210 & 0x20;
      in_stack_00000210 = in_stack_00000210 & 0xff;
      if (uVar6 != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
code_r0x80038ae0:
      ppiVar8 = in_stack_00000220 + 1;
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (char)(in_stack_00000210 >> 8) != '\0')) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      while (piVar4 != (int *)0x0) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar6 = uVar6 + 1;
        *(byte *)unaff_s1 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + 0x30;
        piVar4 = (int *)((uint)piVar4 / 10);
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
      }
      bVar7 = (byte)(in_stack_00000210 >> 8);
      if (bVar7 != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar7;
        iVar2 = SPRINTF_OBJ_770();
        return iVar2;
      }
      break;
    case 0x2c:
      ppiVar8 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x20) != 0) {
        piVar4 = (int *)((uint)piVar4 & 0xffff);
      }
      if ((in_stack_00000210 & 0x10) == 0) {
        if (((in_stack_00000210 & 8) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar6 = uVar6 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar4 & 0xf];
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
      }
      if ((in_stack_00000210 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = (byte)param_2;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar2 = SPRINTF_OBJ_770();
        return iVar2;
      }
    }
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,(uchar *)unaff_s1,uVar6);
    unaff_s2 = unaff_s2 + uVar6;
    if ((int)uVar6 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        uVar6 = uVar6 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
    }
    param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      iVar2 = SPRINTF_OBJ_804();
      return iVar2;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    param_2 = (uint)*(byte *)(in_stack_0000024c + 2);
    if (param_2 == unaff_s6) {
      iVar2 = SPRINTF_OBJ_90();
      return iVar2;
    }
    if (param_2 == unaff_s5) {
      iVar2 = SPRINTF_OBJ_90();
      return iVar2;
    }
    if (param_2 == unaff_s4) {
      iVar2 = SPRINTF_OBJ_90();
      return iVar2;
    }
    if (param_2 == 0x23) {
      iVar2 = SPRINTF_OBJ_90();
      return iVar2;
    }
    if (param_2 == 0x30) {
      iVar2 = SPRINTF_OBJ_90();
      return iVar2;
    }
    iVar2 = in_stack_0000024c + 2;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
      return iVar2;
    }
    while (param_2 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    }
    param_1 = in_stack_0000024c + 1;
    in_stack_0000024c = iVar2;
    if (param_2 == 0x2e) {
      param_2 = (uint)*(byte *)(iVar2 + 1);
      iVar9 = iVar2;
      if (param_2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_260(iVar2,*(undefined *)(iVar2 + 2));
        return iVar2;
      }
      while (in_stack_0000024c = iVar9 + 1, param_2 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
        param_2 = (uint)*(byte *)(iVar9 + 2);
        iVar9 = in_stack_0000024c;
      }
      param_1 = iVar2;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = 0x10;
      }
    }
    unaff_s1 = (int *)&stack0x00000210;
    in_v1 = param_2 - 0x4c;
    in_stack_00000220 = ppiVar8;
  } while( true );
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_2C8

void SPRINTF_OBJ_2C8(void)

{
  SPRINTF_OBJ_2EC();
  return;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_2D4

void SPRINTF_OBJ_2D4(void)

{
  SPRINTF_OBJ_2EC();
  return;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_2E0

void SPRINTF_OBJ_2E0(undefined4 param_1)

{
  int in_stack_0000024c;
  
  SPRINTF_OBJ_2A4(param_1,*(undefined *)(in_stack_0000024c + 1));
  return;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_2EC

void SPRINTF_OBJ_2EC(undefined4 param_1)

{
  int in_stack_0000024c;
  
  SPRINTF_OBJ_2A4(param_1,*(undefined *)(in_stack_0000024c + 1));
  return;
}



// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_30C

int SPRINTF_OBJ_30C(void)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  uchar *puVar6;
  char cVar7;
  uint uVar8;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uchar uVar9;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar10;
  int in_stack_0000024c;
  
code_r0x80038a64:
  piVar5 = *in_stack_00000220;
  if ((in_stack_00000210 & 0x20) != 0) {
    piVar5 = (int *)(int)(short)piVar5;
  }
  if ((int)piVar5 < 0) {
    iVar1 = SPRINTF_OBJ_388(-(int)piVar5);
    return iVar1;
  }
  if ((in_stack_00000210 & 2) != 0) {
    iVar1 = SPRINTF_OBJ_388();
    return iVar1;
  }
code_r0x80038ae0:
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (char)(in_stack_00000210 >> 8) != '\0')) {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar1 = 0;
  while (piVar5 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar1 = iVar1 + 1;
    *(uchar *)unaff_s1 = (char)piVar5 + (char)(int *)((uint)piVar5 / 10) * -10 + '0';
    piVar5 = (int *)((uint)piVar5 / 10);
  }
  if (iVar1 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000218);
  }
  uVar9 = (uchar)(in_stack_00000210 >> 8);
  if (uVar9 != '\0') {
    *(uchar *)((int)unaff_s1 + -1) = uVar9;
    iVar1 = SPRINTF_OBJ_770();
    return iVar1;
  }
  do {
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    if ((iVar1 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar1 < in_stack_00000214);
      puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar6,(uchar *)unaff_s1,iVar1);
    unaff_s2 = unaff_s2 + iVar1;
    if (iVar1 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar1 < in_stack_00000214);
    }
    cVar7 = *(char *)(in_stack_0000024c + 1);
    if (cVar7 == '\0') {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (cVar7 != '%') {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = cVar7;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    uVar8 = (uint)*(byte *)(in_stack_0000024c + 2);
    if (uVar8 == unaff_s6) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar8 == unaff_s5) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar8 == unaff_s4) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar8 == 0x23) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    if (uVar8 == 0x30) {
      iVar1 = SPRINTF_OBJ_90();
      return iVar1;
    }
    iVar1 = in_stack_0000024c + 2;
    if (uVar8 == 0x2a) {
      iVar1 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
      return iVar1;
    }
    while (uVar8 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar8;
      uVar8 = (uint)*(byte *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar4 = in_stack_0000024c + 1;
    in_stack_0000024c = iVar1;
    if (uVar8 == 0x2e) {
      uVar8 = (uint)*(byte *)(iVar1 + 1);
      iVar4 = iVar1;
      if (uVar8 == 0x2a) {
        iVar1 = SPRINTF_OBJ_260(iVar1,*(undefined *)(iVar1 + 2));
        return iVar1;
      }
      while (in_stack_0000024c = iVar4 + 1, uVar8 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar8;
        uVar8 = (uint)*(byte *)(iVar4 + 2);
        iVar4 = in_stack_0000024c;
      }
      iVar4 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = 0x10;
      }
    }
    cVar7 = (char)uVar8;
    unaff_s1 = (int *)&stack0x00000210;
    switch(uVar8) {
    case 0x4c:
      iVar1 = SPRINTF_OBJ_2A4(iVar4,*(undefined *)(in_stack_0000024c + 1));
      return iVar1;
    default:
      if (uVar8 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    case 100:
    case 0x69:
      goto code_r0x80038a64;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2EC();
      return iVar1;
    case 0x6e:
      **in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804();
      return iVar1;
    case 0x6f:
      piVar5 = *in_stack_00000220;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar1 = 0;
      for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar5 & 7) + 0x30;
        iVar1 = iVar1 + 1;
      }
      in_stack_00000220 = in_stack_00000220 + 1;
      if (iVar1 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(uchar *)unaff_s1 = '0';
          iVar1 = iVar1 + 1;
        } while (iVar1 < in_stack_00000218);
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x70:
    case 0x58:
      iVar1 = SPRINTF_OBJ_590();
      return iVar1;
    case 0x73:
      ppiVar10 = in_stack_00000220 + 1;
      unaff_s1 = *in_stack_00000220;
      if (in_stack_00000210 == 0) {
        strlen((char *)unaff_s1);
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      pvVar2 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
      iVar1 = (int)pvVar2 - (int)unaff_s1;
      in_stack_00000220 = ppiVar10;
      if (pvVar2 == (void *)0x0) {
        iVar1 = SPRINTF_OBJ_770();
        return iVar1;
      }
      break;
    case 0x75:
      goto SPRINTF_OBJ_35C;
    case 0x78:
      ppiVar10 = in_stack_00000220 + 1;
      piVar5 = *in_stack_00000220;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar1 = 0;
      for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        iVar1 = iVar1 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar5 & 0xf];
      }
      for (; in_stack_00000220 = ppiVar10, iVar1 < in_stack_00000218; iVar1 = iVar1 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
      }
    }
  } while( true );
SPRINTF_OBJ_35C:
  piVar5 = *in_stack_00000220;
  goto code_r0x80038ae0;
}



// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038c08)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_35C

int SPRINTF_OBJ_35C(void)

{
  uint uVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  uchar *puVar6;
  char cVar7;
  int iVar8;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uchar uVar9;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar10;
  int in_stack_0000024c;
  
code_r0x80038ab4:
  ppiVar10 = in_stack_00000220 + 1;
  piVar5 = *in_stack_00000220;
  uVar1 = in_stack_00000210 & 0x20;
  in_stack_00000210 = in_stack_00000210 & 0xff;
  if (uVar1 != 0) {
    piVar5 = (int *)((uint)piVar5 & 0xffff);
  }
code_r0x80038ae0:
  if ((in_stack_00000210 & 0x10) == 0) {
    if ((in_stack_00000210 & 8) != 0) {
      in_stack_00000218 = in_stack_00000214;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar8 = 0;
  while (piVar5 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar8 = iVar8 + 1;
    *(uchar *)unaff_s1 = (char)piVar5 + (char)(int *)((uint)piVar5 / 10) * -10 + '0';
    piVar5 = (int *)((uint)piVar5 / 10);
  }
  if (iVar8 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar8 = iVar8 + 1;
    } while (iVar8 < in_stack_00000218);
  }
  uVar9 = (uchar)(in_stack_00000210 >> 8);
  in_stack_00000220 = ppiVar10;
  if (uVar9 != '\0') {
    *(uchar *)((int)unaff_s1 + -1) = uVar9;
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  }
  do {
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    if ((iVar8 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < in_stack_00000214);
      puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar6,(uchar *)unaff_s1,iVar8);
    unaff_s2 = unaff_s2 + iVar8;
    if (iVar8 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        iVar8 = iVar8 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < in_stack_00000214);
    }
    cVar7 = *(char *)(in_stack_0000024c + 1);
    if (cVar7 == '\0') {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (cVar7 != '%') {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = cVar7;
      iVar8 = SPRINTF_OBJ_804();
      return iVar8;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    uVar1 = (uint)*(byte *)(in_stack_0000024c + 2);
    if (uVar1 == unaff_s6) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar1 == unaff_s5) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar1 == unaff_s4) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar1 == 0x23) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar1 == 0x30) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    iVar8 = in_stack_0000024c + 2;
    if (uVar1 == 0x2a) {
      iVar8 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
      return iVar8;
    }
    while (uVar1 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar1;
      uVar1 = (uint)*(byte *)(iVar8 + 1);
      iVar8 = iVar8 + 1;
    }
    iVar4 = in_stack_0000024c + 1;
    in_stack_0000024c = iVar8;
    if (uVar1 == 0x2e) {
      uVar1 = (uint)*(byte *)(iVar8 + 1);
      iVar4 = iVar8;
      if (uVar1 == 0x2a) {
        iVar8 = SPRINTF_OBJ_260(iVar8,*(undefined *)(iVar8 + 2));
        return iVar8;
      }
      while (in_stack_0000024c = iVar4 + 1, uVar1 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar1;
        uVar1 = (uint)*(byte *)(iVar4 + 2);
        iVar4 = in_stack_0000024c;
      }
      iVar4 = iVar8;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = 0x10;
      }
    }
    cVar7 = (char)uVar1;
    unaff_s1 = (int *)&stack0x00000210;
    switch(uVar1) {
    case 0x4c:
      iVar8 = SPRINTF_OBJ_2A4(iVar4,*(undefined *)(in_stack_0000024c + 1));
      return iVar8;
    default:
      if (uVar1 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar8 = SPRINTF_OBJ_770();
      return iVar8;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar8 = SPRINTF_OBJ_2EC();
      return iVar8;
    case 0x6c:
      iVar8 = SPRINTF_OBJ_2EC();
      return iVar8;
    case 0x6e:
      **in_stack_00000220 = unaff_s2;
      iVar8 = SPRINTF_OBJ_804();
      return iVar8;
    case 0x6f:
      piVar5 = *in_stack_00000220;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar8 = 0;
      for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar5 & 7) + 0x30;
        iVar8 = iVar8 + 1;
      }
      in_stack_00000220 = in_stack_00000220 + 1;
      if (iVar8 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(uchar *)unaff_s1 = '0';
          iVar8 = iVar8 + 1;
        } while (iVar8 < in_stack_00000218);
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      break;
    case 0x70:
    case 0x58:
      iVar8 = SPRINTF_OBJ_590();
      return iVar8;
    case 0x73:
      ppiVar10 = in_stack_00000220 + 1;
      unaff_s1 = *in_stack_00000220;
      if (in_stack_00000210 == 0) {
        strlen((char *)unaff_s1);
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      pvVar2 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
      iVar8 = (int)pvVar2 - (int)unaff_s1;
      in_stack_00000220 = ppiVar10;
      if (pvVar2 == (void *)0x0) {
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      break;
    case 0x75:
      goto code_r0x80038ab4;
    case 0x78:
      ppiVar10 = in_stack_00000220 + 1;
      piVar5 = *in_stack_00000220;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar8 = 0;
      for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        iVar8 = iVar8 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar5 & 0xf];
      }
      for (; in_stack_00000220 = ppiVar10, iVar8 < in_stack_00000218; iVar8 = iVar8 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
      }
    }
  } while( true );
SPRINTF_OBJ_30C:
  ppiVar10 = in_stack_00000220 + 1;
  piVar5 = *in_stack_00000220;
  if ((int)piVar5 < 0) {
    iVar8 = SPRINTF_OBJ_388(-(int)piVar5);
    return iVar8;
  }
  goto code_r0x80038ae0;
}



// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038c08)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_388

int SPRINTF_OBJ_388(int *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uchar uVar9;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar10;
  int **ppiVar11;
  int in_stack_0000024c;
  
code_r0x80038ae0:
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (char)(in_stack_00000210 >> 8) != '\0')) {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar8 = 0;
  while (param_1 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar8 = iVar8 + 1;
    *(uchar *)unaff_s1 = (char)param_1 + (char)(int *)((uint)param_1 / 10) * -10 + '0';
    param_1 = (int *)((uint)param_1 / 10);
  }
  if (iVar8 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar8 = iVar8 + 1;
    } while (iVar8 < in_stack_00000218);
  }
  uVar9 = (uchar)(in_stack_00000210 >> 8);
  ppiVar11 = in_stack_00000220;
  if (uVar9 != '\0') {
    *(uchar *)((int)unaff_s1 + -1) = uVar9;
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  }
  do {
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if ((iVar8 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar2 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar2 = (char)unaff_s4;
        puVar2 = puVar2 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < in_stack_00000214);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,(uchar *)unaff_s1,iVar8);
    unaff_s2 = unaff_s2 + iVar8;
    if (iVar8 < in_stack_00000214) {
      puVar2 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar2 = (char)unaff_s4;
        puVar2 = puVar2 + 1;
        iVar8 = iVar8 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < in_stack_00000214);
    }
    cVar6 = *(char *)(in_stack_0000024c + 1);
    if (cVar6 == '\0') {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (cVar6 != '%') {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = cVar6;
      iVar8 = SPRINTF_OBJ_804();
      return iVar8;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    uVar7 = (uint)*(byte *)(in_stack_0000024c + 2);
    if (uVar7 == unaff_s6) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar7 == unaff_s5) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar7 == unaff_s4) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar7 == 0x23) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    if (uVar7 == 0x30) {
      iVar8 = SPRINTF_OBJ_90();
      return iVar8;
    }
    iVar8 = in_stack_0000024c + 2;
    if (uVar7 == 0x2a) {
      iVar8 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
      return iVar8;
    }
    while (uVar7 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar7;
      uVar7 = (uint)*(byte *)(iVar8 + 1);
      iVar8 = iVar8 + 1;
    }
    iVar3 = in_stack_0000024c + 1;
    in_stack_0000024c = iVar8;
    if (uVar7 == 0x2e) {
      uVar7 = (uint)*(byte *)(iVar8 + 1);
      iVar3 = iVar8;
      if (uVar7 == 0x2a) {
        iVar8 = SPRINTF_OBJ_260(iVar8,*(undefined *)(iVar8 + 2));
        return iVar8;
      }
      while (in_stack_0000024c = iVar3 + 1, uVar7 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar7;
        uVar7 = (uint)*(byte *)(iVar3 + 2);
        iVar3 = in_stack_0000024c;
      }
      iVar3 = iVar8;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = 0x10;
      }
    }
    cVar6 = (char)uVar7;
    unaff_s1 = (int *)&stack0x00000210;
    switch(uVar7) {
    case 0x4c:
      iVar8 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
      return iVar8;
    default:
      if (uVar7 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar8 = SPRINTF_OBJ_770();
      return iVar8;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar8 = SPRINTF_OBJ_2EC();
      return iVar8;
    case 0x6c:
      iVar8 = SPRINTF_OBJ_2EC();
      return iVar8;
    case 0x6e:
      **ppiVar11 = unaff_s2;
      iVar8 = SPRINTF_OBJ_804();
      return iVar8;
    case 0x6f:
      piVar4 = *ppiVar11;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar8 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
        iVar8 = iVar8 + 1;
      }
      ppiVar11 = ppiVar11 + 1;
      if (iVar8 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(uchar *)unaff_s1 = '0';
          iVar8 = iVar8 + 1;
        } while (iVar8 < in_stack_00000218);
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      break;
    case 0x70:
    case 0x58:
      iVar8 = SPRINTF_OBJ_590();
      return iVar8;
    case 0x73:
      ppiVar10 = ppiVar11 + 1;
      unaff_s1 = *ppiVar11;
      if (in_stack_00000210 == 0) {
        strlen((char *)unaff_s1);
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      pvVar1 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
      iVar8 = (int)pvVar1 - (int)unaff_s1;
      ppiVar11 = ppiVar10;
      if (pvVar1 == (void *)0x0) {
        iVar8 = SPRINTF_OBJ_770();
        return iVar8;
      }
      break;
    case 0x75:
      in_stack_00000220 = ppiVar11 + 1;
      param_1 = *ppiVar11;
      goto code_r0x80038ae0;
    case 0x78:
      ppiVar10 = ppiVar11 + 1;
      piVar4 = *ppiVar11;
      if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
        in_stack_00000218 = 1;
      }
      iVar8 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        iVar8 = iVar8 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar4 & 0xf];
      }
      for (; ppiVar11 = ppiVar10, iVar8 < in_stack_00000218; iVar8 = iVar8 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
      }
    }
  } while( true );
SPRINTF_OBJ_30C:
  in_stack_00000220 = ppiVar11 + 1;
  param_1 = *ppiVar11;
  if ((int)param_1 < 0) {
    iVar8 = SPRINTF_OBJ_388(-(int)param_1);
    return iVar8;
  }
  goto code_r0x80038ae0;
}



// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_474

int SPRINTF_OBJ_474(void)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar9;
  int in_stack_0000024c;
  
code_r0x80038bcc:
  ppiVar9 = in_stack_00000220 + 1;
  piVar4 = *in_stack_00000220;
  if ((in_stack_00000210 & 0x20) != 0) {
    piVar4 = (int *)((uint)piVar4 & 0xffff);
  }
  if ((in_stack_00000210 & 0x10) == 0) {
    if ((in_stack_00000210 & 8) != 0) {
      in_stack_00000218 = in_stack_00000214;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar8 = 0;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
    iVar8 = iVar8 + 1;
  }
  if ((((in_stack_00000210 & 4) != 0) && (iVar8 != 0)) && (*(uchar *)unaff_s1 != '0')) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
    iVar8 = iVar8 + 1;
  }
  in_stack_00000220 = ppiVar9;
  if (iVar8 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar8 = iVar8 + 1;
    } while (iVar8 < in_stack_00000218);
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  }
code_r0x80038ec8:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if ((iVar8 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar8 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,(uchar *)unaff_s1,iVar8);
  unaff_s2 = unaff_s2 + iVar8;
  if (iVar8 < in_stack_00000214) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      iVar8 = iVar8 + 1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar8 < in_stack_00000214);
  }
  cVar6 = *(char *)(in_stack_0000024c + 1);
  if (cVar6 == '\0') {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (cVar6 != '%') {
SPRINTF_OBJ_764:
    *(char *)(unaff_s3 + unaff_s2) = cVar6;
    iVar8 = SPRINTF_OBJ_804();
    return iVar8;
  }
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  in_stack_00000218 = 0;
  uVar7 = (uint)*(byte *)(in_stack_0000024c + 2);
  if (uVar7 == unaff_s6) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == unaff_s5) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == unaff_s4) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == 0x23) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == 0x30) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  iVar8 = in_stack_0000024c + 2;
  if (uVar7 == 0x2a) {
    iVar8 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
    return iVar8;
  }
  while (uVar7 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar7;
    uVar7 = (uint)*(byte *)(iVar8 + 1);
    iVar8 = iVar8 + 1;
  }
  iVar3 = in_stack_0000024c + 1;
  in_stack_0000024c = iVar8;
  if (uVar7 == 0x2e) {
    uVar7 = (uint)*(byte *)(iVar8 + 1);
    iVar3 = iVar8;
    if (uVar7 == 0x2a) {
      iVar8 = SPRINTF_OBJ_260(iVar8,*(undefined *)(iVar8 + 2));
      return iVar8;
    }
    while (in_stack_0000024c = iVar3 + 1, uVar7 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar7;
      uVar7 = (uint)*(byte *)(iVar3 + 2);
      iVar3 = in_stack_0000024c;
    }
    iVar3 = iVar8;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = 0x10;
    }
  }
  cVar6 = (char)uVar7;
  unaff_s1 = (int *)&stack0x00000210;
  switch(uVar7) {
  case 0x4c:
    iVar8 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
    return iVar8;
  default:
    if (uVar7 != 0x25) goto SPRINTF_OBJ_824;
    goto SPRINTF_OBJ_764;
  case 99:
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  case 100:
  case 0x69:
    piVar4 = *in_stack_00000220;
    if ((int)piVar4 < 0) {
      iVar8 = SPRINTF_OBJ_388(-(int)piVar4);
      return iVar8;
    }
    break;
  case 0x68:
    iVar8 = SPRINTF_OBJ_2EC();
    return iVar8;
  case 0x6c:
    iVar8 = SPRINTF_OBJ_2EC();
    return iVar8;
  case 0x6e:
    **in_stack_00000220 = unaff_s2;
    iVar8 = SPRINTF_OBJ_804();
    return iVar8;
  case 0x6f:
    goto code_r0x80038bcc;
  case 0x70:
  case 0x58:
    iVar8 = SPRINTF_OBJ_590();
    return iVar8;
  case 0x73:
    ppiVar9 = in_stack_00000220 + 1;
    unaff_s1 = *in_stack_00000220;
    if (in_stack_00000210 == 0) {
      strlen((char *)unaff_s1);
      iVar8 = SPRINTF_OBJ_770();
      return iVar8;
    }
    pvVar1 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
    iVar8 = (int)pvVar1 - (int)unaff_s1;
    in_stack_00000220 = ppiVar9;
    if (pvVar1 == (void *)0x0) {
      iVar8 = SPRINTF_OBJ_770();
      return iVar8;
    }
    goto code_r0x80038ec8;
  case 0x75:
    piVar4 = *in_stack_00000220;
    break;
  case 0x78:
    goto SPRINTF_OBJ_588;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  iVar8 = 0;
  while (piVar4 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar8 = iVar8 + 1;
    *(uchar *)unaff_s1 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + '0';
    piVar4 = (int *)((uint)piVar4 / 10);
  }
  for (; iVar8 < in_stack_00000218; iVar8 = iVar8 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
  }
  goto code_r0x80038ec8;
SPRINTF_OBJ_588:
  ppiVar9 = in_stack_00000220 + 1;
  piVar4 = *in_stack_00000220;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  iVar8 = 0;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar8 = iVar8 + 1;
    *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar4 & 0xf];
  }
  for (; in_stack_00000220 = ppiVar9, iVar8 < in_stack_00000218; iVar8 = iVar8 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
  }
  goto code_r0x80038ec8;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_564

void SPRINTF_OBJ_564(void)

{
  SPRINTF_OBJ_590();
  return;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_578

void SPRINTF_OBJ_578(void)

{
  SPRINTF_OBJ_590();
  return;
}



// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_588

int SPRINTF_OBJ_588(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  int iVar7;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar8;
  int in_stack_0000024c;
  
code_r0x80038ce0:
  ppiVar8 = in_stack_00000220 + 1;
  piVar4 = *in_stack_00000220;
  if ((in_stack_00000210 & 0x20) != 0) {
    piVar4 = (int *)((uint)piVar4 & 0xffff);
  }
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar7 = 0;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar7 = iVar7 + 1;
    *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar4 & 0xf];
  }
  if (iVar7 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_stack_00000218);
  }
  in_stack_00000220 = ppiVar8;
  if ((in_stack_00000210 & 4) != 0) {
    *(uchar *)((int)unaff_s1 + -1) = (uchar)param_2;
    *(uchar *)((int)unaff_s1 + -2) = '0';
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
code_r0x80038ec8:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if ((iVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar7 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,(uchar *)unaff_s1,iVar7);
  unaff_s2 = unaff_s2 + iVar7;
  if (iVar7 < in_stack_00000214) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      iVar7 = iVar7 + 1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar7 < in_stack_00000214);
  }
  cVar6 = *(char *)(in_stack_0000024c + 1);
  if (cVar6 == '\0') {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (cVar6 != '%') {
SPRINTF_OBJ_764:
    *(char *)(unaff_s3 + unaff_s2) = cVar6;
    iVar7 = SPRINTF_OBJ_804();
    return iVar7;
  }
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  in_stack_00000218 = 0;
  param_2 = (uint)*(byte *)(in_stack_0000024c + 2);
  if (param_2 == unaff_s6) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == unaff_s5) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == unaff_s4) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == 0x23) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == 0x30) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  iVar7 = in_stack_0000024c + 2;
  if (param_2 == 0x2a) {
    iVar7 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
    return iVar7;
  }
  while (param_2 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (uint)*(byte *)(iVar7 + 1);
    iVar7 = iVar7 + 1;
  }
  iVar3 = in_stack_0000024c + 1;
  in_stack_0000024c = iVar7;
  if (param_2 == 0x2e) {
    param_2 = (uint)*(byte *)(iVar7 + 1);
    iVar3 = iVar7;
    if (param_2 == 0x2a) {
      iVar7 = SPRINTF_OBJ_260(iVar7,*(undefined *)(iVar7 + 2));
      return iVar7;
    }
    while (in_stack_0000024c = iVar3 + 1, param_2 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar3 + 2);
      iVar3 = in_stack_0000024c;
    }
    iVar3 = iVar7;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = 0x10;
    }
  }
  cVar6 = (char)param_2;
  unaff_s1 = (int *)&stack0x00000210;
  switch(param_2) {
  case 0x4c:
    iVar7 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
    return iVar7;
  default:
    if (param_2 != 0x25) goto SPRINTF_OBJ_824;
    goto SPRINTF_OBJ_764;
  case 99:
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  case 100:
  case 0x69:
    piVar4 = *in_stack_00000220;
    if ((int)piVar4 < 0) {
      iVar7 = SPRINTF_OBJ_388(-(int)piVar4);
      return iVar7;
    }
    break;
  case 0x68:
    iVar7 = SPRINTF_OBJ_2EC();
    return iVar7;
  case 0x6c:
    iVar7 = SPRINTF_OBJ_2EC();
    return iVar7;
  case 0x6e:
    **in_stack_00000220 = unaff_s2;
    iVar7 = SPRINTF_OBJ_804();
    return iVar7;
  case 0x6f:
    piVar4 = *in_stack_00000220;
    if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
      in_stack_00000218 = 1;
    }
    iVar7 = 0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
      iVar7 = iVar7 + 1;
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    if (iVar7 < in_stack_00000218) {
      do {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
        iVar7 = iVar7 + 1;
      } while (iVar7 < in_stack_00000218);
      iVar7 = SPRINTF_OBJ_770();
      return iVar7;
    }
    goto code_r0x80038ec8;
  case 0x70:
  case 0x58:
    iVar7 = SPRINTF_OBJ_590();
    return iVar7;
  case 0x73:
    goto SPRINTF_OBJ_6A0;
  case 0x75:
    piVar4 = *in_stack_00000220;
    break;
  case 0x78:
    goto code_r0x80038ce0;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  iVar7 = 0;
  while (piVar4 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar7 = iVar7 + 1;
    *(uchar *)unaff_s1 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + '0';
    piVar4 = (int *)((uint)piVar4 / 10);
  }
  for (; iVar7 < in_stack_00000218; iVar7 = iVar7 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
  }
  goto code_r0x80038ec8;
SPRINTF_OBJ_6A0:
  ppiVar8 = in_stack_00000220 + 1;
  unaff_s1 = *in_stack_00000220;
  if (in_stack_00000210 == 0) {
    strlen((char *)unaff_s1);
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
  pvVar1 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
  iVar7 = (int)pvVar1 - (int)unaff_s1;
  in_stack_00000220 = ppiVar8;
  if (pvVar1 == (void *)0x0) {
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
  goto code_r0x80038ec8;
}



// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_590

int SPRINTF_OBJ_590(undefined4 param_1,uint param_2,undefined4 param_3,char *param_4)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  int iVar7;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar8;
  int in_stack_0000024c;
  
code_r0x80038ce8:
  ppiVar8 = in_stack_00000220 + 1;
  piVar4 = *in_stack_00000220;
  if ((in_stack_00000210 & 0x20) != 0) {
    piVar4 = (int *)((uint)piVar4 & 0xffff);
  }
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 & 4) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  iVar7 = 0;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar7 = iVar7 + 1;
    *(char *)unaff_s1 = param_4[(uint)piVar4 & 0xf];
  }
  if (iVar7 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_stack_00000218);
  }
  in_stack_00000220 = ppiVar8;
  if ((in_stack_00000210 & 4) != 0) {
    *(uchar *)((int)unaff_s1 + -1) = (uchar)param_2;
    *(uchar *)((int)unaff_s1 + -2) = '0';
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
code_r0x80038ec8:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if ((iVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar7 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,(uchar *)unaff_s1,iVar7);
  unaff_s2 = unaff_s2 + iVar7;
  if (iVar7 < in_stack_00000214) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      iVar7 = iVar7 + 1;
      unaff_s2 = unaff_s2 + 1;
    } while (iVar7 < in_stack_00000214);
  }
  cVar6 = *(char *)(in_stack_0000024c + 1);
  if (cVar6 == '\0') {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (cVar6 != '%') {
SPRINTF_OBJ_764:
    *(char *)(unaff_s3 + unaff_s2) = cVar6;
    iVar7 = SPRINTF_OBJ_804();
    return iVar7;
  }
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  in_stack_00000218 = 0;
  param_2 = (uint)*(byte *)(in_stack_0000024c + 2);
  if (param_2 == unaff_s6) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == unaff_s5) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == unaff_s4) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == 0x23) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  if (param_2 == 0x30) {
    iVar7 = SPRINTF_OBJ_90();
    return iVar7;
  }
  iVar7 = in_stack_0000024c + 2;
  if (param_2 == 0x2a) {
    iVar7 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
    return iVar7;
  }
  while (param_2 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (uint)*(byte *)(iVar7 + 1);
    iVar7 = iVar7 + 1;
  }
  iVar3 = in_stack_0000024c + 1;
  in_stack_0000024c = iVar7;
  if (param_2 == 0x2e) {
    param_2 = (uint)*(byte *)(iVar7 + 1);
    iVar3 = iVar7;
    if (param_2 == 0x2a) {
      iVar7 = SPRINTF_OBJ_260(iVar7,*(undefined *)(iVar7 + 2));
      return iVar7;
    }
    while (in_stack_0000024c = iVar3 + 1, param_2 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar3 + 2);
      iVar3 = in_stack_0000024c;
    }
    iVar3 = iVar7;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = 0x10;
    }
  }
  cVar6 = (char)param_2;
  unaff_s1 = (int *)&stack0x00000210;
  switch(param_2) {
  case 0x4c:
    iVar7 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
    return iVar7;
  default:
    if (param_2 != 0x25) goto SPRINTF_OBJ_824;
    goto SPRINTF_OBJ_764;
  case 99:
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  case 100:
  case 0x69:
    piVar4 = *in_stack_00000220;
    if ((int)piVar4 < 0) {
      iVar7 = SPRINTF_OBJ_388(-(int)piVar4);
      return iVar7;
    }
    break;
  case 0x68:
    iVar7 = SPRINTF_OBJ_2EC();
    return iVar7;
  case 0x6c:
    iVar7 = SPRINTF_OBJ_2EC();
    return iVar7;
  case 0x6e:
    **in_stack_00000220 = unaff_s2;
    iVar7 = SPRINTF_OBJ_804();
    return iVar7;
  case 0x6f:
    piVar4 = *in_stack_00000220;
    if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
      in_stack_00000218 = 1;
    }
    iVar7 = 0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
      iVar7 = iVar7 + 1;
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    if (iVar7 < in_stack_00000218) {
      do {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
        iVar7 = iVar7 + 1;
      } while (iVar7 < in_stack_00000218);
      iVar7 = SPRINTF_OBJ_770();
      return iVar7;
    }
    goto code_r0x80038ec8;
  case 0x70:
  case 0x58:
    iVar7 = SPRINTF_OBJ_590();
    return iVar7;
  case 0x73:
    goto SPRINTF_OBJ_6A0;
  case 0x75:
    piVar4 = *in_stack_00000220;
    break;
  case 0x78:
    goto SPRINTF_OBJ_588;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  iVar7 = 0;
  while (piVar4 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    iVar7 = iVar7 + 1;
    *(uchar *)unaff_s1 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + '0';
    piVar4 = (int *)((uint)piVar4 / 10);
  }
  for (; iVar7 < in_stack_00000218; iVar7 = iVar7 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
  }
  goto code_r0x80038ec8;
SPRINTF_OBJ_588:
  param_4 = "0123456789abcdef";
  goto code_r0x80038ce8;
SPRINTF_OBJ_6A0:
  ppiVar8 = in_stack_00000220 + 1;
  unaff_s1 = *in_stack_00000220;
  if (in_stack_00000210 == 0) {
    strlen((char *)unaff_s1);
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
  pvVar1 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
  iVar7 = (int)pvVar1 - (int)unaff_s1;
  in_stack_00000220 = ppiVar8;
  if (pvVar1 == (void *)0x0) {
    iVar7 = SPRINTF_OBJ_770();
    return iVar7;
  }
  goto code_r0x80038ec8;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_680

void SPRINTF_OBJ_680(void)

{
  int unaff_s1;
  undefined *in_stack_00000220;
  
  *(undefined *)(unaff_s1 + -1) = *in_stack_00000220;
  SPRINTF_OBJ_770();
  return;
}



// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_6A0

int SPRINTF_OBJ_6A0(void)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  uchar *puVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar10;
  int in_stack_0000024c;
  
code_r0x80038df8:
  ppiVar10 = in_stack_00000220 + 1;
  piVar9 = *in_stack_00000220;
  if ((in_stack_00000210 & 4) == 0) {
    if ((in_stack_00000210 & 0x10) == 0) {
      strlen((char *)piVar9);
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    }
    pvVar2 = memchr((uchar *)piVar9,'\0',in_stack_00000218);
    uVar8 = (int)pvVar2 - (int)piVar9;
    in_stack_00000220 = ppiVar10;
    if (pvVar2 == (void *)0x0) {
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    }
  }
  else {
    uVar8 = (uint)*(byte *)piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    in_stack_00000220 = ppiVar10;
    if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar8)) {
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    }
  }
code_r0x80038ec8:
  puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar8 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar3 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar3 = (char)unaff_s4;
      puVar3 = puVar3 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar8 < in_stack_00000214);
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar6,(uchar *)piVar9,uVar8);
  unaff_s2 = unaff_s2 + uVar8;
  if ((int)uVar8 < in_stack_00000214) {
    puVar3 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar3 = (char)unaff_s4;
      puVar3 = puVar3 + 1;
      uVar8 = uVar8 + 1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar8 < in_stack_00000214);
  }
  cVar7 = *(char *)(in_stack_0000024c + 1);
  if (cVar7 == '\0') {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (cVar7 != '%') {
SPRINTF_OBJ_764:
    *(char *)(unaff_s3 + unaff_s2) = cVar7;
    iVar1 = SPRINTF_OBJ_804();
    return iVar1;
  }
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  in_stack_00000218 = 0;
  uVar8 = (uint)*(byte *)(in_stack_0000024c + 2);
  if (uVar8 == unaff_s6) {
    iVar1 = SPRINTF_OBJ_90();
    return iVar1;
  }
  if (uVar8 == unaff_s5) {
    iVar1 = SPRINTF_OBJ_90();
    return iVar1;
  }
  if (uVar8 == unaff_s4) {
    iVar1 = SPRINTF_OBJ_90();
    return iVar1;
  }
  if (uVar8 == 0x23) {
    iVar1 = SPRINTF_OBJ_90();
    return iVar1;
  }
  if (uVar8 == 0x30) {
    iVar1 = SPRINTF_OBJ_90();
    return iVar1;
  }
  iVar1 = in_stack_0000024c + 2;
  if (uVar8 == 0x2a) {
    iVar1 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
    return iVar1;
  }
  while (uVar8 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar8;
    uVar8 = (uint)*(byte *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar4 = in_stack_0000024c + 1;
  in_stack_0000024c = iVar1;
  if (uVar8 == 0x2e) {
    uVar8 = (uint)*(byte *)(iVar1 + 1);
    iVar4 = iVar1;
    if (uVar8 == 0x2a) {
      iVar1 = SPRINTF_OBJ_260(iVar1,*(undefined *)(iVar1 + 2));
      return iVar1;
    }
    while (in_stack_0000024c = iVar4 + 1, uVar8 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar8;
      uVar8 = (uint)*(byte *)(iVar4 + 2);
      iVar4 = in_stack_0000024c;
    }
    iVar4 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = 0x10;
    }
  }
  cVar7 = (char)uVar8;
  piVar9 = (int *)&stack0x00000210;
  switch(uVar8) {
  case 0x4c:
    iVar1 = SPRINTF_OBJ_2A4(iVar4,*(undefined *)(in_stack_0000024c + 1));
    return iVar1;
  default:
    if (uVar8 != 0x25) goto SPRINTF_OBJ_824;
    goto SPRINTF_OBJ_764;
  case 99:
    iVar1 = SPRINTF_OBJ_770();
    return iVar1;
  case 100:
  case 0x69:
    piVar5 = *in_stack_00000220;
    if ((int)piVar5 < 0) {
      iVar1 = SPRINTF_OBJ_388(-(int)piVar5);
      return iVar1;
    }
    break;
  case 0x68:
    iVar1 = SPRINTF_OBJ_2EC();
    return iVar1;
  case 0x6c:
    iVar1 = SPRINTF_OBJ_2EC();
    return iVar1;
  case 0x6e:
    **in_stack_00000220 = unaff_s2;
    iVar1 = SPRINTF_OBJ_804();
    return iVar1;
  case 0x6f:
    piVar5 = *in_stack_00000220;
    if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
      in_stack_00000218 = 1;
    }
    uVar8 = 0;
    for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 3)) {
      piVar9 = (int *)((int)piVar9 + -1);
      *(byte *)piVar9 = ((byte)piVar5 & 7) + 0x30;
      uVar8 = uVar8 + 1;
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((int)uVar8 < in_stack_00000218) {
      do {
        piVar9 = (int *)((int)piVar9 + -1);
        *(byte *)piVar9 = 0x30;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < in_stack_00000218);
      iVar1 = SPRINTF_OBJ_770();
      return iVar1;
    }
    goto code_r0x80038ec8;
  case 0x70:
  case 0x58:
    iVar1 = SPRINTF_OBJ_590();
    return iVar1;
  case 0x73:
    goto code_r0x80038df8;
  case 0x75:
    piVar5 = *in_stack_00000220;
    break;
  case 0x78:
    goto SPRINTF_OBJ_588;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  uVar8 = 0;
  while (piVar5 != (int *)0x0) {
    piVar9 = (int *)((int)piVar9 + -1);
    uVar8 = uVar8 + 1;
    *(byte *)piVar9 = (char)piVar5 + (char)(int *)((uint)piVar5 / 10) * -10 + 0x30;
    piVar5 = (int *)((uint)piVar5 / 10);
  }
  for (; (int)uVar8 < in_stack_00000218; uVar8 = uVar8 + 1) {
    piVar9 = (int *)((int)piVar9 + -1);
    *(byte *)piVar9 = 0x30;
  }
  goto code_r0x80038ec8;
SPRINTF_OBJ_588:
  ppiVar10 = in_stack_00000220 + 1;
  piVar5 = *in_stack_00000220;
  if ((in_stack_00000210 == 0) && (in_stack_00000218 < 1)) {
    in_stack_00000218 = 1;
  }
  uVar8 = 0;
  for (; piVar5 != (int *)0x0; piVar5 = (int *)((uint)piVar5 >> 4)) {
    piVar9 = (int *)((int)piVar9 + -1);
    uVar8 = uVar8 + 1;
    *(char *)piVar9 = "0123456789abcdef"[(uint)piVar5 & 0xf];
  }
  for (; in_stack_00000220 = ppiVar10, (int)uVar8 < in_stack_00000218; uVar8 = uVar8 + 1) {
    piVar9 = (int *)((int)piVar9 + -1);
    *(byte *)piVar9 = 0x30;
  }
  goto code_r0x80038ec8;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_724

void SPRINTF_OBJ_724(void)

{
  undefined4 unaff_s2;
  uint in_stack_00000210;
  undefined4 *in_stack_00000220;
  
  if ((in_stack_00000210 & 0x20) != 0) {
    *(short *)(undefined4 *)*in_stack_00000220 = (short)unaff_s2;
    SPRINTF_OBJ_804();
    return;
  }
  *(undefined4 *)*in_stack_00000220 = unaff_s2;
  SPRINTF_OBJ_804();
  return;
}



// Possible SPRINTF.OBJ/SPRINTF_OBJ_758

void SPRINTF_OBJ_758(undefined4 param_1,int param_2)

{
  int unaff_s2;
  int unaff_s3;
  
  if (param_2 == 0x25) {
    *(undefined *)(unaff_s3 + unaff_s2) = 0x25;
    SPRINTF_OBJ_804();
    return;
  }
  *(undefined *)(unaff_s3 + unaff_s2) = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_770

int SPRINTF_OBJ_770(void)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  uint uVar7;
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int iVar8;
  int **ppiVar9;
  int **in_stack_00000220;
  int iVar10;
  int in_stack_0000024c;
  
code_r0x80038ec8:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if ((unaff_s0 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while (unaff_s0 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,(uchar *)unaff_s1,unaff_s0);
  unaff_s2 = unaff_s2 + unaff_s0;
  if (unaff_s0 < in_stack_00000214) {
    puVar2 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar2 = (char)unaff_s4;
      puVar2 = puVar2 + 1;
      unaff_s0 = unaff_s0 + 1;
      unaff_s2 = unaff_s2 + 1;
    } while (unaff_s0 < in_stack_00000214);
  }
  cVar6 = *(char *)(in_stack_0000024c + 1);
  if (cVar6 == '\0') {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (cVar6 != '%') {
SPRINTF_OBJ_764:
    *(char *)(unaff_s3 + unaff_s2) = cVar6;
    iVar8 = SPRINTF_OBJ_804();
    return iVar8;
  }
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  iVar8 = 0;
  uVar7 = (uint)*(byte *)(in_stack_0000024c + 2);
  if (uVar7 == unaff_s6) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == unaff_s5) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == unaff_s4) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == 0x23) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  if (uVar7 == 0x30) {
    iVar8 = SPRINTF_OBJ_90();
    return iVar8;
  }
  iVar10 = in_stack_0000024c + 2;
  if (uVar7 == 0x2a) {
    iVar8 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
    return iVar8;
  }
  while (uVar7 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar7;
    uVar7 = (uint)*(byte *)(iVar10 + 1);
    iVar10 = iVar10 + 1;
  }
  iVar3 = in_stack_0000024c + 1;
  in_stack_0000024c = iVar10;
  if (uVar7 == 0x2e) {
    uVar7 = (uint)*(byte *)(iVar10 + 1);
    iVar3 = iVar10;
    if (uVar7 == 0x2a) {
      iVar8 = SPRINTF_OBJ_260(iVar10,*(undefined *)(iVar10 + 2));
      return iVar8;
    }
    while (in_stack_0000024c = iVar3 + 1, uVar7 - 0x30 < 10) {
      iVar8 = iVar8 * 10 + -0x30 + uVar7;
      uVar7 = (uint)*(byte *)(iVar3 + 2);
      iVar3 = in_stack_0000024c;
    }
    iVar3 = iVar10;
    if (-1 < iVar8) {
      in_stack_00000210 = 0x10;
    }
  }
  cVar6 = (char)uVar7;
  unaff_s1 = (int *)&stack0x00000210;
  switch(uVar7) {
  case 0x4c:
    iVar8 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
    return iVar8;
  default:
    if (uVar7 != 0x25) goto SPRINTF_OBJ_824;
    goto SPRINTF_OBJ_764;
  case 99:
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  case 100:
  case 0x69:
    piVar4 = *in_stack_00000220;
    if ((int)piVar4 < 0) {
      iVar8 = SPRINTF_OBJ_388(-(int)piVar4);
      return iVar8;
    }
    break;
  case 0x68:
    iVar8 = SPRINTF_OBJ_2EC();
    return iVar8;
  case 0x6c:
    iVar8 = SPRINTF_OBJ_2EC();
    return iVar8;
  case 0x6e:
    **in_stack_00000220 = unaff_s2;
    iVar8 = SPRINTF_OBJ_804();
    return iVar8;
  case 0x6f:
    piVar4 = *in_stack_00000220;
    if ((in_stack_00000210 == 0) && (iVar8 < 1)) {
      iVar8 = 1;
    }
    unaff_s0 = 0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = ((byte)piVar4 & 7) + 0x30;
      unaff_s0 = unaff_s0 + 1;
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    if (unaff_s0 < iVar8) {
      do {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(uchar *)unaff_s1 = '0';
        unaff_s0 = unaff_s0 + 1;
      } while (unaff_s0 < iVar8);
      iVar8 = SPRINTF_OBJ_770();
      return iVar8;
    }
    goto code_r0x80038ec8;
  case 0x70:
  case 0x58:
    iVar8 = SPRINTF_OBJ_590();
    return iVar8;
  case 0x73:
    goto SPRINTF_OBJ_6A0;
  case 0x75:
    piVar4 = *in_stack_00000220;
    break;
  case 0x78:
    ppiVar9 = in_stack_00000220 + 1;
    piVar4 = *in_stack_00000220;
    if ((in_stack_00000210 == 0) && (iVar8 < 1)) {
      iVar8 = 1;
    }
    unaff_s0 = 0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      unaff_s0 = unaff_s0 + 1;
      *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar4 & 0xf];
    }
    for (; in_stack_00000220 = ppiVar9, unaff_s0 < iVar8; unaff_s0 = unaff_s0 + 1) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(uchar *)unaff_s1 = '0';
    }
    goto code_r0x80038ec8;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 == 0) && (iVar8 < 1)) {
    iVar8 = 1;
  }
  unaff_s0 = 0;
  while (piVar4 != (int *)0x0) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    unaff_s0 = unaff_s0 + 1;
    *(uchar *)unaff_s1 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + '0';
    piVar4 = (int *)((uint)piVar4 / 10);
  }
  for (; unaff_s0 < iVar8; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(uchar *)unaff_s1 = '0';
  }
  goto code_r0x80038ec8;
SPRINTF_OBJ_6A0:
  ppiVar9 = in_stack_00000220 + 1;
  unaff_s1 = *in_stack_00000220;
  if (in_stack_00000210 == 0) {
    strlen((char *)unaff_s1);
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  }
  pvVar1 = memchr((uchar *)unaff_s1,'\0',iVar8);
  unaff_s0 = (int)pvVar1 - (int)unaff_s1;
  in_stack_00000220 = ppiVar9;
  if (pvVar1 == (void *)0x0) {
    iVar8 = SPRINTF_OBJ_770();
    return iVar8;
  }
  goto code_r0x80038ec8;
}



// WARNING: Removing unreachable block (ram,0x80038c60)
// WARNING: Removing unreachable block (ram,0x80038c68)
// WARNING: Removing unreachable block (ram,0x80038c78)
// WARNING: Removing unreachable block (ram,0x80038a8c)
// WARNING: Removing unreachable block (ram,0x80038c08)
// WARNING: Removing unreachable block (ram,0x80038d10)
// WARNING: Removing unreachable block (ram,0x80038adc)
// WARNING: Removing unreachable block (ram,0x800389ec)
// WARNING: Removing unreachable block (ram,0x80038e1c)
// WARNING: Removing unreachable block (ram,0x80038e28)
// WARNING: Removing unreachable block (ram,0x80038e3c)
// WARNING: Removing unreachable block (ram,0x80038bf4)
// WARNING: Removing unreachable block (ram,0x80038aac)
// WARNING: Removing unreachable block (ram,0x80038ea0)
// WARNING: Removing unreachable block (ram,0x80038dc0)
// WARNING: Removing unreachable block (ram,0x80038d24)
// WARNING: Removing unreachable block (ram,0x80038d30)
// WARNING: Removing unreachable block (ram,0x80038afc)
// WARNING: Removing unreachable block (ram,0x80038b10)
// WARNING: Removing unreachable block (ram,0x80038bb8)
// Possible SPRINTF.OBJ/SPRINTF_OBJ_804

int SPRINTF_OBJ_804(void)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint uVar10;
  int iVar11;
  int iVar12;
  int **ppiVar13;
  int **in_stack_00000220;
  int in_stack_0000024c;
  
  while( true ) {
    cVar6 = *(char *)(in_stack_0000024c + 1);
    if (cVar6 == '\0') break;
    if (cVar6 != '%') {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = cVar6;
      iVar12 = SPRINTF_OBJ_804();
      return iVar12;
    }
    uVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    uVar7 = (uint)*(byte *)(in_stack_0000024c + 2);
    if (uVar7 == unaff_s6) {
      iVar12 = SPRINTF_OBJ_90();
      return iVar12;
    }
    if (uVar7 == unaff_s5) {
      iVar12 = SPRINTF_OBJ_90();
      return iVar12;
    }
    if (uVar7 == unaff_s4) {
      iVar12 = SPRINTF_OBJ_90();
      return iVar12;
    }
    if (uVar7 == 0x23) {
      iVar12 = SPRINTF_OBJ_90();
      return iVar12;
    }
    if (uVar7 == 0x30) {
      iVar12 = SPRINTF_OBJ_90();
      return iVar12;
    }
    iVar8 = in_stack_0000024c + 2;
    if (uVar7 == 0x2a) {
      iVar12 = SPRINTF_OBJ_1C0(in_stack_0000024c + 1,*(undefined *)(in_stack_0000024c + 3));
      return iVar12;
    }
    while (uVar7 - 0x30 < 10) {
      iVar11 = iVar11 * 10 + -0x30 + uVar7;
      uVar7 = (uint)*(byte *)(iVar8 + 1);
      iVar8 = iVar8 + 1;
    }
    iVar3 = in_stack_0000024c + 1;
    in_stack_0000024c = iVar8;
    if (uVar7 == 0x2e) {
      uVar7 = (uint)*(byte *)(iVar8 + 1);
      iVar3 = iVar8;
      if (uVar7 == 0x2a) {
        iVar12 = SPRINTF_OBJ_260(iVar8,*(undefined *)(iVar8 + 2));
        return iVar12;
      }
      while (in_stack_0000024c = iVar3 + 1, uVar7 - 0x30 < 10) {
        iVar12 = iVar12 * 10 + -0x30 + uVar7;
        uVar7 = (uint)*(byte *)(iVar3 + 2);
        iVar3 = in_stack_0000024c;
      }
      iVar3 = iVar8;
      if (-1 < iVar12) {
        uVar10 = 0x10;
      }
    }
    cVar6 = (char)uVar7;
    piVar9 = (int *)&stack0x00000210;
    switch(uVar7) {
    case 0x4c:
      iVar12 = SPRINTF_OBJ_2A4(iVar3,*(undefined *)(in_stack_0000024c + 1));
      return iVar12;
    default:
      if (uVar7 == 0x25) goto SPRINTF_OBJ_764;
      goto SPRINTF_OBJ_824;
    case 99:
      iVar12 = SPRINTF_OBJ_770();
      return iVar12;
    case 100:
    case 0x69:
      piVar4 = *in_stack_00000220;
      if ((int)piVar4 < 0) {
        iVar12 = SPRINTF_OBJ_388(-(int)piVar4);
        return iVar12;
      }
      goto code_r0x80038ae0;
    case 0x68:
      iVar12 = SPRINTF_OBJ_2EC();
      return iVar12;
    case 0x6c:
      iVar12 = SPRINTF_OBJ_2EC();
      return iVar12;
    case 0x6e:
      **in_stack_00000220 = unaff_s2;
      iVar12 = SPRINTF_OBJ_804();
      return iVar12;
    case 0x6f:
      ppiVar13 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((uVar10 == 0) && (iVar12 < 1)) {
        iVar12 = 1;
      }
      iVar8 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 3)) {
        piVar9 = (int *)((int)piVar9 + -1);
        *(byte *)piVar9 = ((byte)piVar4 & 7) + 0x30;
        iVar8 = iVar8 + 1;
      }
      if (iVar8 < iVar12) {
        do {
          piVar9 = (int *)((int)piVar9 + -1);
          *(uchar *)piVar9 = '0';
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar12);
        iVar12 = SPRINTF_OBJ_770();
        return iVar12;
      }
      break;
    case 0x70:
    case 0x58:
      iVar12 = SPRINTF_OBJ_590();
      return iVar12;
    case 0x73:
      ppiVar13 = in_stack_00000220 + 1;
      piVar9 = *in_stack_00000220;
      if (uVar10 == 0) {
        strlen((char *)piVar9);
        iVar12 = SPRINTF_OBJ_770();
        return iVar12;
      }
      pvVar1 = memchr((uchar *)piVar9,'\0',iVar12);
      iVar8 = (int)pvVar1 - (int)piVar9;
      if (pvVar1 == (void *)0x0) {
        iVar12 = SPRINTF_OBJ_770();
        return iVar12;
      }
      break;
    case 0x75:
      piVar4 = *in_stack_00000220;
code_r0x80038ae0:
      ppiVar13 = in_stack_00000220 + 1;
      if ((uVar10 == 0) && (iVar12 < 1)) {
        iVar12 = 1;
      }
      iVar8 = 0;
      while (piVar4 != (int *)0x0) {
        piVar9 = (int *)((int)piVar9 + -1);
        iVar8 = iVar8 + 1;
        *(uchar *)piVar9 = (char)piVar4 + (char)(int *)((uint)piVar4 / 10) * -10 + '0';
        piVar4 = (int *)((uint)piVar4 / 10);
      }
      for (; iVar8 < iVar12; iVar8 = iVar8 + 1) {
        piVar9 = (int *)((int)piVar9 + -1);
        *(uchar *)piVar9 = '0';
      }
      break;
    case 0x78:
      ppiVar13 = in_stack_00000220 + 1;
      piVar4 = *in_stack_00000220;
      if ((uVar10 == 0) && (iVar12 < 1)) {
        iVar12 = 1;
      }
      iVar8 = 0;
      for (; piVar4 != (int *)0x0; piVar4 = (int *)((uint)piVar4 >> 4)) {
        piVar9 = (int *)((int)piVar9 + -1);
        iVar8 = iVar8 + 1;
        *(char *)piVar9 = "0123456789abcdef"[(uint)piVar4 & 0xf];
      }
      for (; iVar8 < iVar12; iVar8 = iVar8 + 1) {
        piVar9 = (int *)((int)piVar9 + -1);
        *(uchar *)piVar9 = '0';
      }
    }
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if ((iVar8 < iVar11) && ((uVar10 & 1) == 0)) {
      puVar2 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar2 = (char)unaff_s4;
        puVar2 = puVar2 + 1;
        iVar11 = iVar11 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < iVar11);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,(uchar *)piVar9,iVar8);
    unaff_s2 = unaff_s2 + iVar8;
    in_stack_00000220 = ppiVar13;
    if (iVar8 < iVar11) {
      puVar2 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar2 = (char)unaff_s4;
        puVar2 = puVar2 + 1;
        iVar8 = iVar8 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar8 < iVar11);
    }
  }
SPRINTF_OBJ_824:
  *(undefined *)(unaff_s3 + unaff_s2) = 0;
  return unaff_s2;
}



void * memchr(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



void * memmove(uchar *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  uchar uVar2;
  uchar *puVar3;
  int iVar4;
  uchar *puVar5;
  
  if (param_1 < param_2) {
    iVar4 = param_3 + -1;
    if (0 < param_3) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        bVar1 = 0 < iVar4;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar4 = param_3 + -1;
    if (0 < param_3) {
      puVar5 = param_1 + iVar4;
      puVar3 = param_2 + iVar4;
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + -1;
        *puVar5 = uVar2;
        bVar1 = 0 < iVar4;
        puVar5 = puVar5 + -1;
        iVar4 = iVar4 + -1;
      } while (bVar1);
      puVar3 = (uchar *)MEMMOVE_OBJ_64();
      return puVar3;
    }
  }
  return param_1;
}



undefined4 MEMMOVE_OBJ_64(undefined4 param_1)

{
  return param_1;
}



void InitHeap(ulong *param_1,ulong param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void FlushCache(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void GPU_cw(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void CdRemove(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void SetMemSize(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void DeliverEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void OpenEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A09.OBJ/CloseEvent

void CloseEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void TestEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void EnableEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A13.OBJ/DisableEvent

void DisableEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ReturnFromException(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void SetDefaultExitFromException(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void SetCustomExitFromException(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void EnterCriticalSection(void)

{
  syscall(0);
  return;
}



void ExitCriticalSection(void)

{
  syscall(0);
  return;
}



// Possible A39.OBJ/SetSp

void SetSp(void)

{
  return;
}



void SwEnterCriticalSection(void)

{
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  return;
}



void SwExitCriticalSection(void)

{
  setCopReg(0,Status,Status | 0x401,0);
  return;
}



// Possible A50.OBJ/open

void open(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A51.OBJ/lseek

void lseek(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A52.OBJ/read

void read(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A53.OBJ/write

void write(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A54.OBJ/close

void close(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A65.OBJ/format

void format(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A66.OBJ/firstfile

void firstfile(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A67.OBJ/nextfile

void nextfile(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A69.OBJ/erase

void erase(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ChangeClearPad(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ChangeClearRCnt(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000c0)();
  return;
}



undefined4 SetRCnt(uint param_1,undefined2 param_2,uint param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  
  param_1 = param_1 & 0xffff;
  uVar2 = 0x48;
  if (2 < param_1) {
    uVar1 = COUNTER_OBJ_98();
    return uVar1;
  }
  *(undefined2 *)(&TMR_DOTCLOCK_MODE + param_1 * 4) = 0;
  *(undefined2 *)(&TMR_DOTCLOCK_MAX + param_1 * 4) = param_2;
  if (param_1 < 2) {
    uVar2 = 0x48;
    if ((param_3 & 0x10) != 0) {
      uVar2 = 0x49;
    }
    if ((param_3 & 1) == 0) {
      uVar1 = COUNTER_OBJ_74();
      return uVar1;
    }
  }
  else {
    if ((param_1 == 2) && ((param_3 & 1) == 0)) {
      uVar2 = 0x248;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  *(ushort *)(&TMR_DOTCLOCK_MODE + param_1 * 4) = uVar2;
  return 1;
}



undefined4 COUNTER_OBJ_74(void)

{
  int in_v0;
  ushort in_a3;
  int in_t0;
  
  if (in_v0 != 0) {
    in_a3 = in_a3 | 0x10;
  }
  *(ushort *)(&TMR_DOTCLOCK_MODE + in_t0 * 4) = in_a3;
  return 1;
}



void COUNTER_OBJ_98(void)

{
  return;
}



undefined4 GetRCnt(ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = COUNTER_OBJ_D0();
    return uVar1;
  }
  return 0;
}



void COUNTER_OBJ_D0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool StartRCnt(uint param_1)

{
  _I_MASK = _I_MASK | *(uint *)(&DAT_80054c50 + (param_1 & 0xffff) * 4);
  return (param_1 & 0xffff) < 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 StopRCnt(uint param_1)

{
  _I_MASK = ~*(uint *)(&DAT_80054c50 + (param_1 & 0xffff) * 4) & _I_MASK;
  return 1;
}



undefined4 ResetRCnt(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xffff) < 3) {
    *(undefined2 *)(&TMR_DOTCLOCK_VAL + (param_1 & 0xffff) * 4) = 0;
    uVar1 = COUNTER_OBJ_170();
    return uVar1;
  }
  return 0;
}



void COUNTER_OBJ_170(void)

{
  return;
}



void PAD_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _patch_pad();
  ChangeClearPad(0);
  OutdatedPadInitAndStart(param_1,param_2,param_3,param_4);
  return;
}



void InitPAD(char *bufA,long lenA,char *bufB,long lenB)

{
  _patch_pad();
  ChangeClearPad(0);
  InitPad(bufA,lenA,bufB,lenB);
  return;
}



void StartPAD(void)

{
  StartPad();
  ChangeClearPad(0);
  return;
}



void InitPad(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StartPad(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void OutdatedPadInitAndStart(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void _patch_pad(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  DAT_80054ccc = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar2 != 0);
  FlushCache();
  return;
}


