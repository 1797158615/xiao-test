/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <test_sha.h>

/* Provide Declarations */

void sha_print(void* _282) {
  void* _283;    /* Address-exposed local */
  void* _284;
  uint32_t _285;
  void* _286;
  uint32_t _287;
  void* _288;
  uint32_t _289;
  void* _290;
  uint32_t _291;
  void* _292;
  uint32_t _293;
  uint32_t _294;

  _283 = _282;
#line 217 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 221 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _284 = _283;
  _285 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_284)->field0)))))->array[((int64_t)0)])));
  _286 = _283;
  _287 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_286)->field0)))))->array[((int64_t)1)])));
  _288 = _283;
  _289 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_288)->field0)))))->array[((int64_t)2)])));
#line 222 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _290 = _283;
  _291 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_290)->field0)))))->array[((int64_t)3)])));
  _292 = _283;
  _293 = *(uint32_t*)(((&((struct l_array_5_uint32_t*)(((&(((struct l_struct_struct_OC_SHA_INFO*)_292)->field0)))))->array[((int64_t)4)])));
#line 219 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _294 = printf((&_OC_str), _285, _287, _289, _291, _293);
}

int main(int argc, char ** argv) {
        //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = TEST_SHA_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);


  uint32_t _295 = (uint32_t)argc;
  void* _296 = (void*)argv;
  uint32_t _297;    /* Address-exposed local */
  uint32_t _298;    /* Address-exposed local */
  void* _299;    /* Address-exposed local */
  uint32_t _300;    /* Address-exposed local */
  struct l_struct_struct_OC_SHA_INFO _301;    /* Address-exposed local */
  uint32_t _302;
  uint32_t _303;
  void* _304;
  void* _305;
  void* _306;
  uint32_t _307;
  uint32_t _308;
  void* _309;
  void* _310;
  uint32_t _311;
  uint32_t _312;
  uint32_t _313;
  uint32_t _314;

  _297 = 0;
  _298 = _295;
#line 225 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  _299 = _296;
  ;
#line 227 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
#line 228 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  ;
  goto _315;

  do {     /* Syntactic loop '' to make GCC happy */
_315:
#line 231 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _302 = _298;
  _303 = llvm_add_u32(_302, -1);
  _298 = _303;
  if ((_303 != 0u)) {
    goto _316;
  } else {
    goto _317;
  }

_316:
#line 232 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _304 = _299;
  _305 = ((&((void**)_304)[((int32_t)1)]));
  _299 = _305;
  _306 = *(void**)_305;
  _307 = open(_306, 0);
  _300 = _307;
#line 233 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _308 = _300;
  if ((_308 == 0u)) {
    goto _318;
  } else {
    goto _319;
  }

_319:
#line 236 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
//
  op.params[0].tmpref.buffer = &_301;
  op.params[0].tmpref.size = 100;
  op.params[1].tmpref.buffer = &_300;
  op.params[1].tmpref.size = 100;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
#line 237 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  sha_print((&_301));
#line 238 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _313 = _300;
  _314 = close(_313);
  goto _320;

_318:
#line 234 "/home/yxk/llvm2c-test/xiao/SHA-1/sha.c"
  _309 = _299;
  _310 = *(void**)_309;
  _311 = printf((&_OC_str_OC_1), _310);
  goto _320;

_320:
  goto _315;

  } while (1); /* end of syntactic loop '' */
_317:
  return 0;
}



