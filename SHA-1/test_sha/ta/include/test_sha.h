#ifndef TEST_SHA_H
#define TEST_SHA_H

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





/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define TEST_SHA_UUID \
	{ 0x5dbac793, 0xf574, 0x4871, \
		{ 0x8a, 0xd3, 0x04, 0x33, 0x1e, 0xc1, 0x7f, 0x24 } }



#endif /*TEST_SHA_H*/
