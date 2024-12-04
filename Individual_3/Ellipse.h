#pragma once
#include "point.h"
#include "FrameRectangle.h"
#include "Shape.h"

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
	void move(Point p) override;	
	Shape* clone() override;
	char* getname();
};

