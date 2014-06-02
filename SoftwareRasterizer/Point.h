#ifndef POINT_H
#define POINT_H
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


class Color
{
public:
	float R, G, B, A;

	Color(float r = 1.0f, float g = 1.0f, float b = 1.0f, float a = 1.0f);
};
#endif