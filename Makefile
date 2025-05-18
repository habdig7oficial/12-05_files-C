compile:
	gcc src/ex1.c -o ex1.elf
	gcc src/ex2-3-4.c -o ex2-3-4.elf
	gcc src/ex6.c -o ex6.elf
	gcc src/ex7.c -o ex7.elf
	gcc src/ex14.c -o ex14.elf

run:
	./ex1.elf
	./ex2-3-4.elf
	./ex6.elf
	./ex7.elf
	./ex14.elf 

all: compile run