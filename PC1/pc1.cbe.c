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
struct l_array_32_uint8_t;
struct l_array_16_uint16_t;
struct l_array_33_uint8_t;
struct l_array_10_uint8_t;
struct l_array_53_uint8_t;
struct l_array_7_uint8_t;
struct l_array_2_uint8_t;
struct l_array_9_uint32_t;

/* Function definitions */

/* Types Definitions */
struct l_array_32_uint8_t {
  uint8_t array[32];
};
struct l_array_16_uint16_t {
  uint16_t array[16];
};
struct l_array_33_uint8_t {
  uint8_t array[33];
};
struct l_array_10_uint8_t {
  uint8_t array[10];
};
struct l_array_53_uint8_t {
  uint8_t array[53];
};
struct l_array_7_uint8_t {
  uint8_t array[7];
};
struct l_array_2_uint8_t {
  uint8_t array[2];
};
struct l_array_9_uint32_t {
  uint32_t array[9];
};

/* Global Variable Declarations */
extern __PREFIXALIGN__(16) struct l_array_32_uint8_t cle __POSTFIXALIGN__(16);
extern __PREFIXALIGN__(16) struct l_array_16_uint16_t x1a0 __POSTFIXALIGN__(16);
extern uint16_t res;
extern uint16_t inter;
extern uint16_t i;
extern uint16_t x1a2;
extern uint16_t dx;
extern uint16_t ax;
extern uint16_t cx;
extern uint16_t bx;
extern uint16_t tmp;
extern uint16_t si;
const static struct l_array_33_uint8_t _OC_str;
extern __PREFIXALIGN__(16) struct l_array_32_uint8_t buff __POSTFIXALIGN__(16);
extern uint32_t count;
extern uint32_t c1;
extern uint16_t c;
extern uint16_t cfc;
extern uint16_t cfd;
extern uint16_t compte;
extern uint16_t d;
extern uint16_t e;
const static struct l_array_10_uint8_t _OC_str_OC_1;
const static struct l_array_53_uint8_t _OC_str_OC_2;
const static struct l_array_7_uint8_t _OC_str_OC_3;
const static struct l_array_2_uint8_t _OC_str_OC_4;
extern void* in;

