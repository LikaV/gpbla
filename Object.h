#ifndef Object_h
#define Object_h

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <time.h>

using namespace std;

class Object
{
protected:
	float x, y; 
	bool pvo;
public:
	Object(float nx, float ny, bool npvo = false);
	bool isPVO(); 
	float getX();
	float getY();
};

#endif