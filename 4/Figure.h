#pragma once
/**
* \brief † ласс геометрические фигуры
*/
class Figure {
public:
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий периметр фигуры
	*/
	virtual double Perimetr() = 0;
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий площадь фигуры
	*/
	virtual double Area() = 0;

	/**
	* \brief ¬иртуальный  деструктор
	*/
	virtual ~Figure() = 0;
};