/* Function Declarations */
uint32_t assemble(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t code(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t my_rand_r(void* _134) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t pc1_drive(void* _142, void* _143) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t strlen(void* _227) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t printf(void* _228, ...);
void* memcpy(void* _229, void* _230, uint64_t _231);


/* Global Variable Definitions and Initialization */
__PREFIXALIGN__(16) struct l_array_32_uint8_t cle __POSTFIXALIGN__(16);
__PREFIXALIGN__(16) struct l_array_16_uint16_t x1a0 __POSTFIXALIGN__(16);
uint16_t res;
uint16_t inter;
uint16_t i;
uint16_t x1a2;
uint16_t dx;
uint16_t ax;
uint16_t cx;
uint16_t bx;
uint16_t tmp;
uint16_t si;
static const struct l_array_33_uint8_t _OC_str = { "abcdefghijklmnopqrstuvwxyz012345" };
__PREFIXALIGN__(16) struct l_array_32_uint8_t buff __POSTFIXALIGN__(16);
uint32_t count;
uint32_t c1;
uint16_t c;
uint16_t cfc;
uint16_t cfd;
uint16_t compte;
uint16_t d;
uint16_t e;
static const struct l_array_10_uint8_t _OC_str_OC_1 = { "argc < 1\n" };
static const struct l_array_53_uint8_t _OC_str_OC_2 = { "PC1 Cipher 256 bits \nENCRYPT file IN.BIN to OUT.BIN\n" };
static const struct l_array_7_uint8_t _OC_str_OC_3 = { "%d %d " };
static const struct l_array_2_uint8_t _OC_str_OC_4 = { "\n" };
void* in;


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint16_t llvm_add_u16(uint16_t a, uint16_t b) {
  uint16_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint32_t llvm_ashr_u32(int32_t a, int32_t b) {
  uint32_t r = a >> b;
  return r;
}


/* Function Bodies */

uint32_t assemble(void) {
  uint8_t _1;
  uint8_t _2;
  uint32_t _3;
  uint16_t _4;
  uint16_t _5;
  uint8_t _6;
  uint8_t _7;
  uint32_t _8;
  uint16_t _9;
  uint16_t _10;
  uint16_t _11;
  uint8_t _12;
  uint8_t _13;
  uint32_t _14;
  uint16_t _15;
  uint16_t _16;
  uint16_t _17;
  uint8_t _18;
  uint8_t _19;
  uint32_t _20;
  uint16_t _21;
  uint16_t _22;
  uint16_t _23;
  uint8_t _24;
  uint8_t _25;
  uint32_t _26;
  uint16_t _27;
  uint16_t _28;
  uint16_t _29;
  uint8_t _30;
  uint8_t _31;
  uint32_t _32;
  uint16_t _33;
  uint16_t _34;
  uint16_t _35;
  uint8_t _36;
  uint8_t _37;
  uint32_t _38;
  uint16_t _39;
  uint16_t _40;
  uint16_t _41;
  uint8_t _42;
  uint8_t _43;
  uint32_t _44;
  uint16_t _45;
  uint16_t _46;
  uint16_t _47;
  uint8_t _48;
  uint8_t _49;
  uint32_t _50;
  uint16_t _51;
  uint16_t _52;
  uint16_t _53;
  uint8_t _54;
  uint8_t _55;
  uint32_t _56;
  uint16_t _57;
  uint16_t _58;
  uint16_t _59;
  uint8_t _60;
  uint8_t _61;
  uint32_t _62;
  uint16_t _63;
  uint16_t _64;
  uint16_t _65;
  uint8_t _66;
  uint8_t _67;
  uint32_t _68;
  uint16_t _69;
  uint16_t _70;
  uint16_t _71;
  uint8_t _72;
  uint8_t _73;
  uint32_t _74;
  uint16_t _75;
  uint16_t _76;
  uint16_t _77;
  uint8_t _78;
  uint8_t _79;
  uint32_t _80;
  uint16_t _81;
  uint16_t _82;
  uint16_t _83;
  uint8_t _84;
  uint8_t _85;
  uint32_t _86;
  uint16_t _87;
  uint16_t _88;
  uint16_t _89;
  uint8_t _90;
  uint8_t _91;
  uint32_t _92;
  uint16_t _93;
  uint16_t _94;

#line 26 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _1 = *((uint8_t*)&cle);
  _2 = *(uint8_t*)(((&(&cle)->array[((int64_t)1)])));
  *((uint16_t*)&x1a0) = (((uint16_t)(llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_1)), 256)), (((uint32_t)(uint8_t)_2))))));
#line 28 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _3 = code();
#line 30 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _4 = res;
  inter = _4;
#line 33 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _5 = *((uint16_t*)&x1a0);
  _6 = *(uint8_t*)(((&(&cle)->array[((int64_t)2)])));
  _7 = *(uint8_t*)(((&(&cle)->array[((int64_t)3)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)1)]))) = (((uint16_t)((((uint32_t)(uint16_t)_5)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_6)), 256)), (((uint32_t)(uint8_t)_7)))))));
#line 35 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _8 = code();
#line 37 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _9 = inter;
  _10 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_9)) ^ (((uint32_t)(uint16_t)_10)))));
#line 40 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _11 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)1)])));
  _12 = *(uint8_t*)(((&(&cle)->array[((int64_t)4)])));
  _13 = *(uint8_t*)(((&(&cle)->array[((int64_t)5)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)2)]))) = (((uint16_t)((((uint32_t)(uint16_t)_11)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_12)), 256)), (((uint32_t)(uint8_t)_13)))))));
#line 42 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _14 = code();
#line 44 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _15 = inter;
  _16 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_15)) ^ (((uint32_t)(uint16_t)_16)))));
