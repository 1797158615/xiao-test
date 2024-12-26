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
struct l_array_32_uint64_t;
struct l_struct_struct_OC_des_context;
struct l_array_96_uint64_t;
struct l_struct_struct_OC_des3_context;
struct l_array_64_uint64_t;
struct l_array_16_uint64_t;
struct l_array_44_uint8_t;
struct l_array_13_uint8_t;
struct l_array_32_uint8_t;
struct l_array_8_uint8_t;
struct l_array_3_struct_AC_l_array_8_uint8_t;
struct l_array_9_uint8_t;
struct l_array_2_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_32_uint64_t {
  uint64_t array[32];
};
struct l_struct_struct_OC_des_context {
  struct l_array_32_uint64_t field0;
  struct l_array_32_uint64_t field1;
};
struct l_array_96_uint64_t {
  uint64_t array[96];
};
struct l_struct_struct_OC_des3_context {
  struct l_array_96_uint64_t field0;
  struct l_array_96_uint64_t field1;
};
struct l_array_64_uint64_t {
  uint64_t array[64];
};
struct l_array_16_uint64_t {
  uint64_t array[16];
};
struct l_array_44_uint8_t {
  uint8_t array[44];
};
struct l_array_13_uint8_t {
  uint8_t array[13];
};
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_8_uint8_t {
  uint8_t array[8];
};
struct l_array_3_struct_AC_l_array_8_uint8_t {
  struct l_array_8_uint8_t array[3];
};
struct l_array_9_uint8_t {
  uint8_t array[9];
};
struct l_array_2_uint8_t {
  uint8_t array[2];
};

/* Global Variable Declarations */
extern __PREFIXALIGN__(16) struct l_array_64_uint64_t SB1 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_16_uint64_t LHs __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_16_uint64_t RHs __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB8 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB6 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB4 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB2 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB7 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB5 __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB3 __POSTFIXALIGN__(16);
const static struct l_array_44_uint8_t _OC_str;
const static struct l_array_13_uint8_t _OC_str_OC_1;
const static struct l_array_13_uint8_t _OC_str_OC_2;
const static struct l_array_32_uint8_t _OC_str_OC_3;
static struct l_array_8_uint8_t DES3_init;
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_keys __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_enc_test __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_dec_test __POSTFIXALIGN__(16);
const static struct l_array_9_uint8_t _OC_str_OC_4;
const static struct l_array_9_uint8_t _OC_str_OC_5;
const static struct l_array_2_uint8_t _OC_str_OC_6;

/* Function Declarations */
uint32_t des_main_ks(void* _1, void* _2) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des_set_key(void* _139, void* _140) __ATTRIBUTELIST__((noinline, nothrow));
void des_crypt(void* _163, void* _164, void* _165) __ATTRIBUTELIST__((noinline, nothrow));
void des_encrypt(void* _672, void* _673, void* _674) __ATTRIBUTELIST__((noinline, nothrow));
void des_decrypt(void* _681, void* _682, void* _683) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des3_set_2keys(void* _690, void* _691, void* _692) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des3_set_3keys(void* _749, void* _750, void* _751, void* _752) __ATTRIBUTELIST__((noinline, nothrow));
void des3_crypt(void* _803, void* _804, void* _805) __ATTRIBUTELIST__((noinline, nothrow));
void des3_encrypt(void* _2112, void* _2113, void* _2114) __ATTRIBUTELIST__((noinline, nothrow));
void des3_decrypt(void* _2121, void* _2122, void* _2123) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t des_drive(void* _2130, void* _2131) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(void* _2241, ...);
uint32_t memcmp(void* _2242, void* _2243, uint64_t _2244) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t atoi(void* _2245) __ATTRIBUTELIST__((nothrow));
void* memcpy(void* _2246, void* _2247, uint64_t _2248);


/* Global Variable Definitions and Initialization */
__PREFIXALIGN__(16) struct l_array_64_uint64_t SB1 __POSTFIXALIGN__(16) = { { 16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756 } };
static __PREFIXALIGN__(16) struct l_array_16_uint64_t LHs __POSTFIXALIGN__(16) = { { 0, 1, 256, 257, 65536, 65537, 65792, 65793, 16777216, 16777217, 16777472, 16777473, 16842752, 16842753, 16843008, 16843009 } };
static __PREFIXALIGN__(16) struct l_array_16_uint64_t RHs __POSTFIXALIGN__(16) = { { 0, 16777216, 65536, 16842752, 256, 16777472, 65792, 16843008, 1, 16777217, 65537, 16842753, 257, 16777473, 65793, 16843009 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB8 __POSTFIXALIGN__(16) = { { 268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB6 __POSTFIXALIGN__(16) = { { 536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB4 __POSTFIXALIGN__(16) = { { 8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB2 __POSTFIXALIGN__(16) = { { INT64_C(2148565024), INT64_C(2147516416), 32768, 1081376, 1048576, 32, INT64_C(2148532256), INT64_C(2147516448), INT64_C(2147483680), INT64_C(2148565024), INT64_C(2148564992), INT64_C(2147483648), INT64_C(2147516416), 1048576, 32, INT64_C(2148532256), 1081344, 1048608, INT64_C(2147516448), 0, INT64_C(2147483648), 32768, 1081376, INT64_C(2148532224), 1048608, INT64_C(2147483680), 0, 1081344, 32800, INT64_C(2148564992), INT64_C(2148532224), 32800, 0, 1081376, INT64_C(2148532256), 1048576, INT64_C(2147516448), INT64_C(2148532224), INT64_C(2148564992), 32768, INT64_C(2148532224), INT64_C(2147516416), 32, INT64_C(2148565024), 1081376, 32, 32768, INT64_C(2147483648), 32800, INT64_C(2148564992), 1048576, INT64_C(2147483680), 1048608, INT64_C(2147516448), INT64_C(2147483680), 1048608, 1081344, 0, INT64_C(2147516416), 32800, INT64_C(2147483648), INT64_C(2148532256), INT64_C(2148565024), 1081344 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB7 __POSTFIXALIGN__(16) = { { 2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154 } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB5 __POSTFIXALIGN__(16) = { { 256, 34078976, 34078720, INT64_C(1107296512), 524288, 256, INT64_C(1073741824), 34078720, INT64_C(1074266368), 524288, 33554688, INT64_C(1074266368), INT64_C(1107296512), INT64_C(1107820544), 524544, INT64_C(1073741824), 33554432, INT64_C(1074266112), INT64_C(1074266112), 0, INT64_C(1073742080), INT64_C(1107820800), INT64_C(1107820800), 33554688, INT64_C(1107820544), INT64_C(1073742080), 0, INT64_C(1107296256), 34078976, 33554432, INT64_C(1107296256), 524544, 524288, INT64_C(1107296512), 256, 33554432, INT64_C(1073741824), 34078720, INT64_C(1107296512), INT64_C(1074266368), 33554688, INT64_C(1073741824), INT64_C(1107820544), 34078976, INT64_C(1074266368), 256, 33554432, INT64_C(1107820544), INT64_C(1107820800), 524544, INT64_C(1107296256), INT64_C(1107820800), 34078720, 0, INT64_C(1074266112), INT64_C(1107296256), 524544, 33554688, INT64_C(1073742080), 524288, 0, INT64_C(1074266112), 34078976, INT64_C(1073742080) } };
static __PREFIXALIGN__(16) struct l_array_64_uint64_t SB3 __POSTFIXALIGN__(16) = { { 520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584 } };
static const struct l_array_44_uint8_t _OC_str = { "\n Triple-DES Monte Carlo Test (ECB mode) - " };
static const struct l_array_13_uint8_t _OC_str_OC_1 = { "encryption\n\n" };
static const struct l_array_13_uint8_t _OC_str_OC_2 = { "decryption\n\n" };
static const struct l_array_32_uint8_t _OC_str_OC_3 = { " Test %d, key size = %3d bits: " };
static struct l_array_8_uint8_t DES3_init = { "Now is t" };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_keys __POSTFIXALIGN__(16) = { { { "\x01#Eg\x89\xAB\xCD\xEF" }, { "#Eg\x89\xAB\xCD\xEF\x01" }, { "Eg\x89\xAB\xCD\xEF\x01#" } } };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_enc_test __POSTFIXALIGN__(16) = { { { "j*\x19\xF4\x1E\xCA\x85K" }, { "\x03\xE6\x9F[\xFAX\xEB\x42" }, { "\xDD\x17\xE8\xB8\xB4\x37\xD2\x32" } } };
static __PREFIXALIGN__(16) struct l_array_3_struct_AC_l_array_8_uint8_t DES3_dec_test __POSTFIXALIGN__(16) = { { { "\xCD\xD6O/\x94'\xC1]" }, { "i\x96\xC8\xFAG\xA2\xAB\xEB" }, { "\x83%9vD\t\x1A\n" } } };
static const struct l_array_9_uint8_t _OC_str_OC_4 = { "failed!\n" };
static const struct l_array_9_uint8_t _OC_str_OC_5 = { "passed.\n" };
static const struct l_array_2_uint8_t _OC_str_OC_6 = { "\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_sub_u32(uint32_t a, uint32_t b) {
  uint32_t r = a - b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}


/* Function Bodies */

uint32_t des_main_ks(void* _1, void* _2) {
  void* _3;    /* Address-exposed local */
  void* _4;    /* Address-exposed local */
  uint32_t _5;    /* Address-exposed local */
  uint64_t _6;    /* Address-exposed local */
  uint64_t _7;    /* Address-exposed local */
  uint64_t _8;    /* Address-exposed local */
  void* _9;
  uint8_t _10;
  void* _11;
  uint8_t _12;
  void* _13;
  uint8_t _14;
  void* _15;
  uint8_t _16;
  void* _17;
  uint8_t _18;
  void* _19;
  uint8_t _20;
  void* _21;
  uint8_t _22;
  void* _23;
  uint8_t _24;
  uint64_t _25;
  uint64_t _26;
  uint64_t _27;
  uint64_t _28;
  uint64_t _29;
  uint64_t _30;
  uint64_t _31;
  uint64_t _32;
  uint64_t _33;
  uint64_t _34;
  uint64_t _35;
  uint64_t _36;
  uint64_t _37;
  uint64_t _38;
  uint64_t _39;
  uint64_t _40;
  uint64_t _41;
  uint64_t _42;
  uint64_t _43;
  uint64_t _44;
  uint64_t _45;
  uint64_t _46;
  uint64_t _47;
  uint64_t _48;
  uint64_t _49;
  uint64_t _50;
  uint64_t _51;
  uint64_t _52;
  uint64_t _53;
  uint64_t _54;
  uint64_t _55;
  uint64_t _56;
  uint64_t _57;
  uint64_t _58;
  uint64_t _59;
  uint64_t _60;
  uint64_t _61;
  uint64_t _62;
  uint64_t _63;
  uint64_t _64;
  uint64_t _65;
  uint64_t _66;
  uint64_t _67;
  uint64_t _68;
  uint64_t _69;
  uint64_t _70;
  uint32_t _71;
  uint32_t _72;
  uint32_t _73;
  uint32_t _74;
  uint64_t _75;
  uint64_t _76;
  uint64_t _77;
  uint64_t _78;
  uint64_t _79;
  uint64_t _80;
  uint64_t _81;
  uint64_t _82;
  uint64_t _83;
  uint64_t _84;
  uint64_t _85;
  uint64_t _86;
  uint64_t _87;
  uint64_t _88;
  uint64_t _89;
  uint64_t _90;
  uint64_t _91;
  uint64_t _92;
  uint64_t _93;
  uint64_t _94;
  uint64_t _95;
  uint64_t _96;
  uint64_t _97;
  uint64_t _98;
  uint64_t _99;
  uint64_t _100;
  uint64_t _101;
  uint64_t _102;
  uint64_t _103;
  uint64_t _104;
  void* _105;
  uint64_t _106;
  uint64_t _107;
  uint64_t _108;
  uint64_t _109;
  uint64_t _110;
  uint64_t _111;
  uint64_t _112;
  uint64_t _113;
  uint64_t _114;
  uint64_t _115;
  uint64_t _116;
  uint64_t _117;
  uint64_t _118;
  uint64_t _119;
  uint64_t _120;
  uint64_t _121;
  uint64_t _122;
  uint64_t _123;
  uint64_t _124;
  uint64_t _125;
  uint64_t _126;
  uint64_t _127;
  void* _128;
  uint32_t _129;

  _3 = _1;
#line 270 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _4 = _2;
  ;
#line 272 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 273 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  ;
  ;
#line 275 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _9 = _4;
  _10 = *(uint8_t*)((((uint8_t*)_9)));
  _11 = _4;
  _12 = *(uint8_t*)(((&((uint8_t*)_11)[((int64_t)1)])));
  _13 = _4;
  _14 = *(uint8_t*)(((&((uint8_t*)_13)[((int64_t)2)])));
  _15 = _4;
  _16 = *(uint8_t*)(((&((uint8_t*)_15)[((int64_t)3)])));
  _6 = (((((((uint64_t)(uint8_t)_10)) << 24) | ((((uint64_t)(uint8_t)_12)) << 16)) | ((((uint64_t)(uint8_t)_14)) << 8)) | (((uint64_t)(uint8_t)_16)));
#line 276 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _17 = _4;
  _18 = *(uint8_t*)(((&((uint8_t*)_17)[((int64_t)4)])));
  _19 = _4;
  _20 = *(uint8_t*)(((&((uint8_t*)_19)[((int64_t)5)])));
  _21 = _4;
  _22 = *(uint8_t*)(((&((uint8_t*)_21)[((int64_t)6)])));
  _23 = _4;
  _24 = *(uint8_t*)(((&((uint8_t*)_23)[((int64_t)7)])));
  _7 = (((((((uint64_t)(uint8_t)_18)) << 24) | ((((uint64_t)(uint8_t)_20)) << 16)) | ((((uint64_t)(uint8_t)_22)) << 8)) | (((uint64_t)(uint8_t)_24)));
#line 280 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _25 = _7;
  _26 = _6;
  _8 = (((llvm_lshr_u64(_25, 4)) ^ _26) & 252645135);
  _27 = _8;
  _28 = _6;
  _6 = (_28 ^ _27);
  _29 = _8;
  _30 = _7;
  _7 = (_30 ^ (_29 << 4));
#line 281 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _31 = _7;
  _32 = _6;
  _8 = ((_31 ^ _32) & 269488144);
  _33 = _8;
  _34 = _6;
  _6 = (_34 ^ _33);
  _35 = _8;
  _36 = _7;
  _7 = (_36 ^ _35);
#line 283 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _37 = _6;
  _38 = *(uint64_t*)(((&(&LHs)->array[((int64_t)(_37 & 15))])));
  _39 = _6;
  _40 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_39, 8)) & 15))])));
#line 284 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _41 = _6;
  _42 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_41, 16)) & 15))])));
  _43 = _6;
  _44 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_43, 24)) & 15))])));
#line 285 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _45 = _6;
  _46 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_45, 5)) & 15))])));
  _47 = _6;
  _48 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_47, 13)) & 15))])));
#line 286 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _49 = _6;
  _50 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_49, 21)) & 15))])));
  _51 = _6;
  _52 = *(uint64_t*)(((&(&LHs)->array[((int64_t)((llvm_lshr_u64(_51, 29)) & 15))])));
#line 283 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _6 = ((((((((_38 << 3) | (_40 << 2)) | (_42 << 1)) | _44) | (_46 << 7)) | (_48 << 6)) | (_50 << 5)) | (_52 << 4));
#line 288 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _53 = _7;
  _54 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_53, 1)) & 15))])));
  _55 = _7;
  _56 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_55, 9)) & 15))])));
#line 289 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _57 = _7;
  _58 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_57, 17)) & 15))])));
  _59 = _7;
  _60 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_59, 25)) & 15))])));
#line 290 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _61 = _7;
  _62 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_61, 4)) & 15))])));
  _63 = _7;
  _64 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_63, 12)) & 15))])));
#line 291 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _65 = _7;
  _66 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_65, 20)) & 15))])));
  _67 = _7;
  _68 = *(uint64_t*)(((&(&RHs)->array[((int64_t)((llvm_lshr_u64(_67, 28)) & 15))])));
#line 288 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _7 = ((((((((_54 << 3) | (_56 << 2)) | (_58 << 1)) | _60) | (_62 << 7)) | (_64 << 6)) | (_66 << 5)) | (_68 << 4));
#line 293 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _69 = _6;
  _6 = (_69 & 268435455);
#line 294 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _70 = _7;
  _7 = (_70 & 268435455);
#line 298 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _5 = 0;
  goto _130;

  do {     /* Syntactic loop '' to make GCC happy */
_130:
  _71 = _5;
  if ((((int32_t)_71) < ((int32_t)16u))) {
    goto _131;
  } else {
    goto _132;
  }

_131:
#line 300 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _72 = _5;
  if ((((int32_t)_72) < ((int32_t)2u))) {
    goto _133;
  } else {
    goto _134;
  }

_134:
  _73 = _5;
  if ((_73 == 8u)) {
    goto _133;
  } else {
    goto _135;
  }

_135:
  _74 = _5;
  if ((_74 == 15u)) {
    goto _133;
  } else {
    goto _136;
  }

_136:
#line 307 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _79 = _6;
  _80 = _6;
  _6 = (((_79 << 2) | (llvm_lshr_u64(_80, 26))) & 268435455);
#line 308 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _81 = _7;
  _82 = _7;
  _7 = (((_81 << 2) | (llvm_lshr_u64(_82, 26))) & 268435455);
  goto _137;

_133:
#line 302 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _75 = _6;
  _76 = _6;
  _6 = (((_75 << 1) | (llvm_lshr_u64(_76, 27))) & 268435455);
#line 303 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _77 = _7;
  _78 = _7;
  _7 = (((_77 << 1) | (llvm_lshr_u64(_78, 27))) & 268435455);
  goto _137;

_137:
#line 311 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _83 = _6;
  _84 = _6;
#line 312 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _85 = _6;
  _86 = _6;
#line 313 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _87 = _6;
  _88 = _6;
#line 314 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _89 = _6;
  _90 = _6;
#line 315 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _91 = _6;
  _92 = _6;
#line 316 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _93 = _7;
  _94 = _7;
#line 317 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _95 = _7;
  _96 = _7;
#line 318 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _97 = _7;
  _98 = _7;
#line 319 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _99 = _7;
  _100 = _7;
#line 320 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _101 = _7;
  _102 = _7;
#line 321 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _103 = _7;
  _104 = _7;
#line 311 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _105 = _3;
  _3 = (((&((uint64_t*)_105)[((int32_t)1)])));
  *(uint64_t*)_105 = (((((((((((((((((((((((_83 << 4) & 603979776) | ((_84 << 28) & 268435456)) | ((_85 << 14) & 134217728)) | ((_86 << 18) & 34078720)) | ((_87 << 6) & 16777216)) | ((_88 << 9) & 2097152)) | ((llvm_lshr_u64(_89, 1)) & 1048576)) | ((_90 << 10) & 262144)) | ((_91 << 2) & 131072)) | ((llvm_lshr_u64(_92, 10)) & 65536)) | ((llvm_lshr_u64(_93, 13)) & 8192)) | ((llvm_lshr_u64(_94, 4)) & 4096)) | ((_95 << 6) & 2048)) | ((llvm_lshr_u64(_96, 1)) & 1024)) | ((llvm_lshr_u64(_97, 14)) & 512)) | (_98 & 256)) | ((llvm_lshr_u64(_99, 5)) & 32)) | ((llvm_lshr_u64(_100, 10)) & 16)) | ((llvm_lshr_u64(_101, 3)) & 8)) | ((llvm_lshr_u64(_102, 18)) & 4)) | ((llvm_lshr_u64(_103, 26)) & 2)) | ((llvm_lshr_u64(_104, 24)) & 1));
#line 323 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _106 = _6;
  _107 = _6;
#line 324 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _108 = _6;
  _109 = _6;
#line 325 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _110 = _6;
  _111 = _6;
#line 326 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _112 = _6;
  _113 = _6;
#line 327 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _114 = _6;
  _115 = _6;
#line 328 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _116 = _6;
  _117 = _6;
#line 329 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _118 = _7;
  _119 = _7;
#line 330 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _120 = _7;
  _121 = _7;
#line 331 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _122 = _7;
  _123 = _7;
#line 332 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _124 = _7;
  _125 = _7;
#line 333 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _126 = _7;
  _127 = _7;
#line 323 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _128 = _3;
  _3 = (((&((uint64_t*)_128)[((int32_t)1)])));
  *(uint64_t*)_128 = (((((((((((((((((((((((_106 << 15) & 536870912) | ((_107 << 17) & 268435456)) | ((_108 << 10) & 134217728)) | ((_109 << 22) & 67108864)) | ((llvm_lshr_u64(_110, 2)) & 33554432)) | ((_111 << 1) & 16777216)) | ((_112 << 16) & 2097152)) | ((_113 << 11) & 1048576)) | ((_114 << 3) & 524288)) | ((llvm_lshr_u64(_115, 6)) & 262144)) | ((_116 << 15) & 131072)) | ((llvm_lshr_u64(_117, 4)) & 65536)) | ((llvm_lshr_u64(_118, 2)) & 8192)) | ((_119 << 8) & 4096)) | ((llvm_lshr_u64(_120, 14)) & 2056)) | ((llvm_lshr_u64(_121, 9)) & 1024)) | (_122 & 512)) | ((_123 << 7) & 256)) | ((llvm_lshr_u64(_124, 7)) & 32)) | ((llvm_lshr_u64(_125, 3)) & 17)) | ((_126 << 2) & 4)) | ((llvm_lshr_u64(_127, 21)) & 2));
  goto _138;

_138:
#line 298 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _129 = _5;
  _5 = (llvm_add_u32(_129, 1));
  goto _130;

  } while (1); /* end of syntactic loop '' */
_132:
  return 0;
}


uint32_t des_set_key(void* _139, void* _140) {
  void* _141;    /* Address-exposed local */
  void* _142;    /* Address-exposed local */
  uint32_t _143;    /* Address-exposed local */
  void* _144;
  void* _145;
  uint32_t _146;
  uint32_t _147;
  void* _148;
  uint32_t _149;
  uint64_t _150;
  void* _151;
  uint32_t _152;
  void* _153;
  uint32_t _154;
  uint64_t _155;
  void* _156;
  uint32_t _157;
  uint32_t _158;

  _141 = _139;
#line 339 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _142 = _140;
  ;
#line 341 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 345 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _144 = _141;
  _145 = _142;
  _146 = des_main_ks((((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_144)->field0)))))->array[((int64_t)0)]))), _145);
#line 349 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _143 = 0;
  goto _159;

  do {     /* Syntactic loop '' to make GCC happy */
_159:
  _147 = _143;
  if ((((int32_t)_147) < ((int32_t)32u))) {
    goto _160;
  } else {
    goto _161;
  }

_160:
#line 351 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _148 = _141;
  _149 = _143;
  _150 = *(uint64_t*)(((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_148)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(30, _149)))))])));
  _151 = _141;
  _152 = _143;
  *(uint64_t*)(((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_151)->field1)))))->array[((int64_t)(((int64_t)(int32_t)_152)))]))) = _150;
#line 352 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _153 = _141;
  _154 = _143;
  _155 = *(uint64_t*)(((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_153)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(31, _154)))))])));
  _156 = _141;
  _157 = _143;
  *(uint64_t*)(((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_156)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_157, 1)))))]))) = _155;
  goto _162;

_162:
#line 349 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _158 = _143;
  _143 = (llvm_add_u32(_158, 2));
  goto _159;

  } while (1); /* end of syntactic loop '' */
