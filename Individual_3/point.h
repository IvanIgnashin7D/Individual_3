#pragma once
class Point {
private:
	double x_;
	double y_;

public:
	Point() = default;
	Point(double posx, double posy);

	double getx() const;
	double gety() const;

	void setx(double x);
	void sety(double y);
};