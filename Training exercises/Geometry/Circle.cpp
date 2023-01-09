#pragma once
#include "Geometry.cpp"
class Circle :public Geometry {
private:
	int r;
public:
	Circle() {}
	Circle(int r) :r(r) {}
	double perimeter()
	{
		return 2 * 3.14 * r;
	}
	double area()
	{
		return 3.14 * r * r;
	}
};