#line 47 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _17 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)2)])));
  _18 = *(uint8_t*)(((&(&cle)->array[((int64_t)6)])));
  _19 = *(uint8_t*)(((&(&cle)->array[((int64_t)7)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)3)]))) = (((uint16_t)((((uint32_t)(uint16_t)_17)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_18)), 256)), (((uint32_t)(uint8_t)_19)))))));
#line 49 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _20 = code();
#line 51 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _21 = inter;
  _22 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_21)) ^ (((uint32_t)(uint16_t)_22)))));
#line 54 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _23 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)3)])));
  _24 = *(uint8_t*)(((&(&cle)->array[((int64_t)8)])));
  _25 = *(uint8_t*)(((&(&cle)->array[((int64_t)9)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)4)]))) = (((uint16_t)((((uint32_t)(uint16_t)_23)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_24)), 256)), (((uint32_t)(uint8_t)_25)))))));
#line 56 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _26 = code();
#line 58 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _27 = inter;
  _28 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_27)) ^ (((uint32_t)(uint16_t)_28)))));
#line 61 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _29 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)4)])));
  _30 = *(uint8_t*)(((&(&cle)->array[((int64_t)10)])));
  _31 = *(uint8_t*)(((&(&cle)->array[((int64_t)11)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)5)]))) = (((uint16_t)((((uint32_t)(uint16_t)_29)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_30)), 256)), (((uint32_t)(uint8_t)_31)))))));
#line 63 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _32 = code();
#line 65 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _33 = inter;
  _34 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_33)) ^ (((uint32_t)(uint16_t)_34)))));
#line 68 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _35 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)5)])));
  _36 = *(uint8_t*)(((&(&cle)->array[((int64_t)12)])));
  _37 = *(uint8_t*)(((&(&cle)->array[((int64_t)13)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)6)]))) = (((uint16_t)((((uint32_t)(uint16_t)_35)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_36)), 256)), (((uint32_t)(uint8_t)_37)))))));
#line 70 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _38 = code();
#line 72 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _39 = inter;
  _40 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_39)) ^ (((uint32_t)(uint16_t)_40)))));
#line 75 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _41 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)6)])));
  _42 = *(uint8_t*)(((&(&cle)->array[((int64_t)14)])));
  _43 = *(uint8_t*)(((&(&cle)->array[((int64_t)15)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)7)]))) = (((uint16_t)((((uint32_t)(uint16_t)_41)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_42)), 256)), (((uint32_t)(uint8_t)_43)))))));
#line 77 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _44 = code();
#line 79 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _45 = inter;
  _46 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_45)) ^ (((uint32_t)(uint16_t)_46)))));
#line 82 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _47 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)7)])));
  _48 = *(uint8_t*)(((&(&cle)->array[((int64_t)16)])));
  _49 = *(uint8_t*)(((&(&cle)->array[((int64_t)17)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)8)]))) = (((uint16_t)((((uint32_t)(uint16_t)_47)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_48)), 256)), (((uint32_t)(uint8_t)_49)))))));
#line 84 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _50 = code();
#line 86 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _51 = inter;
  _52 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_51)) ^ (((uint32_t)(uint16_t)_52)))));
#line 89 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _53 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)8)])));
  _54 = *(uint8_t*)(((&(&cle)->array[((int64_t)18)])));
  _55 = *(uint8_t*)(((&(&cle)->array[((int64_t)19)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)9)]))) = (((uint16_t)((((uint32_t)(uint16_t)_53)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_54)), 256)), (((uint32_t)(uint8_t)_55)))))));
#line 91 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _56 = code();
#line 93 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _57 = inter;
  _58 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_57)) ^ (((uint32_t)(uint16_t)_58)))));
#line 96 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _59 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)9)])));
  _60 = *(uint8_t*)(((&(&cle)->array[((int64_t)20)])));
  _61 = *(uint8_t*)(((&(&cle)->array[((int64_t)21)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)10)]))) = (((uint16_t)((((uint32_t)(uint16_t)_59)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_60)), 256)), (((uint32_t)(uint8_t)_61)))))));
