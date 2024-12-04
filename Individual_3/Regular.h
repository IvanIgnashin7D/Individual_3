#pragma once
#include "Point.h"
#include "Shape.h"
#include <string>
class Regular : public Shape
{
private:
	Point center_;
	Point a_;
	Point b_;
	double height_;
public:
	Regular() = default;
	Regular(Point center, Point a, Point b);
	Regular(const Regular& fig);
	Point getcenter();
	Point geta() const;
	Point getb() const;

	double getarea();
	FrameRectangle getFrameRectangle();
	void move(double x, double y);
	Shape* clone();
	std::string getname();

	Regular(const Point& center_, const Point& a_, const Point& b_, double height_)
		: center_(center_), a_(a_), b_(b_), height_(height_)
	{
	}
};
