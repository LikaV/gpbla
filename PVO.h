class PVO: public GeoObject
{
	float p; //вероятность быть сбитым в этой области
public:
	PVO(float nx, float ny, float nr, float np); // сначала вызвать конструктор родительского!
	bool compile(float zuva, float zuva, float zuva); //возвращает true, если координаты попадают в полусферу и БЛА сбит с учетом вероятности
};