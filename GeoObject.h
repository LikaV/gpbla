class GeoObject
{
	float x, y; 
	float radius; //??
public:
	GeoObject(float nx, float ny, float nr);
	bool onWay(float x1, float y1, float x2, float y2); //проверка, проходит ли прямая между двумя точками через объект
	GeoObject point(float x1, float y1, float x2, float y2); //возвращает оптимальную точку для облёта
};