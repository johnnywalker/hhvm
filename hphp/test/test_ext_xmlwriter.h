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

#ifndef incl_HPHP_TEST_EXT_XMLWRITER_H_
#define incl_HPHP_TEST_EXT_XMLWRITER_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtXmlwriter : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_xmlwriter_open_memory();
  bool test_xmlwriter_open_uri();
  bool test_xmlwriter_set_indent_string();
  bool test_xmlwriter_set_indent();
  bool test_xmlwriter_start_document();
  bool test_xmlwriter_start_element();
  bool test_xmlwriter_start_element_ns();
  bool test_xmlwriter_write_element_ns();
  bool test_xmlwriter_write_element();
  bool test_xmlwriter_end_element();
  bool test_xmlwriter_full_end_element();
  bool test_xmlwriter_start_attribute_ns();
  bool test_xmlwriter_start_attribute();
  bool test_xmlwriter_write_attribute_ns();
  bool test_xmlwriter_write_attribute();
  bool test_xmlwriter_end_attribute();
  bool test_xmlwriter_start_cdata();
  bool test_xmlwriter_write_cdata();
  bool test_xmlwriter_end_cdata();
  bool test_xmlwriter_start_comment();
  bool test_xmlwriter_write_comment();
  bool test_xmlwriter_end_comment();
  bool test_xmlwriter_end_document();
  bool test_xmlwriter_start_pi();
  bool test_xmlwriter_write_pi();
  bool test_xmlwriter_end_pi();
  bool test_xmlwriter_text();
  bool test_xmlwriter_write_raw();
  bool test_xmlwriter_start_dtd();
  bool test_xmlwriter_write_dtd();
  bool test_xmlwriter_start_dtd_element();
  bool test_xmlwriter_write_dtd_element();
  bool test_xmlwriter_end_dtd_element();
  bool test_xmlwriter_start_dtd_attlist();
  bool test_xmlwriter_write_dtd_attlist();
  bool test_xmlwriter_end_dtd_attlist();
  bool test_xmlwriter_start_dtd_entity();
  bool test_xmlwriter_write_dtd_entity();
  bool test_xmlwriter_end_dtd_entity();
  bool test_xmlwriter_end_dtd();
  bool test_xmlwriter_flush();
  bool test_xmlwriter_output_memory();
  bool test_xmlwriter();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_XMLWRITER_H_
