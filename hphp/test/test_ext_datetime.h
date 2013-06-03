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

#ifndef incl_HPHP_TEST_EXT_DATETIME_H_
#define incl_HPHP_TEST_EXT_DATETIME_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtDatetime : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_checkdate();
  bool test_date_add();
  bool test_date_create_from_format();
  bool test_date_create();
  bool test_date_date_set();
  bool test_date_default_timezone_get();
  bool test_date_default_timezone_set();
  bool test_date_diff();
  bool test_date_format();
  bool test_date_get_last_errors();
  bool test_date_interval_create_from_date_string();
  bool test_date_interval_format();
  bool test_date_isodate_set();
  bool test_date_modify();
  bool test_date_offset_get();
  bool test_date_parse();
  bool test_date_sub();
  bool test_date_sun_info();
  bool test_date_sunrise();
  bool test_date_sunset();
  bool test_date_time_set();
  bool test_date_timestamp_get();
  bool test_date_timestamp_set();
  bool test_date_timezone_get();
  bool test_date_timezone_set();
  bool test_date();
  bool test_getdate();
  bool test_gettimeofday();
  bool test_gmdate();
  bool test_gmmktime();
  bool test_gmstrftime();
  bool test_idate();
  bool test_localtime();
  bool test_microtime();
  bool test_mktime();
  bool test_strftime();
  bool test_strptime();
  bool test_strtotime();
  bool test_time();
  bool test_timezone_abbreviations_list();
  bool test_timezone_identifiers_list();
  bool test_timezone_location_get();
  bool test_timezone_name_from_abbr();
  bool test_timezone_name_get();
  bool test_timezone_offset_get();
  bool test_timezone_open();
  bool test_timezone_transitions_get();
  bool test_timezone_version_get();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_DATETIME_H_
