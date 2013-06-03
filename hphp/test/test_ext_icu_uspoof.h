/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
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

#ifndef TEST_EXT_ICU_USPOOF_H
#define TEST_EXT_ICU_USPOOF_H

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtIcu_uspoof : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_SpoofChecker_issuspicious();
  bool test_SpoofChecker_areconfusable();
  bool test_SpoofChecker_issuesfound();
  bool test_SpoofChecker_setchecks();
  bool test_SpoofChecker_setallowedlocales();
};

///////////////////////////////////////////////////////////////////////////////

#endif // TEST_EXT_ICU_USPOOF_H
