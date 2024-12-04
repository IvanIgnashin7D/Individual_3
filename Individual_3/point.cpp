#include "Point.h"

Point::Point() {};

Point::Point(double posx, double posy) {
	Point::x_ = posx;
	Point::y_ = posy;
}

double Point::getx() const
{
	return x_;
}

double Point::gety() const
{
	return y_;
}

void Point::setx(double x)
{
	Point::x_ = x;
}

void Point::sety(double y)
{
	Point::y_ = y;
}