_161:
  return 0;
}


void des_crypt(void* _163, void* _164, void* _165) {
  void* _166;    /* Address-exposed local */
  void* _167;    /* Address-exposed local */
  void* _168;    /* Address-exposed local */
  uint64_t _169;    /* Address-exposed local */
  uint64_t _170;    /* Address-exposed local */
  uint64_t _171;    /* Address-exposed local */
  void* _172;
  uint8_t _173;
  void* _174;
  uint8_t _175;
  void* _176;
  uint8_t _177;
  void* _178;
  uint8_t _179;
  void* _180;
  uint8_t _181;
  void* _182;
  uint8_t _183;
  void* _184;
  uint8_t _185;
  void* _186;
  uint8_t _187;
  uint64_t _188;
  uint64_t _189;
  uint64_t _190;
  uint64_t _191;
  uint64_t _192;
  uint64_t _193;
  uint64_t _194;
  uint64_t _195;
  uint64_t _196;
  uint64_t _197;
  uint64_t _198;
  uint64_t _199;
  uint64_t _200;
  uint64_t _201;
  uint64_t _202;
  uint64_t _203;
  uint64_t _204;
  uint64_t _205;
  uint64_t _206;
  uint64_t _207;
  uint64_t _208;
  uint64_t _209;
  uint64_t _210;
  uint64_t _211;
  uint64_t _212;
  uint64_t _213;
  uint64_t _214;
  uint64_t _215;
  uint64_t _216;
  uint64_t _217;
  uint64_t _218;
  uint64_t _219;
  uint64_t _220;
  uint64_t _221;
  void* _222;
  uint64_t _223;
  uint64_t _224;
  uint64_t _225;
  uint64_t _226;
  uint64_t _227;
  uint64_t _228;
  uint64_t _229;
  uint64_t _230;
  uint64_t _231;
  uint64_t _232;
  uint64_t _233;
  void* _234;
  uint64_t _235;
  uint64_t _236;
  uint64_t _237;
  uint64_t _238;
  uint64_t _239;
  uint64_t _240;
  uint64_t _241;
  uint64_t _242;
  uint64_t _243;
  uint64_t _244;
  uint64_t _245;
  uint64_t _246;
  void* _247;
  uint64_t _248;
  uint64_t _249;
  uint64_t _250;
  uint64_t _251;
  uint64_t _252;
  uint64_t _253;
  uint64_t _254;
  uint64_t _255;
  uint64_t _256;
  uint64_t _257;
  uint64_t _258;
  void* _259;
  uint64_t _260;
  uint64_t _261;
  uint64_t _262;
  uint64_t _263;
  uint64_t _264;
  uint64_t _265;
  uint64_t _266;
  uint64_t _267;
  uint64_t _268;
  uint64_t _269;
  uint64_t _270;
  uint64_t _271;
  void* _272;
  uint64_t _273;
  uint64_t _274;
  uint64_t _275;
  uint64_t _276;
  uint64_t _277;
  uint64_t _278;
  uint64_t _279;
  uint64_t _280;
  uint64_t _281;
  uint64_t _282;
  uint64_t _283;
  void* _284;
  uint64_t _285;
  uint64_t _286;
  uint64_t _287;
  uint64_t _288;
  uint64_t _289;
  uint64_t _290;
  uint64_t _291;
  uint64_t _292;
  uint64_t _293;
  uint64_t _294;
  uint64_t _295;
  uint64_t _296;
  void* _297;
  uint64_t _298;
  uint64_t _299;
  uint64_t _300;
  uint64_t _301;
  uint64_t _302;
  uint64_t _303;
  uint64_t _304;
  uint64_t _305;
  uint64_t _306;
  uint64_t _307;
  uint64_t _308;
  void* _309;
  uint64_t _310;
  uint64_t _311;
  uint64_t _312;
  uint64_t _313;
  uint64_t _314;
  uint64_t _315;
  uint64_t _316;
  uint64_t _317;
  uint64_t _318;
  uint64_t _319;
  uint64_t _320;
  uint64_t _321;
  void* _322;
  uint64_t _323;
  uint64_t _324;
  uint64_t _325;
  uint64_t _326;
  uint64_t _327;
  uint64_t _328;
  uint64_t _329;
  uint64_t _330;
  uint64_t _331;
  uint64_t _332;
  uint64_t _333;
  void* _334;
  uint64_t _335;
  uint64_t _336;
  uint64_t _337;
  uint64_t _338;
  uint64_t _339;
  uint64_t _340;
  uint64_t _341;
  uint64_t _342;
  uint64_t _343;
  uint64_t _344;
  uint64_t _345;
  uint64_t _346;
  void* _347;
  uint64_t _348;
  uint64_t _349;
  uint64_t _350;
  uint64_t _351;
  uint64_t _352;
  uint64_t _353;
  uint64_t _354;
  uint64_t _355;
  uint64_t _356;
  uint64_t _357;
  uint64_t _358;
  void* _359;
  uint64_t _360;
  uint64_t _361;
  uint64_t _362;
  uint64_t _363;
  uint64_t _364;
  uint64_t _365;
  uint64_t _366;
  uint64_t _367;
  uint64_t _368;
  uint64_t _369;
  uint64_t _370;
  uint64_t _371;
  void* _372;
  uint64_t _373;
  uint64_t _374;
  uint64_t _375;
  uint64_t _376;
  uint64_t _377;
  uint64_t _378;
  uint64_t _379;
  uint64_t _380;
  uint64_t _381;
  uint64_t _382;
  uint64_t _383;
  void* _384;
  uint64_t _385;
  uint64_t _386;
  uint64_t _387;
  uint64_t _388;
  uint64_t _389;
  uint64_t _390;
  uint64_t _391;
  uint64_t _392;
  uint64_t _393;
  uint64_t _394;
  uint64_t _395;
  uint64_t _396;
  void* _397;
  uint64_t _398;
  uint64_t _399;
  uint64_t _400;
  uint64_t _401;
  uint64_t _402;
  uint64_t _403;
  uint64_t _404;
  uint64_t _405;
  uint64_t _406;
  uint64_t _407;
  uint64_t _408;
  void* _409;
  uint64_t _410;
  uint64_t _411;
  uint64_t _412;
  uint64_t _413;
  uint64_t _414;
  uint64_t _415;
  uint64_t _416;
  uint64_t _417;
  uint64_t _418;
  uint64_t _419;
  uint64_t _420;
  uint64_t _421;
  void* _422;
  uint64_t _423;
  uint64_t _424;
  uint64_t _425;
  uint64_t _426;
  uint64_t _427;
  uint64_t _428;
  uint64_t _429;
  uint64_t _430;
  uint64_t _431;
  uint64_t _432;
  uint64_t _433;
  void* _434;
  uint64_t _435;
  uint64_t _436;
  uint64_t _437;
  uint64_t _438;
  uint64_t _439;
  uint64_t _440;
  uint64_t _441;
  uint64_t _442;
  uint64_t _443;
  uint64_t _444;
  uint64_t _445;
  uint64_t _446;
  void* _447;
  uint64_t _448;
  uint64_t _449;
  uint64_t _450;
  uint64_t _451;
  uint64_t _452;
  uint64_t _453;
  uint64_t _454;
  uint64_t _455;
  uint64_t _456;
  uint64_t _457;
  uint64_t _458;
  void* _459;
  uint64_t _460;
  uint64_t _461;
  uint64_t _462;
  uint64_t _463;
  uint64_t _464;
  uint64_t _465;
  uint64_t _466;
  uint64_t _467;
  uint64_t _468;
  uint64_t _469;
  uint64_t _470;
  uint64_t _471;
  void* _472;
  uint64_t _473;
  uint64_t _474;
  uint64_t _475;
  uint64_t _476;
  uint64_t _477;
  uint64_t _478;
  uint64_t _479;
  uint64_t _480;
  uint64_t _481;
  uint64_t _482;
  uint64_t _483;
  void* _484;
  uint64_t _485;
  uint64_t _486;
  uint64_t _487;
  uint64_t _488;
  uint64_t _489;
  uint64_t _490;
  uint64_t _491;
  uint64_t _492;
  uint64_t _493;
  uint64_t _494;
  uint64_t _495;
  uint64_t _496;
  void* _497;
  uint64_t _498;
  uint64_t _499;
  uint64_t _500;
  uint64_t _501;
  uint64_t _502;
  uint64_t _503;
  uint64_t _504;
  uint64_t _505;
  uint64_t _506;
  uint64_t _507;
  uint64_t _508;
  void* _509;
  uint64_t _510;
  uint64_t _511;
  uint64_t _512;
  uint64_t _513;
  uint64_t _514;
  uint64_t _515;
  uint64_t _516;
  uint64_t _517;
  uint64_t _518;
  uint64_t _519;
  uint64_t _520;
  uint64_t _521;
  void* _522;
  uint64_t _523;
  uint64_t _524;
  uint64_t _525;
  uint64_t _526;
  uint64_t _527;
  uint64_t _528;
  uint64_t _529;
  uint64_t _530;
  uint64_t _531;
  uint64_t _532;
  uint64_t _533;
  void* _534;
  uint64_t _535;
  uint64_t _536;
  uint64_t _537;
  uint64_t _538;
  uint64_t _539;
  uint64_t _540;
  uint64_t _541;
  uint64_t _542;
  uint64_t _543;
  uint64_t _544;
  uint64_t _545;
  uint64_t _546;
  void* _547;
  uint64_t _548;
  uint64_t _549;
  uint64_t _550;
  uint64_t _551;
  uint64_t _552;
  uint64_t _553;
  uint64_t _554;
  uint64_t _555;
  uint64_t _556;
  uint64_t _557;
  uint64_t _558;
  void* _559;
  uint64_t _560;
  uint64_t _561;
  uint64_t _562;
  uint64_t _563;
  uint64_t _564;
  uint64_t _565;
  uint64_t _566;
  uint64_t _567;
  uint64_t _568;
  uint64_t _569;
  uint64_t _570;
  uint64_t _571;
  void* _572;
  uint64_t _573;
  uint64_t _574;
  uint64_t _575;
  uint64_t _576;
  uint64_t _577;
  uint64_t _578;
  uint64_t _579;
  uint64_t _580;
  uint64_t _581;
  uint64_t _582;
  uint64_t _583;
  void* _584;
  uint64_t _585;
  uint64_t _586;
  uint64_t _587;
  uint64_t _588;
  uint64_t _589;
  uint64_t _590;
  uint64_t _591;
  uint64_t _592;
  uint64_t _593;
  uint64_t _594;
  uint64_t _595;
  uint64_t _596;
  void* _597;
  uint64_t _598;
  uint64_t _599;
  uint64_t _600;
  uint64_t _601;
  uint64_t _602;
  uint64_t _603;
  uint64_t _604;
  uint64_t _605;
  uint64_t _606;
  uint64_t _607;
  uint64_t _608;
  void* _609;
  uint64_t _610;
  uint64_t _611;
  uint64_t _612;
  uint64_t _613;
  uint64_t _614;
  uint64_t _615;
  uint64_t _616;
  uint64_t _617;
  uint64_t _618;
  uint64_t _619;
  uint64_t _620;
  uint64_t _621;
  uint64_t _622;
  uint64_t _623;
  uint64_t _624;
  uint64_t _625;
  uint64_t _626;
  uint64_t _627;
  uint64_t _628;
  uint64_t _629;
  uint64_t _630;
  uint64_t _631;
  uint64_t _632;
  uint64_t _633;
  uint64_t _634;
  uint64_t _635;
  uint64_t _636;
  uint64_t _637;
  uint64_t _638;
  uint64_t _639;
  uint64_t _640;
  uint64_t _641;
  uint64_t _642;
  uint64_t _643;
  uint64_t _644;
  uint64_t _645;
  uint64_t _646;
  uint64_t _647;
  uint64_t _648;
  uint64_t _649;
  uint64_t _650;
  uint64_t _651;
  uint64_t _652;
  uint64_t _653;
  uint64_t _654;
  uint64_t _655;
  uint64_t _656;
  void* _657;
  uint64_t _658;
  void* _659;
  uint64_t _660;
  void* _661;
  uint64_t _662;
  void* _663;
  uint64_t _664;
  void* _665;
  uint64_t _666;
  void* _667;
  uint64_t _668;
  void* _669;
  uint64_t _670;
  void* _671;

  _166 = _163;
#line 360 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _167 = _164;
  ;
  _168 = _165;
  ;
#line 362 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  ;
  ;
#line 364 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _172 = _167;
  _173 = *(uint8_t*)((((uint8_t*)_172)));
  _174 = _167;
  _175 = *(uint8_t*)(((&((uint8_t*)_174)[((int64_t)1)])));
  _176 = _167;
  _177 = *(uint8_t*)(((&((uint8_t*)_176)[((int64_t)2)])));
  _178 = _167;
  _179 = *(uint8_t*)(((&((uint8_t*)_178)[((int64_t)3)])));
  _169 = (((((((uint64_t)(uint8_t)_173)) << 24) | ((((uint64_t)(uint8_t)_175)) << 16)) | ((((uint64_t)(uint8_t)_177)) << 8)) | (((uint64_t)(uint8_t)_179)));
#line 365 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _180 = _167;
  _181 = *(uint8_t*)(((&((uint8_t*)_180)[((int64_t)4)])));
  _182 = _167;
  _183 = *(uint8_t*)(((&((uint8_t*)_182)[((int64_t)5)])));
  _184 = _167;
  _185 = *(uint8_t*)(((&((uint8_t*)_184)[((int64_t)6)])));
  _186 = _167;
  _187 = *(uint8_t*)(((&((uint8_t*)_186)[((int64_t)7)])));
  _170 = (((((((uint64_t)(uint8_t)_181)) << 24) | ((((uint64_t)(uint8_t)_183)) << 16)) | ((((uint64_t)(uint8_t)_185)) << 8)) | (((uint64_t)(uint8_t)_187)));
#line 367 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _188 = _169;
  _189 = _170;
  _171 = (((llvm_lshr_u64(_188, 4)) ^ _189) & 252645135);
  _190 = _171;
  _191 = _170;
  _170 = (_191 ^ _190);
  _192 = _171;
  _193 = _169;
  _169 = (_193 ^ (_192 << 4));
  _194 = _169;
  _195 = _170;
  _171 = (((llvm_lshr_u64(_194, 16)) ^ _195) & 65535);
  _196 = _171;
  _197 = _170;
  _170 = (_197 ^ _196);
  _198 = _171;
  _199 = _169;
  _169 = (_199 ^ (_198 << 16));
  _200 = _170;
  _201 = _169;
  _171 = (((llvm_lshr_u64(_200, 2)) ^ _201) & 858993459);
  _202 = _171;
  _203 = _169;
  _169 = (_203 ^ _202);
  _204 = _171;
  _205 = _170;
  _170 = (_205 ^ (_204 << 2));
  _206 = _170;
  _207 = _169;
  _171 = (((llvm_lshr_u64(_206, 8)) ^ _207) & 16711935);
  _208 = _171;
  _209 = _169;
  _169 = (_209 ^ _208);
  _210 = _171;
  _211 = _170;
  _170 = (_211 ^ (_210 << 8));
  _212 = _170;
  _213 = _170;
  _170 = (((_212 << 1) | (llvm_lshr_u64(_213, 31))) & INT64_C(4294967295));
  _214 = _169;
  _215 = _170;
  _171 = ((_214 ^ _215) & INT64_C(2863311530));
  _216 = _171;
  _217 = _170;
  _170 = (_217 ^ _216);
  _218 = _171;
  _219 = _169;
  _169 = (_219 ^ _218);
  _220 = _169;
  _221 = _169;
  _169 = (((_220 << 1) | (llvm_lshr_u64(_221, 31))) & INT64_C(4294967295));
#line 369 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _222 = _166;
  _166 = (((&((uint64_t*)_222)[((int32_t)1)])));
  _223 = *(uint64_t*)_222;
  _224 = _170;
  _171 = (_223 ^ _224);
  _225 = _171;
  _226 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_225 & 63))])));
  _227 = _171;
  _228 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_227, 8)) & 63))])));
  _229 = _171;
  _230 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_229, 16)) & 63))])));
  _231 = _171;
  _232 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_231, 24)) & 63))])));
  _233 = _169;
  _169 = (_233 ^ (((_226 ^ _228) ^ _230) ^ _232));
  _234 = _166;
  _166 = (((&((uint64_t*)_234)[((int32_t)1)])));
  _235 = *(uint64_t*)_234;
  _236 = _170;
  _237 = _170;
  _171 = (_235 ^ ((_236 << 28) | (llvm_lshr_u64(_237, 4))));
  _238 = _171;
  _239 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_238 & 63))])));
  _240 = _171;
  _241 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_240, 8)) & 63))])));
  _242 = _171;
  _243 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_242, 16)) & 63))])));
  _244 = _171;
  _245 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_244, 24)) & 63))])));
  _246 = _169;
  _169 = (_246 ^ (((_239 ^ _241) ^ _243) ^ _245));
  _247 = _166;
  _166 = (((&((uint64_t*)_247)[((int32_t)1)])));
  _248 = *(uint64_t*)_247;
  _249 = _169;
  _171 = (_248 ^ _249);
  _250 = _171;
  _251 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_250 & 63))])));
  _252 = _171;
  _253 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_252, 8)) & 63))])));
  _254 = _171;
  _255 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_254, 16)) & 63))])));
  _256 = _171;
  _257 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_256, 24)) & 63))])));
  _258 = _170;
  _170 = (_258 ^ (((_251 ^ _253) ^ _255) ^ _257));
  _259 = _166;
  _166 = (((&((uint64_t*)_259)[((int32_t)1)])));
  _260 = *(uint64_t*)_259;
  _261 = _169;
  _262 = _169;
  _171 = (_260 ^ ((_261 << 28) | (llvm_lshr_u64(_262, 4))));
  _263 = _171;
  _264 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_263 & 63))])));
  _265 = _171;
  _266 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_265, 8)) & 63))])));
  _267 = _171;
  _268 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_267, 16)) & 63))])));
  _269 = _171;
  _270 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_269, 24)) & 63))])));
  _271 = _170;
  _170 = (_271 ^ (((_264 ^ _266) ^ _268) ^ _270));
#line 370 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _272 = _166;
  _166 = (((&((uint64_t*)_272)[((int32_t)1)])));
  _273 = *(uint64_t*)_272;
  _274 = _170;
  _171 = (_273 ^ _274);
  _275 = _171;
  _276 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_275 & 63))])));
  _277 = _171;
  _278 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_277, 8)) & 63))])));
  _279 = _171;
  _280 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_279, 16)) & 63))])));
  _281 = _171;
  _282 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_281, 24)) & 63))])));
  _283 = _169;
  _169 = (_283 ^ (((_276 ^ _278) ^ _280) ^ _282));
  _284 = _166;
  _166 = (((&((uint64_t*)_284)[((int32_t)1)])));
  _285 = *(uint64_t*)_284;
  _286 = _170;
  _287 = _170;
  _171 = (_285 ^ ((_286 << 28) | (llvm_lshr_u64(_287, 4))));
  _288 = _171;
  _289 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_288 & 63))])));
  _290 = _171;
  _291 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_290, 8)) & 63))])));
  _292 = _171;
  _293 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_292, 16)) & 63))])));
  _294 = _171;
  _295 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_294, 24)) & 63))])));
  _296 = _169;
  _169 = (_296 ^ (((_289 ^ _291) ^ _293) ^ _295));
  _297 = _166;
  _166 = (((&((uint64_t*)_297)[((int32_t)1)])));
  _298 = *(uint64_t*)_297;
  _299 = _169;
  _171 = (_298 ^ _299);
  _300 = _171;
  _301 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_300 & 63))])));
  _302 = _171;
  _303 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_302, 8)) & 63))])));
  _304 = _171;
  _305 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_304, 16)) & 63))])));
  _306 = _171;
  _307 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_306, 24)) & 63))])));
  _308 = _170;
  _170 = (_308 ^ (((_301 ^ _303) ^ _305) ^ _307));
  _309 = _166;
  _166 = (((&((uint64_t*)_309)[((int32_t)1)])));
  _310 = *(uint64_t*)_309;
  _311 = _169;
  _312 = _169;
  _171 = (_310 ^ ((_311 << 28) | (llvm_lshr_u64(_312, 4))));
  _313 = _171;
  _314 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_313 & 63))])));
  _315 = _171;
  _316 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_315, 8)) & 63))])));
  _317 = _171;
  _318 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_317, 16)) & 63))])));
  _319 = _171;
  _320 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_319, 24)) & 63))])));
  _321 = _170;
  _170 = (_321 ^ (((_314 ^ _316) ^ _318) ^ _320));
#line 371 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _322 = _166;
  _166 = (((&((uint64_t*)_322)[((int32_t)1)])));
  _323 = *(uint64_t*)_322;
  _324 = _170;
  _171 = (_323 ^ _324);
  _325 = _171;
  _326 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_325 & 63))])));
  _327 = _171;
  _328 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_327, 8)) & 63))])));
  _329 = _171;
  _330 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_329, 16)) & 63))])));
  _331 = _171;
  _332 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_331, 24)) & 63))])));
  _333 = _169;
  _169 = (_333 ^ (((_326 ^ _328) ^ _330) ^ _332));
  _334 = _166;
  _166 = (((&((uint64_t*)_334)[((int32_t)1)])));
  _335 = *(uint64_t*)_334;
  _336 = _170;
  _337 = _170;
  _171 = (_335 ^ ((_336 << 28) | (llvm_lshr_u64(_337, 4))));
  _338 = _171;
  _339 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_338 & 63))])));
  _340 = _171;
  _341 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_340, 8)) & 63))])));
  _342 = _171;
  _343 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_342, 16)) & 63))])));
  _344 = _171;
  _345 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_344, 24)) & 63))])));
  _346 = _169;
  _169 = (_346 ^ (((_339 ^ _341) ^ _343) ^ _345));
  _347 = _166;
  _166 = (((&((uint64_t*)_347)[((int32_t)1)])));
  _348 = *(uint64_t*)_347;
  _349 = _169;
  _171 = (_348 ^ _349);
  _350 = _171;
  _351 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_350 & 63))])));
  _352 = _171;
  _353 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_352, 8)) & 63))])));
  _354 = _171;
  _355 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_354, 16)) & 63))])));
  _356 = _171;
  _357 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_356, 24)) & 63))])));
  _358 = _170;
  _170 = (_358 ^ (((_351 ^ _353) ^ _355) ^ _357));
  _359 = _166;
  _166 = (((&((uint64_t*)_359)[((int32_t)1)])));
  _360 = *(uint64_t*)_359;
  _361 = _169;
  _362 = _169;
  _171 = (_360 ^ ((_361 << 28) | (llvm_lshr_u64(_362, 4))));
  _363 = _171;
  _364 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_363 & 63))])));
  _365 = _171;
  _366 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_365, 8)) & 63))])));
  _367 = _171;
  _368 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_367, 16)) & 63))])));
  _369 = _171;
  _370 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_369, 24)) & 63))])));
  _371 = _170;
  _170 = (_371 ^ (((_364 ^ _366) ^ _368) ^ _370));
