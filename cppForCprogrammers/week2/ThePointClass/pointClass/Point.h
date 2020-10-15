#pragma once
#include <iostream>

class Point {
public:
	friend std::ostream& operator<<(std::ostream& stream, const Point& p);
	Point() :x(0), y(0) {};
	void print();
	void setPointval(const double x, const double y);
	void clearPoint();

private:
	double x, y;
};