#pragma once
#include"Figure.h"
/**
* \brief † ласс “реугольник
*/
class Triangle :Figure {
private:
	double foundation, side1, side2, height;
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Triangle(double f, double s1, double s2, double h);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Triangle() = default;

	/**
	* \brief ћетод, вычисл¤ющий периметр фигуры
	* \return ѕериметр фигуры
	*/
	double Perimetr();

	/**
	* \brief ћетод, вычисл¤ющий площадь фигуры
	* \return ѕлощадь фигуры
	*/
	double Area();
};