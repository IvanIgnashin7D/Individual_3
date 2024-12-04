#pragma once
#include "Point.h"
#include "FrameRectangle.h"
#include "Shape.h"
#include <string>

class Ellipse : public Shape
{
private:
	Point center_;
	double ry_;
	double rx_;

public:
	Ellipse() = default;
	Ellipse(Point center, double rx, double ry);
	Ellipse(const Ellipse& fig);
	double getarea();
	FrameRectangle getFrameRectangle();
	void move(double x, double y);	
	Shape* clone();
	std::string getname();
};

