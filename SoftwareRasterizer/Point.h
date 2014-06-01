#include <GL/glut.h>

class Point
{
private:
	float _x, _y, _z;

public:
	Point();
	Point(float x, float y, float z)
	{
		_x = x; _y = y; _z = z;
	}
	~Point();

	void SetZero();
	void SetPoint(float x, float y, float z);

	float GetX()	{return _x;}
	float GetY()	{return _y;}
	float GetZ()	{return _z;}
};