all: pd

pdm:main.o scientific calculator.o
	gcc -Wall -o pd main.o scientific calculator.o

main.o:main.c
	gcc -c -Wall main.c

scientific calculator.o:scientific calculator.c
	gcc -c -Wall scientific calculator.c
