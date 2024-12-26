#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "packet.h"

#define MAX_PACKETS 100
#define POLYNOMIAL 0x04c11db7L

static unsigned long crc_table[256];


/* Traces automatically drop the TCP checksum and urgent pointer, so header is 36 bytes */
#define HEADER_SIZE 36

#ifdef CONSTANT_PACKET
unsigned int packet_index = 0;
#endif

char *
get_next_packet (int packet_number)
{
  char *packet;
  unsigned int packet_length;
  
  packet_number = packet_number % MAX_PACKETS;

  packet_length = (packet_lengths[packet_number]);
  if (packet_length < 40)
    {
      /* Should never happen */
      printf ("Packet not large enough, increasing the size\n");
      packet_length = 40;
    }

#ifdef CONSTANT_PACKET
  /* Packets are stored in a continuous chunk in the memory, just change the index... */
  packet = &packets[packet_index];
  packet_index += packet_length;
#else
  /* Have to call malloc to create packet memory */
  if ((packet =  (char *) malloc (packet_length)) == NULL)
    {
      printf ("Not enough space to create packet data \n");
   
    }

  /* Copy the header information */
  memset((void*)packet, 0, packet_length);
  memcpy ((void *)packet, (void *)headers[packet_number], HEADER_SIZE);
#endif

  return packet;
}

/* For debugging purposes, to get the size of the packet_numberth packet */
unsigned int 
packet_size (unsigned int packet_number)
{
  packet_number = packet_number % MAX_PACKETS;
  return (packet_lengths[packet_number]);
}


/* generate the table of CRC remainders for all possible bytes */
void 
gen_crc_table()
{ 
  register int i, j;  
  register unsigned long crc_accum;
  
  for (i = 0;  i < 256;  i++)
    { 
      crc_accum = ((unsigned long) i << 24);
      for (j = 0;  j < 8;  j++)
	{ 
	  if (crc_accum & 0x80000000L)
	    crc_accum = (crc_accum << 1) ^ POLYNOMIAL;
	  else
	    crc_accum = (crc_accum << 1); 
	}
      crc_table[i] = crc_accum; 
    }
  return; 
}

/* update the CRC on the data block one byte at a time */
unsigned long 
update_crc(unsigned long crc_accum, 
	   char *data_blk_ptr,
	   int data_blk_size)
{ 
  register int i, j;
  for (j = 0;  j < data_blk_size;  j++)
    { 
      i = ((int)(crc_accum >> 24) ^ *data_blk_ptr++) & 0xff;
      crc_accum = (crc_accum << 8) ^ crc_table[i]; 
    }
  return crc_accum; 
}

int crc32_drive (int* a, unsigned long* crc_accum)
{
  int i = 0;
  char *packet;
  
  gen_crc_table();
  
  while (i < *a)
    {
      packet = get_next_packet(i);
      *crc_accum = update_crc (0, packet, packet_size(i));
      i++;
    }
  
  return 0;
}

int main (int argc, char **argv) {
  int a;
  if (argc != 2)
    {
      printf ("Usage: crc #numpackets");
    }
  else 
    a = atoi (argv[1]);
  unsigned long crc_accum = 0;
  crc32_drive (&a, &crc_accum);
  printf ("CRC completed for %d packets \n", a);
  printf ("crc_accum is %lu\n", crc_accum);
  return 0;
}