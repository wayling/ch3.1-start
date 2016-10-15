CC=gcc
CFLAGS=-I.

all: *.c
	$(CC) -g -Wall  *.c -o helloworld
#       $(STRIP) helloworld

clean:
	rm -f a.out helloworld
	rm -f *.o
