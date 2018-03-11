#include "Map.h"


Map::Map(float nx1, float nx2, float ny1, float ny2)
{
	if (nx1 > nx2)
	{
		x2 = nx1; 
		x1 = nx2;
	}
	else
	{
		x1 = nx1; 
		x2 = nx2;
	}
	if (ny1 > ny2)
	{
		y2 = ny1; 
		y1 = ny2;
	}
	else
	{
		y1 = ny1; 
		y2 = ny2;
	}
};
void Map::addObject(GeoObject newGO)
{
	int a = 0;
	if (newGO.getX() <= x2 && newGO.getX() >= x1 && newGO.getY() >= y1 && newGO.getY() <= y2)
		for (auto i = objects.begin(); i < objects.end(); i++)
			if (objects[i] == newGO)
				a = 1;
		if (a == 0)
			objects.push_back(newGO);
		
}; 
void Map::addAim(Aim newAim)
{
	int a = 0;
	if (newAim.getX() <= x2 && newAim.getX() >= x1 && newAim.getY() >= y1 && newAim.getY() <= y2)
		for (auto i = aims.begin(); i < aims.end(); i++)
			if (aims[i] == newAim)
				a = 1;
		if (a == 0)
			aims.push_back(newAim);
};
void Map::addUAV(UAV nemUAV)
{
	uavs.push_back(uav);
};
void Map::readGIS(string file)
{
};
void Map::divideTer()
{
};
