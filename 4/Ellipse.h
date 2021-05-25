#pragma once
#include"Figure.h"
/**
* \brief † ласс Ёллипс
*/
class Ellipse :Figure {
private:
	double biggersemiaxis, smallersemiaxis;
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Ellipse (double a, double b);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Ellipse() = default;

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
