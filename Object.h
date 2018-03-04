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
	float x, y; 
public:
	Object(float nx, float ny);
	bool isPVO(); 
};

#endif