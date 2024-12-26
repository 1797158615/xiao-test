/* Provide Declarations */
#include <stdint.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __PREFIXALIGN__(X) __declspec(align(X))
#define __POSTFIXALIGN__(X)
#else
#define __PREFIXALIGN__(X)
#define __POSTFIXALIGN__(X) __attribute__((aligned(X)))
#endif



/* Global Declarations */

/* Types Declarations */
struct l_array_5_uint32_t;
struct l_array_16_uint32_t;
struct l_struct_struct_OC_SHA_INFO;
struct l_array_26_uint8_t;
struct l_array_30_uint8_t;
struct l_array_4_uint8_t;
struct l_array_80_uint32_t;
struct l_array_8192_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_5_uint32_t {
  uint32_t array[5];
};
struct l_array_16_uint32_t {
  uint32_t array[16];
};
struct l_struct_struct_OC_SHA_INFO {
  struct l_array_5_uint32_t field0;
  uint32_t field1;
  uint32_t field2;
  struct l_array_16_uint32_t field3;
};
struct l_array_26_uint8_t {
  uint8_t array[26];
};
struct l_array_30_uint8_t {
  uint8_t array[30];
};
struct l_array_4_uint8_t {
  uint8_t array[4];
};
struct l_array_80_uint32_t {
  uint32_t array[80];
};
struct l_array_8192_uint8_t {
  uint8_t array[8192];
};

/* Global Variable Declarations */
const static struct l_array_26_uint8_t _OC_str;
const static struct l_array_30_uint8_t _OC_str_OC_1;

/* Function Declarations */
void sha_init(void* _1) __ATTRIBUTELIST__((noinline, nothrow));
void sha_update(void* _10, void* _11, uint32_t _12) __ATTRIBUTELIST__((noinline, nothrow));
static void byte_reverse(void* _49, uint32_t _50) __ATTRIBUTELIST__((noinline, nothrow));
static void sha_transform(void* _82) __ATTRIBUTELIST__((noinline, nothrow));
void sha_final(void* _231) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t sha_stream(void* _265, void* _266) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t read(uint32_t _321, void* _322, uint64_t _323);
void sha_print(void* _282) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(void* _324, ...);
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t open(void* _325, uint32_t _326, ...);
uint32_t close(uint32_t _327);
void* memcpy(void* _328, void* _329, uint64_t _330);
void* memset(void* _331, uint32_t _332, uint64_t _333);


/* Global Variable Definitions and Initialization */
static const struct l_array_26_uint8_t _OC_str = { "%08x %08x %08x %08x %08x\n" };
static const struct l_array_30_uint8_t _OC_str_OC_1 = { "error opening %s for reading\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_sub_u32(uint32_t a, uint32_t b) {
  uint32_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_udiv_u64(uint64_t a, uint64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

void sha_init(void* _1) {
  void* _2;    /* Address-exposed local */
  void* _3;
  void* _4;
  void* _5;
  void* _6;
  void* _7;
  void* _8;
  void* _9;

  _2 = _1;
#line 137 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 139 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _3 = _2;
  *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_3)->field0)))))->array[((int64_t)0)]))) = 1732584193u;
#line 140 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _4 = _2;
  *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_4)->field0)))))->array[((int64_t)1)]))) = -271733879;
#line 141 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _5 = _2;
  *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_5)->field0)))))->array[((int64_t)2)]))) = 2562383102u;
#line 142 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _6 = _2;
  *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_6)->field0)))))->array[((int64_t)3)]))) = 271733878;
#line 143 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _7 = _2;
  *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_7)->field0)))))->array[((int64_t)4)]))) = -1009589776;
#line 144 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _8 = _2;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_8)->field1)))) = 0;
#line 145 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _9 = _2;
  *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_9)->field2)))) = 0;
}


