compile:
	gcc src/ex1.c -o ex1.elf
	gcc src/ex2.c -o ex2.elf

run:
	./ex1.elf
	./ex2.elf

all: compile run