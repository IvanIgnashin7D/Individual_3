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
	double getarea() override;
	FrameRectangle getFrameRectangle() override;
	void move(double x, double y) override;	
	Shape* clone() override;
	std::string getname() override;

	Ellipse(const Point& center_, double ry_, double rx_) : center_(center_), ry_(ry_), rx_(rx_){}
};