#line 372 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _372 = _166;
  _166 = (((&((uint64_t*)_372)[((int32_t)1)])));
  _373 = *(uint64_t*)_372;
  _374 = _170;
  _171 = (_373 ^ _374);
  _375 = _171;
  _376 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_375 & 63))])));
  _377 = _171;
  _378 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_377, 8)) & 63))])));
  _379 = _171;
  _380 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_379, 16)) & 63))])));
  _381 = _171;
  _382 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_381, 24)) & 63))])));
  _383 = _169;
  _169 = (_383 ^ (((_376 ^ _378) ^ _380) ^ _382));
  _384 = _166;
  _166 = (((&((uint64_t*)_384)[((int32_t)1)])));
  _385 = *(uint64_t*)_384;
  _386 = _170;
  _387 = _170;
  _171 = (_385 ^ ((_386 << 28) | (llvm_lshr_u64(_387, 4))));
  _388 = _171;
  _389 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_388 & 63))])));
  _390 = _171;
  _391 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_390, 8)) & 63))])));
  _392 = _171;
  _393 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_392, 16)) & 63))])));
  _394 = _171;
  _395 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_394, 24)) & 63))])));
  _396 = _169;
  _169 = (_396 ^ (((_389 ^ _391) ^ _393) ^ _395));
  _397 = _166;
  _166 = (((&((uint64_t*)_397)[((int32_t)1)])));
  _398 = *(uint64_t*)_397;
  _399 = _169;
  _171 = (_398 ^ _399);
  _400 = _171;
  _401 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_400 & 63))])));
  _402 = _171;
  _403 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_402, 8)) & 63))])));
  _404 = _171;
  _405 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_404, 16)) & 63))])));
  _406 = _171;
  _407 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_406, 24)) & 63))])));
  _408 = _170;
  _170 = (_408 ^ (((_401 ^ _403) ^ _405) ^ _407));
  _409 = _166;
  _166 = (((&((uint64_t*)_409)[((int32_t)1)])));
  _410 = *(uint64_t*)_409;
  _411 = _169;
  _412 = _169;
  _171 = (_410 ^ ((_411 << 28) | (llvm_lshr_u64(_412, 4))));
  _413 = _171;
  _414 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_413 & 63))])));
  _415 = _171;
  _416 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_415, 8)) & 63))])));
  _417 = _171;
  _418 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_417, 16)) & 63))])));
  _419 = _171;
  _420 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_419, 24)) & 63))])));
  _421 = _170;
  _170 = (_421 ^ (((_414 ^ _416) ^ _418) ^ _420));
#line 373 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _422 = _166;
  _166 = (((&((uint64_t*)_422)[((int32_t)1)])));
  _423 = *(uint64_t*)_422;
  _424 = _170;
  _171 = (_423 ^ _424);
  _425 = _171;
  _426 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_425 & 63))])));
  _427 = _171;
  _428 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_427, 8)) & 63))])));
  _429 = _171;
  _430 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_429, 16)) & 63))])));
  _431 = _171;
  _432 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_431, 24)) & 63))])));
  _433 = _169;
  _169 = (_433 ^ (((_426 ^ _428) ^ _430) ^ _432));
  _434 = _166;
  _166 = (((&((uint64_t*)_434)[((int32_t)1)])));
  _435 = *(uint64_t*)_434;
  _436 = _170;
  _437 = _170;
  _171 = (_435 ^ ((_436 << 28) | (llvm_lshr_u64(_437, 4))));
  _438 = _171;
  _439 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_438 & 63))])));
  _440 = _171;
  _441 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_440, 8)) & 63))])));
  _442 = _171;
  _443 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_442, 16)) & 63))])));
  _444 = _171;
  _445 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_444, 24)) & 63))])));
  _446 = _169;
  _169 = (_446 ^ (((_439 ^ _441) ^ _443) ^ _445));
  _447 = _166;
  _166 = (((&((uint64_t*)_447)[((int32_t)1)])));
  _448 = *(uint64_t*)_447;
  _449 = _169;
  _171 = (_448 ^ _449);
  _450 = _171;
  _451 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_450 & 63))])));
  _452 = _171;
  _453 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_452, 8)) & 63))])));
  _454 = _171;
  _455 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_454, 16)) & 63))])));
  _456 = _171;
  _457 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_456, 24)) & 63))])));
  _458 = _170;
  _170 = (_458 ^ (((_451 ^ _453) ^ _455) ^ _457));
  _459 = _166;
  _166 = (((&((uint64_t*)_459)[((int32_t)1)])));
  _460 = *(uint64_t*)_459;
  _461 = _169;
  _462 = _169;
  _171 = (_460 ^ ((_461 << 28) | (llvm_lshr_u64(_462, 4))));
  _463 = _171;
  _464 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_463 & 63))])));
  _465 = _171;
  _466 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_465, 8)) & 63))])));
  _467 = _171;
  _468 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_467, 16)) & 63))])));
  _469 = _171;
  _470 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_469, 24)) & 63))])));
  _471 = _170;
  _170 = (_471 ^ (((_464 ^ _466) ^ _468) ^ _470));
#line 374 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _472 = _166;
  _166 = (((&((uint64_t*)_472)[((int32_t)1)])));
  _473 = *(uint64_t*)_472;
  _474 = _170;
  _171 = (_473 ^ _474);
  _475 = _171;
  _476 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_475 & 63))])));
  _477 = _171;
  _478 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_477, 8)) & 63))])));
  _479 = _171;
  _480 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_479, 16)) & 63))])));
  _481 = _171;
  _482 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_481, 24)) & 63))])));
  _483 = _169;
  _169 = (_483 ^ (((_476 ^ _478) ^ _480) ^ _482));
  _484 = _166;
  _166 = (((&((uint64_t*)_484)[((int32_t)1)])));
  _485 = *(uint64_t*)_484;
  _486 = _170;
  _487 = _170;
  _171 = (_485 ^ ((_486 << 28) | (llvm_lshr_u64(_487, 4))));
  _488 = _171;
  _489 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_488 & 63))])));
  _490 = _171;
  _491 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_490, 8)) & 63))])));
  _492 = _171;
  _493 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_492, 16)) & 63))])));
  _494 = _171;
  _495 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_494, 24)) & 63))])));
  _496 = _169;
  _169 = (_496 ^ (((_489 ^ _491) ^ _493) ^ _495));
  _497 = _166;
  _166 = (((&((uint64_t*)_497)[((int32_t)1)])));
  _498 = *(uint64_t*)_497;
  _499 = _169;
  _171 = (_498 ^ _499);
  _500 = _171;
  _501 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_500 & 63))])));
  _502 = _171;
  _503 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_502, 8)) & 63))])));
  _504 = _171;
  _505 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_504, 16)) & 63))])));
  _506 = _171;
  _507 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_506, 24)) & 63))])));
  _508 = _170;
  _170 = (_508 ^ (((_501 ^ _503) ^ _505) ^ _507));
  _509 = _166;
  _166 = (((&((uint64_t*)_509)[((int32_t)1)])));
  _510 = *(uint64_t*)_509;
  _511 = _169;
  _512 = _169;
  _171 = (_510 ^ ((_511 << 28) | (llvm_lshr_u64(_512, 4))));
  _513 = _171;
  _514 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_513 & 63))])));
  _515 = _171;
  _516 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_515, 8)) & 63))])));
  _517 = _171;
  _518 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_517, 16)) & 63))])));
  _519 = _171;
  _520 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_519, 24)) & 63))])));
  _521 = _170;
  _170 = (_521 ^ (((_514 ^ _516) ^ _518) ^ _520));
#line 375 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _522 = _166;
  _166 = (((&((uint64_t*)_522)[((int32_t)1)])));
  _523 = *(uint64_t*)_522;
  _524 = _170;
  _171 = (_523 ^ _524);
  _525 = _171;
  _526 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_525 & 63))])));
  _527 = _171;
  _528 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_527, 8)) & 63))])));
  _529 = _171;
  _530 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_529, 16)) & 63))])));
  _531 = _171;
  _532 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_531, 24)) & 63))])));
  _533 = _169;
  _169 = (_533 ^ (((_526 ^ _528) ^ _530) ^ _532));
  _534 = _166;
  _166 = (((&((uint64_t*)_534)[((int32_t)1)])));
  _535 = *(uint64_t*)_534;
  _536 = _170;
  _537 = _170;
  _171 = (_535 ^ ((_536 << 28) | (llvm_lshr_u64(_537, 4))));
  _538 = _171;
  _539 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_538 & 63))])));
  _540 = _171;
  _541 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_540, 8)) & 63))])));
  _542 = _171;
  _543 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_542, 16)) & 63))])));
  _544 = _171;
  _545 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_544, 24)) & 63))])));
  _546 = _169;
  _169 = (_546 ^ (((_539 ^ _541) ^ _543) ^ _545));
  _547 = _166;
  _166 = (((&((uint64_t*)_547)[((int32_t)1)])));
  _548 = *(uint64_t*)_547;
  _549 = _169;
  _171 = (_548 ^ _549);
  _550 = _171;
  _551 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_550 & 63))])));
  _552 = _171;
  _553 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_552, 8)) & 63))])));
  _554 = _171;
  _555 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_554, 16)) & 63))])));
  _556 = _171;
  _557 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_556, 24)) & 63))])));
  _558 = _170;
  _170 = (_558 ^ (((_551 ^ _553) ^ _555) ^ _557));
  _559 = _166;
  _166 = (((&((uint64_t*)_559)[((int32_t)1)])));
  _560 = *(uint64_t*)_559;
  _561 = _169;
  _562 = _169;
  _171 = (_560 ^ ((_561 << 28) | (llvm_lshr_u64(_562, 4))));
  _563 = _171;
  _564 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_563 & 63))])));
  _565 = _171;
  _566 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_565, 8)) & 63))])));
  _567 = _171;
  _568 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_567, 16)) & 63))])));
  _569 = _171;
  _570 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_569, 24)) & 63))])));
  _571 = _170;
  _170 = (_571 ^ (((_564 ^ _566) ^ _568) ^ _570));
#line 376 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _572 = _166;
  _166 = (((&((uint64_t*)_572)[((int32_t)1)])));
  _573 = *(uint64_t*)_572;
  _574 = _170;
  _171 = (_573 ^ _574);
  _575 = _171;
  _576 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_575 & 63))])));
  _577 = _171;
  _578 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_577, 8)) & 63))])));
  _579 = _171;
  _580 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_579, 16)) & 63))])));
  _581 = _171;
  _582 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_581, 24)) & 63))])));
  _583 = _169;
  _169 = (_583 ^ (((_576 ^ _578) ^ _580) ^ _582));
  _584 = _166;
  _166 = (((&((uint64_t*)_584)[((int32_t)1)])));
  _585 = *(uint64_t*)_584;
  _586 = _170;
  _587 = _170;
  _171 = (_585 ^ ((_586 << 28) | (llvm_lshr_u64(_587, 4))));
  _588 = _171;
  _589 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_588 & 63))])));
  _590 = _171;
  _591 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_590, 8)) & 63))])));
  _592 = _171;
  _593 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_592, 16)) & 63))])));
  _594 = _171;
  _595 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_594, 24)) & 63))])));
  _596 = _169;
  _169 = (_596 ^ (((_589 ^ _591) ^ _593) ^ _595));
  _597 = _166;
  _166 = (((&((uint64_t*)_597)[((int32_t)1)])));
  _598 = *(uint64_t*)_597;
  _599 = _169;
  _171 = (_598 ^ _599);
  _600 = _171;
  _601 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_600 & 63))])));
  _602 = _171;
  _603 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_602, 8)) & 63))])));
  _604 = _171;
  _605 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_604, 16)) & 63))])));
  _606 = _171;
  _607 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_606, 24)) & 63))])));
  _608 = _170;
  _170 = (_608 ^ (((_601 ^ _603) ^ _605) ^ _607));
  _609 = _166;
  _166 = (((&((uint64_t*)_609)[((int32_t)1)])));
  _610 = *(uint64_t*)_609;
  _611 = _169;
  _612 = _169;
  _171 = (_610 ^ ((_611 << 28) | (llvm_lshr_u64(_612, 4))));
  _613 = _171;
  _614 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_613 & 63))])));
  _615 = _171;
  _616 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_615, 8)) & 63))])));
  _617 = _171;
  _618 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_617, 16)) & 63))])));
  _619 = _171;
  _620 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_619, 24)) & 63))])));
  _621 = _170;
  _170 = (_621 ^ (((_614 ^ _616) ^ _618) ^ _620));
#line 378 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _622 = _170;
  _623 = _170;
  _170 = (((_622 << 31) | (llvm_lshr_u64(_623, 1))) & INT64_C(4294967295));
  _624 = _170;
  _625 = _169;
  _171 = ((_624 ^ _625) & INT64_C(2863311530));
  _626 = _171;
  _627 = _170;
  _170 = (_627 ^ _626);
  _628 = _171;
  _629 = _169;
  _169 = (_629 ^ _628);
  _630 = _169;
  _631 = _169;
  _169 = (((_630 << 31) | (llvm_lshr_u64(_631, 1))) & INT64_C(4294967295));
  _632 = _169;
  _633 = _170;
  _171 = (((llvm_lshr_u64(_632, 8)) ^ _633) & 16711935);
  _634 = _171;
  _635 = _170;
  _170 = (_635 ^ _634);
  _636 = _171;
  _637 = _169;
  _169 = (_637 ^ (_636 << 8));
  _638 = _169;
  _639 = _170;
  _171 = (((llvm_lshr_u64(_638, 2)) ^ _639) & 858993459);
  _640 = _171;
  _641 = _170;
  _170 = (_641 ^ _640);
  _642 = _171;
  _643 = _169;
  _169 = (_643 ^ (_642 << 2));
  _644 = _170;
  _645 = _169;
  _171 = (((llvm_lshr_u64(_644, 16)) ^ _645) & 65535);
  _646 = _171;
  _647 = _169;
  _169 = (_647 ^ _646);
  _648 = _171;
  _649 = _170;
  _170 = (_649 ^ (_648 << 16));
  _650 = _170;
  _651 = _169;
  _171 = (((llvm_lshr_u64(_650, 4)) ^ _651) & 252645135);
  _652 = _171;
  _653 = _169;
  _169 = (_653 ^ _652);
  _654 = _171;
  _655 = _170;
  _170 = (_655 ^ (_654 << 4));
#line 380 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _656 = _170;
  _657 = _168;
  *(uint8_t*)((((uint8_t*)_657))) = (((uint8_t)(llvm_lshr_u64(_656, 24))));
  _658 = _170;
  _659 = _168;
  *(uint8_t*)(((&((uint8_t*)_659)[((int64_t)1)]))) = (((uint8_t)(llvm_lshr_u64(_658, 16))));
  _660 = _170;
  _661 = _168;
  *(uint8_t*)(((&((uint8_t*)_661)[((int64_t)2)]))) = (((uint8_t)(llvm_lshr_u64(_660, 8))));
  _662 = _170;
  _663 = _168;
  *(uint8_t*)(((&((uint8_t*)_663)[((int64_t)3)]))) = (((uint8_t)_662));
#line 381 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _664 = _169;
  _665 = _168;
  *(uint8_t*)(((&((uint8_t*)_665)[((int64_t)4)]))) = (((uint8_t)(llvm_lshr_u64(_664, 24))));
  _666 = _169;
  _667 = _168;
  *(uint8_t*)(((&((uint8_t*)_667)[((int64_t)5)]))) = (((uint8_t)(llvm_lshr_u64(_666, 16))));
  _668 = _169;
  _669 = _168;
  *(uint8_t*)(((&((uint8_t*)_669)[((int64_t)6)]))) = (((uint8_t)(llvm_lshr_u64(_668, 8))));
  _670 = _169;
  _671 = _168;
  *(uint8_t*)(((&((uint8_t*)_671)[((int64_t)7)]))) = (((uint8_t)_670));
}


void des_encrypt(void* _672, void* _673, void* _674) {
  void* _675;    /* Address-exposed local */
  void* _676;    /* Address-exposed local */
  void* _677;    /* Address-exposed local */
  void* _678;
  void* _679;
  void* _680;

  _675 = _672;
#line 384 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _676 = _673;
  ;
  _677 = _674;
  ;
#line 386 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _678 = _675;
  _679 = _676;
  _680 = _677;
  des_crypt((((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_678)->field0)))))->array[((int64_t)0)]))), _679, _680);
}


void des_decrypt(void* _681, void* _682, void* _683) {
  void* _684;    /* Address-exposed local */
  void* _685;    /* Address-exposed local */
  void* _686;    /* Address-exposed local */
  void* _687;
  void* _688;
  void* _689;

  _684 = _681;
#line 389 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _685 = _682;
  ;
  _686 = _683;
  ;
#line 391 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _687 = _684;
  _688 = _685;
  _689 = _686;
  des_crypt((((&((struct l_array_32_uint64_t*)(((&(((struct l_struct_struct_OC_des_context*)_687)->field1)))))->array[((int64_t)0)]))), _688, _689);
}


uint32_t des3_set_2keys(void* _690, void* _691, void* _692) {
  void* _693;    /* Address-exposed local */
  void* _694;    /* Address-exposed local */
  void* _695;    /* Address-exposed local */
  uint32_t _696;    /* Address-exposed local */
  void* _697;
  void* _698;
  uint32_t _699;
  void* _700;
  void* _701;
  uint32_t _702;
  uint32_t _703;
  void* _704;
  uint32_t _705;
  uint64_t _706;
  void* _707;
  uint32_t _708;
  void* _709;
  uint32_t _710;
  uint64_t _711;
  void* _712;
  uint32_t _713;
  void* _714;
  uint32_t _715;
  uint64_t _716;
  void* _717;
  uint32_t _718;
  void* _719;
  uint32_t _720;
  uint64_t _721;
  void* _722;
  uint32_t _723;
  void* _724;
  uint32_t _725;
  uint64_t _726;
  void* _727;
  uint32_t _728;
  void* _729;
  uint32_t _730;
  uint64_t _731;
  void* _732;
  uint32_t _733;
  void* _734;
  uint32_t _735;
  uint64_t _736;
  void* _737;
  uint32_t _738;
  void* _739;
  uint32_t _740;
  uint64_t _741;
  void* _742;
  uint32_t _743;
  uint32_t _744;

  _693 = _690;
#line 396 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _694 = _691;
  ;
  _695 = _692;
  ;
#line 398 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 400 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _697 = _693;
  _698 = _694;
  _699 = des_main_ks((((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_697)->field0)))))->array[((int64_t)0)]))), _698);
#line 401 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _700 = _693;
  _701 = _695;
  _702 = des_main_ks((((&((uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_700)->field1)))))->array[((int64_t)0)]))))[((int64_t)32)]))), _701);
#line 403 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _696 = 0;
  goto _745;

  do {     /* Syntactic loop '' to make GCC happy */
_745:
  _703 = _696;
  if ((((int32_t)_703) < ((int32_t)32u))) {
    goto _746;
  } else {
    goto _747;
  }

_746:
#line 405 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _704 = _693;
  _705 = _696;
  _706 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_704)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(30, _705)))))])));
  _707 = _693;
  _708 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_707)->field1)))))->array[((int64_t)(((int64_t)(int32_t)_708)))]))) = _706;
#line 406 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _709 = _693;
  _710 = _696;
  _711 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_709)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(31, _710)))))])));
  _712 = _693;
  _713 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_712)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_713, 1)))))]))) = _711;
#line 408 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _714 = _693;
  _715 = _696;
  _716 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_714)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(62, _715)))))])));
  _717 = _693;
  _718 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_717)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_718, 32)))))]))) = _716;
#line 409 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _719 = _693;
  _720 = _696;
  _721 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_719)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(63, _720)))))])));
  _722 = _693;
  _723 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_722)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_723, 33)))))]))) = _721;
#line 411 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _724 = _693;
  _725 = _696;
  _726 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_724)->field0)))))->array[((int64_t)(((int64_t)(int32_t)_725)))])));
  _727 = _693;
  _728 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_727)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_728, 64)))))]))) = _726;
#line 412 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _729 = _693;
  _730 = _696;
  _731 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_729)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(1, _730)))))])));
  _732 = _693;
  _733 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_732)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_733, 65)))))]))) = _731;
#line 414 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _734 = _693;
  _735 = _696;
  _736 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_734)->field1)))))->array[((int64_t)(((int64_t)(int32_t)_735)))])));
  _737 = _693;
  _738 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_737)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_738, 64)))))]))) = _736;
#line 415 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _739 = _693;
  _740 = _696;
  _741 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_739)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(1, _740)))))])));
  _742 = _693;
  _743 = _696;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_742)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_743, 65)))))]))) = _741;
  goto _748;

_748:
#line 403 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _744 = _696;
  _696 = (llvm_add_u32(_744, 2));
  goto _745;

  } while (1); /* end of syntactic loop '' */
_747:
  return 0;
}


uint32_t des3_set_3keys(void* _749, void* _750, void* _751, void* _752) {
  void* _753;    /* Address-exposed local */
  void* _754;    /* Address-exposed local */
  void* _755;    /* Address-exposed local */
  void* _756;    /* Address-exposed local */
  uint32_t _757;    /* Address-exposed local */
  void* _758;
  void* _759;
  uint32_t _760;
  void* _761;
  void* _762;
  uint32_t _763;
  void* _764;
  void* _765;
  uint32_t _766;
  uint32_t _767;
  void* _768;
  uint32_t _769;
  uint64_t _770;
  void* _771;
  uint32_t _772;
  void* _773;
  uint32_t _774;
  uint64_t _775;
  void* _776;
  uint32_t _777;
  void* _778;
  uint32_t _779;
  uint64_t _780;
  void* _781;
  uint32_t _782;
  void* _783;
  uint32_t _784;
  uint64_t _785;
  void* _786;
  uint32_t _787;
  void* _788;
  uint32_t _789;
  uint64_t _790;
  void* _791;
  uint32_t _792;
  void* _793;
  uint32_t _794;
  uint64_t _795;
  void* _796;
  uint32_t _797;
  uint32_t _798;

  _753 = _749;
#line 421 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _754 = _750;
  ;
  _755 = _751;
  ;
  _756 = _752;
#line 422 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 424 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 426 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _758 = _753;
  _759 = _754;
  _760 = des_main_ks((((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_758)->field0)))))->array[((int64_t)0)]))), _759);
#line 427 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _761 = _753;
  _762 = _755;
  _763 = des_main_ks((((&((uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_761)->field1)))))->array[((int64_t)0)]))))[((int64_t)32)]))), _762);
#line 428 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _764 = _753;
  _765 = _756;
  _766 = des_main_ks((((&((uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_764)->field0)))))->array[((int64_t)0)]))))[((int64_t)64)]))), _765);
#line 430 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _757 = 0;
  goto _799;

  do {     /* Syntactic loop '' to make GCC happy */
_799:
  _767 = _757;
  if ((((int32_t)_767) < ((int32_t)32u))) {
    goto _800;
  } else {
    goto _801;
  }

_800:
#line 432 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _768 = _753;
  _769 = _757;
  _770 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_768)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(94, _769)))))])));
  _771 = _753;
  _772 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_771)->field1)))))->array[((int64_t)(((int64_t)(int32_t)_772)))]))) = _770;
#line 433 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _773 = _753;
  _774 = _757;
  _775 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_773)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(95, _774)))))])));
  _776 = _753;
  _777 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_776)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_777, 1)))))]))) = _775;
#line 435 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _778 = _753;
  _779 = _757;
  _780 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_778)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(62, _779)))))])));
  _781 = _753;
  _782 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_781)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_782, 32)))))]))) = _780;
#line 436 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _783 = _753;
  _784 = _757;
  _785 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_783)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(63, _784)))))])));
  _786 = _753;
  _787 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_786)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_787, 33)))))]))) = _785;
#line 438 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _788 = _753;
  _789 = _757;
  _790 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_788)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(30, _789)))))])));
  _791 = _753;
  _792 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_791)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_792, 64)))))]))) = _790;
