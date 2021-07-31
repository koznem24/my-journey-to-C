output: main.o hotel.o
	gcc main.o hotel.o -o output

main.o: main.c
	gcc -c main.c

hotel.o: hotel.c hotel.h 
	gcc -c hotel.c

clean:
	rm *.o output