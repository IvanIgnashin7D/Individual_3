#include "FrameRectangle.h"
#include "point.h"
#include <iostream>

FrameRectangle::FrameRectangle(double width, double height, Point pos) {
	FrameRectangle::width_ = width;
	FrameRectangle::height_ = height;
	FrameRectangle::pos_ = pos;
}
