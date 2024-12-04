#pragma once
#include "FrameRectangle.h"
#include "Point.h"
#include <string>

class Shape
{
public:
	virtual ~Shape() = default;
	virtual double getarea() = 0;
	virtual FrameRectangle getFrameRectangle() = 0;
	virtual void move(double x, double y) = 0;
	virtual Shape* clone() = 0;
	virtual std::string getname() = 0;
};

