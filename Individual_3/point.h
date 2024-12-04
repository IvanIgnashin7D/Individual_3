#pragma once
class Point {
private:
	double x_;
	double y_;

public:
	Point();
	Point(double posx, double posy);

	double getx();
	double gety();
};