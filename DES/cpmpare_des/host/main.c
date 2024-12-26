/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <compare_des.h>

/* Provide Declarations */

int main( int argc, char**argv ) {
        //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = COMPARE_DES_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);

  int NumDelay = 100;
  if (argc == 2) NumDelay = atoi(argv[1]);
  int ret;
    //
  op.params[0].tmpref.buffer = &NumDelay;
  op.params[0].tmpref.size = 4;
  op.params[1].tmpref.buffer = &ret;
  op.params[1].tmpref.size = 4;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
  if(ret == 0) printf("passed.\n");
  return 0;
}