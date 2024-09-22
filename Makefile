all: T0

T0.o: T0.cpp T0.h
	g++ -c T0.cpp

main.o: main.cpp T0.h
	g++ -c main.cpp

T0: main.o T0.o
	g++ -o T0 T0.o main.o

clean:
	rm -f *.o T0

test: all
	./T0
