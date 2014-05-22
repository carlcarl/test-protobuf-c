#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "example.pb-c.h"

int main()
{
	SearchRequest s = SEARCH_REQUEST__INIT;
	size_t sz = search_request__get_packed_size(&s);
	printf("Pack size before insert: %zd\n", sz);
	s.query = (char*)malloc(sizeof(char) * 100);
	strncpy(s.query, "1", 100);
	s.page_number = 300;
	sz = search_request__get_packed_size(&s);
	printf("Pack size after insert: %zd\n", sz);
	void *buffer;
	buffer = malloc(sz);
	sz = search_request__pack(&s, (unsigned char*)buffer);
	sz = search_request__get_packed_size(&s);

	SearchRequest *s2;
	s2 = search_request__unpack(
			NULL,
			sz,
			(unsigned char*)buffer
			);

	/* printf("%s\n", s2->query); */
	printf("Page number from unpack struct: %d\n", s2->page_number);
	size_t i;
	unsigned char* p = (unsigned char*)buffer;
	puts("Binary format:");
	for(i = 0; i < sz; i++) {
		printf("%d\t", (int)*p);
		p++;
	}
	free(buffer);

	return 0;
}
