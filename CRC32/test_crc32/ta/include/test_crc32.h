#ifndef TEST_CRC32_H
#define TEST_CRC32_H

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
struct l_array_36_uint8_t;
struct l_array_100_struct_AC_l_array_36_uint8_t;
struct l_array_10000_uint32_t;
struct l_array_46_uint8_t;
struct l_array_41_uint8_t;
struct l_array_256_uint64_t;
struct l_array_23_uint8_t;
struct l_array_31_uint8_t;
struct l_array_18_uint8_t;

/* Function definitions */

/* Types Definitions */
struct l_array_36_uint8_t {
  uint8_t array[36];
};
struct l_array_100_struct_AC_l_array_36_uint8_t {
  struct l_array_36_uint8_t array[100];
};
struct l_array_10000_uint32_t {
  uint32_t array[10000];
};
struct l_array_46_uint8_t {
  uint8_t array[46];
};
struct l_array_41_uint8_t {
  uint8_t array[41];
};
struct l_array_256_uint64_t {
  uint64_t array[256];
};
struct l_array_23_uint8_t {
  uint8_t array[23];
};
struct l_array_31_uint8_t {
  uint8_t array[31];
};
struct l_array_18_uint8_t {
  uint8_t array[18];
};

/* Global Variable Declarations */
extern __PREFIXALIGN__(16) struct l_array_100_struct_AC_l_array_36_uint8_t headers __POSTFIXALIGN__(16);
extern __PREFIXALIGN__(16) struct l_array_10000_uint32_t packet_lengths __POSTFIXALIGN__(16);
const static struct l_array_46_uint8_t _OC_str;
const static struct l_array_41_uint8_t _OC_str_OC_1;
static __PREFIXALIGN__(16) struct l_array_256_uint64_t crc_table __POSTFIXALIGN__(16);
const static struct l_array_23_uint8_t _OC_str_OC_2;
const static struct l_array_31_uint8_t _OC_str_OC_3;
const static struct l_array_18_uint8_t _OC_str_OC_4;

/* Function Declarations */
void* get_next_packet(uint32_t _1) __ATTRIBUTELIST__((noinline, nothrow));

void* malloc(uint64_t _116) __ATTRIBUTELIST__((nothrow, alloc_size(0)));
uint32_t packet_size(uint32_t _24) __ATTRIBUTELIST__((noinline, nothrow));
void gen_crc_table(void) __ATTRIBUTELIST__((noinline, nothrow));
uint64_t update_crc(uint64_t _53, void* _54, uint32_t _55) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t crc32_drive(void* _75, void* _76) __ATTRIBUTELIST__((noinline, nothrow));
int main(int argc, char ** argv) __ATTRIBUTELIST__((noinline, nothrow));
uint32_t atoi(void* _117) __ATTRIBUTELIST__((nothrow));
void* memset(void* _118, uint32_t _119, uint64_t _120);
void* memcpy(void* _121, void* _122, uint64_t _123);


static const struct l_array_46_uint8_t _OC_str = { "Packet not large enough, increasing the size\n" };
static const struct l_array_41_uint8_t _OC_str_OC_1 = { "Not enough space to create packet data \n" };
static __PREFIXALIGN__(16) struct l_array_256_uint64_t crc_table __POSTFIXALIGN__(16);
static const struct l_array_23_uint8_t _OC_str_OC_2 = { "Usage: crc #numpackets" };
static const struct l_array_31_uint8_t _OC_str_OC_3 = { "CRC completed for %d packets \n" };
static const struct l_array_18_uint8_t _OC_str_OC_4 = { "crc_accum is %lu\n" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_urem_u32(uint32_t a, uint32_t b) {
  uint32_t r = a % b;
  return r;
}
static __forceinline uint32_t llvm_srem_u32(int32_t a, int32_t b) {
  uint32_t r = a % b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}




/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define TEST_CRC32_UUID \
	{ 0x8aaaf200, 0x2450, 0x11e4, \
		{ 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b} }



#endif /*TEST_CRC32_H*/
