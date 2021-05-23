#pragma once
#include <cmath>
#include "Number.h"
using namespace std;
class Real : public Number {
public:

	/**
	 \brief	Конструктор
	 \param		val	Значение.
	 */
	Real(float val); 

	/**
	 \brief	Степень
	 \param 	power	Степень числа.
	 \returns	A float.
	 */
	float power(int power);

	/**
	 \brief	Логарифм
	 \param 	base	Основание логарифма.
	 \returns	A float.
	 */
	float logarifm(float base);
};
