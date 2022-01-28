objects = main.o factorial.o readline.o

all: $(objects)
	gcc $(objects) -o myfactorial

main.o: main.c factorial.o readline.o
	gcc -c main.c

factorial.o: factorial.c factorial.h
	gcc factorial.c -c

readline.o:	readline.c readline.h
	gcc -c readline.c

.PHONY: clean
clean: 
	rm -f $(objects) myfactorial
