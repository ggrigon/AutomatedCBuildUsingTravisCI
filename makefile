all: 01 02
01: 01.c
	gcc -o 01 01.c -I.

02: 02.c
	gcc -o 02 02.c -I.
