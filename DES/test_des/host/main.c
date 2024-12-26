/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <test_des.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
	      //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = TEST_DES_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);




  uint32_t _2223 = (uint32_t)argc;
  void* _2224 = (void*)argv;
  uint32_t _2225;    /* Address-exposed local */
  uint32_t _2226;    /* Address-exposed local */
  void* _2227;    /* Address-exposed local */
  uint32_t _2228;    /* Address-exposed local */
  uint32_t _2229;    /* Address-exposed local */
  uint32_t _2230;
  void* _2231;
  void* _2232;
  uint32_t _2233;
  uint32_t _2234;
  uint32_t _2235;
  uint32_t _2236;

  _2225 = 0;
  _2226 = _2223;
#line 611 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2227 = _2224;
  ;
#line 612 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
  _2228 = 100;
#line 613 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2230 = _2226;
  if ((_2230 == 2u)) {
    goto _2237;
  } else {
    goto _2238;
  }

_2237:
  _2231 = _2227;
  _2232 = *(void**)(((&((void**)_2231)[((int64_t)1)])));
  _2233 = atoi(_2232);
  _2228 = _2233;
  goto _2238;

_2238:
#line 614 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  ;
#line 615 "/home/yxk/llvm2c-test/xiao/DES/des.c"
//
  op.params[0].tmpref.buffer = &_2228;
  op.params[0].tmpref.size = 4;
  op.params[1].tmpref.buffer = &_2229;
  op.params[1].tmpref.size = 4;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
#line 616 "/home/yxk/llvm2c-test/xiao/DES/des.c"
  _2235 = _2229;
  if ((_2235 == 0u)) {
    goto _2239;
  } else {
    goto _2240;
  }

_2239:
  _2236 = printf((&_OC_str_OC_5));
  goto _2240;

_2240:
  return 0;
}



