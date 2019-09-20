CC = gcc
CPPFLAGS = -I include
CFLAGS = -Wall -fPIC

all: GPXParser.c liblist.so clean

GPXParser.c:
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/GPXParser.c

liblist.so:
	$(CC) -shared -o bin/liblist.so GPXParser.o

clean:
	rm *.o