void sha_update(void* _10, void* _11, uint32_t _12) {
  void* _13;    /* Address-exposed local */
  void* _14;    /* Address-exposed local */
  uint32_t _15;    /* Address-exposed local */
  void* _16;
  uint32_t _17;
  uint32_t _18;
  void* _19;
  uint32_t _20;
  void* _21;
  void* _22;
  uint32_t _23;
  uint32_t _24;
  void* _25;
  void* _26;
  uint32_t _27;
  uint32_t _28;
  void* _29;
  void* _30;
  uint32_t _31;
  uint32_t _32;
  void* _33;
  void* _34;
  void* _35;
  void* _36;
  void* _37;
  void* _38;
  uint32_t _39;
  void* _40;
  void* _41;
  uint32_t _42;
  void* _43;

  _13 = _10;
#line 150 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  _14 = _11;
  ;
  _15 = _12;
  ;
#line 152 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _16 = _13;
  _17 = *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_16)->field1))));
  _18 = _15;
  _19 = _13;
  _20 = *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_19)->field1))));
  if ((((uint32_t)(llvm_add_u32(_17, (_18 << 3)))) < ((uint32_t)_20))) {
    goto _44;
  } else {
    goto _45;
  }

_44:
#line 153 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _21 = _13;
  _22 = ((&(((struct l_struct_struct_OC_SHA_INFO*)_21)->field2)));
  _23 = *(uint32_t*)_22;
  *(uint32_t*)_22 = (llvm_add_u32(_23, 1));
  goto _45;

_45:
#line 155 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _24 = _15;
  _25 = _13;
  _26 = ((&(((struct l_struct_struct_OC_SHA_INFO*)_25)->field1)));
  _27 = *(uint32_t*)_26;
  *(uint32_t*)_26 = (llvm_add_u32(_27, (_24 << 3)));
#line 156 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _28 = _15;
  _29 = _13;
  _30 = ((&(((struct l_struct_struct_OC_SHA_INFO*)_29)->field2)));
  _31 = *(uint32_t*)_30;
  *(uint32_t*)_30 = (llvm_add_u32(_31, (llvm_lshr_u32(_28, 29))));
  goto _46;

  do {     /* Syntactic loop '' to make GCC happy */
_46:
#line 157 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _32 = _15;
  if ((((int32_t)_32) >= ((int32_t)64u))) {
    goto _47;
  } else {
    goto _48;
  }

_47:
#line 158 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _33 = _13;
  _34 = _14;
  _35 = memcpy((((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_33)->field3)))))->array[((int64_t)0)]))), _34, 64);
#line 160 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _36 = _13;
  byte_reverse((((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_36)->field3)))))->array[((int64_t)0)]))), 64);
#line 162 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _37 = _13;
  sha_transform(_37);
#line 163 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _38 = _14;
  _14 = (((&((uint8_t*)_38)[((int64_t)64)])));
#line 164 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _39 = _15;
  _15 = (llvm_sub_u32(_39, 64));
  goto _46;

  } while (1); /* end of syntactic loop '' */
_48:
#line 166 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _40 = _13;
  _41 = _14;
  _42 = _15;
  _43 = memcpy((((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_40)->field3)))))->array[((int64_t)0)]))), _41, (((int64_t)(int32_t)_42)));
}


