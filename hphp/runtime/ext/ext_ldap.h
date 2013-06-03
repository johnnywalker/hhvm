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

#ifndef incl_HPHP_EXT_LDAP_H_
#define incl_HPHP_EXT_LDAP_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base_includes.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_ldap_connect(CStrRef hostname = null_string, int port = 389);
Variant f_ldap_explode_dn(CStrRef dn, int with_attrib);
Variant f_ldap_dn2ufn(CStrRef db);
String f_ldap_err2str(int errnum);
bool f_ldap_add(CObjRef link, CStrRef dn, CArrRef entry);
bool f_ldap_mod_add(CObjRef link, CStrRef dn, CArrRef entry);
bool f_ldap_mod_del(CObjRef link, CStrRef dn, CArrRef entry);
bool f_ldap_mod_replace(CObjRef link, CStrRef dn, CArrRef entry);
bool f_ldap_modify(CObjRef link, CStrRef dn, CArrRef entry);
bool f_ldap_bind(CObjRef link, CStrRef bind_rdn = null_string, CStrRef bind_password = null_string);
bool f_ldap_set_rebind_proc(CObjRef link, CVarRef callback);
bool f_ldap_sort(CObjRef link, CObjRef result, CStrRef sortfilter);
bool f_ldap_start_tls(CObjRef link);
bool f_ldap_unbind(CObjRef link);
bool f_ldap_get_option(CObjRef link, int option, VRefParam retval);
bool f_ldap_set_option(CVarRef link, int option, CVarRef newval);
bool f_ldap_close(CObjRef link);
Variant f_ldap_list(CVarRef link, CVarRef base_dn, CVarRef filter, CArrRef attributes = null_array, int attrsonly = 0, int sizelimit = -1, int timelimit = -1, int deref = -1);
Variant f_ldap_read(CVarRef link, CVarRef base_dn, CVarRef filter, CArrRef attributes = null_array, int attrsonly = 0, int sizelimit = -1, int timelimit = -1, int deref = -1);
Variant f_ldap_search(CVarRef link, CVarRef base_dn, CVarRef filter, CArrRef attributes = null_array, int attrsonly = 0, int sizelimit = -1, int timelimit = -1, int deref = -1);
bool f_ldap_rename(CObjRef link, CStrRef dn, CStrRef newrdn, CStrRef newparent, bool deleteoldrdn);
bool f_ldap_delete(CObjRef link, CStrRef dn);
Variant f_ldap_compare(CObjRef link, CStrRef dn, CStrRef attribute, CStrRef value);
int64_t f_ldap_errno(CObjRef link);
String f_ldap_error(CObjRef link);
Variant f_ldap_get_dn(CObjRef link, CObjRef result_entry);
int64_t f_ldap_count_entries(CObjRef link, CObjRef result);
Variant f_ldap_get_entries(CObjRef link, CObjRef result);
Variant f_ldap_first_entry(CObjRef link, CObjRef result);
Variant f_ldap_next_entry(CObjRef link, CObjRef result_entry);
Array f_ldap_get_attributes(CObjRef link, CObjRef result_entry);
Variant f_ldap_first_attribute(CObjRef link, CObjRef result_entry);
Variant f_ldap_next_attribute(CObjRef link, CObjRef result_entry);
Variant f_ldap_first_reference(CObjRef link, CObjRef result);
Variant f_ldap_next_reference(CObjRef link, CObjRef result_entry);
bool f_ldap_parse_reference(CObjRef link, CObjRef result_entry, VRefParam referrals);
bool f_ldap_parse_result(CObjRef link, CObjRef result, VRefParam errcode, VRefParam matcheddn = uninit_null(), VRefParam errmsg = uninit_null(), VRefParam referrals = uninit_null());
bool f_ldap_free_result(CObjRef result);
Variant f_ldap_get_values_len(CObjRef link, CObjRef result_entry, CStrRef attribute);
Variant f_ldap_get_values(CObjRef link, CObjRef result_entry, CStrRef attribute);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_LDAP_H_
