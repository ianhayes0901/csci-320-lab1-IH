default: explode

explode: main.o
	gcc -o _explode_ main.o lab1.c


main.o: main.c lab1.c
	gcc -c main.c lab1.c

clean:
	-rm -rf *.o _explode_ testing
