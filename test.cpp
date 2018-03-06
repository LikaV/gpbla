#include "GeoObject.h"

int main()
{
	GeoObject gob(5, 5, 1);
	cout << gob.onWay(0, 0, 10, 10) << '\n';
	Object a = gob.point(0, 0, 10, 10);
	cout << a.getX() << " " << a.getY() << '\n';
	return 0;
}