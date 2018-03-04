#include "Object.h"

class Aim: public Object
{
	float z; //для учета рельефа
public:
	Aim(float nx, float ny, float nz); // сначала вызвать конструктор родительского! 
};