#line 98 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _62 = code();
#line 100 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _63 = inter;
  _64 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_63)) ^ (((uint32_t)(uint16_t)_64)))));
#line 103 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _65 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)10)])));
  _66 = *(uint8_t*)(((&(&cle)->array[((int64_t)22)])));
  _67 = *(uint8_t*)(((&(&cle)->array[((int64_t)23)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)11)]))) = (((uint16_t)((((uint32_t)(uint16_t)_65)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_66)), 256)), (((uint32_t)(uint8_t)_67)))))));
#line 105 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _68 = code();
#line 107 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _69 = inter;
  _70 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_69)) ^ (((uint32_t)(uint16_t)_70)))));
#line 110 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _71 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)11)])));
  _72 = *(uint8_t*)(((&(&cle)->array[((int64_t)24)])));
  _73 = *(uint8_t*)(((&(&cle)->array[((int64_t)25)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)12)]))) = (((uint16_t)((((uint32_t)(uint16_t)_71)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_72)), 256)), (((uint32_t)(uint8_t)_73)))))));
#line 112 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _74 = code();
#line 114 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _75 = inter;
  _76 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_75)) ^ (((uint32_t)(uint16_t)_76)))));
#line 117 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _77 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)12)])));
  _78 = *(uint8_t*)(((&(&cle)->array[((int64_t)26)])));
  _79 = *(uint8_t*)(((&(&cle)->array[((int64_t)27)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)13)]))) = (((uint16_t)((((uint32_t)(uint16_t)_77)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_78)), 256)), (((uint32_t)(uint8_t)_79)))))));
#line 119 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _80 = code();
#line 121 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _81 = inter;
  _82 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_81)) ^ (((uint32_t)(uint16_t)_82)))));
#line 124 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _83 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)13)])));
  _84 = *(uint8_t*)(((&(&cle)->array[((int64_t)28)])));
  _85 = *(uint8_t*)(((&(&cle)->array[((int64_t)29)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)14)]))) = (((uint16_t)((((uint32_t)(uint16_t)_83)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_84)), 256)), (((uint32_t)(uint8_t)_85)))))));
#line 126 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _86 = code();
#line 128 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _87 = inter;
  _88 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_87)) ^ (((uint32_t)(uint16_t)_88)))));
#line 131 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _89 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)14)])));
  _90 = *(uint8_t*)(((&(&cle)->array[((int64_t)30)])));
  _91 = *(uint8_t*)(((&(&cle)->array[((int64_t)31)])));
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)15)]))) = (((uint16_t)((((uint32_t)(uint16_t)_89)) ^ (llvm_add_u32((llvm_mul_u32((((uint32_t)(uint8_t)_90)), 256)), (((uint32_t)(uint8_t)_91)))))));
#line 133 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _92 = code();
#line 135 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _93 = inter;
  _94 = res;
  inter = (((uint16_t)((((uint32_t)(uint16_t)_93)) ^ (((uint32_t)(uint16_t)_94)))));
#line 138 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  i = 0;
  return 0;
}


uint32_t code(void) {
  uint16_t _95;
  uint16_t _96;
  uint16_t _97;
  uint16_t _98;
  uint16_t _99;
  uint16_t _100;
  uint16_t _101;
  uint16_t _102;
  uint16_t _103;
  uint16_t _104;
  uint16_t _105;
  uint16_t _106;
  uint16_t _107;
  uint16_t _108;
  uint16_t _109;
  uint16_t _110;
  uint16_t _111;
  uint16_t _112;
  uint16_t _113;
  uint16_t _114;
  uint16_t _115;
  uint16_t _116;
  uint16_t _117;
  uint16_t _118;
  uint16_t _119;
  uint16_t _120;
  uint16_t _121;
  uint16_t _122;
  uint16_t _123;
  uint16_t _124;
  uint16_t _125;
  uint16_t _126;
  uint16_t _127;
  uint16_t _128;
  uint16_t _129;

#line 147 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _95 = x1a2;
  _96 = i;
  dx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_95)), (((uint32_t)(uint16_t)_96))))));
