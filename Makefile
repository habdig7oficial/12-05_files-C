compile:
	gcc src/ex1.c -o ex1.elf
	gcc src/ex2-3-4.c -o ex2-3-4.elf

run:
	./ex1.elf
	./ex2-3-4.elf 

all: compile run