#line 439 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _793 = _753;
  _794 = _757;
  _795 = *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_793)->field0)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_sub_u32(31, _794)))))])));
  _796 = _753;
  _797 = _757;
  *(uint64_t*)(((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_796)->field1)))))->array[((int64_t)(((int64_t)(int32_t)(llvm_add_u32(_797, 65)))))]))) = _795;
  goto _802;

_802:
#line 430 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _798 = _757;
  _757 = (llvm_add_u32(_798, 2));
  goto _799;

  } while (1); /* end of syntactic loop '' */
_801:
  return 0;
}


void des3_crypt(void* _803, void* _804, void* _805) {
  void* _806;    /* Address-exposed local */
  void* _807;    /* Address-exposed local */
  void* _808;    /* Address-exposed local */
  uint64_t _809;    /* Address-exposed local */
  uint64_t _810;    /* Address-exposed local */
  uint64_t _811;    /* Address-exposed local */
  void* _812;
  uint8_t _813;
  void* _814;
  uint8_t _815;
  void* _816;
  uint8_t _817;
  void* _818;
  uint8_t _819;
  void* _820;
  uint8_t _821;
  void* _822;
  uint8_t _823;
  void* _824;
  uint8_t _825;
  void* _826;
  uint8_t _827;
  uint64_t _828;
  uint64_t _829;
  uint64_t _830;
  uint64_t _831;
  uint64_t _832;
  uint64_t _833;
  uint64_t _834;
  uint64_t _835;
  uint64_t _836;
  uint64_t _837;
  uint64_t _838;
  uint64_t _839;
  uint64_t _840;
  uint64_t _841;
  uint64_t _842;
  uint64_t _843;
  uint64_t _844;
  uint64_t _845;
  uint64_t _846;
  uint64_t _847;
  uint64_t _848;
  uint64_t _849;
  uint64_t _850;
  uint64_t _851;
  uint64_t _852;
  uint64_t _853;
  uint64_t _854;
  uint64_t _855;
  uint64_t _856;
  uint64_t _857;
  uint64_t _858;
  uint64_t _859;
  uint64_t _860;
  uint64_t _861;
  void* _862;
  uint64_t _863;
  uint64_t _864;
  uint64_t _865;
  uint64_t _866;
  uint64_t _867;
  uint64_t _868;
  uint64_t _869;
  uint64_t _870;
  uint64_t _871;
  uint64_t _872;
  uint64_t _873;
  void* _874;
  uint64_t _875;
  uint64_t _876;
  uint64_t _877;
  uint64_t _878;
  uint64_t _879;
  uint64_t _880;
  uint64_t _881;
  uint64_t _882;
  uint64_t _883;
  uint64_t _884;
  uint64_t _885;
  uint64_t _886;
  void* _887;
  uint64_t _888;
  uint64_t _889;
  uint64_t _890;
  uint64_t _891;
  uint64_t _892;
  uint64_t _893;
  uint64_t _894;
  uint64_t _895;
  uint64_t _896;
  uint64_t _897;
  uint64_t _898;
  void* _899;
  uint64_t _900;
  uint64_t _901;
  uint64_t _902;
  uint64_t _903;
  uint64_t _904;
  uint64_t _905;
  uint64_t _906;
  uint64_t _907;
  uint64_t _908;
  uint64_t _909;
  uint64_t _910;
  uint64_t _911;
  void* _912;
  uint64_t _913;
  uint64_t _914;
  uint64_t _915;
  uint64_t _916;
  uint64_t _917;
  uint64_t _918;
  uint64_t _919;
  uint64_t _920;
  uint64_t _921;
  uint64_t _922;
  uint64_t _923;
  void* _924;
  uint64_t _925;
  uint64_t _926;
  uint64_t _927;
  uint64_t _928;
  uint64_t _929;
  uint64_t _930;
  uint64_t _931;
  uint64_t _932;
  uint64_t _933;
  uint64_t _934;
  uint64_t _935;
  uint64_t _936;
  void* _937;
  uint64_t _938;
  uint64_t _939;
  uint64_t _940;
  uint64_t _941;
  uint64_t _942;
  uint64_t _943;
  uint64_t _944;
  uint64_t _945;
  uint64_t _946;
  uint64_t _947;
  uint64_t _948;
  void* _949;
  uint64_t _950;
  uint64_t _951;
  uint64_t _952;
  uint64_t _953;
  uint64_t _954;
  uint64_t _955;
  uint64_t _956;
  uint64_t _957;
  uint64_t _958;
  uint64_t _959;
  uint64_t _960;
  uint64_t _961;
  void* _962;
  uint64_t _963;
  uint64_t _964;
  uint64_t _965;
  uint64_t _966;
  uint64_t _967;
  uint64_t _968;
  uint64_t _969;
  uint64_t _970;
  uint64_t _971;
  uint64_t _972;
  uint64_t _973;
  void* _974;
  uint64_t _975;
  uint64_t _976;
  uint64_t _977;
  uint64_t _978;
  uint64_t _979;
  uint64_t _980;
  uint64_t _981;
  uint64_t _982;
  uint64_t _983;
  uint64_t _984;
  uint64_t _985;
  uint64_t _986;
  void* _987;
  uint64_t _988;
  uint64_t _989;
  uint64_t _990;
  uint64_t _991;
  uint64_t _992;
  uint64_t _993;
  uint64_t _994;
  uint64_t _995;
  uint64_t _996;
  uint64_t _997;
  uint64_t _998;
  void* _999;
  uint64_t _1000;
  uint64_t _1001;
  uint64_t _1002;
  uint64_t _1003;
  uint64_t _1004;
  uint64_t _1005;
  uint64_t _1006;
  uint64_t _1007;
  uint64_t _1008;
  uint64_t _1009;
  uint64_t _1010;
  uint64_t _1011;
  void* _1012;
  uint64_t _1013;
  uint64_t _1014;
  uint64_t _1015;
  uint64_t _1016;
  uint64_t _1017;
  uint64_t _1018;
  uint64_t _1019;
  uint64_t _1020;
  uint64_t _1021;
  uint64_t _1022;
  uint64_t _1023;
  void* _1024;
  uint64_t _1025;
  uint64_t _1026;
  uint64_t _1027;
  uint64_t _1028;
  uint64_t _1029;
  uint64_t _1030;
  uint64_t _1031;
  uint64_t _1032;
  uint64_t _1033;
  uint64_t _1034;
  uint64_t _1035;
  uint64_t _1036;
  void* _1037;
  uint64_t _1038;
  uint64_t _1039;
  uint64_t _1040;
  uint64_t _1041;
  uint64_t _1042;
  uint64_t _1043;
  uint64_t _1044;
  uint64_t _1045;
  uint64_t _1046;
  uint64_t _1047;
  uint64_t _1048;
  void* _1049;
  uint64_t _1050;
  uint64_t _1051;
  uint64_t _1052;
  uint64_t _1053;
  uint64_t _1054;
  uint64_t _1055;
  uint64_t _1056;
  uint64_t _1057;
  uint64_t _1058;
  uint64_t _1059;
  uint64_t _1060;
  uint64_t _1061;
  void* _1062;
  uint64_t _1063;
  uint64_t _1064;
  uint64_t _1065;
  uint64_t _1066;
  uint64_t _1067;
  uint64_t _1068;
  uint64_t _1069;
  uint64_t _1070;
  uint64_t _1071;
  uint64_t _1072;
  uint64_t _1073;
  void* _1074;
  uint64_t _1075;
  uint64_t _1076;
  uint64_t _1077;
  uint64_t _1078;
  uint64_t _1079;
  uint64_t _1080;
  uint64_t _1081;
  uint64_t _1082;
  uint64_t _1083;
  uint64_t _1084;
  uint64_t _1085;
  uint64_t _1086;
  void* _1087;
  uint64_t _1088;
  uint64_t _1089;
  uint64_t _1090;
  uint64_t _1091;
  uint64_t _1092;
  uint64_t _1093;
  uint64_t _1094;
  uint64_t _1095;
  uint64_t _1096;
  uint64_t _1097;
  uint64_t _1098;
  void* _1099;
  uint64_t _1100;
  uint64_t _1101;
  uint64_t _1102;
  uint64_t _1103;
  uint64_t _1104;
  uint64_t _1105;
  uint64_t _1106;
  uint64_t _1107;
  uint64_t _1108;
  uint64_t _1109;
  uint64_t _1110;
  uint64_t _1111;
  void* _1112;
  uint64_t _1113;
  uint64_t _1114;
  uint64_t _1115;
  uint64_t _1116;
  uint64_t _1117;
  uint64_t _1118;
  uint64_t _1119;
  uint64_t _1120;
  uint64_t _1121;
  uint64_t _1122;
  uint64_t _1123;
  void* _1124;
  uint64_t _1125;
  uint64_t _1126;
  uint64_t _1127;
  uint64_t _1128;
  uint64_t _1129;
  uint64_t _1130;
  uint64_t _1131;
  uint64_t _1132;
  uint64_t _1133;
  uint64_t _1134;
  uint64_t _1135;
  uint64_t _1136;
  void* _1137;
  uint64_t _1138;
  uint64_t _1139;
  uint64_t _1140;
  uint64_t _1141;
  uint64_t _1142;
  uint64_t _1143;
  uint64_t _1144;
  uint64_t _1145;
  uint64_t _1146;
  uint64_t _1147;
  uint64_t _1148;
  void* _1149;
  uint64_t _1150;
  uint64_t _1151;
  uint64_t _1152;
  uint64_t _1153;
  uint64_t _1154;
  uint64_t _1155;
  uint64_t _1156;
  uint64_t _1157;
  uint64_t _1158;
  uint64_t _1159;
  uint64_t _1160;
  uint64_t _1161;
  void* _1162;
  uint64_t _1163;
  uint64_t _1164;
  uint64_t _1165;
  uint64_t _1166;
  uint64_t _1167;
  uint64_t _1168;
  uint64_t _1169;
  uint64_t _1170;
  uint64_t _1171;
  uint64_t _1172;
  uint64_t _1173;
  void* _1174;
  uint64_t _1175;
  uint64_t _1176;
  uint64_t _1177;
  uint64_t _1178;
  uint64_t _1179;
  uint64_t _1180;
  uint64_t _1181;
  uint64_t _1182;
  uint64_t _1183;
  uint64_t _1184;
  uint64_t _1185;
  uint64_t _1186;
  void* _1187;
  uint64_t _1188;
  uint64_t _1189;
  uint64_t _1190;
  uint64_t _1191;
  uint64_t _1192;
  uint64_t _1193;
  uint64_t _1194;
  uint64_t _1195;
  uint64_t _1196;
  uint64_t _1197;
  uint64_t _1198;
  void* _1199;
  uint64_t _1200;
  uint64_t _1201;
  uint64_t _1202;
  uint64_t _1203;
  uint64_t _1204;
  uint64_t _1205;
  uint64_t _1206;
  uint64_t _1207;
  uint64_t _1208;
  uint64_t _1209;
  uint64_t _1210;
  uint64_t _1211;
  void* _1212;
  uint64_t _1213;
  uint64_t _1214;
  uint64_t _1215;
  uint64_t _1216;
  uint64_t _1217;
  uint64_t _1218;
  uint64_t _1219;
  uint64_t _1220;
  uint64_t _1221;
  uint64_t _1222;
  uint64_t _1223;
  void* _1224;
  uint64_t _1225;
  uint64_t _1226;
  uint64_t _1227;
  uint64_t _1228;
  uint64_t _1229;
  uint64_t _1230;
  uint64_t _1231;
  uint64_t _1232;
  uint64_t _1233;
  uint64_t _1234;
  uint64_t _1235;
  uint64_t _1236;
  void* _1237;
  uint64_t _1238;
  uint64_t _1239;
  uint64_t _1240;
  uint64_t _1241;
  uint64_t _1242;
  uint64_t _1243;
  uint64_t _1244;
  uint64_t _1245;
  uint64_t _1246;
  uint64_t _1247;
  uint64_t _1248;
  void* _1249;
  uint64_t _1250;
  uint64_t _1251;
  uint64_t _1252;
  uint64_t _1253;
  uint64_t _1254;
  uint64_t _1255;
  uint64_t _1256;
  uint64_t _1257;
  uint64_t _1258;
  uint64_t _1259;
  uint64_t _1260;
  uint64_t _1261;
  void* _1262;
  uint64_t _1263;
  uint64_t _1264;
  uint64_t _1265;
  uint64_t _1266;
  uint64_t _1267;
  uint64_t _1268;
  uint64_t _1269;
  uint64_t _1270;
  uint64_t _1271;
  uint64_t _1272;
  uint64_t _1273;
  void* _1274;
  uint64_t _1275;
  uint64_t _1276;
  uint64_t _1277;
  uint64_t _1278;
  uint64_t _1279;
  uint64_t _1280;
  uint64_t _1281;
  uint64_t _1282;
  uint64_t _1283;
  uint64_t _1284;
  uint64_t _1285;
  uint64_t _1286;
  void* _1287;
  uint64_t _1288;
  uint64_t _1289;
  uint64_t _1290;
  uint64_t _1291;
  uint64_t _1292;
  uint64_t _1293;
  uint64_t _1294;
  uint64_t _1295;
  uint64_t _1296;
  uint64_t _1297;
  uint64_t _1298;
  void* _1299;
  uint64_t _1300;
  uint64_t _1301;
  uint64_t _1302;
  uint64_t _1303;
  uint64_t _1304;
  uint64_t _1305;
  uint64_t _1306;
  uint64_t _1307;
  uint64_t _1308;
  uint64_t _1309;
  uint64_t _1310;
  uint64_t _1311;
  void* _1312;
  uint64_t _1313;
  uint64_t _1314;
  uint64_t _1315;
  uint64_t _1316;
  uint64_t _1317;
  uint64_t _1318;
  uint64_t _1319;
  uint64_t _1320;
  uint64_t _1321;
  uint64_t _1322;
  uint64_t _1323;
  void* _1324;
  uint64_t _1325;
  uint64_t _1326;
  uint64_t _1327;
  uint64_t _1328;
  uint64_t _1329;
  uint64_t _1330;
  uint64_t _1331;
  uint64_t _1332;
  uint64_t _1333;
  uint64_t _1334;
  uint64_t _1335;
  uint64_t _1336;
  void* _1337;
  uint64_t _1338;
  uint64_t _1339;
  uint64_t _1340;
  uint64_t _1341;
  uint64_t _1342;
  uint64_t _1343;
  uint64_t _1344;
  uint64_t _1345;
  uint64_t _1346;
  uint64_t _1347;
  uint64_t _1348;
  void* _1349;
  uint64_t _1350;
  uint64_t _1351;
  uint64_t _1352;
  uint64_t _1353;
  uint64_t _1354;
  uint64_t _1355;
  uint64_t _1356;
  uint64_t _1357;
  uint64_t _1358;
  uint64_t _1359;
  uint64_t _1360;
  uint64_t _1361;
  void* _1362;
  uint64_t _1363;
  uint64_t _1364;
  uint64_t _1365;
  uint64_t _1366;
  uint64_t _1367;
  uint64_t _1368;
  uint64_t _1369;
  uint64_t _1370;
  uint64_t _1371;
  uint64_t _1372;
  uint64_t _1373;
  void* _1374;
  uint64_t _1375;
  uint64_t _1376;
  uint64_t _1377;
  uint64_t _1378;
  uint64_t _1379;
  uint64_t _1380;
  uint64_t _1381;
  uint64_t _1382;
  uint64_t _1383;
  uint64_t _1384;
  uint64_t _1385;
  uint64_t _1386;
  void* _1387;
  uint64_t _1388;
  uint64_t _1389;
  uint64_t _1390;
  uint64_t _1391;
  uint64_t _1392;
  uint64_t _1393;
  uint64_t _1394;
  uint64_t _1395;
  uint64_t _1396;
  uint64_t _1397;
  uint64_t _1398;
  void* _1399;
  uint64_t _1400;
  uint64_t _1401;
  uint64_t _1402;
  uint64_t _1403;
  uint64_t _1404;
  uint64_t _1405;
  uint64_t _1406;
  uint64_t _1407;
  uint64_t _1408;
  uint64_t _1409;
  uint64_t _1410;
  uint64_t _1411;
  void* _1412;
  uint64_t _1413;
  uint64_t _1414;
  uint64_t _1415;
  uint64_t _1416;
  uint64_t _1417;
  uint64_t _1418;
  uint64_t _1419;
  uint64_t _1420;
  uint64_t _1421;
  uint64_t _1422;
  uint64_t _1423;
  void* _1424;
  uint64_t _1425;
  uint64_t _1426;
  uint64_t _1427;
  uint64_t _1428;
  uint64_t _1429;
  uint64_t _1430;
  uint64_t _1431;
  uint64_t _1432;
  uint64_t _1433;
  uint64_t _1434;
  uint64_t _1435;
  uint64_t _1436;
  void* _1437;
  uint64_t _1438;
  uint64_t _1439;
  uint64_t _1440;
  uint64_t _1441;
  uint64_t _1442;
  uint64_t _1443;
  uint64_t _1444;
  uint64_t _1445;
  uint64_t _1446;
  uint64_t _1447;
  uint64_t _1448;
  void* _1449;
  uint64_t _1450;
  uint64_t _1451;
  uint64_t _1452;
  uint64_t _1453;
  uint64_t _1454;
  uint64_t _1455;
  uint64_t _1456;
  uint64_t _1457;
  uint64_t _1458;
  uint64_t _1459;
  uint64_t _1460;
  uint64_t _1461;
  void* _1462;
  uint64_t _1463;
  uint64_t _1464;
  uint64_t _1465;
  uint64_t _1466;
  uint64_t _1467;
  uint64_t _1468;
  uint64_t _1469;
  uint64_t _1470;
  uint64_t _1471;
  uint64_t _1472;
  uint64_t _1473;
  void* _1474;
  uint64_t _1475;
  uint64_t _1476;
  uint64_t _1477;
  uint64_t _1478;
  uint64_t _1479;
  uint64_t _1480;
  uint64_t _1481;
  uint64_t _1482;
  uint64_t _1483;
  uint64_t _1484;
  uint64_t _1485;
  uint64_t _1486;
  void* _1487;
  uint64_t _1488;
  uint64_t _1489;
  uint64_t _1490;
  uint64_t _1491;
  uint64_t _1492;
  uint64_t _1493;
  uint64_t _1494;
  uint64_t _1495;
  uint64_t _1496;
  uint64_t _1497;
  uint64_t _1498;
  void* _1499;
  uint64_t _1500;
  uint64_t _1501;
  uint64_t _1502;
  uint64_t _1503;
  uint64_t _1504;
  uint64_t _1505;
  uint64_t _1506;
  uint64_t _1507;
  uint64_t _1508;
  uint64_t _1509;
  uint64_t _1510;
  uint64_t _1511;
  void* _1512;
  uint64_t _1513;
  uint64_t _1514;
  uint64_t _1515;
  uint64_t _1516;
  uint64_t _1517;
  uint64_t _1518;
  uint64_t _1519;
  uint64_t _1520;
  uint64_t _1521;
  uint64_t _1522;
  uint64_t _1523;
  void* _1524;
  uint64_t _1525;
  uint64_t _1526;
  uint64_t _1527;
  uint64_t _1528;
  uint64_t _1529;
  uint64_t _1530;
  uint64_t _1531;
  uint64_t _1532;
  uint64_t _1533;
  uint64_t _1534;
  uint64_t _1535;
  uint64_t _1536;
  void* _1537;
  uint64_t _1538;
  uint64_t _1539;
  uint64_t _1540;
  uint64_t _1541;
  uint64_t _1542;
  uint64_t _1543;
  uint64_t _1544;
  uint64_t _1545;
  uint64_t _1546;
  uint64_t _1547;
  uint64_t _1548;
  void* _1549;
  uint64_t _1550;
  uint64_t _1551;
  uint64_t _1552;
  uint64_t _1553;
  uint64_t _1554;
  uint64_t _1555;
  uint64_t _1556;
  uint64_t _1557;
  uint64_t _1558;
  uint64_t _1559;
  uint64_t _1560;
  uint64_t _1561;
  void* _1562;
  uint64_t _1563;
  uint64_t _1564;
  uint64_t _1565;
  uint64_t _1566;
  uint64_t _1567;
  uint64_t _1568;
  uint64_t _1569;
  uint64_t _1570;
  uint64_t _1571;
  uint64_t _1572;
  uint64_t _1573;
  void* _1574;
  uint64_t _1575;
  uint64_t _1576;
  uint64_t _1577;
  uint64_t _1578;
  uint64_t _1579;
  uint64_t _1580;
  uint64_t _1581;
  uint64_t _1582;
  uint64_t _1583;
  uint64_t _1584;
  uint64_t _1585;
  uint64_t _1586;
  void* _1587;
  uint64_t _1588;
  uint64_t _1589;
  uint64_t _1590;
  uint64_t _1591;
  uint64_t _1592;
  uint64_t _1593;
  uint64_t _1594;
  uint64_t _1595;
  uint64_t _1596;
  uint64_t _1597;
  uint64_t _1598;
  void* _1599;
  uint64_t _1600;
  uint64_t _1601;
  uint64_t _1602;
  uint64_t _1603;
  uint64_t _1604;
  uint64_t _1605;
  uint64_t _1606;
  uint64_t _1607;
  uint64_t _1608;
  uint64_t _1609;
  uint64_t _1610;
  uint64_t _1611;
  void* _1612;
  uint64_t _1613;
  uint64_t _1614;
  uint64_t _1615;
  uint64_t _1616;
  uint64_t _1617;
  uint64_t _1618;
  uint64_t _1619;
  uint64_t _1620;
  uint64_t _1621;
  uint64_t _1622;
  uint64_t _1623;
  void* _1624;
  uint64_t _1625;
  uint64_t _1626;
  uint64_t _1627;
  uint64_t _1628;
  uint64_t _1629;
  uint64_t _1630;
  uint64_t _1631;
  uint64_t _1632;
  uint64_t _1633;
  uint64_t _1634;
  uint64_t _1635;
  uint64_t _1636;
  void* _1637;
  uint64_t _1638;
  uint64_t _1639;
  uint64_t _1640;
  uint64_t _1641;
  uint64_t _1642;
  uint64_t _1643;
  uint64_t _1644;
  uint64_t _1645;
  uint64_t _1646;
  uint64_t _1647;
  uint64_t _1648;
  void* _1649;
  uint64_t _1650;
  uint64_t _1651;
  uint64_t _1652;
  uint64_t _1653;
  uint64_t _1654;
  uint64_t _1655;
  uint64_t _1656;
  uint64_t _1657;
  uint64_t _1658;
  uint64_t _1659;
  uint64_t _1660;
  uint64_t _1661;
  void* _1662;
  uint64_t _1663;
  uint64_t _1664;
  uint64_t _1665;
  uint64_t _1666;
  uint64_t _1667;
  uint64_t _1668;
  uint64_t _1669;
  uint64_t _1670;
  uint64_t _1671;
  uint64_t _1672;
  uint64_t _1673;
  void* _1674;
  uint64_t _1675;
  uint64_t _1676;
  uint64_t _1677;
  uint64_t _1678;
  uint64_t _1679;
  uint64_t _1680;
  uint64_t _1681;
  uint64_t _1682;
  uint64_t _1683;
  uint64_t _1684;
  uint64_t _1685;
  uint64_t _1686;
  void* _1687;
  uint64_t _1688;
  uint64_t _1689;
  uint64_t _1690;
  uint64_t _1691;
  uint64_t _1692;
  uint64_t _1693;
  uint64_t _1694;
  uint64_t _1695;
  uint64_t _1696;
  uint64_t _1697;
  uint64_t _1698;
  void* _1699;
  uint64_t _1700;
  uint64_t _1701;
  uint64_t _1702;
  uint64_t _1703;
  uint64_t _1704;
  uint64_t _1705;
  uint64_t _1706;
  uint64_t _1707;
  uint64_t _1708;
  uint64_t _1709;
  uint64_t _1710;
  uint64_t _1711;
  void* _1712;
  uint64_t _1713;
  uint64_t _1714;
  uint64_t _1715;
  uint64_t _1716;
  uint64_t _1717;
  uint64_t _1718;
  uint64_t _1719;
  uint64_t _1720;
  uint64_t _1721;
  uint64_t _1722;
  uint64_t _1723;
  void* _1724;
  uint64_t _1725;
  uint64_t _1726;
  uint64_t _1727;
  uint64_t _1728;
  uint64_t _1729;
  uint64_t _1730;
  uint64_t _1731;
  uint64_t _1732;
  uint64_t _1733;
  uint64_t _1734;
  uint64_t _1735;
  uint64_t _1736;
  void* _1737;
  uint64_t _1738;
  uint64_t _1739;
  uint64_t _1740;
  uint64_t _1741;
  uint64_t _1742;
  uint64_t _1743;
  uint64_t _1744;
  uint64_t _1745;
  uint64_t _1746;
  uint64_t _1747;
  uint64_t _1748;
  void* _1749;
  uint64_t _1750;
  uint64_t _1751;
  uint64_t _1752;
  uint64_t _1753;
  uint64_t _1754;
  uint64_t _1755;
  uint64_t _1756;
  uint64_t _1757;
  uint64_t _1758;
  uint64_t _1759;
  uint64_t _1760;
  uint64_t _1761;
  void* _1762;
  uint64_t _1763;
  uint64_t _1764;
  uint64_t _1765;
  uint64_t _1766;
  uint64_t _1767;
  uint64_t _1768;
  uint64_t _1769;
  uint64_t _1770;
  uint64_t _1771;
  uint64_t _1772;
  uint64_t _1773;
  void* _1774;
  uint64_t _1775;
  uint64_t _1776;
  uint64_t _1777;
  uint64_t _1778;
  uint64_t _1779;
  uint64_t _1780;
  uint64_t _1781;
  uint64_t _1782;
  uint64_t _1783;
  uint64_t _1784;
  uint64_t _1785;
  uint64_t _1786;
  void* _1787;
  uint64_t _1788;
  uint64_t _1789;
  uint64_t _1790;
  uint64_t _1791;
  uint64_t _1792;
  uint64_t _1793;
  uint64_t _1794;
  uint64_t _1795;
  uint64_t _1796;
  uint64_t _1797;
  uint64_t _1798;
  void* _1799;
  uint64_t _1800;
  uint64_t _1801;
  uint64_t _1802;
  uint64_t _1803;
  uint64_t _1804;
  uint64_t _1805;
  uint64_t _1806;
  uint64_t _1807;
  uint64_t _1808;
  uint64_t _1809;
  uint64_t _1810;
  uint64_t _1811;
  void* _1812;
  uint64_t _1813;
  uint64_t _1814;
  uint64_t _1815;
  uint64_t _1816;
  uint64_t _1817;
  uint64_t _1818;
  uint64_t _1819;
  uint64_t _1820;
  uint64_t _1821;
  uint64_t _1822;
  uint64_t _1823;
  void* _1824;
  uint64_t _1825;
  uint64_t _1826;
  uint64_t _1827;
  uint64_t _1828;
  uint64_t _1829;
  uint64_t _1830;
  uint64_t _1831;
  uint64_t _1832;
  uint64_t _1833;
  uint64_t _1834;
  uint64_t _1835;
  uint64_t _1836;
  void* _1837;
  uint64_t _1838;
  uint64_t _1839;
  uint64_t _1840;
  uint64_t _1841;
  uint64_t _1842;
  uint64_t _1843;
  uint64_t _1844;
  uint64_t _1845;
  uint64_t _1846;
  uint64_t _1847;
  uint64_t _1848;
  void* _1849;
  uint64_t _1850;
  uint64_t _1851;
  uint64_t _1852;
  uint64_t _1853;
  uint64_t _1854;
  uint64_t _1855;
  uint64_t _1856;
  uint64_t _1857;
  uint64_t _1858;
  uint64_t _1859;
  uint64_t _1860;
  uint64_t _1861;
  void* _1862;
  uint64_t _1863;
  uint64_t _1864;
  uint64_t _1865;
  uint64_t _1866;
  uint64_t _1867;
  uint64_t _1868;
  uint64_t _1869;
  uint64_t _1870;
  uint64_t _1871;
  uint64_t _1872;
  uint64_t _1873;
  void* _1874;
  uint64_t _1875;
  uint64_t _1876;
  uint64_t _1877;
  uint64_t _1878;
  uint64_t _1879;
  uint64_t _1880;
  uint64_t _1881;
  uint64_t _1882;
  uint64_t _1883;
  uint64_t _1884;
  uint64_t _1885;
  uint64_t _1886;
  void* _1887;
  uint64_t _1888;
  uint64_t _1889;
  uint64_t _1890;
  uint64_t _1891;
  uint64_t _1892;
  uint64_t _1893;
  uint64_t _1894;
  uint64_t _1895;
  uint64_t _1896;
  uint64_t _1897;
  uint64_t _1898;
  void* _1899;
  uint64_t _1900;
  uint64_t _1901;
  uint64_t _1902;
  uint64_t _1903;
  uint64_t _1904;
  uint64_t _1905;
  uint64_t _1906;
  uint64_t _1907;
  uint64_t _1908;
  uint64_t _1909;
  uint64_t _1910;
  uint64_t _1911;
  void* _1912;
  uint64_t _1913;
  uint64_t _1914;
  uint64_t _1915;
  uint64_t _1916;
  uint64_t _1917;
  uint64_t _1918;
  uint64_t _1919;
  uint64_t _1920;
  uint64_t _1921;
  uint64_t _1922;
  uint64_t _1923;
  void* _1924;
  uint64_t _1925;
  uint64_t _1926;
  uint64_t _1927;
  uint64_t _1928;
  uint64_t _1929;
  uint64_t _1930;
  uint64_t _1931;
  uint64_t _1932;
  uint64_t _1933;
  uint64_t _1934;
  uint64_t _1935;
  uint64_t _1936;
  void* _1937;
  uint64_t _1938;
  uint64_t _1939;
  uint64_t _1940;
  uint64_t _1941;
  uint64_t _1942;
  uint64_t _1943;
  uint64_t _1944;
  uint64_t _1945;
  uint64_t _1946;
  uint64_t _1947;
  uint64_t _1948;
  void* _1949;
  uint64_t _1950;
  uint64_t _1951;
  uint64_t _1952;
  uint64_t _1953;
  uint64_t _1954;
  uint64_t _1955;
  uint64_t _1956;
  uint64_t _1957;
  uint64_t _1958;
  uint64_t _1959;
  uint64_t _1960;
  uint64_t _1961;
  void* _1962;
  uint64_t _1963;
  uint64_t _1964;
  uint64_t _1965;
  uint64_t _1966;
  uint64_t _1967;
  uint64_t _1968;
  uint64_t _1969;
  uint64_t _1970;
  uint64_t _1971;
  uint64_t _1972;
  uint64_t _1973;
  void* _1974;
  uint64_t _1975;
  uint64_t _1976;
  uint64_t _1977;
  uint64_t _1978;
  uint64_t _1979;
  uint64_t _1980;
  uint64_t _1981;
  uint64_t _1982;
  uint64_t _1983;
  uint64_t _1984;
  uint64_t _1985;
  uint64_t _1986;
  void* _1987;
  uint64_t _1988;
  uint64_t _1989;
  uint64_t _1990;
  uint64_t _1991;
  uint64_t _1992;
  uint64_t _1993;
  uint64_t _1994;
  uint64_t _1995;
  uint64_t _1996;
  uint64_t _1997;
  uint64_t _1998;
  void* _1999;
  uint64_t _2000;
  uint64_t _2001;
  uint64_t _2002;
  uint64_t _2003;
  uint64_t _2004;
  uint64_t _2005;
  uint64_t _2006;
  uint64_t _2007;
  uint64_t _2008;
  uint64_t _2009;
  uint64_t _2010;
  uint64_t _2011;
  void* _2012;
  uint64_t _2013;
  uint64_t _2014;
  uint64_t _2015;
  uint64_t _2016;
  uint64_t _2017;
  uint64_t _2018;
  uint64_t _2019;
  uint64_t _2020;
  uint64_t _2021;
  uint64_t _2022;
  uint64_t _2023;
  void* _2024;
  uint64_t _2025;
  uint64_t _2026;
  uint64_t _2027;
  uint64_t _2028;
  uint64_t _2029;
  uint64_t _2030;
  uint64_t _2031;
  uint64_t _2032;
  uint64_t _2033;
  uint64_t _2034;
  uint64_t _2035;
  uint64_t _2036;
  void* _2037;
  uint64_t _2038;
  uint64_t _2039;
  uint64_t _2040;
  uint64_t _2041;
  uint64_t _2042;
  uint64_t _2043;
  uint64_t _2044;
  uint64_t _2045;
  uint64_t _2046;
  uint64_t _2047;
  uint64_t _2048;
  void* _2049;
  uint64_t _2050;
  uint64_t _2051;
  uint64_t _2052;
  uint64_t _2053;
  uint64_t _2054;
  uint64_t _2055;
  uint64_t _2056;
  uint64_t _2057;
  uint64_t _2058;
  uint64_t _2059;
  uint64_t _2060;
  uint64_t _2061;
  uint64_t _2062;
  uint64_t _2063;
  uint64_t _2064;
  uint64_t _2065;
  uint64_t _2066;
  uint64_t _2067;
  uint64_t _2068;
  uint64_t _2069;
  uint64_t _2070;
  uint64_t _2071;
  uint64_t _2072;
  uint64_t _2073;
  uint64_t _2074;
  uint64_t _2075;
  uint64_t _2076;
  uint64_t _2077;
  uint64_t _2078;
  uint64_t _2079;
  uint64_t _2080;
  uint64_t _2081;
  uint64_t _2082;
  uint64_t _2083;
  uint64_t _2084;
  uint64_t _2085;
  uint64_t _2086;
  uint64_t _2087;
  uint64_t _2088;
  uint64_t _2089;
  uint64_t _2090;
  uint64_t _2091;
  uint64_t _2092;
  uint64_t _2093;
  uint64_t _2094;
  uint64_t _2095;
  uint64_t _2096;
  void* _2097;
  uint64_t _2098;
  void* _2099;
  uint64_t _2100;
  void* _2101;
  uint64_t _2102;
  void* _2103;
  uint64_t _2104;
  void* _2105;
  uint64_t _2106;
  void* _2107;
  uint64_t _2108;
  void* _2109;
  uint64_t _2110;
  void* _2111;

  _806 = _803;
#line 447 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _807 = _804;
  ;
  _808 = _805;
  ;
#line 449 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  ;
  ;
#line 451 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _812 = _807;
  _813 = *(uint8_t*)((((uint8_t*)_812)));
  _814 = _807;
  _815 = *(uint8_t*)(((&((uint8_t*)_814)[((int64_t)1)])));
  _816 = _807;
  _817 = *(uint8_t*)(((&((uint8_t*)_816)[((int64_t)2)])));
  _818 = _807;
  _819 = *(uint8_t*)(((&((uint8_t*)_818)[((int64_t)3)])));
  _809 = (((((((uint64_t)(uint8_t)_813)) << 24) | ((((uint64_t)(uint8_t)_815)) << 16)) | ((((uint64_t)(uint8_t)_817)) << 8)) | (((uint64_t)(uint8_t)_819)));
#line 452 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _820 = _807;
  _821 = *(uint8_t*)(((&((uint8_t*)_820)[((int64_t)4)])));
  _822 = _807;
  _823 = *(uint8_t*)(((&((uint8_t*)_822)[((int64_t)5)])));
  _824 = _807;
  _825 = *(uint8_t*)(((&((uint8_t*)_824)[((int64_t)6)])));
  _826 = _807;
  _827 = *(uint8_t*)(((&((uint8_t*)_826)[((int64_t)7)])));
  _810 = (((((((uint64_t)(uint8_t)_821)) << 24) | ((((uint64_t)(uint8_t)_823)) << 16)) | ((((uint64_t)(uint8_t)_825)) << 8)) | (((uint64_t)(uint8_t)_827)));
#line 454 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _828 = _809;
  _829 = _810;
  _811 = (((llvm_lshr_u64(_828, 4)) ^ _829) & 252645135);
  _830 = _811;
  _831 = _810;
  _810 = (_831 ^ _830);
  _832 = _811;
  _833 = _809;
  _809 = (_833 ^ (_832 << 4));
  _834 = _809;
  _835 = _810;
  _811 = (((llvm_lshr_u64(_834, 16)) ^ _835) & 65535);
  _836 = _811;
  _837 = _810;
  _810 = (_837 ^ _836);
  _838 = _811;
  _839 = _809;
  _809 = (_839 ^ (_838 << 16));
  _840 = _810;
  _841 = _809;
  _811 = (((llvm_lshr_u64(_840, 2)) ^ _841) & 858993459);
  _842 = _811;
  _843 = _809;
  _809 = (_843 ^ _842);
  _844 = _811;
  _845 = _810;
  _810 = (_845 ^ (_844 << 2));
  _846 = _810;
  _847 = _809;
  _811 = (((llvm_lshr_u64(_846, 8)) ^ _847) & 16711935);
  _848 = _811;
  _849 = _809;
  _809 = (_849 ^ _848);
  _850 = _811;
  _851 = _810;
  _810 = (_851 ^ (_850 << 8));
  _852 = _810;
  _853 = _810;
  _810 = (((_852 << 1) | (llvm_lshr_u64(_853, 31))) & INT64_C(4294967295));
  _854 = _809;
  _855 = _810;
  _811 = ((_854 ^ _855) & INT64_C(2863311530));
  _856 = _811;
  _857 = _810;
  _810 = (_857 ^ _856);
  _858 = _811;
  _859 = _809;
  _809 = (_859 ^ _858);
  _860 = _809;
  _861 = _809;
  _809 = (((_860 << 1) | (llvm_lshr_u64(_861, 31))) & INT64_C(4294967295));
#line 456 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _862 = _806;
  _806 = (((&((uint64_t*)_862)[((int32_t)1)])));
  _863 = *(uint64_t*)_862;
  _864 = _810;
  _811 = (_863 ^ _864);
  _865 = _811;
  _866 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_865 & 63))])));
  _867 = _811;
  _868 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_867, 8)) & 63))])));
  _869 = _811;
  _870 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_869, 16)) & 63))])));
  _871 = _811;
  _872 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_871, 24)) & 63))])));
  _873 = _809;
  _809 = (_873 ^ (((_866 ^ _868) ^ _870) ^ _872));
  _874 = _806;
  _806 = (((&((uint64_t*)_874)[((int32_t)1)])));
  _875 = *(uint64_t*)_874;
  _876 = _810;
  _877 = _810;
  _811 = (_875 ^ ((_876 << 28) | (llvm_lshr_u64(_877, 4))));
  _878 = _811;
  _879 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_878 & 63))])));
  _880 = _811;
  _881 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_880, 8)) & 63))])));
  _882 = _811;
  _883 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_882, 16)) & 63))])));
  _884 = _811;
  _885 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_884, 24)) & 63))])));
  _886 = _809;
  _809 = (_886 ^ (((_879 ^ _881) ^ _883) ^ _885));
  _887 = _806;
  _806 = (((&((uint64_t*)_887)[((int32_t)1)])));
  _888 = *(uint64_t*)_887;
  _889 = _809;
  _811 = (_888 ^ _889);
  _890 = _811;
  _891 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_890 & 63))])));
  _892 = _811;
  _893 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_892, 8)) & 63))])));
  _894 = _811;
  _895 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_894, 16)) & 63))])));
  _896 = _811;
  _897 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_896, 24)) & 63))])));
  _898 = _810;
  _810 = (_898 ^ (((_891 ^ _893) ^ _895) ^ _897));
  _899 = _806;
  _806 = (((&((uint64_t*)_899)[((int32_t)1)])));
  _900 = *(uint64_t*)_899;
  _901 = _809;
  _902 = _809;
  _811 = (_900 ^ ((_901 << 28) | (llvm_lshr_u64(_902, 4))));
  _903 = _811;
  _904 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_903 & 63))])));
  _905 = _811;
  _906 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_905, 8)) & 63))])));
  _907 = _811;
  _908 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_907, 16)) & 63))])));
  _909 = _811;
  _910 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_909, 24)) & 63))])));
  _911 = _810;
  _810 = (_911 ^ (((_904 ^ _906) ^ _908) ^ _910));
