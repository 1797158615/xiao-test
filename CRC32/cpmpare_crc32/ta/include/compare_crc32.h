#ifndef COMPARE_CRC32_H
#define COMPARE_CRC32_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_PACKETS 100
#define POLYNOMIAL 0x04c11db7L

static unsigned long crc_table[256];


/* Traces automatically drop the TCP checksum and urgent pointer, so header is 36 bytes */
#define HEADER_SIZE 36

#ifdef CONSTANT_PACKET
unsigned int packet_index = 0;
#endif


/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define COMPARE_CRC32_UUID \
	{ 0x9aaaf200, 0x2450, 0x11e4, \
		{ 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b} }



#endif /*COMPARE_CRC32_H*/
