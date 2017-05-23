CC := C:\mingw64\mingw64-7.1.0 POSIX SEH\mingw64\bin\gcc
CFLAGS := -g -ffreestanding -std=c11 -Wall -Wunused -Wextra -Wformat=2 -Wformat-security -Wmisleading-indentation -Wmissing-include-dirs -pedantic -Wsuggest-attribute=const -Wduplicated-branches -Wduplicated-cond -Wfloat-equal -Wtraditional -Wpointer-arith -Wunused-macros -Wc99-c11-compat -Wpacked -Wpadded -Winline


SRCDIR := src/
OUTPUT := -o cmath

OBJS := $(SRCDIR)main.o $(SRCDIR)mp_Add.o $(SRCDIR)mp_MSigDit.o $(SRCDIR)mp_Copy.o

all: cmath.exe

cmath.exe: $(OBJS)
	$(CC) $(CFLAGS) $(OUTPUT) $(OBJS)

main.o: $(SRCDIR)main.c
	$(CC) $(CFLAGS) -c -o main.o $(SRCDIR)main.o

mp_Add.o: mp_Add.c
	$(CC) $(CFLAGS) -c -o mp_Add.o $(SRCDIR)mp_Add.c
	
mp_mSigDit.o: mp_MSigDit.c
	$(CC) $(CFLAGS) -c -o mp_mSigDit.o $(SRCDIR)mp_MSigDit.c

mp_Copy.o: mp_Copy.c
	$(CC) $(CFLAGS) -c -o mp_Copy.o $(SRCDIR)mp_Copy.c

clean:
	rm -rf **/*.o