#line 149 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _97 = i;
  _98 = *(uint16_t*)(((&(&x1a0)->array[((int64_t)(((uint64_t)(uint16_t)_97)))])));
  ax = _98;
#line 151 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  cx = 346;
#line 153 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  bx = 20021u;
#line 156 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _99 = ax;
  tmp = _99;
#line 158 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _100 = si;
  ax = _100;
#line 160 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _101 = tmp;
  si = _101;
#line 163 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _102 = ax;
  tmp = _102;
#line 165 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _103 = dx;
  ax = _103;
#line 167 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _104 = tmp;
  dx = _104;
#line 170 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _105 = ax;
  if (((((uint32_t)(uint16_t)_105)) != 0u)) {
    goto _130;
  } else {
    goto _131;
  }

_130:
#line 174 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _106 = ax;
  _107 = bx;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_106)), (((uint32_t)(uint16_t)_107))))));
  goto _131;

_131:
#line 178 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _108 = ax;
  tmp = _108;
#line 180 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _109 = cx;
  ax = _109;
#line 182 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _110 = tmp;
  cx = _110;
#line 185 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _111 = ax;
  if (((((uint32_t)(uint16_t)_111)) != 0u)) {
    goto _132;
  } else {
    goto _133;
  }

_132:
#line 189 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _112 = ax;
  _113 = si;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_112)), (((uint32_t)(uint16_t)_113))))));
#line 191 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _114 = ax;
  _115 = cx;
  cx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_114)), (((uint32_t)(uint16_t)_115))))));
  goto _133;

_133:
#line 195 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _116 = ax;
  tmp = _116;
#line 197 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _117 = si;
  ax = _117;
#line 199 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _118 = tmp;
  si = _118;
#line 201 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _119 = ax;
  _120 = bx;
  ax = (((uint16_t)(llvm_mul_u32((((uint32_t)(uint16_t)_119)), (((uint32_t)(uint16_t)_120))))));
#line 203 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _121 = cx;
  _122 = dx;
  dx = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_121)), (((uint32_t)(uint16_t)_122))))));
#line 206 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _123 = ax;
  ax = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_123)), 1))));
#line 209 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _124 = dx;
  x1a2 = _124;
#line 211 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _125 = ax;
  _126 = i;
  *(uint16_t*)(((&(&x1a0)->array[((int64_t)(((uint64_t)(uint16_t)_126)))]))) = _125;
#line 214 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _127 = ax;
  _128 = dx;
  res = (((uint16_t)((((uint32_t)(uint16_t)_127)) ^ (((uint32_t)(uint16_t)_128)))));
#line 216 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _129 = i;
  i = (((uint16_t)(llvm_add_u32((((uint32_t)(uint16_t)_129)), 1))));
  return 0;
}


uint32_t my_rand_r(void* _134) {
  void* _135;    /* Address-exposed local */
  uint32_t _136;    /* Address-exposed local */
  void* _137;
  uint32_t _138;
  uint32_t _139;
  void* _140;
  uint32_t _141;

  _135 = _134;
#line 223 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 226 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _137 = _135;
  _138 = *(uint32_t*)_137;
  _136 = (llvm_add_u32((llvm_mul_u32(_138, 1664525)), 1013904223));
#line 227 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _139 = _136;
  _140 = _135;
  *(uint32_t*)_140 = _139;
#line 228 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _141 = _136;
  return ((llvm_lshr_u32(_141, 16)) & 32767);
}


