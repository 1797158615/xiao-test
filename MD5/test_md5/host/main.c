/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <test_md5.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
        //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = TEST_MD5_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);



  uint32_t _898 = (uint32_t)argc;
  void* _899 = (void*)argv;
  uint32_t _900;    /* Address-exposed local */
  uint32_t _901;    /* Address-exposed local */
  void* _902;    /* Address-exposed local */
  uint32_t _903;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_16_uint8_t _904 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _905;    /* Address-exposed local */
  uint32_t _906;
  void* _907;
  void* _908;
  uint32_t _909;
  uint32_t _910;
  uint32_t _911;
  uint32_t _912;
  uint32_t _913;
  uint8_t _914;
  uint32_t _915;
  uint32_t _916;
  uint32_t _917;
  uint32_t _918;

  _900 = 0;
  _901 = _898;
#line 279 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  ;
  _902 = _899;
  ;
#line 280 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  ;
  _903 = 1;
#line 281 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  ;
#line 282 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _906 = _901;
  if ((_906 == 2u)) {
    goto _919;
  } else {
    goto _920;
  }

_919:
  _907 = _902;
  _908 = *(void**)(((&((void**)_907)[((int64_t)1)])));
  _909 = atoi(_908);
  _903 = _909;
  goto _920;

_920:
  goto _921;

  do {     /* Syntactic loop '' to make GCC happy */
_921:
#line 283 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _910 = _903;
  if ((_910 != 0u)) {
    goto _922;
  } else {
    goto _923;
  }

_922:
#line 284 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
//
  op.params[0].tmpref.buffer = &_903;
  op.params[0].tmpref.size = 4;
  op.params[1].tmpref.buffer = &_904;
  op.params[1].tmpref.size = 16;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
#line 285 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  ;
  _905 = 0;
  goto _924;

  do {     /* Syntactic loop '' to make GCC happy */
_924:
  _912 = _905;
  if ((((int32_t)_912) < ((int32_t)16u))) {
    goto _925;
  } else {
    goto _926;
  }

_925:
#line 287 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _913 = _905;
  _914 = *(uint8_t*)(((&(&_904)->array[((int64_t)(((int64_t)(int32_t)_913)))])));
  _915 = printf((&_OC_str), (((uint32_t)(uint8_t)_914)));
  goto _927;

_927:
#line 285 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _916 = _905;
  _905 = (llvm_add_u32(_916, 1));
  goto _924;

  } while (1); /* end of syntactic loop '' */
_926:
#line 290 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _917 = printf((&_OC_str_OC_1));
  goto _928;

_928:
#line 283 "/home/yxk/llvm2c-test/xiao/MD5/md5.c"
  _918 = _903;
  _903 = (llvm_add_u32(_918, -1));
  goto _921;

  } while (1); /* end of syntactic loop '' */
_923:
  return 0;
}