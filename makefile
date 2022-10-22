default: explode

explode: main.o
	gcc -o _explode_ main.o lab1.c


main.o: main.c lab1.c
	gcc -c main.c lab1.c

testing: lab1.o
	gcc -o testing lab1.o

lab1.L: lab1.c
	gcc -c lab1.c

clean:
	-rm -rf *.o _explode_ testing
