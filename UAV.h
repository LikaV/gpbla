class UAV
{
	float x, y, z;
	int t; // текущее время
	float radioview; //радиовидимость
	float focus;
	vector<GeoObject> points; //точки, через которые он должен пролететь
	vector<Aim> aims;
public:
	UAV(float nx, float ny, float nz, int nt); //первичная инициализация
	void addPoint(GeoObject point); 
	void addAim(Aim newAim);
	void iteration(dt); //моделирование полета
	void deleteAim(Aim aim); //когда цель кто-то отснял
};