#include "Object.h"

Object::Object(float nx, float ny, bool npvo)
{
	x = nx;
	y = ny;
	pvo = npvo;
}
bool Object::isPVO()
{
	return pvo;
}
float Object::getX()
{
	return x;
}
float Object::getY()
{
	return y;
}