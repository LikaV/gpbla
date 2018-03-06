#include "Object.h"

class PVO: public GeoObject //переопределить isPVO как true
{
	float p; //вероятность быть сбитым в этой области
public:
	PVO(float nx, float ny, float nr, float np, bool npvo = true); // сначала вызвать конструктор родительского!
	bool compile(float xuva, float yuva, float zuva); //возвращает true, если координаты попадают в полусферу и БЛА сбит с учетом вероятности
};