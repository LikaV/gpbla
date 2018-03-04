class GeoObject: public Object //переопределить isPVO как false
{
	float radius;
public:
	GeoObject(float nx, float ny, float nr);  // сначала вызвать конструктор родительского! 
	bool onWay(float x1, float y1, float x2, float y2); //проверка, проходит ли прямая между двумя точками через объект
	Object point(float x1, float y1, float x2, float y2); //возвращает оптимальную точку для облёта
};