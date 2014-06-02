#ifndef RASTERIZER_H
#define RASTERIZER_H

#include "Point.h"

class Rasterizer
{
private:
	int w, h;
public:
	Rasterizer();
	~Rasterizer();
	void DrawLine();
};

#endif