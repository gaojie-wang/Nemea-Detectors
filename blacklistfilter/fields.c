/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
// Tables are indexed by field ID
#include "fields.h"

char *ur_field_names_static[] = {
   "DST_IP",
   "SRC_IP",
   "BLACKLIST",
   "BYTES",
   "DST_BLACKLIST",
   "LINK_BIT_FIELD",
   "SRC_BLACKLIST",
   "TIME_FIRST",
   "TIME_LAST",
   "PACKETS",
   "DNS_QTYPE",
   "DNS_RLENGTH",
   "DST_PORT",
   "SRC_PORT",
   "BLACKLIST_TYPE",
   "DIR_BIT_FIELD",
   "DNS_BLACKLIST",
   "DNS_DO",
   "PROTOCOL",
   "TCP_FLAGS",
   "TOS",
   "TTL",
   "DNS_NAME",
   "DNS_RDATA",
   "HTTP_REQUEST_HOST",
   "HTTP_REQUEST_REFERER",
   "HTTP_REQUEST_URL",
};
short ur_field_sizes_static[] = {
   16, /* DST_IP */
   16, /* SRC_IP */
   8, /* BLACKLIST */
   8, /* BYTES */
   8, /* DST_BLACKLIST */
   8, /* LINK_BIT_FIELD */
   8, /* SRC_BLACKLIST */
   8, /* TIME_FIRST */
   8, /* TIME_LAST */
   4, /* PACKETS */
   2, /* DNS_QTYPE */
   2, /* DNS_RLENGTH */
   2, /* DST_PORT */
   2, /* SRC_PORT */
   1, /* BLACKLIST_TYPE */
   1, /* DIR_BIT_FIELD */
   1, /* DNS_BLACKLIST */
   1, /* DNS_DO */
   1, /* PROTOCOL */
   1, /* TCP_FLAGS */
   1, /* TOS */
   1, /* TTL */
   -1, /* DNS_NAME */
   -1, /* DNS_RDATA */
   -1, /* HTTP_REQUEST_HOST */
   -1, /* HTTP_REQUEST_REFERER */
   -1, /* HTTP_REQUEST_URL */
};
ur_field_type_t ur_field_types_static[] = {
   UR_TYPE_IP, /* DST_IP */
   UR_TYPE_IP, /* SRC_IP */
   UR_TYPE_UINT64, /* BLACKLIST */
   UR_TYPE_UINT64, /* BYTES */
   UR_TYPE_UINT64, /* DST_BLACKLIST */
   UR_TYPE_UINT64, /* LINK_BIT_FIELD */
   UR_TYPE_UINT64, /* SRC_BLACKLIST */
   UR_TYPE_TIME, /* TIME_FIRST */
   UR_TYPE_TIME, /* TIME_LAST */
   UR_TYPE_UINT32, /* PACKETS */
   UR_TYPE_UINT16, /* DNS_QTYPE */
   UR_TYPE_UINT16, /* DNS_RLENGTH */
   UR_TYPE_UINT16, /* DST_PORT */
   UR_TYPE_UINT16, /* SRC_PORT */
   UR_TYPE_UINT8, /* BLACKLIST_TYPE */
   UR_TYPE_UINT8, /* DIR_BIT_FIELD */
   UR_TYPE_UINT8, /* DNS_BLACKLIST */
   UR_TYPE_UINT8, /* DNS_DO */
   UR_TYPE_UINT8, /* PROTOCOL */
   UR_TYPE_UINT8, /* TCP_FLAGS */
   UR_TYPE_UINT8, /* TOS */
   UR_TYPE_UINT8, /* TTL */
   UR_TYPE_STRING, /* DNS_NAME */
   UR_TYPE_BYTES, /* DNS_RDATA */
   UR_TYPE_STRING, /* HTTP_REQUEST_HOST */
   UR_TYPE_STRING, /* HTTP_REQUEST_REFERER */
   UR_TYPE_STRING, /* HTTP_REQUEST_URL */
};
ur_static_field_specs_t UR_FIELD_SPECS_STATIC = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 27};
ur_field_specs_t ur_field_specs = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 27, 27, 27, NULL, UR_UNINITIALIZED};
