OBJS = binary.o main.o


all: $(OBJS)
	gcc -g -Wall $^ -o teste

%.o : $(OBJS:.o=.c)	
	gcc -c $^

clean:
	rm -rf *.o

run:
	./teste

debug:
	valgrind ./teste


