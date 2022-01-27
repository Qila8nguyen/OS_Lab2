all: main.o factorial.o readline.o
	gcc main.o factorial.o readline.o -o myfactorial

main.o: main.c factorial.o readline.o
	gcc -c main.c

factorial.o: factorial.c
	gcc factorial.c -c

readline.o:	readline.c
	gcc -c readline.c

clean: 
	rm -f *.o myfactorial
