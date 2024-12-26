/* OP-TEE TEE client API (built by optee_client) */
#include <tee_client_api.h>

/* For the UUID (found in the TA's h-file(s)) */
#include <test_crc32.h>

/* Provide Declarations */



int main(int argc, char ** argv) {
      //添加定义变量
  TEEC_Result res;
  TEEC_Context ctx;
  TEEC_Session sess;
  TEEC_Operation op;
   TEEC_UUID uuid = TEST_CRC32_UUID;
  uint32_t err_origin;
  res = TEEC_InitializeContext(NULL, &ctx);
  res = TEEC_OpenSession(&ctx, &sess, &uuid,
            TEEC_LOGIN_PUBLIC, NULL, NULL, &err_origin);
  memset(&op, 0, sizeof(op));
  op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT, TEEC_MEMREF_TEMP_INOUT,
					 TEEC_NONE, TEEC_NONE);


  uint32_t _95 = (uint32_t)argc;
  void* _96 = (void*)argv;
  uint32_t _97;    /* Address-exposed local */
  uint32_t _98;    /* Address-exposed local */
  void* _99;    /* Address-exposed local */
  uint32_t _100;    /* Address-exposed local */
  uint64_t _101;    /* Address-exposed local */
  uint32_t _102;
  uint32_t _103;
  void* _104;
  void* _105;
  uint32_t _106;
  uint32_t _107;
  uint32_t _108;
  uint32_t _109;
  uint64_t _110;
  uint32_t _111;

  _97 = 0;
  _98 = _95;
#line 118 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  ;
  _99 = _96;
  ;
#line 119 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  ;
#line 120 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  _102 = _98;
  if ((_102 != 2u)) {
    goto _112;
  } else {
    goto _113;
  }

_112:
#line 122 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  _103 = printf((&_OC_str_OC_2));
  goto _114;

_113:
#line 125 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  _104 = _99;
  _105 = *(void**)(((&((void**)_104)[((int64_t)1)])));
  _106 = atoi(_105);
  _100 = _106;
  goto _114;

_114:
#line 126 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  ;
  _101 = 0;
#line 127 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
//
  op.params[0].tmpref.buffer = &_100;
  op.params[0].tmpref.size = 4;
  op.params[1].tmpref.buffer = &_101;
  op.params[1].tmpref.size = 8;
  TEEC_InvokeCommand(&sess, 0, &op, &err_origin);
#line 128 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  _108 = _100;
  _109 = printf((&_OC_str_OC_3), _108);
#line 129 "/home/yxk/llvm2c-test/xiao/CRC32/crc32.c"
  _110 = _101;
  _111 = printf((&_OC_str_OC_4), _110);
  return 0;
}

