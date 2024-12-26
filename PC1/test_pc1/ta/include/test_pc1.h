#ifndef TEST_PC1_H
#define TEST_PC1_H

/* Provide Declarations */
#include <stdint.h>


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



/* Function Declarations */
uint32_t assemble(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t code(void) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t my_rand_r(void* _134) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t pc1_drive(void* _142, void* _143) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t strlen(void* _227) __ATTRIBUTELIST__((nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));

void* memcpy(void* _229, void* _230, uint64_t _231);


/* Global Variable Definitions and Initialization */


static const struct l_array_33_uint8_t _OC_str = { "abcdefghijklmnopqrstuvwxyz012345" };


static const struct l_array_10_uint8_t _OC_str_OC_1 = { "argc < 1\n" };
static const struct l_array_53_uint8_t _OC_str_OC_2 = { "PC1 Cipher 256 bits \nENCRYPT file IN.BIN to OUT.BIN\n" };
static const struct l_array_7_uint8_t _OC_str_OC_3 = { "%d %d " };
static const struct l_array_2_uint8_t _OC_str_OC_4 = { "\n" };



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



/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define TEST_PC1_UUID \
	{ 0xb6c53aba, 0x9669, 0x4668, \
		{ 0xa7, 0xf2, 0x20, 0x56, 0x29, 0xd0, 0x0f, 0x86} }



#endif /*TEST_PC1_H*/
