/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
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

#ifndef incl_HPHP_EXT_CLOSURE_H_
#define incl_HPHP_EXT_CLOSURE_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base_includes.h"
#include "hphp/runtime/vm/func.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// class Closure

FORWARD_DECLARE_CLASS_BUILTIN(Closure);
class c_Closure : public ExtObjectData {
 public:
  DECLARE_CLASS(Closure, Closure, ObjectData)

  // need to implement
  public: c_Closure(Class* cls = c_Closure::s_cls);
  public: ~c_Closure();
  public: void t___construct();

  // implemented by HPHP
  public: c_Closure *create();
public:
  public: c_Closure* clone();

  c_Closure* init(int numArgs, ActRec* ar, TypedValue* sp);
  ObjectData* getThisOrClass() { return m_thisOrClass; }
  const Func* getInvokeFunc() { return m_func; }
  HphpArray* getStaticLocals();
  TypedValue* getUseVars() { return propVec(); }
  int getNumUseVars() { return m_cls->numDeclProperties(); }

  static size_t funcOffset() { return offsetof(c_Closure, m_func); }
  static size_t thisOffset() { return offsetof(c_Closure, m_thisOrClass); }

protected:
  virtual bool php_sleep(Variant &ret);
private:
  SmartPtr<HphpArray> m_VMStatics;
  ObjectData* m_thisOrClass;
  const Func* m_func;
};

///////////////////////////////////////////////////////////////////////////////
// class DummyClosure

FORWARD_DECLARE_CLASS_BUILTIN(DummyClosure);
class c_DummyClosure : public ExtObjectData {
 public:
  DECLARE_CLASS(DummyClosure, DummyClosure, ObjectData)

  // need to implement
  public: c_DummyClosure(Class* cls = c_DummyClosure::s_cls);
  public: ~c_DummyClosure();
  public: void t___construct();

  // implemented by HPHP
  public: c_DummyClosure *create();

};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_CLOSURE_H_
