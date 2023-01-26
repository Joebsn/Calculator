all: main

main: main.o operations input
	gcc -o target/main target/main.o target/operations.o target/input.o -lm

main.o: code/main.c headers/operations.h headers/input.h
	gcc -c code/main.c -o target/main.o

operations: code/operations.c headers/operations.h
	gcc -c code/operations.c -o target/operations.o
	
input: code/input.c headers/input.h
	gcc -c code/input.c -o target/input.o
