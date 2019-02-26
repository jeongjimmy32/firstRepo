CC = gcc
COBJ = -c
CFLAGS = -Wall -pedantic
CFILES = main.c mathfunc.c user.c
OBJ = mathfunc.o user.o main.o 

target: $(CFILES)
	$(CC) $(COBJ) $(CFLAGS) $(CFILES)
	gcc $(OBJ) -o main

clean: 
	rm $(OBJ) main