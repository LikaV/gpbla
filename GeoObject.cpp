#include "GeoObject.h"

GeoObject::GeoObject(float nx, float ny, float nr, bool npvo) : Object(nx, ny, npvo)
{
	radius = nr;
};
bool GeoObject::onWay(float x1, float y1, float x2, float y2)
{
	if ((((x <= x2)&&(x >= x1))||((x <= x1)&&(x >= x2)))&&(((y <= y2)&&(y >= y1))||((y <= y1)&&(y >= y2))))
	{
		//попадает в прямоугольник
		float k = (y2 - y1)/(x2 - x1);
		float b = y1 - x1*(y2 - y1)/(x2 - x1);
		float d = (pow((2*k*b - 2*x - 2*y*k), 2) - (4 + 4*k*k)*(b*b - radius*radius + x*x + y*y - 2*y*b));   
		if(d < 0) 
		{
			cout<<"\n\nПрямая и окружность не пересекаются"; 
			return false;
		}  
		return true;
	}
	return false;
};
Object GeoObject::point(float x1, float y1, float x2, float y2)
{
	float k = (y2 - y1)/(x2 - x1);
	float b = y1 - x1*(y2 - y1)/(x2 - x1);
	//cout << k << " " << b << '\n';
	float d = pow((2*k*b - 2*x - 2*y*k), 2) - (4 + 4*k*k)*(b*b - radius*radius + x*x + y*y - 2*y*b);
	float x1cross = ((-(2*k*b - 2*x - 2*y*k) - sqrt(d))/(2 + 2*k*k));     
	float x2cross = ((-(2*k*b - 2*x - 2*y*k) + sqrt(d))/(2 + 2*k*k)); 
	float y1cross = k*x1cross + b;     
	float y2cross = k*x2cross + b;
	//cout << x1cross << " " << y1cross << '\n';
	//cout << x2cross << " " << y2cross << '\n';
	float xcentre = (x1cross + x2cross)/2;
	float ycentre = k*xcentre + b;
	//cout << xcentre << " " << ycentre << '\n';
	/*if (xcentre == x)
	{
		if (ycentre == y)
	}
	k = (ycentre - y)/(xcentre - x);
	b = y - x*(ycentre - y)/(xcentre - x);*/
	k = - 1/k;
	b = ycentre - k*xcentre;
	d = (pow((2*k*b - 2*x - 2*y*k), 2) - (4 + 4*k*k)*(b*b - radius*radius + x*x + y*y - 2*y*b));
	//cout << k << " " << b << " " << d << '\n';
	x1cross = ((-(2*k*b - 2*x - 2*y*k) - sqrt(d))/(2 + 2*k*k));     
	x2cross = ((-(2*k*b - 2*x - 2*y*k) + sqrt(d))/(2 + 2*k*k));
	y1cross = k*x1cross + b;     
	y2cross = k*x2cross + b;
	//cout << x1cross << " " << y1cross << '\n';
	//cout << x2cross << " " << y2cross << '\n';
	if ((x1cross - xcentre)*(x1cross - xcentre) + (y1cross - ycentre)*(y1cross - ycentre) < (x2cross - xcentre)*(x2cross - xcentre) + (y2cross - ycentre)*(y2cross - ycentre))
		return Object(x1cross, y1cross);
	else
		return Object(x2cross, y2cross);
}
