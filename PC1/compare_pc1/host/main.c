/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <compare_pc1.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
        //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = COMPARE_PC1_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);


    if (argc > 1) printf("argc < 1\n");
  printf("PC1 Cipher 256 bits \nENCRYPT file IN.BIN to OUT.BIN\n");
  int retd[9];
  int rete[9];
  //
  op.params[0].tmpref.buffer = retd;
  op.params[0].tmpref.size = 36;
  op.params[1].tmpref.buffer = rete;
  op.params[1].tmpref.size = 36;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
  for(int i = 0; i < 9; i++) {
    printf("%d %d ", retd[i], rete[i]);
  }
  printf("\n");
  return 0;
}