#line 457 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _912 = _806;
  _806 = (((&((uint64_t*)_912)[((int32_t)1)])));
  _913 = *(uint64_t*)_912;
  _914 = _810;
  _811 = (_913 ^ _914);
  _915 = _811;
  _916 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_915 & 63))])));
  _917 = _811;
  _918 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_917, 8)) & 63))])));
  _919 = _811;
  _920 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_919, 16)) & 63))])));
  _921 = _811;
  _922 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_921, 24)) & 63))])));
  _923 = _809;
  _809 = (_923 ^ (((_916 ^ _918) ^ _920) ^ _922));
  _924 = _806;
  _806 = (((&((uint64_t*)_924)[((int32_t)1)])));
  _925 = *(uint64_t*)_924;
  _926 = _810;
  _927 = _810;
  _811 = (_925 ^ ((_926 << 28) | (llvm_lshr_u64(_927, 4))));
  _928 = _811;
  _929 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_928 & 63))])));
  _930 = _811;
  _931 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_930, 8)) & 63))])));
  _932 = _811;
  _933 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_932, 16)) & 63))])));
  _934 = _811;
  _935 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_934, 24)) & 63))])));
  _936 = _809;
  _809 = (_936 ^ (((_929 ^ _931) ^ _933) ^ _935));
  _937 = _806;
  _806 = (((&((uint64_t*)_937)[((int32_t)1)])));
  _938 = *(uint64_t*)_937;
  _939 = _809;
  _811 = (_938 ^ _939);
  _940 = _811;
  _941 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_940 & 63))])));
  _942 = _811;
  _943 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_942, 8)) & 63))])));
  _944 = _811;
  _945 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_944, 16)) & 63))])));
  _946 = _811;
  _947 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_946, 24)) & 63))])));
  _948 = _810;
  _810 = (_948 ^ (((_941 ^ _943) ^ _945) ^ _947));
  _949 = _806;
  _806 = (((&((uint64_t*)_949)[((int32_t)1)])));
  _950 = *(uint64_t*)_949;
  _951 = _809;
  _952 = _809;
  _811 = (_950 ^ ((_951 << 28) | (llvm_lshr_u64(_952, 4))));
  _953 = _811;
  _954 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_953 & 63))])));
  _955 = _811;
  _956 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_955, 8)) & 63))])));
  _957 = _811;
  _958 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_957, 16)) & 63))])));
  _959 = _811;
  _960 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_959, 24)) & 63))])));
  _961 = _810;
  _810 = (_961 ^ (((_954 ^ _956) ^ _958) ^ _960));
#line 458 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _962 = _806;
  _806 = (((&((uint64_t*)_962)[((int32_t)1)])));
  _963 = *(uint64_t*)_962;
  _964 = _810;
  _811 = (_963 ^ _964);
  _965 = _811;
  _966 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_965 & 63))])));
  _967 = _811;
  _968 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_967, 8)) & 63))])));
  _969 = _811;
  _970 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_969, 16)) & 63))])));
  _971 = _811;
  _972 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_971, 24)) & 63))])));
  _973 = _809;
  _809 = (_973 ^ (((_966 ^ _968) ^ _970) ^ _972));
  _974 = _806;
  _806 = (((&((uint64_t*)_974)[((int32_t)1)])));
  _975 = *(uint64_t*)_974;
  _976 = _810;
  _977 = _810;
  _811 = (_975 ^ ((_976 << 28) | (llvm_lshr_u64(_977, 4))));
  _978 = _811;
  _979 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_978 & 63))])));
  _980 = _811;
  _981 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_980, 8)) & 63))])));
  _982 = _811;
  _983 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_982, 16)) & 63))])));
  _984 = _811;
  _985 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_984, 24)) & 63))])));
  _986 = _809;
  _809 = (_986 ^ (((_979 ^ _981) ^ _983) ^ _985));
  _987 = _806;
  _806 = (((&((uint64_t*)_987)[((int32_t)1)])));
  _988 = *(uint64_t*)_987;
  _989 = _809;
  _811 = (_988 ^ _989);
  _990 = _811;
  _991 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_990 & 63))])));
  _992 = _811;
  _993 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_992, 8)) & 63))])));
  _994 = _811;
  _995 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_994, 16)) & 63))])));
  _996 = _811;
  _997 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_996, 24)) & 63))])));
  _998 = _810;
  _810 = (_998 ^ (((_991 ^ _993) ^ _995) ^ _997));
  _999 = _806;
  _806 = (((&((uint64_t*)_999)[((int32_t)1)])));
  _1000 = *(uint64_t*)_999;
  _1001 = _809;
  _1002 = _809;
  _811 = (_1000 ^ ((_1001 << 28) | (llvm_lshr_u64(_1002, 4))));
  _1003 = _811;
  _1004 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1003 & 63))])));
  _1005 = _811;
  _1006 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1005, 8)) & 63))])));
  _1007 = _811;
  _1008 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1007, 16)) & 63))])));
  _1009 = _811;
  _1010 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1009, 24)) & 63))])));
  _1011 = _810;
  _810 = (_1011 ^ (((_1004 ^ _1006) ^ _1008) ^ _1010));
#line 459 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1012 = _806;
  _806 = (((&((uint64_t*)_1012)[((int32_t)1)])));
  _1013 = *(uint64_t*)_1012;
  _1014 = _810;
  _811 = (_1013 ^ _1014);
  _1015 = _811;
  _1016 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1015 & 63))])));
  _1017 = _811;
  _1018 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1017, 8)) & 63))])));
  _1019 = _811;
  _1020 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1019, 16)) & 63))])));
  _1021 = _811;
  _1022 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1021, 24)) & 63))])));
  _1023 = _809;
  _809 = (_1023 ^ (((_1016 ^ _1018) ^ _1020) ^ _1022));
  _1024 = _806;
  _806 = (((&((uint64_t*)_1024)[((int32_t)1)])));
  _1025 = *(uint64_t*)_1024;
  _1026 = _810;
  _1027 = _810;
  _811 = (_1025 ^ ((_1026 << 28) | (llvm_lshr_u64(_1027, 4))));
  _1028 = _811;
  _1029 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1028 & 63))])));
  _1030 = _811;
  _1031 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1030, 8)) & 63))])));
  _1032 = _811;
  _1033 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1032, 16)) & 63))])));
  _1034 = _811;
  _1035 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1034, 24)) & 63))])));
  _1036 = _809;
  _809 = (_1036 ^ (((_1029 ^ _1031) ^ _1033) ^ _1035));
  _1037 = _806;
  _806 = (((&((uint64_t*)_1037)[((int32_t)1)])));
  _1038 = *(uint64_t*)_1037;
  _1039 = _809;
  _811 = (_1038 ^ _1039);
  _1040 = _811;
  _1041 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1040 & 63))])));
  _1042 = _811;
  _1043 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1042, 8)) & 63))])));
  _1044 = _811;
  _1045 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1044, 16)) & 63))])));
  _1046 = _811;
  _1047 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1046, 24)) & 63))])));
  _1048 = _810;
  _810 = (_1048 ^ (((_1041 ^ _1043) ^ _1045) ^ _1047));
  _1049 = _806;
  _806 = (((&((uint64_t*)_1049)[((int32_t)1)])));
  _1050 = *(uint64_t*)_1049;
  _1051 = _809;
  _1052 = _809;
  _811 = (_1050 ^ ((_1051 << 28) | (llvm_lshr_u64(_1052, 4))));
  _1053 = _811;
  _1054 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1053 & 63))])));
  _1055 = _811;
  _1056 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1055, 8)) & 63))])));
  _1057 = _811;
  _1058 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1057, 16)) & 63))])));
  _1059 = _811;
  _1060 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1059, 24)) & 63))])));
  _1061 = _810;
  _810 = (_1061 ^ (((_1054 ^ _1056) ^ _1058) ^ _1060));
