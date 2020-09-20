main: main.o code.o decode.o
	g++ main.o code.o decode.o -o main

main.o: main.cpp
	g++ -c main.cpp

code.o: code.cpp code.hpp
	g++ -c code.cpp

decode.o: decode.cpp decode.hpp
	g++ -c decode.cpp

clean:
	rm *.o main