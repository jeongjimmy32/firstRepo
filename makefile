CC = gcc
COBJ = -c
CFLAGS = -Wall -pedantic
OBJ = adder.o user.o main.o 

target: main.c adder.c user.c
	$(CC) $(COBJ) $(CFLAGS) adder.c user.c main.c
	gcc $(OBJ) -o main

clean: 
	rm $(OBJ) main