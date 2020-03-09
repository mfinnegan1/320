#valgrind --leak-check=yes ./test
#file where everything is compiled
# Makefile for lab4.cpp

#rule for making the executable file test
test: Lab6Driver.o Lab6.o
	g++ Lab6Driver.o Lab6.o -o test

#rule for making lab1Driver.o
lab6Driver.o: Lab6Driver.cpp
	g++ -c -g Lab6Driver.cpp

Lab6.o: Lab6.cpp Lab6.h
	g++ -c -g Lab6.cpp

# rule for cleaning up
clean:
	rm Lab6Driver.o Lab6.o
