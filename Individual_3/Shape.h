#pragma once
#include "FrameRectangle.h"
#include "point.h"
#include "Ellipse.h"
#include "Regular.h"
class Shape
{
public:
	virtual double getarea() = 0;
	virtual FrameRectangle getFrameRectangle() = 0;
	virtual void move(Point p) = 0;
	virtual Shape* clone() = 0;
	virtual char* getname() = 0;
};

