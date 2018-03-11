#include "GeoObject.h"
#include "PVO.h"

int main()
{
	GeoObject gob(5, 5, 1);
	cout << gob.onWay(0, 0, 10, 10) << '\n';
	Object a = gob.point(0, 0, 10, 10);
	cout << a.getX() << " " << a.getY() << '\n';
	PVO pvo(4.5, 5.5, 4, 0.7);
	cout << pvo.compile(5, 5, 1) << '\n';
	return 0;
}
