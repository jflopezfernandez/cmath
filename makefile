CC=C:\mingw64\mingw64-7.1.0 POSIX SEH\mingw64\bin\gcc

VPATH = src:../headers

PROGRAM=cmath
OUTPUT=-o $(PROGRAM)
CFLAGS=-c -g

#SRC=main.cpp
OBJS:=$(patsubst %.c,%.o,$(wildcard **/*.c))


$(PROGRAM): $(OBJS)
	$(CC) $(OUTPUT) $(OBJS)


.PHONY: clean
clean:
	rm -f $(PROGRAM) $(OBJS)