static void byte_reverse(void* _49, uint32_t _50) {
  void* _51;    /* Address-exposed local */
  uint32_t _52;    /* Address-exposed local */
  uint32_t _53;    /* Address-exposed local */
  struct l_array_4_uint8_t _54;    /* Address-exposed local */
  void* _55;    /* Address-exposed local */
  uint32_t _56;
  void* _57;
  uint32_t _58;
  uint32_t _59;
  void* _60;
  uint8_t _61;
  void* _62;
  uint8_t _63;
  void* _64;
  uint8_t _65;
  void* _66;
  uint8_t _67;
  uint8_t _68;
  void* _69;
  uint8_t _70;
  void* _71;
  uint8_t _72;
  void* _73;
  uint8_t _74;
  void* _75;
  void* _76;
  uint32_t _77;

  _51 = _49;
#line 113 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  _52 = _50;
  ;
#line 115 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 116 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  ;
#line 118 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _56 = _52;
  _52 = (((uint32_t)(llvm_udiv_u64((((int64_t)(int32_t)_56)), 4))));
#line 119 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _57 = _51;
  _55 = _57;
#line 120 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _53 = 0;
  goto _78;

  do {     /* Syntactic loop '' to make GCC happy */
_78:
  _58 = _53;
  _59 = _52;
  if ((((int32_t)_58) < ((int32_t)_59))) {
    goto _79;
  } else {
    goto _80;
  }

_79:
#line 121 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _60 = _55;
  _61 = *(uint8_t*)((((uint8_t*)_60)));
  *(uint8_t*)(((&(&_54)->array[((int64_t)0)]))) = _61;
#line 122 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _62 = _55;
  _63 = *(uint8_t*)(((&((uint8_t*)_62)[((int64_t)1)])));
  *(uint8_t*)(((&(&_54)->array[((int64_t)1)]))) = _63;
#line 123 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _64 = _55;
  _65 = *(uint8_t*)(((&((uint8_t*)_64)[((int64_t)2)])));
  *(uint8_t*)(((&(&_54)->array[((int64_t)2)]))) = _65;
#line 124 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _66 = _55;
  _67 = *(uint8_t*)(((&((uint8_t*)_66)[((int64_t)3)])));
  *(uint8_t*)(((&(&_54)->array[((int64_t)3)]))) = _67;
#line 125 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _68 = *(uint8_t*)(((&(&_54)->array[((int64_t)3)])));
  _69 = _55;
  *(uint8_t*)((((uint8_t*)_69))) = _68;
#line 126 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _70 = *(uint8_t*)(((&(&_54)->array[((int64_t)2)])));
  _71 = _55;
  *(uint8_t*)(((&((uint8_t*)_71)[((int64_t)1)]))) = _70;
#line 127 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _72 = *(uint8_t*)(((&(&_54)->array[((int64_t)1)])));
  _73 = _55;
  *(uint8_t*)(((&((uint8_t*)_73)[((int64_t)2)]))) = _72;
#line 128 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _74 = *(uint8_t*)(((&(&_54)->array[((int64_t)0)])));
  _75 = _55;
  *(uint8_t*)(((&((uint8_t*)_75)[((int64_t)3)]))) = _74;
#line 129 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _76 = _55;
  _55 = (((&((uint8_t*)_76)[((int64_t)4)])));
  goto _81;

_81:
#line 120 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _77 = _53;
  _53 = (llvm_add_u32(_77, 1));
  goto _78;

  } while (1); /* end of syntactic loop '' */
_80:
  return;
}


static void sha_transform(void* _82) {
  void* _83;    /* Address-exposed local */
  uint32_t _84;    /* Address-exposed local */
  uint32_t _85;    /* Address-exposed local */
  uint32_t _86;    /* Address-exposed local */
  uint32_t _87;    /* Address-exposed local */
  uint32_t _88;    /* Address-exposed local */
  uint32_t _89;    /* Address-exposed local */
  uint32_t _90;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_80_uint32_t _91 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _92;
  void* _93;
  uint32_t _94;
  uint32_t _95;
  uint32_t _96;
  uint32_t _97;
  uint32_t _98;
  uint32_t _99;
  uint32_t _100;
  uint32_t _101;
  uint32_t _102;
  uint32_t _103;
  uint32_t _104;
  uint32_t _105;
  uint32_t _106;
  uint32_t _107;
  uint32_t _108;
  void* _109;
  uint32_t _110;
  void* _111;
  uint32_t _112;
  void* _113;
  uint32_t _114;
  void* _115;
  uint32_t _116;
  void* _117;
  uint32_t _118;
  uint32_t _119;
  uint32_t _120;
  uint32_t _121;
  uint32_t _122;
  uint32_t _123;
  uint32_t _124;
  uint32_t _125;
  uint32_t _126;
  uint32_t _127;
  uint32_t _128;
  uint32_t _129;
  uint32_t _130;
  uint32_t _131;
  uint32_t _132;
  uint32_t _133;
  uint32_t _134;
  uint32_t _135;
  uint32_t _136;
  uint32_t _137;
  uint32_t _138;
  uint32_t _139;
  uint32_t _140;
  uint32_t _141;
  uint32_t _142;
  uint32_t _143;
  uint32_t _144;
  uint32_t _145;
  uint32_t _146;
  uint32_t _147;
  uint32_t _148;
  uint32_t _149;
  uint32_t _150;
  uint32_t _151;
  uint32_t _152;
  uint32_t _153;
  uint32_t _154;
  uint32_t _155;
  uint32_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _159;
  uint32_t _160;
  uint32_t _161;
  uint32_t _162;
  uint32_t _163;
  uint32_t _164;
  uint32_t _165;
  uint32_t _166;
  uint32_t _167;
  uint32_t _168;
  uint32_t _169;
  uint32_t _170;
  uint32_t _171;
  uint32_t _172;
  uint32_t _173;
  uint32_t _174;
  uint32_t _175;
  uint32_t _176;
  uint32_t _177;
  uint32_t _178;
  uint32_t _179;
  uint32_t _180;
  uint32_t _181;
  uint32_t _182;
  uint32_t _183;
  uint32_t _184;
  uint32_t _185;
  uint32_t _186;
  uint32_t _187;
  void* _188;
  void* _189;
  uint32_t _190;
  uint32_t _191;
  void* _192;
  void* _193;
  uint32_t _194;
  uint32_t _195;
  void* _196;
  void* _197;
  uint32_t _198;
  uint32_t _199;
  void* _200;
  void* _201;
  uint32_t _202;
  uint32_t _203;
  void* _204;
  void* _205;
  uint32_t _206;

  _83 = _82;
#line 49 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 51 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 52 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  ;
  ;
  ;
  ;
  ;
  ;
#line 54 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 0;
  goto _207;

  do {     /* Syntactic loop '' to make GCC happy */
_207:
  _92 = _84;
  if ((((int32_t)_92) < ((int32_t)16u))) {
    goto _208;
  } else {
    goto _209;
  }

_208:
#line 55 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _93 = _83;
  _94 = _84;
  _95 = *(uint32_t*)(((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_93)->field3)))))->array[((int64_t)(((int64_t)(int32_t)_94)))])));
  _96 = _84;
  *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_96)))]))) = _95;
  goto _210;

