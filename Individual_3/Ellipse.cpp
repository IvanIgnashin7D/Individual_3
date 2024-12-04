#include "Ellipse.h"
#include "FrameRectangle.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
	

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
	return FrameRectangle(2.0 * ry_, 2.0 * rx_, center_);
}

void Ellipse::move(Point p)
{
	Ellipse::center_ = p;
}


char* Ellipse::getname()
{
	return nullptr;
}

Shape* clone() {
	return new Ellipse(*this);
}