#line 460 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1062 = _806;
  _806 = (((&((uint64_t*)_1062)[((int32_t)1)])));
  _1063 = *(uint64_t*)_1062;
  _1064 = _810;
  _811 = (_1063 ^ _1064);
  _1065 = _811;
  _1066 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1065 & 63))])));
  _1067 = _811;
  _1068 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1067, 8)) & 63))])));
  _1069 = _811;
  _1070 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1069, 16)) & 63))])));
  _1071 = _811;
  _1072 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1071, 24)) & 63))])));
  _1073 = _809;
  _809 = (_1073 ^ (((_1066 ^ _1068) ^ _1070) ^ _1072));
  _1074 = _806;
  _806 = (((&((uint64_t*)_1074)[((int32_t)1)])));
  _1075 = *(uint64_t*)_1074;
  _1076 = _810;
  _1077 = _810;
  _811 = (_1075 ^ ((_1076 << 28) | (llvm_lshr_u64(_1077, 4))));
  _1078 = _811;
  _1079 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1078 & 63))])));
  _1080 = _811;
  _1081 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1080, 8)) & 63))])));
  _1082 = _811;
  _1083 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1082, 16)) & 63))])));
  _1084 = _811;
  _1085 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1084, 24)) & 63))])));
  _1086 = _809;
  _809 = (_1086 ^ (((_1079 ^ _1081) ^ _1083) ^ _1085));
  _1087 = _806;
  _806 = (((&((uint64_t*)_1087)[((int32_t)1)])));
  _1088 = *(uint64_t*)_1087;
  _1089 = _809;
  _811 = (_1088 ^ _1089);
  _1090 = _811;
  _1091 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1090 & 63))])));
  _1092 = _811;
  _1093 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1092, 8)) & 63))])));
  _1094 = _811;
  _1095 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1094, 16)) & 63))])));
  _1096 = _811;
  _1097 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1096, 24)) & 63))])));
  _1098 = _810;
  _810 = (_1098 ^ (((_1091 ^ _1093) ^ _1095) ^ _1097));
  _1099 = _806;
  _806 = (((&((uint64_t*)_1099)[((int32_t)1)])));
  _1100 = *(uint64_t*)_1099;
  _1101 = _809;
  _1102 = _809;
  _811 = (_1100 ^ ((_1101 << 28) | (llvm_lshr_u64(_1102, 4))));
  _1103 = _811;
  _1104 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1103 & 63))])));
  _1105 = _811;
  _1106 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1105, 8)) & 63))])));
  _1107 = _811;
  _1108 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1107, 16)) & 63))])));
  _1109 = _811;
  _1110 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1109, 24)) & 63))])));
  _1111 = _810;
  _810 = (_1111 ^ (((_1104 ^ _1106) ^ _1108) ^ _1110));
#line 461 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1112 = _806;
  _806 = (((&((uint64_t*)_1112)[((int32_t)1)])));
  _1113 = *(uint64_t*)_1112;
  _1114 = _810;
  _811 = (_1113 ^ _1114);
  _1115 = _811;
  _1116 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1115 & 63))])));
  _1117 = _811;
  _1118 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1117, 8)) & 63))])));
  _1119 = _811;
  _1120 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1119, 16)) & 63))])));
  _1121 = _811;
  _1122 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1121, 24)) & 63))])));
  _1123 = _809;
  _809 = (_1123 ^ (((_1116 ^ _1118) ^ _1120) ^ _1122));
  _1124 = _806;
  _806 = (((&((uint64_t*)_1124)[((int32_t)1)])));
  _1125 = *(uint64_t*)_1124;
  _1126 = _810;
  _1127 = _810;
  _811 = (_1125 ^ ((_1126 << 28) | (llvm_lshr_u64(_1127, 4))));
  _1128 = _811;
  _1129 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1128 & 63))])));
  _1130 = _811;
  _1131 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1130, 8)) & 63))])));
  _1132 = _811;
  _1133 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1132, 16)) & 63))])));
  _1134 = _811;
  _1135 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1134, 24)) & 63))])));
  _1136 = _809;
  _809 = (_1136 ^ (((_1129 ^ _1131) ^ _1133) ^ _1135));
  _1137 = _806;
  _806 = (((&((uint64_t*)_1137)[((int32_t)1)])));
  _1138 = *(uint64_t*)_1137;
  _1139 = _809;
  _811 = (_1138 ^ _1139);
  _1140 = _811;
  _1141 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1140 & 63))])));
  _1142 = _811;
  _1143 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1142, 8)) & 63))])));
  _1144 = _811;
  _1145 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1144, 16)) & 63))])));
  _1146 = _811;
  _1147 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1146, 24)) & 63))])));
  _1148 = _810;
  _810 = (_1148 ^ (((_1141 ^ _1143) ^ _1145) ^ _1147));
  _1149 = _806;
  _806 = (((&((uint64_t*)_1149)[((int32_t)1)])));
  _1150 = *(uint64_t*)_1149;
  _1151 = _809;
  _1152 = _809;
  _811 = (_1150 ^ ((_1151 << 28) | (llvm_lshr_u64(_1152, 4))));
  _1153 = _811;
  _1154 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1153 & 63))])));
  _1155 = _811;
  _1156 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1155, 8)) & 63))])));
  _1157 = _811;
  _1158 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1157, 16)) & 63))])));
  _1159 = _811;
  _1160 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1159, 24)) & 63))])));
  _1161 = _810;
  _810 = (_1161 ^ (((_1154 ^ _1156) ^ _1158) ^ _1160));
#line 462 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1162 = _806;
  _806 = (((&((uint64_t*)_1162)[((int32_t)1)])));
  _1163 = *(uint64_t*)_1162;
  _1164 = _810;
  _811 = (_1163 ^ _1164);
  _1165 = _811;
  _1166 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1165 & 63))])));
  _1167 = _811;
  _1168 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1167, 8)) & 63))])));
  _1169 = _811;
  _1170 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1169, 16)) & 63))])));
  _1171 = _811;
  _1172 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1171, 24)) & 63))])));
  _1173 = _809;
  _809 = (_1173 ^ (((_1166 ^ _1168) ^ _1170) ^ _1172));
  _1174 = _806;
  _806 = (((&((uint64_t*)_1174)[((int32_t)1)])));
  _1175 = *(uint64_t*)_1174;
  _1176 = _810;
  _1177 = _810;
  _811 = (_1175 ^ ((_1176 << 28) | (llvm_lshr_u64(_1177, 4))));
  _1178 = _811;
  _1179 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1178 & 63))])));
  _1180 = _811;
  _1181 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1180, 8)) & 63))])));
  _1182 = _811;
  _1183 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1182, 16)) & 63))])));
  _1184 = _811;
  _1185 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1184, 24)) & 63))])));
  _1186 = _809;
  _809 = (_1186 ^ (((_1179 ^ _1181) ^ _1183) ^ _1185));
  _1187 = _806;
  _806 = (((&((uint64_t*)_1187)[((int32_t)1)])));
  _1188 = *(uint64_t*)_1187;
  _1189 = _809;
  _811 = (_1188 ^ _1189);
  _1190 = _811;
  _1191 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1190 & 63))])));
  _1192 = _811;
  _1193 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1192, 8)) & 63))])));
  _1194 = _811;
  _1195 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1194, 16)) & 63))])));
  _1196 = _811;
  _1197 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1196, 24)) & 63))])));
  _1198 = _810;
  _810 = (_1198 ^ (((_1191 ^ _1193) ^ _1195) ^ _1197));
  _1199 = _806;
  _806 = (((&((uint64_t*)_1199)[((int32_t)1)])));
  _1200 = *(uint64_t*)_1199;
  _1201 = _809;
  _1202 = _809;
  _811 = (_1200 ^ ((_1201 << 28) | (llvm_lshr_u64(_1202, 4))));
  _1203 = _811;
  _1204 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1203 & 63))])));
  _1205 = _811;
  _1206 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1205, 8)) & 63))])));
  _1207 = _811;
  _1208 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1207, 16)) & 63))])));
  _1209 = _811;
  _1210 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1209, 24)) & 63))])));
  _1211 = _810;
  _810 = (_1211 ^ (((_1204 ^ _1206) ^ _1208) ^ _1210));
#line 463 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1212 = _806;
  _806 = (((&((uint64_t*)_1212)[((int32_t)1)])));
  _1213 = *(uint64_t*)_1212;
  _1214 = _810;
  _811 = (_1213 ^ _1214);
  _1215 = _811;
  _1216 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1215 & 63))])));
  _1217 = _811;
  _1218 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1217, 8)) & 63))])));
  _1219 = _811;
  _1220 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1219, 16)) & 63))])));
  _1221 = _811;
  _1222 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1221, 24)) & 63))])));
  _1223 = _809;
  _809 = (_1223 ^ (((_1216 ^ _1218) ^ _1220) ^ _1222));
  _1224 = _806;
  _806 = (((&((uint64_t*)_1224)[((int32_t)1)])));
  _1225 = *(uint64_t*)_1224;
  _1226 = _810;
  _1227 = _810;
  _811 = (_1225 ^ ((_1226 << 28) | (llvm_lshr_u64(_1227, 4))));
  _1228 = _811;
  _1229 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1228 & 63))])));
  _1230 = _811;
  _1231 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1230, 8)) & 63))])));
  _1232 = _811;
  _1233 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1232, 16)) & 63))])));
  _1234 = _811;
  _1235 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1234, 24)) & 63))])));
  _1236 = _809;
  _809 = (_1236 ^ (((_1229 ^ _1231) ^ _1233) ^ _1235));
  _1237 = _806;
  _806 = (((&((uint64_t*)_1237)[((int32_t)1)])));
  _1238 = *(uint64_t*)_1237;
  _1239 = _809;
  _811 = (_1238 ^ _1239);
  _1240 = _811;
  _1241 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1240 & 63))])));
  _1242 = _811;
  _1243 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1242, 8)) & 63))])));
  _1244 = _811;
  _1245 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1244, 16)) & 63))])));
  _1246 = _811;
  _1247 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1246, 24)) & 63))])));
  _1248 = _810;
  _810 = (_1248 ^ (((_1241 ^ _1243) ^ _1245) ^ _1247));
  _1249 = _806;
  _806 = (((&((uint64_t*)_1249)[((int32_t)1)])));
  _1250 = *(uint64_t*)_1249;
  _1251 = _809;
  _1252 = _809;
  _811 = (_1250 ^ ((_1251 << 28) | (llvm_lshr_u64(_1252, 4))));
  _1253 = _811;
  _1254 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1253 & 63))])));
  _1255 = _811;
  _1256 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1255, 8)) & 63))])));
  _1257 = _811;
  _1258 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1257, 16)) & 63))])));
  _1259 = _811;
  _1260 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1259, 24)) & 63))])));
  _1261 = _810;
  _810 = (_1261 ^ (((_1254 ^ _1256) ^ _1258) ^ _1260));
#line 465 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1262 = _806;
  _806 = (((&((uint64_t*)_1262)[((int32_t)1)])));
  _1263 = *(uint64_t*)_1262;
  _1264 = _809;
  _811 = (_1263 ^ _1264);
  _1265 = _811;
  _1266 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1265 & 63))])));
  _1267 = _811;
  _1268 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1267, 8)) & 63))])));
  _1269 = _811;
  _1270 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1269, 16)) & 63))])));
  _1271 = _811;
  _1272 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1271, 24)) & 63))])));
  _1273 = _810;
  _810 = (_1273 ^ (((_1266 ^ _1268) ^ _1270) ^ _1272));
  _1274 = _806;
  _806 = (((&((uint64_t*)_1274)[((int32_t)1)])));
  _1275 = *(uint64_t*)_1274;
  _1276 = _809;
  _1277 = _809;
  _811 = (_1275 ^ ((_1276 << 28) | (llvm_lshr_u64(_1277, 4))));
  _1278 = _811;
  _1279 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1278 & 63))])));
  _1280 = _811;
  _1281 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1280, 8)) & 63))])));
  _1282 = _811;
  _1283 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1282, 16)) & 63))])));
  _1284 = _811;
  _1285 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1284, 24)) & 63))])));
  _1286 = _810;
  _810 = (_1286 ^ (((_1279 ^ _1281) ^ _1283) ^ _1285));
  _1287 = _806;
  _806 = (((&((uint64_t*)_1287)[((int32_t)1)])));
  _1288 = *(uint64_t*)_1287;
  _1289 = _810;
  _811 = (_1288 ^ _1289);
  _1290 = _811;
  _1291 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1290 & 63))])));
  _1292 = _811;
  _1293 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1292, 8)) & 63))])));
  _1294 = _811;
  _1295 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1294, 16)) & 63))])));
  _1296 = _811;
  _1297 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1296, 24)) & 63))])));
  _1298 = _809;
  _809 = (_1298 ^ (((_1291 ^ _1293) ^ _1295) ^ _1297));
  _1299 = _806;
  _806 = (((&((uint64_t*)_1299)[((int32_t)1)])));
  _1300 = *(uint64_t*)_1299;
  _1301 = _810;
  _1302 = _810;
  _811 = (_1300 ^ ((_1301 << 28) | (llvm_lshr_u64(_1302, 4))));
  _1303 = _811;
  _1304 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1303 & 63))])));
  _1305 = _811;
  _1306 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1305, 8)) & 63))])));
  _1307 = _811;
  _1308 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1307, 16)) & 63))])));
  _1309 = _811;
  _1310 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1309, 24)) & 63))])));
  _1311 = _809;
  _809 = (_1311 ^ (((_1304 ^ _1306) ^ _1308) ^ _1310));
#line 466 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1312 = _806;
  _806 = (((&((uint64_t*)_1312)[((int32_t)1)])));
  _1313 = *(uint64_t*)_1312;
  _1314 = _809;
  _811 = (_1313 ^ _1314);
  _1315 = _811;
  _1316 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1315 & 63))])));
  _1317 = _811;
  _1318 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1317, 8)) & 63))])));
  _1319 = _811;
  _1320 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1319, 16)) & 63))])));
  _1321 = _811;
  _1322 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1321, 24)) & 63))])));
  _1323 = _810;
  _810 = (_1323 ^ (((_1316 ^ _1318) ^ _1320) ^ _1322));
  _1324 = _806;
  _806 = (((&((uint64_t*)_1324)[((int32_t)1)])));
  _1325 = *(uint64_t*)_1324;
  _1326 = _809;
  _1327 = _809;
  _811 = (_1325 ^ ((_1326 << 28) | (llvm_lshr_u64(_1327, 4))));
  _1328 = _811;
  _1329 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1328 & 63))])));
  _1330 = _811;
  _1331 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1330, 8)) & 63))])));
  _1332 = _811;
  _1333 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1332, 16)) & 63))])));
  _1334 = _811;
  _1335 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1334, 24)) & 63))])));
  _1336 = _810;
  _810 = (_1336 ^ (((_1329 ^ _1331) ^ _1333) ^ _1335));
  _1337 = _806;
  _806 = (((&((uint64_t*)_1337)[((int32_t)1)])));
  _1338 = *(uint64_t*)_1337;
  _1339 = _810;
  _811 = (_1338 ^ _1339);
  _1340 = _811;
  _1341 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1340 & 63))])));
  _1342 = _811;
  _1343 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1342, 8)) & 63))])));
  _1344 = _811;
  _1345 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1344, 16)) & 63))])));
  _1346 = _811;
  _1347 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1346, 24)) & 63))])));
  _1348 = _809;
  _809 = (_1348 ^ (((_1341 ^ _1343) ^ _1345) ^ _1347));
  _1349 = _806;
  _806 = (((&((uint64_t*)_1349)[((int32_t)1)])));
  _1350 = *(uint64_t*)_1349;
  _1351 = _810;
  _1352 = _810;
  _811 = (_1350 ^ ((_1351 << 28) | (llvm_lshr_u64(_1352, 4))));
  _1353 = _811;
  _1354 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1353 & 63))])));
  _1355 = _811;
  _1356 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1355, 8)) & 63))])));
  _1357 = _811;
  _1358 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1357, 16)) & 63))])));
  _1359 = _811;
  _1360 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1359, 24)) & 63))])));
  _1361 = _809;
  _809 = (_1361 ^ (((_1354 ^ _1356) ^ _1358) ^ _1360));
#line 467 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1362 = _806;
  _806 = (((&((uint64_t*)_1362)[((int32_t)1)])));
  _1363 = *(uint64_t*)_1362;
  _1364 = _809;
  _811 = (_1363 ^ _1364);
  _1365 = _811;
  _1366 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1365 & 63))])));
  _1367 = _811;
  _1368 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1367, 8)) & 63))])));
  _1369 = _811;
  _1370 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1369, 16)) & 63))])));
  _1371 = _811;
  _1372 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1371, 24)) & 63))])));
  _1373 = _810;
  _810 = (_1373 ^ (((_1366 ^ _1368) ^ _1370) ^ _1372));
  _1374 = _806;
  _806 = (((&((uint64_t*)_1374)[((int32_t)1)])));
  _1375 = *(uint64_t*)_1374;
  _1376 = _809;
  _1377 = _809;
  _811 = (_1375 ^ ((_1376 << 28) | (llvm_lshr_u64(_1377, 4))));
  _1378 = _811;
  _1379 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1378 & 63))])));
  _1380 = _811;
  _1381 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1380, 8)) & 63))])));
  _1382 = _811;
  _1383 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1382, 16)) & 63))])));
  _1384 = _811;
  _1385 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1384, 24)) & 63))])));
  _1386 = _810;
  _810 = (_1386 ^ (((_1379 ^ _1381) ^ _1383) ^ _1385));
  _1387 = _806;
  _806 = (((&((uint64_t*)_1387)[((int32_t)1)])));
  _1388 = *(uint64_t*)_1387;
  _1389 = _810;
  _811 = (_1388 ^ _1389);
  _1390 = _811;
  _1391 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1390 & 63))])));
  _1392 = _811;
  _1393 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1392, 8)) & 63))])));
  _1394 = _811;
  _1395 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1394, 16)) & 63))])));
  _1396 = _811;
  _1397 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1396, 24)) & 63))])));
  _1398 = _809;
  _809 = (_1398 ^ (((_1391 ^ _1393) ^ _1395) ^ _1397));
  _1399 = _806;
  _806 = (((&((uint64_t*)_1399)[((int32_t)1)])));
  _1400 = *(uint64_t*)_1399;
  _1401 = _810;
  _1402 = _810;
  _811 = (_1400 ^ ((_1401 << 28) | (llvm_lshr_u64(_1402, 4))));
  _1403 = _811;
  _1404 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1403 & 63))])));
  _1405 = _811;
  _1406 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1405, 8)) & 63))])));
  _1407 = _811;
  _1408 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1407, 16)) & 63))])));
  _1409 = _811;
  _1410 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1409, 24)) & 63))])));
  _1411 = _809;
  _809 = (_1411 ^ (((_1404 ^ _1406) ^ _1408) ^ _1410));
#line 468 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1412 = _806;
  _806 = (((&((uint64_t*)_1412)[((int32_t)1)])));
  _1413 = *(uint64_t*)_1412;
  _1414 = _809;
  _811 = (_1413 ^ _1414);
  _1415 = _811;
  _1416 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1415 & 63))])));
  _1417 = _811;
  _1418 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1417, 8)) & 63))])));
  _1419 = _811;
  _1420 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1419, 16)) & 63))])));
  _1421 = _811;
  _1422 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1421, 24)) & 63))])));
  _1423 = _810;
  _810 = (_1423 ^ (((_1416 ^ _1418) ^ _1420) ^ _1422));
  _1424 = _806;
  _806 = (((&((uint64_t*)_1424)[((int32_t)1)])));
  _1425 = *(uint64_t*)_1424;
  _1426 = _809;
  _1427 = _809;
  _811 = (_1425 ^ ((_1426 << 28) | (llvm_lshr_u64(_1427, 4))));
  _1428 = _811;
  _1429 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1428 & 63))])));
  _1430 = _811;
  _1431 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1430, 8)) & 63))])));
  _1432 = _811;
  _1433 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1432, 16)) & 63))])));
  _1434 = _811;
  _1435 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1434, 24)) & 63))])));
  _1436 = _810;
  _810 = (_1436 ^ (((_1429 ^ _1431) ^ _1433) ^ _1435));
  _1437 = _806;
  _806 = (((&((uint64_t*)_1437)[((int32_t)1)])));
  _1438 = *(uint64_t*)_1437;
  _1439 = _810;
  _811 = (_1438 ^ _1439);
  _1440 = _811;
  _1441 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1440 & 63))])));
  _1442 = _811;
  _1443 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1442, 8)) & 63))])));
  _1444 = _811;
  _1445 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1444, 16)) & 63))])));
  _1446 = _811;
  _1447 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1446, 24)) & 63))])));
  _1448 = _809;
  _809 = (_1448 ^ (((_1441 ^ _1443) ^ _1445) ^ _1447));
  _1449 = _806;
  _806 = (((&((uint64_t*)_1449)[((int32_t)1)])));
  _1450 = *(uint64_t*)_1449;
  _1451 = _810;
  _1452 = _810;
  _811 = (_1450 ^ ((_1451 << 28) | (llvm_lshr_u64(_1452, 4))));
  _1453 = _811;
  _1454 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1453 & 63))])));
  _1455 = _811;
  _1456 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1455, 8)) & 63))])));
  _1457 = _811;
  _1458 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1457, 16)) & 63))])));
  _1459 = _811;
  _1460 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1459, 24)) & 63))])));
  _1461 = _809;
  _809 = (_1461 ^ (((_1454 ^ _1456) ^ _1458) ^ _1460));
