#pragma once
#include"Figure.h"
/**
* \brief † ласс  вадрат
*/
class Square :Figure {
private:
	double side;
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Square(double s);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Square() = default;

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
