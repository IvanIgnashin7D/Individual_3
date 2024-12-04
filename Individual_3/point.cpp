#include "point.h"

Point::Point() {};

Point::Point(double posx, double posy) {
	Point::x_ = posx;
	Point::y_ = posy;
}

double Point::getx()
{
	return x_;
}

double Point::gety()
{
	return y_;
}


