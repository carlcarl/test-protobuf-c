/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: example.proto */

#ifndef PROTOBUF_C_example_2eproto__INCLUDED
#define PROTOBUF_C_example_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000000 < PROTOBUF_C_VERSION_NUMBER
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _SearchRequest SearchRequest;


/* --- enums --- */

typedef enum _SearchRequest__Corpus {
  SEARCH_REQUEST__CORPUS__UNIVERSAL = 0,
  SEARCH_REQUEST__CORPUS__WEB = 1,
  SEARCH_REQUEST__CORPUS__IMAGES = 2,
  SEARCH_REQUEST__CORPUS__LOCAL = 3,
  SEARCH_REQUEST__CORPUS__NEWS = 4,
  SEARCH_REQUEST__CORPUS__PRODUCTS = 5,
  SEARCH_REQUEST__CORPUS__VIDEO = 6
    _PROTOBUF_C_FORCE_ENUM_TO_BE_INT_SIZE(SEARCH_REQUEST__CORPUS)
} SearchRequest__Corpus;

/* --- messages --- */

struct  _SearchRequest
{
  ProtobufCMessage base;
  char *query;
  int32_t page_number;
  int32_t result_per_page;
  SearchRequest__Corpus corpus;
};
#define SEARCH_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&search_request__descriptor) \
    , NULL, 0, 0, SEARCH_REQUEST__CORPUS__UNIVERSAL }


/* SearchRequest methods */
void   search_request__init
                     (SearchRequest         *message);
size_t search_request__get_packed_size
                     (const SearchRequest   *message);
size_t search_request__pack
                     (const SearchRequest   *message,
                      uint8_t             *out);
size_t search_request__pack_to_buffer
                     (const SearchRequest   *message,
                      ProtobufCBuffer     *buffer);
SearchRequest *
       search_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   search_request__free_unpacked
                     (SearchRequest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SearchRequest_Closure)
                 (const SearchRequest *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor search_request__descriptor;
extern const ProtobufCEnumDescriptor    search_request__corpus__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_example_2eproto__INCLUDED */
