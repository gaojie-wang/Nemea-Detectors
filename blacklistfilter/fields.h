#ifndef _UR_FIELDS_H_
#define _UR_FIELDS_H_

/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
#include <unirec/unirec.h>

#define F_DST_IP   0
#define F_DST_IP_T   ip_addr_t
#define F_SRC_IP   1
#define F_SRC_IP_T   ip_addr_t
#define F_BLACKLIST   2
#define F_BLACKLIST_T   uint64_t
#define F_BYTES   3
#define F_BYTES_T   uint64_t
#define F_DST_BLACKLIST   4
#define F_DST_BLACKLIST_T   uint64_t
#define F_LINK_BIT_FIELD   5
#define F_LINK_BIT_FIELD_T   uint64_t
#define F_SRC_BLACKLIST   6
#define F_SRC_BLACKLIST_T   uint64_t
#define F_TIME_FIRST   7
#define F_TIME_FIRST_T   ur_time_t
#define F_TIME_LAST   8
#define F_TIME_LAST_T   ur_time_t
#define F_PACKETS   9
#define F_PACKETS_T   uint32_t
#define F_DNS_QTYPE   10
#define F_DNS_QTYPE_T   uint16_t
#define F_DNS_RLENGTH   11
#define F_DNS_RLENGTH_T   uint16_t
#define F_DST_PORT   12
#define F_DST_PORT_T   uint16_t
#define F_SRC_PORT   13
#define F_SRC_PORT_T   uint16_t
#define F_BLACKLIST_TYPE   14
#define F_BLACKLIST_TYPE_T   uint8_t
#define F_DIR_BIT_FIELD   15
#define F_DIR_BIT_FIELD_T   uint8_t
#define F_DNS_BLACKLIST   16
#define F_DNS_BLACKLIST_T   uint8_t
#define F_DNS_DO   17
#define F_DNS_DO_T   uint8_t
#define F_PROTOCOL   18
#define F_PROTOCOL_T   uint8_t
#define F_TCP_FLAGS   19
#define F_TCP_FLAGS_T   uint8_t
#define F_TOS   20
#define F_TOS_T   uint8_t
#define F_TTL   21
#define F_TTL_T   uint8_t
#define F_DNS_NAME   22
#define F_DNS_NAME_T   char
#define F_DNS_RDATA   23
#define F_DNS_RDATA_T   char
#define F_HTTP_REQUEST_HOST   24
#define F_HTTP_REQUEST_HOST_T   char
#define F_HTTP_REQUEST_REFERER   25
#define F_HTTP_REQUEST_REFERER_T   char
#define F_HTTP_REQUEST_URL   26
#define F_HTTP_REQUEST_URL_T   char

extern uint16_t ur_last_id;
extern ur_static_field_specs_t UR_FIELD_SPECS_STATIC;
extern ur_field_specs_t ur_field_specs;

#endif

