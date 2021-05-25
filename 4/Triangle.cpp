#include "Triangle.h"

Triangle::Triangle(double f, double s1, double s2, double h) : foundation{ f }, side1{ s1 }, side2{ s2 }, height{ h }{}

double Triangle::Perimetr()
{
	return foundation + side1 + side2;
}

double Triangle::Area()
{
	return (foundation + height) / 2;
}
