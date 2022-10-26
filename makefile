default: explode

explode: main.o
	gcc -o _explode_ main.o lab1.c


main.o: main.c
	gcc -c main.c 

clean:
	-rm -rf *.o _explode_ testing
