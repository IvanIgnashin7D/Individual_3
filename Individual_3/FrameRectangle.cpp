#include "FrameRectangle.h"
#include "Point.h"
#include <iostream>

FrameRectangle::FrameRectangle(double width, double height, Point pos) {
	FrameRectangle::width_ = width;
	FrameRectangle::height_ = height;
	FrameRectangle::pos_ = pos;
}

double FrameRectangle::getw() const
{
	return width_;
}

double FrameRectangle::geth() const
{
	return height_;
}

Point FrameRectangle::getp() const
{
	return pos_;
}
