class Map
{
	float x1, x2, y1, y2; //координаты верхнего левого и нижнего правого углов
	vector<GeoObject> objects; //препятствия и ПВО
	vector<Aim> aims;
	vector<UAV> uavs;
public:
	Map(float nx1, float nx2, float ny1, float ny2); //первичная инициализация
	void addObject(GeoObject newGO); 
	void addAim(Aim newAim);
	void addUAV(UAV nemUAV);
	void readGIS(string file); //у меня где-то есть работа с этим форматом
	void divideTer();//разделение территории, каждому бла назначаются цели и передается массив объектов на его территоррии (???)
};