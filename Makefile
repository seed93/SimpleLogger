all:
	g++ -g -c simplog.c
	g++ -g -o example example.c simplog.o

clean:
	rm *.o example