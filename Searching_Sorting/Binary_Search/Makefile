all: 
	gcc -g -Wall binary.o main.o -o teste

*.o : 
	gcc -c $<

clean:
	rm -rf *.o

run:
	./teste

debug:
	valgrind ./teste


