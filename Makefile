#Makefile

all: add-nbo
	
add-nbo: add-nbo.o main.o
	g++ -o add-nbo add-nbo.o main.o

add-nbo.o: add-nbo.h add-nbo.cpp
#	g++ -c add-nbo.h add-nbo.cpp

main.o: add-nbo.h main.cpp
#	g++ -c add-nbo.h main.cpp

clean:
	rm -f *.o
	rm -f add-nbo
	
