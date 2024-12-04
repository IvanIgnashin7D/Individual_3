#pragma once
#include "point.h";
#include "Shape.h"
class Regular : public Shape
{
private:
	Point center_;
	Point a_;
	Point b_;
public:
	Regular() = default;
	Regular(Point& center, Point& a, Point& b);
	double getarea();
	Point geta();
	Point getb();
};
