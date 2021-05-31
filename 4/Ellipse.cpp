#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(double a, double b) : biggersemiaxis{ a }, smallersemiaxis{ b }{}

double Ellipse::Perimetr()
{
	 return (4 * 3.1415 * biggersemiaxis * smallersemiaxis + pow(biggersemiaxis - smallersemiaxis,2) / (biggersemiaxis + smallersemiaxis));
}

double Ellipse::Area()
{
	return 3.1415 * biggersemiaxis * smallersemiaxis;
}
