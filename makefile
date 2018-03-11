all: test
	
test: test.o  Object.o GeoObject.o PVO.o
	g++ -o test test.o GeoObject.o Object.o PVO.o
	
test.o: test.cpp
	g++ -c test.cpp
	
PVO.o: PVO.cpp PVO.h
	g++ -c PVO.cpp PVO.h

GeoObject.o: GeoObject.cpp GeoObject.h
	g++ -c GeoObject.cpp GeoObject.h Object.h
	
Object.o: Object.cpp Object.h
	g++ -c Object.cpp Object.h
	
clear:
	rm *.o *.gch
