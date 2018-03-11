#include "ChangeHeight.h"

ChangeHeight::ChangeHeight(float nx, float ny, float nh, bool npvo) : Object(nx, ny, npvo)
{
	height = nh;
};
bool ChangeHeight::upper(float height)
{
	if (height > h)
		return true;
	return false;
};
