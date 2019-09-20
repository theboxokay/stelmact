CC = gcc
CPPFLAGS = -I include
CFLAGS = -Wall -fPIC

all: LinkedListAPI.c liblist.so clean

LinkedListAPI.c:
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/LinkedListAPI.c

liblist.so:
	$(CC) -shared -o bin/liblist.so LinkedListAPI.o

clean:
	rm *.o