_210:
#line 54 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _97 = _84;
  _84 = (llvm_add_u32(_97, 1));
  goto _207;

  } while (1); /* end of syntactic loop '' */
_209:
#line 57 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 16;
  goto _211;

  do {     /* Syntactic loop '' to make GCC happy */
_211:
  _98 = _84;
  if ((((int32_t)_98) < ((int32_t)80u))) {
    goto _212;
  } else {
    goto _213;
  }

_212:
#line 58 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _99 = _84;
  _100 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_99, 3)))))])));
  _101 = _84;
  _102 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_101, 8)))))])));
  _103 = _84;
  _104 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_103, 14)))))])));
  _105 = _84;
  _106 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(_105, 16)))))])));
  _107 = _84;
  *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_107)))]))) = (((_100 ^ _102) ^ _104) ^ _106);
  goto _214;

_214:
#line 57 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _108 = _84;
  _84 = (llvm_add_u32(_108, 1));
  goto _211;

  } while (1); /* end of syntactic loop '' */
_213:
#line 63 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _109 = _83;
  _110 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_109)->field0)))))->array[((int64_t)0)])));
  _86 = _110;
#line 64 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _111 = _83;
  _112 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_111)->field0)))))->array[((int64_t)1)])));
  _87 = _112;
#line 65 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _113 = _83;
  _114 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_113)->field0)))))->array[((int64_t)2)])));
  _88 = _114;
#line 66 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _115 = _83;
  _116 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_115)->field0)))))->array[((int64_t)3)])));
  _89 = _116;
#line 67 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _117 = _83;
  _118 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_117)->field0)))))->array[((int64_t)4)])));
  _90 = _118;
#line 89 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 0;
  goto _215;

  do {     /* Syntactic loop '' to make GCC happy */
_215:
  _119 = _84;
  if ((((int32_t)_119) < ((int32_t)20u))) {
    goto _216;
  } else {
    goto _217;
  }

_216:
#line 90 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _120 = _86;
  _121 = _86;
  _122 = _87;
  _123 = _88;
  _124 = _87;
  _125 = _89;
  _126 = _90;
  _127 = _84;
  _128 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_127)))])));
  _85 = (((uint32_t)(llvm_add_u64((((uint64_t)(uint32_t)(llvm_add_u32((llvm_add_u32((llvm_add_u32(((_120 << 5) | (llvm_lshr_u32(_121, 27))), ((_122 & _123) | ((_124 ^ -1) & _125)))), _126)), _128)))), INT64_C(1518500249)))));
  _129 = _89;
  _90 = _129;
  _130 = _88;
  _89 = _130;
  _131 = _87;
  _132 = _87;
  _88 = ((_131 << 30) | (llvm_lshr_u32(_132, 2)));
  _133 = _86;
  _87 = _133;
  _134 = _85;
  _86 = _134;
  goto _218;

