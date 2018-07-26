fav: main.o other.o
	gcc main.o other.o -o fav
main.o: main.c other.h
	gcc -c main.c
other.o: other.c other.h
	gcc -c other.c
clean:
	rm fav *.o
