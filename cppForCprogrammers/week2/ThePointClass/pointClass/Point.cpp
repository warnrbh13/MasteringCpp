#include "Point.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, const Point& p)
{
	stream << p.x << ", " << p.y;
	return	stream;
}

void Point::print()
{	
	std::cout << *this  << std::endl;
}

void Point::setPointval( const double x, const double y)
{
	this->x = x;
	this->y = y;
}

void Point::clearPoint()
{
	this->x = 0;
	this->y = 0;
}
