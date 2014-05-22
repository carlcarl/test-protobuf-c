CC = cc
CFLAGS = -I/usr/local/include
LIBS = -L/usr/local/lib -lprotobuf-c


all:
	protoc-c --c_out=. example.proto
	$(CC) $(CFLAGS) example.pb-c.h example.pb-c.c main.c $(LIBS)
