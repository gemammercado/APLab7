CC = gcc
CFLAGS= -g -Wall -Wpedantic -std=c17
LDFLAG=
LDLIBS=
http-server:
http-server.o:

.PHONY: clean
clean:
	rm -f *.o a.out core mdb-lookup-server