uint32_t pc1_drive(void* _142, void* _143) {
  void* _144;    /* Address-exposed local */
  void* _145;    /* Address-exposed local */
  uint32_t _146;    /* Address-exposed local */
  uint32_t _147;    /* Address-exposed local */
  uint32_t _148;    /* Address-exposed local */
  uint32_t _149;    /* Address-exposed local */
  void* _150;
  uint64_t _151;
  uint64_t _152;
  uint32_t _153;
  uint32_t _154;
  uint32_t _155;
  uint8_t _156;
  uint32_t _157;
  uint32_t _158;
  uint32_t _159;
  uint32_t _160;
  uint32_t _161;
  uint32_t _162;
  uint16_t _163;
  uint16_t _164;
  uint16_t _165;
  uint16_t _166;
  uint8_t _167;
  uint16_t _168;
  uint16_t _169;
  uint16_t _170;
  uint16_t _171;
  uint16_t _172;
  uint16_t _173;
  uint16_t _174;
  uint16_t _175;
  uint32_t _176;
  uint32_t _177;
  uint16_t _178;
  void* _179;
  uint32_t _180;
  uint16_t _181;
  void* _182;
  uint32_t _183;
  uint32_t _184;

  _144 = _142;
#line 231 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _145 = _143;
  ;
#line 233 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _146 = 20000;
#line 234 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 235 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _148 = 1;
#line 236 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _149 = 0;
#line 238 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  si = 0;
#line 240 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  x1a2 = 0;
#line 242 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  i = 0;
#line 250 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _150 = memcpy((&cle), (&_OC_str), 32);
#line 256 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  *(uint8_t*)(((&(&buff)->array[((int64_t)1)]))) = 0;
#line 259 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _151 = strlen((&buff));
  if ((((uint64_t)_151) > ((uint64_t)UINT64_C(32)))) {
    goto _185;
  } else {
    goto _186;
  }

_185:
#line 262 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  count = 32;
  goto _187;

_186:
#line 267 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _152 = strlen((&buff));
  count = (((uint32_t)_152));
  goto _187;

_187:
#line 270 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  c1 = 0;
  goto _188;

  do {     /* Syntactic loop '' to make GCC happy */
_188:
  _153 = c1;
  _154 = count;
  if ((((int32_t)_153) < ((int32_t)_154))) {
    goto _189;
  } else {
    goto _190;
  }

_189:
#line 274 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _155 = c1;
  _156 = *(uint8_t*)(((&(&buff)->array[((int64_t)(((int64_t)(int32_t)_155)))])));
  _157 = c1;
  *(uint8_t*)(((&(&cle)->array[((int64_t)(((int64_t)(int32_t)_157)))]))) = _156;
  goto _191;

_191:
#line 270 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _158 = c1;
  c1 = (llvm_add_u32(_158, 1));
  goto _188;

  } while (1); /* end of syntactic loop '' */
_190:
#line 278 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _147 = 0;
  goto _192;

  do {     /* Syntactic loop '' to make GCC happy */
_192:
#line 279 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _159 = _146;
  _160 = llvm_add_u32(_159, -1);
  _146 = _160;
  if ((_160 != 0u)) {
    goto _193;
  } else {
    goto _194;
  }

_193:
#line 280 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _161 = my_rand_r((&_148));
  c = (((uint16_t)_161));
#line 281 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _162 = assemble();
#line 283 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _163 = inter;
  cfc = (((uint16_t)(llvm_ashr_u32((((uint32_t)(uint16_t)_163)), 8))));
#line 285 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _164 = inter;
  cfd = (((uint16_t)((((uint32_t)(uint16_t)_164)) & 255)));
#line 294 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  compte = 0;
  goto _195;

  do {     /* Syntactic loop '' to make GCC happy */
_195:
  _165 = compte;
  if ((((int32_t)(((uint32_t)(uint16_t)_165))) <= ((int32_t)31u))) {
    goto _196;
  } else {
    goto _197;
  }

_196:
#line 299 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _166 = compte;
  _167 = *(uint8_t*)(((&(&cle)->array[((int64_t)(((uint64_t)(uint16_t)_166)))])));
  _168 = c;
  _169 = compte;
  *(uint8_t*)(((&(&cle)->array[((int64_t)(((uint64_t)(uint16_t)_169)))]))) = (((uint8_t)((((uint32_t)(uint8_t)_167)) ^ (((int32_t)(int16_t)_168)))));
  goto _198;

_198:
#line 294 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _170 = compte;
  compte = (llvm_add_u16(_170, 1));
  goto _195;

  } while (1); /* end of syntactic loop '' */
_197:
#line 303 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _171 = c;
  _172 = cfc;
  _173 = cfd;
  c = (((uint16_t)((((int32_t)(int16_t)_171)) ^ ((((uint32_t)(uint16_t)_172)) ^ (((uint32_t)(uint16_t)_173))))));
#line 307 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _174 = c;
  d = (((uint16_t)(llvm_ashr_u32((((int32_t)(int16_t)_174)), 4))));
#line 310 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _175 = c;
  e = (((uint16_t)((((int32_t)(int16_t)_175)) & 15)));
#line 312 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _176 = _147;
  _177 = llvm_add_u32(_176, 1);
  _147 = _177;
  if (((_177 & 2047) == 0u)) {
    goto _199;
  } else {
    goto _200;
  }

_199:
#line 313 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _178 = d;
  _179 = _144;
  _180 = _149;
  *(uint32_t*)(((&((uint32_t*)_179)[((int64_t)(((int64_t)(int32_t)_180)))]))) = (((int32_t)(int16_t)_178));
#line 314 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _181 = e;
  _182 = _145;
  _183 = _149;
  *(uint32_t*)(((&((uint32_t*)_182)[((int64_t)(((int64_t)(int32_t)_183)))]))) = (((int32_t)(int16_t)_181));
#line 315 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _184 = _149;
  _149 = (llvm_add_u32(_184, 1));
  goto _200;

_200:
  goto _192;

  } while (1); /* end of syntactic loop '' */
_194:
  return 0;
}


