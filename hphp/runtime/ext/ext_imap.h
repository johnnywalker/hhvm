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

#ifndef incl_HPHP_EXT_IMAP_H_
#define incl_HPHP_EXT_IMAP_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base_includes.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_imap_8bit(CStrRef str);
Variant f_imap_alerts();
bool f_imap_append(CObjRef imap_stream, CStrRef mailbox, CStrRef message, CStrRef options = "");
Variant f_imap_base64(CStrRef text);
Variant f_imap_binary(CStrRef str);
Variant f_imap_body(CObjRef imap_stream, int64_t msg_number, int64_t options = 0);
Variant f_imap_bodystruct(CObjRef imap_stream, int64_t msg_number, CStrRef section);
Variant f_imap_check(CObjRef imap_stream);
bool f_imap_clearflag_full(CObjRef imap_stream, CStrRef sequence, CStrRef flag, int64_t options = 0);
bool f_imap_close(CObjRef imap_stream, int64_t flag = 0);
bool f_imap_createmailbox(CObjRef imap_stream, CStrRef mailbox);
bool f_imap_delete(CObjRef imap_stream, CStrRef msg_number, int64_t options = 0);
bool f_imap_deletemailbox(CObjRef imap_stream, CStrRef mailbox);
Variant f_imap_errors();
bool f_imap_expunge(CObjRef imap_stream);
Variant f_imap_fetch_overview(CObjRef imap_stream, CStrRef sequence, int64_t options = 0);
Variant f_imap_fetchbody(CObjRef imap_stream, int64_t msg_number, CStrRef section, int64_t options = 0);
Variant f_imap_fetchheader(CObjRef imap_stream, int64_t msg_number, int64_t options = 0);
Variant f_imap_fetchstructure(CObjRef imap_stream, int64_t msg_number, int64_t options = 0);
bool f_imap_gc(CObjRef imap_stream, int64_t caches);
Variant f_imap_get_quota(CObjRef imap_stream, CStrRef quota_root);
Variant f_imap_get_quotaroot(CObjRef imap_stream, CStrRef quota_root);
Variant f_imap_getacl(CObjRef imap_stream, CStrRef mailbox);
Variant f_imap_getmailboxes(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_getsubscribed(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_header(CObjRef imap_stream, int64_t msg_number, int64_t fromlength = 0, int64_t subjectlength = 0, CStrRef defaulthost = "");
Variant f_imap_headerinfo(CObjRef imap_stream, int64_t msg_number, int64_t fromlength = 0, int64_t subjectlength = 0, CStrRef defaulthost = "");
Variant f_imap_headers(CObjRef imap_stream);
Variant f_imap_last_error();
Variant f_imap_list(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_listmailbox(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_listscan(CObjRef imap_stream, CStrRef ref, CStrRef pattern, CStrRef content);
Variant f_imap_listsubscribed(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_lsub(CObjRef imap_stream, CStrRef ref, CStrRef pattern);
Variant f_imap_mail_compose(CArrRef envelope, CArrRef body);
bool f_imap_mail_copy(CObjRef imap_stream, CStrRef msglist, CStrRef mailbox, int64_t options = 0);
bool f_imap_mail_move(CObjRef imap_stream, CStrRef msglist, CStrRef mailbox, int64_t options = 0);
bool f_imap_mail(CStrRef to, CStrRef subject, CStrRef message, CStrRef additional_headers = "", CStrRef cc = "", CStrRef bcc = "", CStrRef rpath = "");
Variant f_imap_mailboxmsginfo(CObjRef imap_stream);
Variant f_imap_mime_header_decode(CStrRef text);
Variant f_imap_msgno(CObjRef imap_stream, int64_t uid);
Variant f_imap_num_msg(CObjRef imap_stream);
Variant f_imap_num_recent(CObjRef imap_stream);
Variant f_imap_open(CStrRef mailbox, CStrRef username, CStrRef password, int64_t options = 0, int64_t retries = 0);
bool f_imap_ping(CObjRef imap_stream);
Variant f_imap_qprint(CStrRef str);
bool f_imap_renamemailbox(CObjRef imap_stream, CStrRef old_mbox, CStrRef new_mbox);
bool f_imap_reopen(CObjRef imap_stream, CStrRef mailbox, int64_t options = 0, int64_t retries = 0);
Variant f_imap_rfc822_parse_adrlist(CStrRef address, CStrRef default_host);
Variant f_imap_rfc822_parse_headers(CStrRef headers, CStrRef defaulthost = "");
Variant f_imap_rfc822_write_address(CStrRef mailbox, CStrRef host, CStrRef personal);
bool f_imap_savebody(CObjRef imap_stream, CVarRef file, int64_t msg_number, CStrRef part_number = "", int64_t options = 0);
Variant f_imap_scanmailbox(CObjRef imap_stream, CStrRef ref, CStrRef pattern, CStrRef content);
Variant f_imap_search(CObjRef imap_stream, CStrRef criteria, int64_t options = 0, CStrRef charset = "");
bool f_imap_set_quota(CObjRef imap_stream, CStrRef quota_root, int64_t quota_limit);
bool f_imap_setacl(CObjRef imap_stream, CStrRef mailbox, CStrRef id, CStrRef rights);
bool f_imap_setflag_full(CObjRef imap_stream, CStrRef sequence, CStrRef flag, int64_t options = 0);
Variant f_imap_sort(CObjRef imap_stream, int64_t criteria, int64_t reverse, int64_t options = 0, CStrRef search_criteria = "", CStrRef charset = "");
Variant f_imap_status(CObjRef imap_stream, CStrRef mailbox, int64_t options = 0);
bool f_imap_subscribe(CObjRef imap_stream, CStrRef mailbox);
Variant f_imap_thread(CObjRef imap_stream, int64_t options = 0);
Variant f_imap_timeout(int64_t timeout_type, int64_t timeout = -1);
Variant f_imap_uid(CObjRef imap_stream, int64_t msg_number);
bool f_imap_undelete(CObjRef imap_stream, CStrRef msg_number, int64_t flags = 0);
bool f_imap_unsubscribe(CObjRef imap_stream, CStrRef mailbox);
Variant f_imap_utf7_decode(CStrRef text);
Variant f_imap_utf7_encode(CStrRef data);
Variant f_imap_utf8(CStrRef mime_encoded_text);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_IMAP_H_
