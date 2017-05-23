CC := C:\mingw64\mingw64-7.1.0 POSIX SEH\mingw64\bin\gcc

SRCDIR := src/
OUTPUT := -o cmath

OBJS := main.o

all: cmath.exe

cmath.exe: $(SRCDIR)$(OBJS)
	$(CC) $(OUTPUT) $(SRCDIR)$(OBJS)

$(SRCDIR)main.o: $(SRCDIR)main.c

clean:
	rm -rf **/*.o