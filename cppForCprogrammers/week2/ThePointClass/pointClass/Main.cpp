#include <iostream>
#include "Point.h"

int main() {
	Point *p = new Point();

	p->print();
	p->setPointval(10, 354);
	p->print();
	p->clearPoint();
	p->print();

	return 0;
}