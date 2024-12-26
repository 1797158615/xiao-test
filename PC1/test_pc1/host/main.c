/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <test_pc1.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
        //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = TEST_PC1_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);


  uint32_t _201 = (uint32_t)argc;
  void* _202 = (void*)argv;
  uint32_t _203;    /* Address-exposed local */
  uint32_t _204;    /* Address-exposed local */
  void* _205;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_9_uint32_t _206 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_9_uint32_t _207 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _208;    /* Address-exposed local */
  uint32_t _209;
  uint32_t _210;
  uint32_t _211;
  uint32_t _212;
  uint32_t _213;
  uint32_t _214;
  uint32_t _215;
  uint32_t _216;
  uint32_t _217;
  uint32_t _218;
  uint32_t _219;
  uint32_t _220;

  _203 = 0;
  _204 = _201;
#line 322 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _205 = _202;
  ;
#line 323 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _209 = _204;
  if ((((int32_t)_209) > ((int32_t)1u))) {
    goto _221;
  } else {
    goto _222;
  }

_221:
  _210 = printf((&_OC_str_OC_1));
  goto _222;

_222:
#line 324 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _211 = printf((&_OC_str_OC_2));
#line 325 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 326 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
#line 327 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
//
  op.params[0].tmpref.buffer = &_206;
  op.params[0].tmpref.size = 36;
  op.params[1].tmpref.buffer = &_207;
  op.params[1].tmpref.size = 36;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
#line 328 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  ;
  _208 = 0;
  goto _223;

  do {     /* Syntactic loop '' to make GCC happy */
_223:
  _213 = _208;
  if ((((int32_t)_213) < ((int32_t)9u))) {
    goto _224;
  } else {
    goto _225;
  }

_224:
#line 329 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _214 = _208;
  _215 = *(uint32_t*)(((&(&_206)->array[((int64_t)(((int64_t)(int32_t)_214)))])));
  _216 = _208;
  _217 = *(uint32_t*)(((&(&_207)->array[((int64_t)(((int64_t)(int32_t)_216)))])));
  _218 = printf((&_OC_str_OC_3), _215, _217);
  goto _226;

_226:
#line 328 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _219 = _208;
  _208 = (llvm_add_u32(_219, 1));
  goto _223;

  } while (1); /* end of syntactic loop '' */
_225:
#line 331 "/home/yxk/llvm2c-test/xiao/PC1/pc1.c"
  _220 = printf((&_OC_str_OC_4));
  return 0;
}

