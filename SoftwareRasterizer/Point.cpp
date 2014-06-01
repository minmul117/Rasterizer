#include "Point.h"

void Point::SetZero()
{
	_x = 0.f; _y = 0.f; _z = 0.f;
}

void Point::SetPoint(float x, float y, float z)
{
	_x = x; _y = y; _z = z;
}