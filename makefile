#valgrind --leak-check=yes ./test
#file where everything is compiled
# Makefile for lab4.cpp

#rule for making the executable file test
test: Lab4Driver.o matrix.o
	g++ Lab4Driver.o matrix.o -o test

#rule for making lab1Driver.o
lab4Driver.o: Lab4Driver.cpp
	g++ -c -g Lab4Driver.cpp

matrix.o: matrix.cpp matrix.h
	g++ -c -g matrix.cpp

# rule for cleaning up
clean:
	rm Lab4Driver.o matrix.o
