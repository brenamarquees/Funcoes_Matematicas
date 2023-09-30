# My first makefile

all: math_program

math_program: main.o sub.o sun.o mult.o
	gcc -o math_program main.o sub.o sun.o mult.o

main.o: main.c sub.h sun.h mult.h
	gcc -o main.o -c main.c

sub.o: sub.c sub.h
	gcc -o sub.o -c sub.c

sun.o: sun.c sun.h
	gcc -o sun.o -c sun.c

mult.o: mult.c mult.h
	gcc -o mult.o -c mult.c

clean:
	rm -rf *.o math_program *~
	
run: math_program
	./math_program

