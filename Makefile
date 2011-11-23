all:
	$(CC) ex1-1.c -o 1-1.o
	$(CC) ex1-2.c -o 1-2.o
	$(CC) ex1-3.c -o 1-3.o
	$(CC) ex1-4.c -o 1-4.o
	$(CC) ex1-5.c -o 1-5.o
	$(CC) ex1-6.c -o 1-6.o
	$(CC) ex1-7.c -o 1-7.o
	$(CC) ex1-8.c -o 1-8.o
	$(CC) ex1-9.c -o 1-9.o
	$(CC) ex1-10.c -o 1-10.o
	$(CC) ex1-12.c -o 1-12.o
	$(CC) ex1-13.c -o 1-13.o
	$(CC) ex1-14.c -o 1-14.o
	$(CC) ex1-15.c -o 1-15.o

clean:
	rm -rf a.out *~ *.o
