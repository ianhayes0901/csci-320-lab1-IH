explode: main.o
	gcc -o _explode_ main.o

main.o: main.c
	gcc -c main.c

testing: lab1.o
	gcc -o testing lab1.o

lab1.L: lab1.c
	gcc -c lab1.c

clean:
	-rm -rf *.o explode