#line 469 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1462 = _806;
  _806 = (((&((uint64_t*)_1462)[((int32_t)1)])));
  _1463 = *(uint64_t*)_1462;
  _1464 = _809;
  _811 = (_1463 ^ _1464);
  _1465 = _811;
  _1466 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1465 & 63))])));
  _1467 = _811;
  _1468 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1467, 8)) & 63))])));
  _1469 = _811;
  _1470 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1469, 16)) & 63))])));
  _1471 = _811;
  _1472 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1471, 24)) & 63))])));
  _1473 = _810;
  _810 = (_1473 ^ (((_1466 ^ _1468) ^ _1470) ^ _1472));
  _1474 = _806;
  _806 = (((&((uint64_t*)_1474)[((int32_t)1)])));
  _1475 = *(uint64_t*)_1474;
  _1476 = _809;
  _1477 = _809;
  _811 = (_1475 ^ ((_1476 << 28) | (llvm_lshr_u64(_1477, 4))));
  _1478 = _811;
  _1479 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1478 & 63))])));
  _1480 = _811;
  _1481 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1480, 8)) & 63))])));
  _1482 = _811;
  _1483 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1482, 16)) & 63))])));
  _1484 = _811;
  _1485 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1484, 24)) & 63))])));
  _1486 = _810;
  _810 = (_1486 ^ (((_1479 ^ _1481) ^ _1483) ^ _1485));
  _1487 = _806;
  _806 = (((&((uint64_t*)_1487)[((int32_t)1)])));
  _1488 = *(uint64_t*)_1487;
  _1489 = _810;
  _811 = (_1488 ^ _1489);
  _1490 = _811;
  _1491 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1490 & 63))])));
  _1492 = _811;
  _1493 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1492, 8)) & 63))])));
  _1494 = _811;
  _1495 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1494, 16)) & 63))])));
  _1496 = _811;
  _1497 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1496, 24)) & 63))])));
  _1498 = _809;
  _809 = (_1498 ^ (((_1491 ^ _1493) ^ _1495) ^ _1497));
  _1499 = _806;
  _806 = (((&((uint64_t*)_1499)[((int32_t)1)])));
  _1500 = *(uint64_t*)_1499;
  _1501 = _810;
  _1502 = _810;
  _811 = (_1500 ^ ((_1501 << 28) | (llvm_lshr_u64(_1502, 4))));
  _1503 = _811;
  _1504 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1503 & 63))])));
  _1505 = _811;
  _1506 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1505, 8)) & 63))])));
  _1507 = _811;
  _1508 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1507, 16)) & 63))])));
  _1509 = _811;
  _1510 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1509, 24)) & 63))])));
  _1511 = _809;
  _809 = (_1511 ^ (((_1504 ^ _1506) ^ _1508) ^ _1510));
#line 470 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1512 = _806;
  _806 = (((&((uint64_t*)_1512)[((int32_t)1)])));
  _1513 = *(uint64_t*)_1512;
  _1514 = _809;
  _811 = (_1513 ^ _1514);
  _1515 = _811;
  _1516 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1515 & 63))])));
  _1517 = _811;
  _1518 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1517, 8)) & 63))])));
  _1519 = _811;
  _1520 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1519, 16)) & 63))])));
  _1521 = _811;
  _1522 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1521, 24)) & 63))])));
  _1523 = _810;
  _810 = (_1523 ^ (((_1516 ^ _1518) ^ _1520) ^ _1522));
  _1524 = _806;
  _806 = (((&((uint64_t*)_1524)[((int32_t)1)])));
  _1525 = *(uint64_t*)_1524;
  _1526 = _809;
  _1527 = _809;
  _811 = (_1525 ^ ((_1526 << 28) | (llvm_lshr_u64(_1527, 4))));
  _1528 = _811;
  _1529 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1528 & 63))])));
  _1530 = _811;
  _1531 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1530, 8)) & 63))])));
  _1532 = _811;
  _1533 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1532, 16)) & 63))])));
  _1534 = _811;
  _1535 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1534, 24)) & 63))])));
  _1536 = _810;
  _810 = (_1536 ^ (((_1529 ^ _1531) ^ _1533) ^ _1535));
  _1537 = _806;
  _806 = (((&((uint64_t*)_1537)[((int32_t)1)])));
  _1538 = *(uint64_t*)_1537;
  _1539 = _810;
  _811 = (_1538 ^ _1539);
  _1540 = _811;
  _1541 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1540 & 63))])));
  _1542 = _811;
  _1543 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1542, 8)) & 63))])));
  _1544 = _811;
  _1545 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1544, 16)) & 63))])));
  _1546 = _811;
  _1547 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1546, 24)) & 63))])));
  _1548 = _809;
  _809 = (_1548 ^ (((_1541 ^ _1543) ^ _1545) ^ _1547));
  _1549 = _806;
  _806 = (((&((uint64_t*)_1549)[((int32_t)1)])));
  _1550 = *(uint64_t*)_1549;
  _1551 = _810;
  _1552 = _810;
  _811 = (_1550 ^ ((_1551 << 28) | (llvm_lshr_u64(_1552, 4))));
  _1553 = _811;
  _1554 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1553 & 63))])));
  _1555 = _811;
  _1556 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1555, 8)) & 63))])));
  _1557 = _811;
  _1558 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1557, 16)) & 63))])));
  _1559 = _811;
  _1560 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1559, 24)) & 63))])));
  _1561 = _809;
  _809 = (_1561 ^ (((_1554 ^ _1556) ^ _1558) ^ _1560));
#line 471 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1562 = _806;
  _806 = (((&((uint64_t*)_1562)[((int32_t)1)])));
  _1563 = *(uint64_t*)_1562;
  _1564 = _809;
  _811 = (_1563 ^ _1564);
  _1565 = _811;
  _1566 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1565 & 63))])));
  _1567 = _811;
  _1568 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1567, 8)) & 63))])));
  _1569 = _811;
  _1570 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1569, 16)) & 63))])));
  _1571 = _811;
  _1572 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1571, 24)) & 63))])));
  _1573 = _810;
  _810 = (_1573 ^ (((_1566 ^ _1568) ^ _1570) ^ _1572));
  _1574 = _806;
  _806 = (((&((uint64_t*)_1574)[((int32_t)1)])));
  _1575 = *(uint64_t*)_1574;
  _1576 = _809;
  _1577 = _809;
  _811 = (_1575 ^ ((_1576 << 28) | (llvm_lshr_u64(_1577, 4))));
  _1578 = _811;
  _1579 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1578 & 63))])));
  _1580 = _811;
  _1581 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1580, 8)) & 63))])));
  _1582 = _811;
  _1583 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1582, 16)) & 63))])));
  _1584 = _811;
  _1585 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1584, 24)) & 63))])));
  _1586 = _810;
  _810 = (_1586 ^ (((_1579 ^ _1581) ^ _1583) ^ _1585));
  _1587 = _806;
  _806 = (((&((uint64_t*)_1587)[((int32_t)1)])));
  _1588 = *(uint64_t*)_1587;
  _1589 = _810;
  _811 = (_1588 ^ _1589);
  _1590 = _811;
  _1591 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1590 & 63))])));
  _1592 = _811;
  _1593 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1592, 8)) & 63))])));
  _1594 = _811;
  _1595 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1594, 16)) & 63))])));
  _1596 = _811;
  _1597 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1596, 24)) & 63))])));
  _1598 = _809;
  _809 = (_1598 ^ (((_1591 ^ _1593) ^ _1595) ^ _1597));
  _1599 = _806;
  _806 = (((&((uint64_t*)_1599)[((int32_t)1)])));
  _1600 = *(uint64_t*)_1599;
  _1601 = _810;
  _1602 = _810;
  _811 = (_1600 ^ ((_1601 << 28) | (llvm_lshr_u64(_1602, 4))));
  _1603 = _811;
  _1604 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1603 & 63))])));
  _1605 = _811;
  _1606 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1605, 8)) & 63))])));
  _1607 = _811;
  _1608 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1607, 16)) & 63))])));
  _1609 = _811;
  _1610 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1609, 24)) & 63))])));
  _1611 = _809;
  _809 = (_1611 ^ (((_1604 ^ _1606) ^ _1608) ^ _1610));
#line 472 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1612 = _806;
  _806 = (((&((uint64_t*)_1612)[((int32_t)1)])));
  _1613 = *(uint64_t*)_1612;
  _1614 = _809;
  _811 = (_1613 ^ _1614);
  _1615 = _811;
  _1616 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1615 & 63))])));
  _1617 = _811;
  _1618 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1617, 8)) & 63))])));
  _1619 = _811;
  _1620 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1619, 16)) & 63))])));
  _1621 = _811;
  _1622 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1621, 24)) & 63))])));
  _1623 = _810;
  _810 = (_1623 ^ (((_1616 ^ _1618) ^ _1620) ^ _1622));
  _1624 = _806;
  _806 = (((&((uint64_t*)_1624)[((int32_t)1)])));
  _1625 = *(uint64_t*)_1624;
  _1626 = _809;
  _1627 = _809;
  _811 = (_1625 ^ ((_1626 << 28) | (llvm_lshr_u64(_1627, 4))));
  _1628 = _811;
  _1629 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1628 & 63))])));
  _1630 = _811;
  _1631 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1630, 8)) & 63))])));
  _1632 = _811;
  _1633 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1632, 16)) & 63))])));
  _1634 = _811;
  _1635 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1634, 24)) & 63))])));
  _1636 = _810;
  _810 = (_1636 ^ (((_1629 ^ _1631) ^ _1633) ^ _1635));
  _1637 = _806;
  _806 = (((&((uint64_t*)_1637)[((int32_t)1)])));
  _1638 = *(uint64_t*)_1637;
  _1639 = _810;
  _811 = (_1638 ^ _1639);
  _1640 = _811;
  _1641 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1640 & 63))])));
  _1642 = _811;
  _1643 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1642, 8)) & 63))])));
  _1644 = _811;
  _1645 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1644, 16)) & 63))])));
  _1646 = _811;
  _1647 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1646, 24)) & 63))])));
  _1648 = _809;
  _809 = (_1648 ^ (((_1641 ^ _1643) ^ _1645) ^ _1647));
  _1649 = _806;
  _806 = (((&((uint64_t*)_1649)[((int32_t)1)])));
  _1650 = *(uint64_t*)_1649;
  _1651 = _810;
  _1652 = _810;
  _811 = (_1650 ^ ((_1651 << 28) | (llvm_lshr_u64(_1652, 4))));
  _1653 = _811;
  _1654 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1653 & 63))])));
  _1655 = _811;
  _1656 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1655, 8)) & 63))])));
  _1657 = _811;
  _1658 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1657, 16)) & 63))])));
  _1659 = _811;
  _1660 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1659, 24)) & 63))])));
  _1661 = _809;
  _809 = (_1661 ^ (((_1654 ^ _1656) ^ _1658) ^ _1660));
#line 474 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1662 = _806;
  _806 = (((&((uint64_t*)_1662)[((int32_t)1)])));
  _1663 = *(uint64_t*)_1662;
  _1664 = _810;
  _811 = (_1663 ^ _1664);
  _1665 = _811;
  _1666 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1665 & 63))])));
  _1667 = _811;
  _1668 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1667, 8)) & 63))])));
  _1669 = _811;
  _1670 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1669, 16)) & 63))])));
  _1671 = _811;
  _1672 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1671, 24)) & 63))])));
  _1673 = _809;
  _809 = (_1673 ^ (((_1666 ^ _1668) ^ _1670) ^ _1672));
  _1674 = _806;
  _806 = (((&((uint64_t*)_1674)[((int32_t)1)])));
  _1675 = *(uint64_t*)_1674;
  _1676 = _810;
  _1677 = _810;
  _811 = (_1675 ^ ((_1676 << 28) | (llvm_lshr_u64(_1677, 4))));
  _1678 = _811;
  _1679 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1678 & 63))])));
  _1680 = _811;
  _1681 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1680, 8)) & 63))])));
  _1682 = _811;
  _1683 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1682, 16)) & 63))])));
  _1684 = _811;
  _1685 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1684, 24)) & 63))])));
  _1686 = _809;
  _809 = (_1686 ^ (((_1679 ^ _1681) ^ _1683) ^ _1685));
  _1687 = _806;
  _806 = (((&((uint64_t*)_1687)[((int32_t)1)])));
  _1688 = *(uint64_t*)_1687;
  _1689 = _809;
  _811 = (_1688 ^ _1689);
  _1690 = _811;
  _1691 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1690 & 63))])));
  _1692 = _811;
  _1693 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1692, 8)) & 63))])));
  _1694 = _811;
  _1695 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1694, 16)) & 63))])));
  _1696 = _811;
  _1697 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1696, 24)) & 63))])));
  _1698 = _810;
  _810 = (_1698 ^ (((_1691 ^ _1693) ^ _1695) ^ _1697));
  _1699 = _806;
  _806 = (((&((uint64_t*)_1699)[((int32_t)1)])));
  _1700 = *(uint64_t*)_1699;
  _1701 = _809;
  _1702 = _809;
  _811 = (_1700 ^ ((_1701 << 28) | (llvm_lshr_u64(_1702, 4))));
  _1703 = _811;
  _1704 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1703 & 63))])));
  _1705 = _811;
  _1706 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1705, 8)) & 63))])));
  _1707 = _811;
  _1708 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1707, 16)) & 63))])));
  _1709 = _811;
  _1710 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1709, 24)) & 63))])));
  _1711 = _810;
  _810 = (_1711 ^ (((_1704 ^ _1706) ^ _1708) ^ _1710));
#line 475 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1712 = _806;
  _806 = (((&((uint64_t*)_1712)[((int32_t)1)])));
  _1713 = *(uint64_t*)_1712;
  _1714 = _810;
  _811 = (_1713 ^ _1714);
  _1715 = _811;
  _1716 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1715 & 63))])));
  _1717 = _811;
  _1718 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1717, 8)) & 63))])));
  _1719 = _811;
  _1720 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1719, 16)) & 63))])));
  _1721 = _811;
  _1722 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1721, 24)) & 63))])));
  _1723 = _809;
  _809 = (_1723 ^ (((_1716 ^ _1718) ^ _1720) ^ _1722));
  _1724 = _806;
  _806 = (((&((uint64_t*)_1724)[((int32_t)1)])));
  _1725 = *(uint64_t*)_1724;
  _1726 = _810;
  _1727 = _810;
  _811 = (_1725 ^ ((_1726 << 28) | (llvm_lshr_u64(_1727, 4))));
  _1728 = _811;
  _1729 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1728 & 63))])));
  _1730 = _811;
  _1731 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1730, 8)) & 63))])));
  _1732 = _811;
  _1733 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1732, 16)) & 63))])));
  _1734 = _811;
  _1735 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1734, 24)) & 63))])));
  _1736 = _809;
  _809 = (_1736 ^ (((_1729 ^ _1731) ^ _1733) ^ _1735));
  _1737 = _806;
  _806 = (((&((uint64_t*)_1737)[((int32_t)1)])));
  _1738 = *(uint64_t*)_1737;
  _1739 = _809;
  _811 = (_1738 ^ _1739);
  _1740 = _811;
  _1741 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1740 & 63))])));
  _1742 = _811;
  _1743 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1742, 8)) & 63))])));
  _1744 = _811;
  _1745 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1744, 16)) & 63))])));
  _1746 = _811;
  _1747 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1746, 24)) & 63))])));
  _1748 = _810;
  _810 = (_1748 ^ (((_1741 ^ _1743) ^ _1745) ^ _1747));
  _1749 = _806;
  _806 = (((&((uint64_t*)_1749)[((int32_t)1)])));
  _1750 = *(uint64_t*)_1749;
  _1751 = _809;
  _1752 = _809;
  _811 = (_1750 ^ ((_1751 << 28) | (llvm_lshr_u64(_1752, 4))));
  _1753 = _811;
  _1754 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1753 & 63))])));
  _1755 = _811;
  _1756 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1755, 8)) & 63))])));
  _1757 = _811;
  _1758 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1757, 16)) & 63))])));
  _1759 = _811;
  _1760 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1759, 24)) & 63))])));
  _1761 = _810;
  _810 = (_1761 ^ (((_1754 ^ _1756) ^ _1758) ^ _1760));
#line 476 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1762 = _806;
  _806 = (((&((uint64_t*)_1762)[((int32_t)1)])));
  _1763 = *(uint64_t*)_1762;
  _1764 = _810;
  _811 = (_1763 ^ _1764);
  _1765 = _811;
  _1766 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1765 & 63))])));
  _1767 = _811;
  _1768 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1767, 8)) & 63))])));
  _1769 = _811;
  _1770 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1769, 16)) & 63))])));
  _1771 = _811;
  _1772 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1771, 24)) & 63))])));
  _1773 = _809;
  _809 = (_1773 ^ (((_1766 ^ _1768) ^ _1770) ^ _1772));
  _1774 = _806;
  _806 = (((&((uint64_t*)_1774)[((int32_t)1)])));
  _1775 = *(uint64_t*)_1774;
  _1776 = _810;
  _1777 = _810;
  _811 = (_1775 ^ ((_1776 << 28) | (llvm_lshr_u64(_1777, 4))));
  _1778 = _811;
  _1779 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1778 & 63))])));
  _1780 = _811;
  _1781 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1780, 8)) & 63))])));
  _1782 = _811;
  _1783 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1782, 16)) & 63))])));
  _1784 = _811;
  _1785 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1784, 24)) & 63))])));
  _1786 = _809;
  _809 = (_1786 ^ (((_1779 ^ _1781) ^ _1783) ^ _1785));
  _1787 = _806;
  _806 = (((&((uint64_t*)_1787)[((int32_t)1)])));
  _1788 = *(uint64_t*)_1787;
  _1789 = _809;
  _811 = (_1788 ^ _1789);
  _1790 = _811;
  _1791 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1790 & 63))])));
  _1792 = _811;
  _1793 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1792, 8)) & 63))])));
  _1794 = _811;
  _1795 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1794, 16)) & 63))])));
  _1796 = _811;
  _1797 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1796, 24)) & 63))])));
  _1798 = _810;
  _810 = (_1798 ^ (((_1791 ^ _1793) ^ _1795) ^ _1797));
  _1799 = _806;
  _806 = (((&((uint64_t*)_1799)[((int32_t)1)])));
  _1800 = *(uint64_t*)_1799;
  _1801 = _809;
  _1802 = _809;
  _811 = (_1800 ^ ((_1801 << 28) | (llvm_lshr_u64(_1802, 4))));
  _1803 = _811;
  _1804 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1803 & 63))])));
  _1805 = _811;
  _1806 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1805, 8)) & 63))])));
  _1807 = _811;
  _1808 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1807, 16)) & 63))])));
  _1809 = _811;
  _1810 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1809, 24)) & 63))])));
  _1811 = _810;
  _810 = (_1811 ^ (((_1804 ^ _1806) ^ _1808) ^ _1810));
#line 477 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1812 = _806;
  _806 = (((&((uint64_t*)_1812)[((int32_t)1)])));
  _1813 = *(uint64_t*)_1812;
  _1814 = _810;
  _811 = (_1813 ^ _1814);
  _1815 = _811;
  _1816 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1815 & 63))])));
  _1817 = _811;
  _1818 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1817, 8)) & 63))])));
  _1819 = _811;
  _1820 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1819, 16)) & 63))])));
  _1821 = _811;
  _1822 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1821, 24)) & 63))])));
  _1823 = _809;
  _809 = (_1823 ^ (((_1816 ^ _1818) ^ _1820) ^ _1822));
  _1824 = _806;
  _806 = (((&((uint64_t*)_1824)[((int32_t)1)])));
  _1825 = *(uint64_t*)_1824;
  _1826 = _810;
  _1827 = _810;
  _811 = (_1825 ^ ((_1826 << 28) | (llvm_lshr_u64(_1827, 4))));
  _1828 = _811;
  _1829 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1828 & 63))])));
  _1830 = _811;
  _1831 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1830, 8)) & 63))])));
  _1832 = _811;
  _1833 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1832, 16)) & 63))])));
  _1834 = _811;
  _1835 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1834, 24)) & 63))])));
  _1836 = _809;
  _809 = (_1836 ^ (((_1829 ^ _1831) ^ _1833) ^ _1835));
  _1837 = _806;
  _806 = (((&((uint64_t*)_1837)[((int32_t)1)])));
  _1838 = *(uint64_t*)_1837;
  _1839 = _809;
  _811 = (_1838 ^ _1839);
  _1840 = _811;
  _1841 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1840 & 63))])));
  _1842 = _811;
  _1843 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1842, 8)) & 63))])));
  _1844 = _811;
  _1845 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1844, 16)) & 63))])));
  _1846 = _811;
  _1847 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1846, 24)) & 63))])));
  _1848 = _810;
  _810 = (_1848 ^ (((_1841 ^ _1843) ^ _1845) ^ _1847));
  _1849 = _806;
  _806 = (((&((uint64_t*)_1849)[((int32_t)1)])));
  _1850 = *(uint64_t*)_1849;
  _1851 = _809;
  _1852 = _809;
  _811 = (_1850 ^ ((_1851 << 28) | (llvm_lshr_u64(_1852, 4))));
  _1853 = _811;
  _1854 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1853 & 63))])));
  _1855 = _811;
  _1856 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1855, 8)) & 63))])));
  _1857 = _811;
  _1858 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1857, 16)) & 63))])));
  _1859 = _811;
  _1860 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1859, 24)) & 63))])));
  _1861 = _810;
  _810 = (_1861 ^ (((_1854 ^ _1856) ^ _1858) ^ _1860));
#line 478 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1862 = _806;
  _806 = (((&((uint64_t*)_1862)[((int32_t)1)])));
  _1863 = *(uint64_t*)_1862;
  _1864 = _810;
  _811 = (_1863 ^ _1864);
  _1865 = _811;
  _1866 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1865 & 63))])));
  _1867 = _811;
  _1868 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1867, 8)) & 63))])));
  _1869 = _811;
  _1870 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1869, 16)) & 63))])));
  _1871 = _811;
  _1872 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1871, 24)) & 63))])));
  _1873 = _809;
  _809 = (_1873 ^ (((_1866 ^ _1868) ^ _1870) ^ _1872));
  _1874 = _806;
  _806 = (((&((uint64_t*)_1874)[((int32_t)1)])));
  _1875 = *(uint64_t*)_1874;
  _1876 = _810;
  _1877 = _810;
  _811 = (_1875 ^ ((_1876 << 28) | (llvm_lshr_u64(_1877, 4))));
  _1878 = _811;
  _1879 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1878 & 63))])));
  _1880 = _811;
  _1881 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1880, 8)) & 63))])));
  _1882 = _811;
  _1883 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1882, 16)) & 63))])));
  _1884 = _811;
  _1885 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1884, 24)) & 63))])));
  _1886 = _809;
  _809 = (_1886 ^ (((_1879 ^ _1881) ^ _1883) ^ _1885));
  _1887 = _806;
  _806 = (((&((uint64_t*)_1887)[((int32_t)1)])));
  _1888 = *(uint64_t*)_1887;
  _1889 = _809;
  _811 = (_1888 ^ _1889);
  _1890 = _811;
  _1891 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1890 & 63))])));
  _1892 = _811;
  _1893 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1892, 8)) & 63))])));
  _1894 = _811;
  _1895 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1894, 16)) & 63))])));
  _1896 = _811;
  _1897 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1896, 24)) & 63))])));
  _1898 = _810;
  _810 = (_1898 ^ (((_1891 ^ _1893) ^ _1895) ^ _1897));
  _1899 = _806;
  _806 = (((&((uint64_t*)_1899)[((int32_t)1)])));
  _1900 = *(uint64_t*)_1899;
  _1901 = _809;
  _1902 = _809;
  _811 = (_1900 ^ ((_1901 << 28) | (llvm_lshr_u64(_1902, 4))));
  _1903 = _811;
  _1904 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1903 & 63))])));
  _1905 = _811;
  _1906 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1905, 8)) & 63))])));
  _1907 = _811;
  _1908 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1907, 16)) & 63))])));
  _1909 = _811;
  _1910 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1909, 24)) & 63))])));
  _1911 = _810;
  _810 = (_1911 ^ (((_1904 ^ _1906) ^ _1908) ^ _1910));
