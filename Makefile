objects = main.o factorial.o readline.o

all: $(objects)
	gcc $(objects) -o myfactorial

main.o: main.c factorial.o readline.o
	gcc -c main.c

factorial.o: factorial.c
	gcc factorial.c -c

readline.o:	readline.c
	gcc -c readline.c

.PHONY: clean
clean: 
<<<<<<< HEAD:MakeFile
	rm -f $(objects) myfactorial
=======
	rm -f *.o myfactorial
>>>>>>> 454418de4140ee2187345ee8de68de798bc2e261:Makefile