_218:
#line 89 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _135 = _84;
  _84 = (llvm_add_u32(_135, 1));
  goto _215;

  } while (1); /* end of syntactic loop '' */
_217:
#line 92 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 20;
  goto _219;

  do {     /* Syntactic loop '' to make GCC happy */
_219:
  _136 = _84;
  if ((((int32_t)_136) < ((int32_t)40u))) {
    goto _220;
  } else {
    goto _221;
  }

_220:
#line 93 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _137 = _86;
  _138 = _86;
  _139 = _87;
  _140 = _88;
  _141 = _89;
  _142 = _90;
  _143 = _84;
  _144 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_143)))])));
  _85 = (((uint32_t)(llvm_add_u64((((uint64_t)(uint32_t)(llvm_add_u32((llvm_add_u32((llvm_add_u32(((_137 << 5) | (llvm_lshr_u32(_138, 27))), ((_139 ^ _140) ^ _141))), _142)), _144)))), INT64_C(1859775393)))));
  _145 = _89;
  _90 = _145;
  _146 = _88;
  _89 = _146;
  _147 = _87;
  _148 = _87;
  _88 = ((_147 << 30) | (llvm_lshr_u32(_148, 2)));
  _149 = _86;
  _87 = _149;
  _150 = _85;
  _86 = _150;
  goto _222;

_222:
#line 92 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _151 = _84;
  _84 = (llvm_add_u32(_151, 1));
  goto _219;

  } while (1); /* end of syntactic loop '' */
_221:
#line 95 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 40;
  goto _223;

  do {     /* Syntactic loop '' to make GCC happy */
_223:
  _152 = _84;
  if ((((int32_t)_152) < ((int32_t)60u))) {
    goto _224;
  } else {
    goto _225;
  }

_224:
#line 96 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _153 = _86;
  _154 = _86;
  _155 = _87;
  _156 = _88;
  _157 = _87;
  _158 = _89;
  _159 = _88;
  _160 = _89;
  _161 = _90;
  _162 = _84;
  _163 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_162)))])));
  _85 = (((uint32_t)(llvm_add_u64((((uint64_t)(uint32_t)(llvm_add_u32((llvm_add_u32((llvm_add_u32(((_153 << 5) | (llvm_lshr_u32(_154, 27))), (((_155 & _156) | (_157 & _158)) | (_159 & _160)))), _161)), _163)))), INT64_C(2400959708)))));
  _164 = _89;
  _90 = _164;
  _165 = _88;
  _89 = _165;
  _166 = _87;
  _167 = _87;
  _88 = ((_166 << 30) | (llvm_lshr_u32(_167, 2)));
  _168 = _86;
  _87 = _168;
  _169 = _85;
  _86 = _169;
  goto _226;

_226:
#line 95 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _170 = _84;
  _84 = (llvm_add_u32(_170, 1));
  goto _223;

  } while (1); /* end of syntactic loop '' */
_225:
#line 98 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _84 = 60;
  goto _227;

  do {     /* Syntactic loop '' to make GCC happy */
_227:
  _171 = _84;
  if ((((int32_t)_171) < ((int32_t)80u))) {
    goto _228;
  } else {
    goto _229;
  }

_228:
#line 99 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _172 = _86;
  _173 = _86;
  _174 = _87;
  _175 = _88;
  _176 = _89;
  _177 = _90;
  _178 = _84;
  _179 = *(uint32_t*)(((&(&_91)->array[((int64_t)(((int64_t)(int32_t)_178)))])));
  _85 = (((uint32_t)(llvm_add_u64((((uint64_t)(uint32_t)(llvm_add_u32((llvm_add_u32((llvm_add_u32(((_172 << 5) | (llvm_lshr_u32(_173, 27))), ((_174 ^ _175) ^ _176))), _177)), _179)))), INT64_C(3395469782)))));
  _180 = _89;
  _90 = _180;
  _181 = _88;
  _89 = _181;
  _182 = _87;
  _183 = _87;
  _88 = ((_182 << 30) | (llvm_lshr_u32(_183, 2)));
  _184 = _86;
  _87 = _184;
  _185 = _85;
  _86 = _185;
  goto _230;

_230:
#line 98 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _186 = _84;
  _84 = (llvm_add_u32(_186, 1));
  goto _227;

  } while (1); /* end of syntactic loop '' */
