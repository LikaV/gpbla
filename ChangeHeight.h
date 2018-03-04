class ChangeHeight: public GeoObject //это довольно странно, но нужно, чтобы было удобно хранить точки, которые облетает бла
{
	float height; //на какую высоту поднимаемся/снижаемся
public:
	ChangeHeight(float nx, float ny, float nrh); // сначала вызвать конструктор родительского! с радиусом 0 (?)
};