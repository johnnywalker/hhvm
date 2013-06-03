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

#ifndef incl_HPHP_TEST_EXT_LDAP_H_
#define incl_HPHP_TEST_EXT_LDAP_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtLdap : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_ldap_connect();
  bool test_ldap_explode_dn();
  bool test_ldap_dn2ufn();
  bool test_ldap_err2str();
  bool test_ldap_8859_to_t61();
  bool test_ldap_t61_to_8859();
  bool test_ldap_add();
  bool test_ldap_mod_add();
  bool test_ldap_mod_del();
  bool test_ldap_mod_replace();
  bool test_ldap_modify();
  bool test_ldap_bind();
  bool test_ldap_sasl_bind();
  bool test_ldap_set_rebind_proc();
  bool test_ldap_sort();
  bool test_ldap_start_tls();
  bool test_ldap_unbind();
  bool test_ldap_get_option();
  bool test_ldap_set_option();
  bool test_ldap_close();
  bool test_ldap_list();
  bool test_ldap_read();
  bool test_ldap_search();
  bool test_ldap_rename();
  bool test_ldap_delete();
  bool test_ldap_compare();
  bool test_ldap_errno();
  bool test_ldap_error();
  bool test_ldap_get_dn();
  bool test_ldap_count_entries();
  bool test_ldap_get_entries();
  bool test_ldap_first_entry();
  bool test_ldap_next_entry();
  bool test_ldap_get_attributes();
  bool test_ldap_first_attribute();
  bool test_ldap_next_attribute();
  bool test_ldap_first_reference();
  bool test_ldap_next_reference();
  bool test_ldap_parse_reference();
  bool test_ldap_parse_result();
  bool test_ldap_free_result();
  bool test_ldap_get_values_len();
  bool test_ldap_get_values();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_LDAP_H_