#line 479 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1912 = _806;
  _806 = (((&((uint64_t*)_1912)[((int32_t)1)])));
  _1913 = *(uint64_t*)_1912;
  _1914 = _810;
  _811 = (_1913 ^ _1914);
  _1915 = _811;
  _1916 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1915 & 63))])));
  _1917 = _811;
  _1918 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1917, 8)) & 63))])));
  _1919 = _811;
  _1920 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1919, 16)) & 63))])));
  _1921 = _811;
  _1922 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1921, 24)) & 63))])));
  _1923 = _809;
  _809 = (_1923 ^ (((_1916 ^ _1918) ^ _1920) ^ _1922));
  _1924 = _806;
  _806 = (((&((uint64_t*)_1924)[((int32_t)1)])));
  _1925 = *(uint64_t*)_1924;
  _1926 = _810;
  _1927 = _810;
  _811 = (_1925 ^ ((_1926 << 28) | (llvm_lshr_u64(_1927, 4))));
  _1928 = _811;
  _1929 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1928 & 63))])));
  _1930 = _811;
  _1931 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1930, 8)) & 63))])));
  _1932 = _811;
  _1933 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1932, 16)) & 63))])));
  _1934 = _811;
  _1935 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1934, 24)) & 63))])));
  _1936 = _809;
  _809 = (_1936 ^ (((_1929 ^ _1931) ^ _1933) ^ _1935));
  _1937 = _806;
  _806 = (((&((uint64_t*)_1937)[((int32_t)1)])));
  _1938 = *(uint64_t*)_1937;
  _1939 = _809;
  _811 = (_1938 ^ _1939);
  _1940 = _811;
  _1941 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1940 & 63))])));
  _1942 = _811;
  _1943 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1942, 8)) & 63))])));
  _1944 = _811;
  _1945 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1944, 16)) & 63))])));
  _1946 = _811;
  _1947 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1946, 24)) & 63))])));
  _1948 = _810;
  _810 = (_1948 ^ (((_1941 ^ _1943) ^ _1945) ^ _1947));
  _1949 = _806;
  _806 = (((&((uint64_t*)_1949)[((int32_t)1)])));
  _1950 = *(uint64_t*)_1949;
  _1951 = _809;
  _1952 = _809;
  _811 = (_1950 ^ ((_1951 << 28) | (llvm_lshr_u64(_1952, 4))));
  _1953 = _811;
  _1954 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1953 & 63))])));
  _1955 = _811;
  _1956 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1955, 8)) & 63))])));
  _1957 = _811;
  _1958 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1957, 16)) & 63))])));
  _1959 = _811;
  _1960 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1959, 24)) & 63))])));
  _1961 = _810;
  _810 = (_1961 ^ (((_1954 ^ _1956) ^ _1958) ^ _1960));
#line 480 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _1962 = _806;
  _806 = (((&((uint64_t*)_1962)[((int32_t)1)])));
  _1963 = *(uint64_t*)_1962;
  _1964 = _810;
  _811 = (_1963 ^ _1964);
  _1965 = _811;
  _1966 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1965 & 63))])));
  _1967 = _811;
  _1968 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1967, 8)) & 63))])));
  _1969 = _811;
  _1970 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1969, 16)) & 63))])));
  _1971 = _811;
  _1972 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1971, 24)) & 63))])));
  _1973 = _809;
  _809 = (_1973 ^ (((_1966 ^ _1968) ^ _1970) ^ _1972));
  _1974 = _806;
  _806 = (((&((uint64_t*)_1974)[((int32_t)1)])));
  _1975 = *(uint64_t*)_1974;
  _1976 = _810;
  _1977 = _810;
  _811 = (_1975 ^ ((_1976 << 28) | (llvm_lshr_u64(_1977, 4))));
  _1978 = _811;
  _1979 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_1978 & 63))])));
  _1980 = _811;
  _1981 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_1980, 8)) & 63))])));
  _1982 = _811;
  _1983 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_1982, 16)) & 63))])));
  _1984 = _811;
  _1985 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_1984, 24)) & 63))])));
  _1986 = _809;
  _809 = (_1986 ^ (((_1979 ^ _1981) ^ _1983) ^ _1985));
  _1987 = _806;
  _806 = (((&((uint64_t*)_1987)[((int32_t)1)])));
  _1988 = *(uint64_t*)_1987;
  _1989 = _809;
  _811 = (_1988 ^ _1989);
  _1990 = _811;
  _1991 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_1990 & 63))])));
  _1992 = _811;
  _1993 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_1992, 8)) & 63))])));
  _1994 = _811;
  _1995 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_1994, 16)) & 63))])));
  _1996 = _811;
  _1997 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_1996, 24)) & 63))])));
  _1998 = _810;
  _810 = (_1998 ^ (((_1991 ^ _1993) ^ _1995) ^ _1997));
  _1999 = _806;
  _806 = (((&((uint64_t*)_1999)[((int32_t)1)])));
  _2000 = *(uint64_t*)_1999;
  _2001 = _809;
  _2002 = _809;
  _811 = (_2000 ^ ((_2001 << 28) | (llvm_lshr_u64(_2002, 4))));
  _2003 = _811;
  _2004 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_2003 & 63))])));
  _2005 = _811;
  _2006 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_2005, 8)) & 63))])));
  _2007 = _811;
  _2008 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_2007, 16)) & 63))])));
  _2009 = _811;
  _2010 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_2009, 24)) & 63))])));
  _2011 = _810;
  _810 = (_2011 ^ (((_2004 ^ _2006) ^ _2008) ^ _2010));
#line 481 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2012 = _806;
  _806 = (((&((uint64_t*)_2012)[((int32_t)1)])));
  _2013 = *(uint64_t*)_2012;
  _2014 = _810;
  _811 = (_2013 ^ _2014);
  _2015 = _811;
  _2016 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_2015 & 63))])));
  _2017 = _811;
  _2018 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_2017, 8)) & 63))])));
  _2019 = _811;
  _2020 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_2019, 16)) & 63))])));
  _2021 = _811;
  _2022 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_2021, 24)) & 63))])));
  _2023 = _809;
  _809 = (_2023 ^ (((_2016 ^ _2018) ^ _2020) ^ _2022));
  _2024 = _806;
  _806 = (((&((uint64_t*)_2024)[((int32_t)1)])));
  _2025 = *(uint64_t*)_2024;
  _2026 = _810;
  _2027 = _810;
  _811 = (_2025 ^ ((_2026 << 28) | (llvm_lshr_u64(_2027, 4))));
  _2028 = _811;
  _2029 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_2028 & 63))])));
  _2030 = _811;
  _2031 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_2030, 8)) & 63))])));
  _2032 = _811;
  _2033 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_2032, 16)) & 63))])));
  _2034 = _811;
  _2035 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_2034, 24)) & 63))])));
  _2036 = _809;
  _809 = (_2036 ^ (((_2029 ^ _2031) ^ _2033) ^ _2035));
  _2037 = _806;
  _806 = (((&((uint64_t*)_2037)[((int32_t)1)])));
  _2038 = *(uint64_t*)_2037;
  _2039 = _809;
  _811 = (_2038 ^ _2039);
  _2040 = _811;
  _2041 = *(uint64_t*)(((&(&SB8)->array[((int64_t)(_2040 & 63))])));
  _2042 = _811;
  _2043 = *(uint64_t*)(((&(&SB6)->array[((int64_t)((llvm_lshr_u64(_2042, 8)) & 63))])));
  _2044 = _811;
  _2045 = *(uint64_t*)(((&(&SB4)->array[((int64_t)((llvm_lshr_u64(_2044, 16)) & 63))])));
  _2046 = _811;
  _2047 = *(uint64_t*)(((&(&SB2)->array[((int64_t)((llvm_lshr_u64(_2046, 24)) & 63))])));
  _2048 = _810;
  _810 = (_2048 ^ (((_2041 ^ _2043) ^ _2045) ^ _2047));
  _2049 = _806;
  _806 = (((&((uint64_t*)_2049)[((int32_t)1)])));
  _2050 = *(uint64_t*)_2049;
  _2051 = _809;
  _2052 = _809;
  _811 = (_2050 ^ ((_2051 << 28) | (llvm_lshr_u64(_2052, 4))));
  _2053 = _811;
  _2054 = *(uint64_t*)(((&(&SB7)->array[((int64_t)(_2053 & 63))])));
  _2055 = _811;
  _2056 = *(uint64_t*)(((&(&SB5)->array[((int64_t)((llvm_lshr_u64(_2055, 8)) & 63))])));
  _2057 = _811;
  _2058 = *(uint64_t*)(((&(&SB3)->array[((int64_t)((llvm_lshr_u64(_2057, 16)) & 63))])));
  _2059 = _811;
  _2060 = *(uint64_t*)(((&(&SB1)->array[((int64_t)((llvm_lshr_u64(_2059, 24)) & 63))])));
  _2061 = _810;
  _810 = (_2061 ^ (((_2054 ^ _2056) ^ _2058) ^ _2060));
#line 483 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2062 = _810;
  _2063 = _810;
  _810 = (((_2062 << 31) | (llvm_lshr_u64(_2063, 1))) & INT64_C(4294967295));
  _2064 = _810;
  _2065 = _809;
  _811 = ((_2064 ^ _2065) & INT64_C(2863311530));
  _2066 = _811;
  _2067 = _810;
  _810 = (_2067 ^ _2066);
  _2068 = _811;
  _2069 = _809;
  _809 = (_2069 ^ _2068);
  _2070 = _809;
  _2071 = _809;
  _809 = (((_2070 << 31) | (llvm_lshr_u64(_2071, 1))) & INT64_C(4294967295));
  _2072 = _809;
  _2073 = _810;
  _811 = (((llvm_lshr_u64(_2072, 8)) ^ _2073) & 16711935);
  _2074 = _811;
  _2075 = _810;
  _810 = (_2075 ^ _2074);
  _2076 = _811;
  _2077 = _809;
  _809 = (_2077 ^ (_2076 << 8));
  _2078 = _809;
  _2079 = _810;
  _811 = (((llvm_lshr_u64(_2078, 2)) ^ _2079) & 858993459);
  _2080 = _811;
  _2081 = _810;
  _810 = (_2081 ^ _2080);
  _2082 = _811;
  _2083 = _809;
  _809 = (_2083 ^ (_2082 << 2));
  _2084 = _810;
  _2085 = _809;
  _811 = (((llvm_lshr_u64(_2084, 16)) ^ _2085) & 65535);
  _2086 = _811;
  _2087 = _809;
  _809 = (_2087 ^ _2086);
  _2088 = _811;
  _2089 = _810;
  _810 = (_2089 ^ (_2088 << 16));
  _2090 = _810;
  _2091 = _809;
  _811 = (((llvm_lshr_u64(_2090, 4)) ^ _2091) & 252645135);
  _2092 = _811;
  _2093 = _809;
  _809 = (_2093 ^ _2092);
  _2094 = _811;
  _2095 = _810;
  _810 = (_2095 ^ (_2094 << 4));
#line 485 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2096 = _810;
  _2097 = _808;
  *(uint8_t*)((((uint8_t*)_2097))) = (((uint8_t)(llvm_lshr_u64(_2096, 24))));
  _2098 = _810;
  _2099 = _808;
  *(uint8_t*)(((&((uint8_t*)_2099)[((int64_t)1)]))) = (((uint8_t)(llvm_lshr_u64(_2098, 16))));
  _2100 = _810;
  _2101 = _808;
  *(uint8_t*)(((&((uint8_t*)_2101)[((int64_t)2)]))) = (((uint8_t)(llvm_lshr_u64(_2100, 8))));
  _2102 = _810;
  _2103 = _808;
  *(uint8_t*)(((&((uint8_t*)_2103)[((int64_t)3)]))) = (((uint8_t)_2102));
#line 486 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2104 = _809;
  _2105 = _808;
  *(uint8_t*)(((&((uint8_t*)_2105)[((int64_t)4)]))) = (((uint8_t)(llvm_lshr_u64(_2104, 24))));
  _2106 = _809;
  _2107 = _808;
  *(uint8_t*)(((&((uint8_t*)_2107)[((int64_t)5)]))) = (((uint8_t)(llvm_lshr_u64(_2106, 16))));
  _2108 = _809;
  _2109 = _808;
  *(uint8_t*)(((&((uint8_t*)_2109)[((int64_t)6)]))) = (((uint8_t)(llvm_lshr_u64(_2108, 8))));
  _2110 = _809;
  _2111 = _808;
  *(uint8_t*)(((&((uint8_t*)_2111)[((int64_t)7)]))) = (((uint8_t)_2110));
}


void des3_encrypt(void* _2112, void* _2113, void* _2114) {
  void* _2115;    /* Address-exposed local */
  void* _2116;    /* Address-exposed local */
  void* _2117;    /* Address-exposed local */
  void* _2118;
  void* _2119;
  void* _2120;

  _2115 = _2112;
#line 489 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2116 = _2113;
  ;
  _2117 = _2114;
  ;
#line 491 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2118 = _2115;
  _2119 = _2116;
  _2120 = _2117;
  des3_crypt((((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_2118)->field0)))))->array[((int64_t)0)]))), _2119, _2120);
}


void des3_decrypt(void* _2121, void* _2122, void* _2123) {
  void* _2124;    /* Address-exposed local */
  void* _2125;    /* Address-exposed local */
  void* _2126;    /* Address-exposed local */
  void* _2127;
  void* _2128;
  void* _2129;

  _2124 = _2121;
#line 494 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2125 = _2122;
  ;
  _2126 = _2123;
  ;
#line 496 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2127 = _2124;
  _2128 = _2125;
  _2129 = _2126;
  des3_crypt((((&((struct l_array_96_uint64_t*)(((&(((struct l_struct_struct_OC_des3_context*)_2127)->field1)))))->array[((int64_t)0)]))), _2128, _2129);
}


uint32_t des_drive(void* _2130, void* _2131) {
  uint32_t _2132;    /* Address-exposed local */
  void* _2133;    /* Address-exposed local */
  void* _2134;    /* Address-exposed local */
  uint32_t _2135;    /* Address-exposed local */
  uint32_t _2136;    /* Address-exposed local */
  uint32_t _2137;    /* Address-exposed local */
  struct l_struct_struct_OC_des_context _2138;    /* Address-exposed local */
  struct l_struct_struct_OC_des3_context _2139;    /* Address-exposed local */
  struct l_array_8_uint8_t _2140;    /* Address-exposed local */
  uint32_t _2141;    /* Address-exposed local */
  uint32_t _2142;
  uint32_t _2143;
  uint32_t _2144;
  uint32_t _2145;
  uint32_t _2146;
  uint32_t _2147;
  uint32_t _2148;
  uint32_t _2149;
  uint32_t _2150;
  uint32_t _2151;
  uint32_t _2152;
  void* _2153;
  uint32_t _2154;
  void* _2155;
  uint32_t _2156;
  uint32_t _2157;
  uint32_t _2158;
  uint32_t _2159;
  uint32_t _2160;
  uint32_t _2161;
  uint32_t _2162;
  uint32_t _2163;
  uint32_t _2164;
  uint32_t _2165;
  uint32_t _2166;
  uint32_t _2167;
  uint32_t _2168;
  uint32_t _2169;
  uint32_t _2170;
  uint32_t _2171;
  uint32_t _2172;
  uint32_t _2173;
  void* _2174;
  uint32_t _2175;
  uint32_t _2176;
  uint32_t _2177;
  uint32_t _2178;
  uint32_t _2179;
  void* _2180;
  uint32_t _2181;

  _2133 = _2130;
#line 532 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2134 = _2131;
  ;
#line 534 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  ;
  ;
#line 535 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 536 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 537 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 538 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 542 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2135 = 0;
  goto _2182;

  do {     /* Syntactic loop '' to make GCC happy */
_2182:
  _2142 = _2135;
  if ((((int32_t)_2142) < ((int32_t)2u))) {
    goto _2183;
  } else {
    goto _2184;
  }

_2183:
#line 544 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2143 = printf((&_OC_str));
#line 546 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2144 = _2135;
  if ((_2144 == 0u)) {
    goto _2185;
  } else {
    goto _2186;
  }

_2185:
  _2145 = printf((&_OC_str_OC_1));
  goto _2186;

_2186:
#line 547 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2146 = _2135;
  if ((_2146 == 1u)) {
    goto _2187;
  } else {
    goto _2188;
  }

_2187:
  _2147 = printf((&_OC_str_OC_2));
  goto _2188;

_2188:
#line 549 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2136 = 0;
  goto _2189;

  do {     /* Syntactic loop '' to make GCC happy */
_2189:
  _2148 = _2136;
  if ((((int32_t)_2148) < ((int32_t)3u))) {
    goto _2190;
  } else {
    goto _2191;
  }

_2190:
#line 552 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2149 = _2136;
  _2150 = _2136;
#line 551 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2151 = printf((&_OC_str_OC_3), (llvm_add_u32(_2149, 1)), (llvm_add_u32(64, (llvm_mul_u32(_2150, 64)))));
#line 556 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2141 = 0;
  goto _2192;

  do {     /* Syntactic loop '' to make GCC happy */
_2192:
  _2152 = _2141;
  _2153 = _2133;
  _2154 = *(uint32_t*)_2153;
  if ((((int32_t)_2152) < ((int32_t)_2154))) {
    goto _2193;
  } else {
    goto _2194;
  }

_2193:
#line 558 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2155 = memcpy((((&(&_2140)->array[((int64_t)0)]))), (&DES3_init), 8);
#line 560 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2156 = _2136;
  switch (_2156) {
  default:
    goto _2195;
  case 0u:
    goto _2196;
  case 1u:
    goto _2197;
  case 2u:
    goto _2198;
  }

_2198:
#line 572 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2159 = des3_set_3keys((&_2139), (&DES3_keys), (((&(&DES3_keys)->array[((int64_t)1)]))), (((&(&DES3_keys)->array[((int64_t)2)]))));
  goto _2195;

_2197:
#line 567 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2158 = des3_set_2keys((&_2139), (&DES3_keys), (((&(&DES3_keys)->array[((int64_t)1)]))));
  goto _2195;

_2196:
#line 563 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2157 = des_set_key((&_2138), (&DES3_keys));
  goto _2195;

_2195:
#line 578 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2137 = 0;
  goto _2199;

  do {     /* Syntactic loop '' to make GCC happy */
_2199:
  _2160 = _2137;
  if ((((int32_t)_2160) < ((int32_t)10000u))) {
    goto _2200;
  } else {
    goto _2201;
  }

_2200:
#line 580 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2161 = _2136;
  if ((_2161 == 0u)) {
    goto _2202;
  } else {
    goto _2203;
  }

_2203:
#line 587 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2164 = _2135;
  if ((_2164 == 0u)) {
    goto _2204;
  } else {
    goto _2205;
  }

_2204:
  des3_encrypt((&_2139), (((&(&_2140)->array[((int64_t)0)]))), (((&(&_2140)->array[((int64_t)0)]))));
  goto _2205;

_2205:
#line 588 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2165 = _2135;
  if ((_2165 == 1u)) {
    goto _2206;
  } else {
    goto _2207;
  }

_2206:
  des3_decrypt((&_2139), (((&(&_2140)->array[((int64_t)0)]))), (((&(&_2140)->array[((int64_t)0)]))));
  goto _2207;

_2207:
  goto _2208;

_2202:
#line 582 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2162 = _2135;
  if ((_2162 == 0u)) {
    goto _2209;
  } else {
    goto _2210;
  }

_2209:
  des_encrypt((&_2138), (((&(&_2140)->array[((int64_t)0)]))), (((&(&_2140)->array[((int64_t)0)]))));
  goto _2210;

_2210:
#line 583 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2163 = _2135;
  if ((_2163 == 1u)) {
    goto _2211;
  } else {
    goto _2212;
  }

_2211:
  des_decrypt((&_2138), (((&(&_2140)->array[((int64_t)0)]))), (((&(&_2140)->array[((int64_t)0)]))));
  goto _2212;

_2212:
  goto _2208;

_2208:
  goto _2213;

_2213:
#line 578 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2166 = _2137;
  _2137 = (llvm_add_u32(_2166, 1));
  goto _2199;

  } while (1); /* end of syntactic loop '' */
_2201:
#line 592 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2167 = _2135;
  if ((_2167 == 0u)) {
    goto _2214;
  } else {
    goto _2215;
  }

_2214:
  _2168 = _2136;
  _2169 = memcmp((((&(&_2140)->array[((int64_t)0)]))), (((&((struct l_array_8_uint8_t*)(((&(&DES3_enc_test)->array[((int64_t)(((int64_t)(int32_t)_2168)))]))))->array[((int64_t)0)]))), 8);
  if ((_2169 != 0u)) {
    goto _2216;
  } else {
    goto _2215;
  }

_2215:
#line 593 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2170 = _2135;
  if ((_2170 == 1u)) {
    goto _2217;
  } else {
    goto _2218;
  }

_2217:
  _2171 = _2136;
  _2172 = memcmp((((&(&_2140)->array[((int64_t)0)]))), (((&((struct l_array_8_uint8_t*)(((&(&DES3_dec_test)->array[((int64_t)(((int64_t)(int32_t)_2171)))]))))->array[((int64_t)0)]))), 8);
  if ((_2172 != 0u)) {
    goto _2216;
  } else {
    goto _2218;
  }

_2218:
  goto _2219;

_2219:
#line 556 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2175 = _2141;
  _2141 = (llvm_add_u32(_2175, 1));
  goto _2192;

  } while (1); /* end of syntactic loop '' */
_2194:
#line 601 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2176 = printf((&_OC_str_OC_5));
  goto _2220;

_2220:
#line 549 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2177 = _2136;
  _2136 = (llvm_add_u32(_2177, 1));
  goto _2189;

  } while (1); /* end of syntactic loop '' */
_2191:
  goto _2221;

_2221:
#line 542 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2178 = _2135;
  _2135 = (llvm_add_u32(_2178, 1));
  goto _2182;

  } while (1); /* end of syntactic loop '' */
_2216:
#line 595 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2173 = printf((&_OC_str_OC_4));
#line 596 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2174 = _2134;
  *(uint32_t*)_2174 = 1;
#line 597 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2132 = 1;
  goto _2222;

_2184:
#line 605 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2179 = printf((&_OC_str_OC_6));
#line 607 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2180 = _2134;
  *(uint32_t*)_2180 = 0;
#line 608 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2132 = 0;
  goto _2222;

_2222:
#line 609 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2181 = _2132;
  return _2181;
}


int main(int argc, char ** argv) {
  uint32_t _2223 = (uint32_t)argc;
  void* _2224 = (void*)argv;
  uint32_t _2225;    /* Address-exposed local */
  uint32_t _2226;    /* Address-exposed local */
  void* _2227;    /* Address-exposed local */
  uint32_t _2228;    /* Address-exposed local */
  uint32_t _2229;    /* Address-exposed local */
  uint32_t _2230;
  void* _2231;
  void* _2232;
  uint32_t _2233;
  uint32_t _2234;
  uint32_t _2235;
  uint32_t _2236;

  _2225 = 0;
  _2226 = _2223;
#line 611 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2227 = _2224;
  ;
#line 612 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2228 = 100;
#line 613 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2230 = _2226;
  if ((_2230 == 2u)) {
    goto _2237;
  } else {
    goto _2238;
  }

_2237:
  _2231 = _2227;
  _2232 = *(void**)(((&((void**)_2231)[((int64_t)1)])));
  _2233 = atoi(_2232);
  _2228 = _2233;
  goto _2238;

_2238:
#line 614 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 615 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2234 = des_drive((&_2228), (&_2229));
#line 616 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2235 = _2229;
  if ((_2235 == 0u)) {
    goto _2239;
  } else {
    goto _2240;
  }

_2239:
  _2236 = printf((&_OC_str_OC_5));
  goto _2240;

_2240:
  return 0;
}