int main(int argc, char ** argv) {
  uint32_t _201 = (uint32_t)argc;
  void* _202 = (void*)argv;
  uint32_t _203;    /* Address-exposed local */
  uint32_t _204;    /* Address-exposed local */
  void* _205;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_9_uint32_t _206 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_9_uint32_t _207 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _208;    /* Address-exposed local */
  uint32_t _209;
  uint32_t _210;
  uint32_t _211;
  uint32_t _212;
  uint32_t _213;
  uint32_t _214;
  uint32_t _215;
  uint32_t _216;
  uint32_t _217;
  uint32_t _218;
  uint32_t _219;
  uint32_t _220;

  _203 = 0;
  _204 = _201;
#line 322 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _205 = _202;
  ;
#line 323 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _209 = _204;
  if ((((int32_t)_209) > ((int32_t)1u))) {
    goto _221;
  } else {
    goto _222;
  }

_221:
  _210 = printf((&_OC_str_OC_1));
  goto _222;

_222:
#line 324 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _211 = printf((&_OC_str_OC_2));
#line 325 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 326 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 327 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _212 = pc1_drive((((&(&_206)->array[((int64_t)0)]))), (((&(&_207)->array[((int64_t)0)]))));
#line 328 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _208 = 0;
  goto _223;

  do {     /* Syntactic loop '' to make GCC happy */
_223:
  _213 = _208;
  if ((((int32_t)_213) < ((int32_t)9u))) {
    goto _224;
  } else {
    goto _225;
  }

_224:
#line 329 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _214 = _208;
  _215 = *(uint32_t*)(((&(&_206)->array[((int64_t)(((int64_t)(int32_t)_214)))])));
  _216 = _208;
  _217 = *(uint32_t*)(((&(&_207)->array[((int64_t)(((int64_t)(int32_t)_216)))])));
  _218 = printf((&_OC_str_OC_3), _215, _217);
  goto _226;

_226:
#line 328 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _219 = _208;
  _208 = (llvm_add_u32(_219, 1));
  goto _223;

  } while (1); /* end of syntactic loop '' */
_225:
#line 331 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _220 = printf((&_OC_str_OC_4));
  return 0;
}