_229:
#line 102 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _187 = _86;
  _188 = _83;
  _189 = ((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_188)->field0)))))->array[((int64_t)0)]));
  _190 = *(uint32_t*)_189;
  *(uint32_t*)_189 = (llvm_add_u32(_190, _187));
#line 103 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _191 = _87;
  _192 = _83;
  _193 = ((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_192)->field0)))))->array[((int64_t)1)]));
  _194 = *(uint32_t*)_193;
  *(uint32_t*)_193 = (llvm_add_u32(_194, _191));
#line 104 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _195 = _88;
  _196 = _83;
  _197 = ((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_196)->field0)))))->array[((int64_t)2)]));
  _198 = *(uint32_t*)_197;
  *(uint32_t*)_197 = (llvm_add_u32(_198, _195));
#line 105 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _199 = _89;
  _200 = _83;
  _201 = ((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_200)->field0)))))->array[((int64_t)3)]));
  _202 = *(uint32_t*)_201;
  *(uint32_t*)_201 = (llvm_add_u32(_202, _199));
#line 106 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _203 = _90;
  _204 = _83;
  _205 = ((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_204)->field0)))))->array[((int64_t)4)]));
  _206 = *(uint32_t*)_205;
  *(uint32_t*)_205 = (llvm_add_u32(_206, _203));
}


void sha_final(void* _231) {
  void* _232;    /* Address-exposed local */
  uint32_t _233;    /* Address-exposed local */
  uint32_t _234;    /* Address-exposed local */
  uint32_t _235;    /* Address-exposed local */
  void* _236;
  uint32_t _237;
  void* _238;
  uint32_t _239;
  uint32_t _240;
  void* _241;
  uint32_t _242;
  uint32_t _243;
  void* _244;
  uint32_t _245;
  uint32_t _246;
  void* _247;
  void* _248;
  void* _249;
  void* _250;
  void* _251;
  void* _252;
  uint32_t _253;
  uint32_t _254;
  void* _255;
  void* _256;
  uint32_t _257;
  void* _258;
  uint32_t _259;
  void* _260;
  void* _261;

  _232 = _231;
#line 171 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 173 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 174 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  ;
#line 176 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _236 = _232;
  _237 = *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_236)->field1))));
  _234 = _237;
#line 177 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _238 = _232;
  _239 = *(uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_238)->field2))));
  _235 = _239;
#line 178 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _240 = _234;
  _233 = ((llvm_lshr_u32(_240, 3)) & 63);
#line 179 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _241 = _232;
  _242 = _233;
  _233 = (llvm_add_u32(_242, 1));
  *(uint8_t*)(((&((uint8_t*)(((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_241)->field3)))))->array[((int64_t)0)]))))[((int64_t)(((int64_t)(int32_t)_242)))]))) = 128u;
#line 180 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _243 = _233;
  if ((((int32_t)_243) > ((int32_t)56u))) {
    goto _262;
  } else {
    goto _263;
  }

_262:
#line 181 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _244 = _232;
  _245 = _233;
  _246 = _233;
  _247 = memset((((&((uint8_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_244)->field3)))))[((int64_t)(((int64_t)(int32_t)_245)))]))), 0, (((int64_t)(int32_t)(llvm_sub_u32(64, _246)))));
#line 183 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _248 = _232;
  byte_reverse((((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_248)->field3)))))->array[((int64_t)0)]))), 64);
#line 185 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _249 = _232;
  sha_transform(_249);
#line 186 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _250 = _232;
  _251 = memset((((&(((struct l_struct_struct_OC_SHA_INFO*)_250)->field3)))), 0, 56);
  goto _264;

_263:
#line 188 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _252 = _232;
  _253 = _233;
  _254 = _233;
  _255 = memset((((&((uint8_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_252)->field3)))))[((int64_t)(((int64_t)(int32_t)_253)))]))), 0, (((int64_t)(int32_t)(llvm_sub_u32(56, _254)))));
  goto _264;

_264:
#line 191 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _256 = _232;
  byte_reverse((((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_256)->field3)))))->array[((int64_t)0)]))), 64);
#line 193 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _257 = _235;
  _258 = _232;
  *(uint32_t*)(((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_258)->field3)))))->array[((int64_t)14)]))) = _257;
#line 194 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _259 = _234;
  _260 = _232;
  *(uint32_t*)(((&((struct l_array_16_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_260)->field3)))))->array[((int64_t)15)]))) = _259;
