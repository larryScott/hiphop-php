/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_InvalidArgumentException_h1eaa4f7f__
#define __GENERATED_cls_InvalidArgumentException_h1eaa4f7f__

#include <cls/InvalidArgumentException.fw.h>
#include <cls/LogicException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 211 */
FORWARD_DECLARE_CLASS(InvalidArgumentException);
class c_InvalidArgumentException : public c_LogicException {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(InvalidArgumentException, InvalidArgumentException)
  DECLARE_INVOKE_EX(InvalidArgumentException, InvalidArgumentException, LogicException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_InvalidArgumentException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_InvalidArgumentException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_InvalidArgumentException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_InvalidArgumentException 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_InvalidArgumentException 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
};
extern struct ObjectStaticCallbacks cw_InvalidArgumentException;
Object co_InvalidArgumentException(CArrRef params, bool init = true) NEVER_INLINE;
Object coo_InvalidArgumentException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_InvalidArgumentException_h1eaa4f7f__
