#pragma once
#include "Point.h"
#include "FrameRectangle.h"

class FrameRectangle
{
private:
	double width_;
	double height_;
	Point pos_;

public:
	FrameRectangle(double width, double height, Point pos);
	double getw() const;
	double geth() const;
	Point getp() const;
};

