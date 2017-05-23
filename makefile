CC := C:\mingw64\mingw64-7.1.0 POSIX SEH\mingw64\bin\gcc
CFLAGS := -g -ffreestanding -std=c11 -Wall -Wunused -Wextra -Wformat=2 -Wformat-security -Wmisleading-indentation -Wmissing-include-dirs -pedantic -Wsuggest-attribute=const -Wduplicated-branches -Wduplicated-cond -Wfloat-equal -Wpointer-arith -Wunused-macros -Wc99-c11-compat -Wpacked -Wpadded -Winline


SRCDIR := src/
OUTPUT := -o cmath

OBJS := $(SRCDIR)main.o $(SRCDIR)mp_Add.o $(SRCDIR)mp_MSigDit.o $(SRCDIR)mp_Copy.o $(SRCDIR)mp_convertToASCII.o $(SRCDIR)mp_printToStdout.o $(SRCDIR)mp_convertToMP.o $(SRCDIR)string.o

all: cmath.exe

cmath.exe: $(OBJS)
	$(CC) $(CFLAGS) $(OUTPUT) $(OBJS)

main.o: $(SRCDIR)main.c
	$(CC) $(CFLAGS) -c -o main.o $(SRCDIR)main.o

mp_Add.o: mp_Add.c
	$(CC) $(CFLAGS) -c -o mp_Add.o $(SRCDIR)mp_Add.c
	
mp_MSigDit.o: mp_MSigDit.c
	$(CC) $(CFLAGS) -c -o mp_MSigDit.o $(SRCDIR)mp_MSigDit.c

mp_Copy.o: mp_Copy.c
	$(CC) $(CFLAGS) -c -o mp_Copy.o $(SRCDIR)mp_Copy.c
	
mp_convertToASCII.o: mp_convertToASCII.c
	$(CC) $(CFLAGS) -c -o mp_convertToASCII.o $(SRCDIR)mp_convertToASCII.c

mp_printToStdout.o: mp_printToStdout.c
	$(CC) $(CFLAGS) -c -o mp_printToStdout.o $(SRCDIR)mp_printToStdout.c

mp_convertToMP.o: mp_convertToMP.c
	$(CC) $(CFLAGS) -c -o mp_convertToMP.o $(SRCDIR)mp_convertToMP.c
	
string.o: string.c
	$(CC) $(CFLAGS) -c -o string.o $(SRCDIR)string.c

clean:
	rm -rf **/*.o