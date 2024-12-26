/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <compare_crc32.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
      //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = COMPARE_CRC32_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);

  int a;
  if (argc != 2)
    {
      printf ("Usage: crc #numpackets");
    }
  else 
    a = atoi (argv[1]);
  unsigned long crc_accum = 0;
  //
  op.params[0].tmpref.buffer = &a;
  op.params[0].tmpref.size = 4;
  op.params[1].tmpref.buffer = &crc_accum;
  op.params[1].tmpref.size = 8;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
  printf ("CRC completed for %d packets \n", a);
  printf ("crc_accum is %lu\n", crc_accum);
  return 0;
}