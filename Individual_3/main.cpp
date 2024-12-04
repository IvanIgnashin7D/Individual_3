#include "Point.h"
#include "FrameRectangle.h"
#include "Shape.h"
#include "Ellipse.h"
#include "Regular.h"
#include <iostream>


	int main() {
	Ellipse* ellipse1 = new Ellipse(Point(10, 10), 6.0, 3.0);
	std::cout << ellipse1->getname() << ' ';
	std::cout << ellipse1->getarea() << ' ';
	FrameRectangle ellipse1_FR = ellipse1->getFrameRectangle();
	std::cout << ellipse1_FR.getp().getx() - ellipse1_FR.getw() / 2.0 << ' ' << ellipse1_FR.getp().gety() - ellipse1_FR.geth() / 2.0 << ' ';
	std::cout << ellipse1_FR.getp().getx() + ellipse1_FR.getw() / 2.0 << ' ' << ellipse1_FR.getp().gety() + ellipse1_FR.geth() / 2.0 << '\n';


	Regular* regular1 = new Regular(Point(0.0, 0.0), Point(1.0, 2.0), Point(3.0, 1.0));
	std::cout << regular1->getname() << ' ';
	std::cout << regular1->getarea() << ' ';
	FrameRectangle regular1_FR = regular1->getFrameRectangle();
	std::cout << regular1_FR.getp().getx() - regular1_FR.getw() / 2.0 << ' ' << regular1_FR.getp().gety() - regular1_FR.geth() / 2.0 << ' ';
	std::cout << regular1_FR.getp().getx() + regular1_FR.getw() / 2.0 << ' ' << regular1_FR.getp().gety() + regular1_FR.geth() / 2.0 << '\n';
}