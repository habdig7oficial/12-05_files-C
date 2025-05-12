compile:
	gcc src/ex1.c -o ex1.elf
	gcc src/ex2-3.c -o ex2-3.elf

run:
	./ex1.elf
	./ex2-3.elf

all: compile run