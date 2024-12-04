#include "Regular.h"

Regular::Regular(Point& center, Point& a, Point& b)
{
	Regular::center_ = center;
	Regular::a_ = a;
	Regular::b_ = b;
}

double Regular::getarea() {
	return 0.0;
}

Point Regular::geta() {
	return Regular::a_;
}

Point Regular::getb()
{
	return Regular::b_;
}
