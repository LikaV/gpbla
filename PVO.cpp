#include "PVO.h"

PVO::PVO(float nx, float ny, float nr, float np) : GeoObject(nx, ny, nr, true)
{
	p = np;
};
bool PVO::compile(float xuva, float yuva, float zuva)
{
	//cout << pow(pow(xuva - x, 2) + pow(yuva - y, 2) + pow(zuva - radius, 2), 0.5) << "  " << radius << " " << p*100 << '\n';
	if (pow(pow(xuva - x, 2) + pow(yuva - y, 2) + pow(zuva - radius, 2), 0.5) <= radius)
	{
		if (rand()%100 <= p*100)
			return true;
	}
	return false;
};
