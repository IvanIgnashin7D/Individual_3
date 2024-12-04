#include "Ellipse.h"
#include "FrameRectangle.h"
#include "Point.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
	

Ellipse::Ellipse(Point center, double rx, double ry) {
	Ellipse::center_ = center;
	Ellipse::rx_ = rx;
	Ellipse::ry_ = ry;
}

Ellipse::Ellipse(const Ellipse& fig)
{
	center_ = fig.center_;
	rx_ = fig.rx_;
	ry_ = fig.ry_;
}


double Ellipse::getarea()
{
	return (M_PI * Ellipse::rx_ * Ellipse::ry_);
}

FrameRectangle Ellipse::getFrameRectangle()
{
	return FrameRectangle(2.0 * rx_, 2.0 * ry_, center_);
}

void Ellipse::move(double x, double y)
{
	Ellipse::center_.setx(Ellipse::center_.getx() + x);
	Ellipse::center_.sety(Ellipse::center_.gety() + y);
}

Shape* Ellipse::clone()
{
	return new Ellipse(*this);
}


std::string Ellipse::getname()
{
	return "ELLIPSE";
}