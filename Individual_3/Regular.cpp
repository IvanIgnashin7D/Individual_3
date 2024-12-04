#include "Regular.h"
#include <cmath>
#include <string>

Regular::Regular(Point center, Point a, Point b)
{
	Regular::center_ = center;
	Regular::a_ = a;
	Regular::b_ = b;

	Regular::height_ = sqrt(pow(Regular::center_.getx() - Regular::a_.getx(), 2) + pow(Regular::center_.gety() - Regular::a_.gety(), 2)) * 2;
}


Regular::Regular(const Regular& fig)
{
	center_ = fig.center_;
	a_ = fig.a_;
	b_ = fig.b_;
}


Point Regular::getcenter()
{
	return Regular::center_;
}


Point Regular::geta() const {
	return Regular::a_;
}


Point Regular::getb() const
{
	return Regular::b_;
}


double Regular::getarea() {
	return pow(Regular::height_, 2);
}


FrameRectangle Regular::getFrameRectangle()
{
	if (Regular::b_.getx() - Regular::center_.getx() >= Regular::b_.gety() - Regular::center_.gety())
		return FrameRectangle((Regular::b_.getx() - Regular::center_.getx()) * 2, (Regular::b_.getx() - Regular::center_.getx()) * 2, Regular::center_);

	else
		return FrameRectangle((Regular::b_.gety() - Regular::center_.gety()) * 2, (Regular::b_.gety() - Regular::center_.gety()) * 2, Regular::center_);
}


void Regular::move(double x, double y)
{
	Regular::center_.setx(Regular::center_.getx() + x);
	Regular::center_.sety(Regular::center_.gety() + y);

	Regular::a_.setx(Regular::a_.getx() + x);
	Regular::a_.sety(Regular::a_.gety() + y);

	Regular::b_.setx(Regular::b_.getx() + x);
	Regular::b_.sety(Regular::b_.gety() + y);
}


Shape* Regular::clone()
{
	return new Regular(*this);
}


std::string Regular::getname()
{
	return "REGULAR";
}
