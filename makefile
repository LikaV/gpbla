all: test
	
test: test.o  Object.o GeoObject.o
	g++ -o test test.o GeoObject.o Object.o
	
test.o: test.cpp
	g++ -c test.cpp
	
GeoObject.o: GeoObject.cpp GeoObject.h
	g++ -c GeoObject.cpp GeoObject.h Object.h
	
Object.o: Object.cpp Object.h
	g++ -c Object.cpp Object.h
	
clear:
	rm *.o *.gch