#line 195 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _261 = _232;
  sha_transform(_261);
}


uint32_t sha_stream(void* _265, void* _266) {
  void* _267;    /* Address-exposed local */
  void* _268;    /* Address-exposed local */
  uint32_t _269;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_8192_uint8_t _270 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _271;
  void* _272;
  uint32_t _273;
  uint64_t _274;
  uint32_t _275;
  void* _276;
  uint32_t _277;
  void* _278;

  _267 = _265;
#line 202 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  _268 = _266;
  ;
#line 204 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 205 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 207 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _271 = _267;
  sha_init(_271);
  goto _279;

  do {     /* Syntactic loop '' to make GCC happy */
_279:
#line 208 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _272 = _268;
  _273 = *(uint32_t*)_272;
  _274 = read(_273, (((&(&_270)->array[((int64_t)0)]))), 8192);
  _275 = ((uint32_t)_274);
  _269 = _275;
  if ((((int32_t)_275) > ((int32_t)0u))) {
    goto _280;
  } else {
    goto _281;
  }

_280:
#line 209 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _276 = _267;
  _277 = _269;
  sha_update(_276, (((&(&_270)->array[((int64_t)0)]))), _277);
  goto _279;

  } while (1); /* end of syntactic loop '' */
_281:
#line 211 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _278 = _267;
  sha_final(_278);
  return 0;
}


void sha_print(void* _282) {
  void* _283;    /* Address-exposed local */
  void* _284;
  uint32_t _285;
  void* _286;
  uint32_t _287;
  void* _288;
  uint32_t _289;
  void* _290;
  uint32_t _291;
  void* _292;
  uint32_t _293;
  uint32_t _294;

  _283 = _282;
#line 217 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 221 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _284 = _283;
  _285 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_284)->field0)))))->array[((int64_t)0)])));
  _286 = _283;
  _287 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_286)->field0)))))->array[((int64_t)1)])));
  _288 = _283;
  _289 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_288)->field0)))))->array[((int64_t)2)])));
#line 222 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _290 = _283;
  _291 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_290)->field0)))))->array[((int64_t)3)])));
  _292 = _283;
  _293 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_292)->field0)))))->array[((int64_t)4)])));
#line 219 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _294 = printf((&_OC_str), _285, _287, _289, _291, _293);
}


int main(int argc, char ** argv) {
  uint32_t _295 = (uint32_t)argc;
  void* _296 = (void*)argv;
  uint32_t _297;    /* Address-exposed local */
  uint32_t _298;    /* Address-exposed local */
  void* _299;    /* Address-exposed local */
  uint32_t _300;    /* Address-exposed local */
  struct l_struct_struct_OC_SHA_INFO _301;    /* Address-exposed local */
  uint32_t _302;
  uint32_t _303;
  void* _304;
  void* _305;
  void* _306;
  uint32_t _307;
  uint32_t _308;
  void* _309;
  void* _310;
  uint32_t _311;
  uint32_t _312;
  uint32_t _313;
  uint32_t _314;

  _297 = 0;
  _298 = _295;
#line 225 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  _299 = _296;
  ;
#line 227 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 228 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  goto _315;

  do {     /* Syntactic loop '' to make GCC happy */
_315:
#line 231 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _302 = _298;
  _303 = llvm_add_u32(_302, -1);
  _298 = _303;
  if ((_303 != 0u)) {
    goto _316;
  } else {
    goto _317;
  }

_316:
#line 232 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _304 = _299;
  _305 = ((&((void**)_304)[((int32_t)1)]));
  _299 = _305;
  _306 = *(void**)_305;
  _307 = open(_306, 0);
  _300 = _307;
#line 233 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _308 = _300;
  if ((_308 == 0u)) {
    goto _318;
  } else {
    goto _319;
  }

_319:
#line 236 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _312 = sha_stream((&_301), (&_300));
#line 237 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  sha_print((&_301));
#line 238 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _313 = _300;
  _314 = close(_313);
  goto _320;

_318:
#line 234 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _309 = _299;
  _310 = *(void**)_309;
  _311 = printf((&_OC_str_OC_1), _310);
  goto _320;

_320:
  goto _315;

  } while (1); /* end of syntactic loop '' */
_317:
  return 0;
}

