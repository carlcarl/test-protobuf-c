/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: example.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "example.pb-c.h"
void   search_request__init
                     (SearchRequest         *message)
{
  static SearchRequest init_value = SEARCH_REQUEST__INIT;
  *message = init_value;
}
size_t search_request__get_packed_size
                     (const SearchRequest *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &search_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t search_request__pack
                     (const SearchRequest *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &search_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t search_request__pack_to_buffer
                     (const SearchRequest *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &search_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SearchRequest *
       search_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SearchRequest *)
     protobuf_c_message_unpack (&search_request__descriptor,
                                allocator, len, data);
}
void   search_request__free_unpacked
                     (SearchRequest *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &search_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
const ProtobufCEnumValue search_request__corpus__enum_values_by_number[7] =
{
  { "UNIVERSAL", "SEARCH_REQUEST__CORPUS__UNIVERSAL", 0 },
  { "WEB", "SEARCH_REQUEST__CORPUS__WEB", 1 },
  { "IMAGES", "SEARCH_REQUEST__CORPUS__IMAGES", 2 },
  { "LOCAL", "SEARCH_REQUEST__CORPUS__LOCAL", 3 },
  { "NEWS", "SEARCH_REQUEST__CORPUS__NEWS", 4 },
  { "PRODUCTS", "SEARCH_REQUEST__CORPUS__PRODUCTS", 5 },
  { "VIDEO", "SEARCH_REQUEST__CORPUS__VIDEO", 6 },
};
static const ProtobufCIntRange search_request__corpus__value_ranges[] = {
{0, 0},{0, 7}
};
const ProtobufCEnumValueIndex search_request__corpus__enum_values_by_name[7] =
{
  { "IMAGES", 2 },
  { "LOCAL", 3 },
  { "NEWS", 4 },
  { "PRODUCTS", 5 },
  { "UNIVERSAL", 0 },
  { "VIDEO", 6 },
  { "WEB", 1 },
};
const ProtobufCEnumDescriptor search_request__corpus__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "SearchRequest.Corpus",
  "Corpus",
  "SearchRequest__Corpus",
  "",
  7,
  search_request__corpus__enum_values_by_number,
  7,
  search_request__corpus__enum_values_by_name,
  1,
  search_request__corpus__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const SearchRequest__Corpus search_request__corpus__default_value = SEARCH_REQUEST__CORPUS__UNIVERSAL;
static const ProtobufCFieldDescriptor search_request__field_descriptors[4] =
{
  {
    "query",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SearchRequest, query),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "page_number",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SearchRequest, page_number),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "result_per_page",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SearchRequest, result_per_page),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "corpus",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SearchRequest, corpus),
    &search_request__corpus__descriptor,
    &search_request__corpus__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned search_request__field_indices_by_name[] = {
  3,   /* field[3] = corpus */
  1,   /* field[1] = page_number */
  0,   /* field[0] = query */
  2,   /* field[2] = result_per_page */
};
static const ProtobufCIntRange search_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor search_request__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "SearchRequest",
  "SearchRequest",
  "SearchRequest",
  "",
  sizeof(SearchRequest),
  4,
  search_request__field_descriptors,
  search_request__field_indices_by_name,
  1,  search_request__number_ranges,
  (ProtobufCMessageInit) search_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
