#ifndef COMPARE_CRC32_H
#define COMPARE_CRC32_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef uint8
#define uint8  unsigned char
#endif

#ifndef uint32
#define uint32 unsigned long int
#endif

typedef struct
{
    uint32 esk[32];     /* DES encryption subkeys */
    uint32 dsk[32];     /* DES decryption subkeys */
}
des_context;

typedef struct
{
    uint32 esk[96];     /* Triple-DES encryption subkeys */
    uint32 dsk[96];     /* Triple-DES decryption subkeys */
}
des3_context;


/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define COMPARE_DES_UUID \
	{ 0xb734eed9, 0xd6a1, 0x4244, { \
		0xaa, 0x50, 0x7c, 0x99, 0x71, 0x9e, 0x7b, 0x7b } }



#endif /*COMPARE_CRC32_H*/
