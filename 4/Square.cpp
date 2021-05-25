#include "Square.h"

Square::Square(double s) : side{ s }{}

double Square::Perimetr()
{
	return side * 4;
}

double Square::Area()
{
	return side * side;
}
