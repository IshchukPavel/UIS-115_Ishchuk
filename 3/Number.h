#pragma once
#include <iostream>;
using namespace std;
class Number {
protected:

    /** \brief	Значение */
    float val;

public:

    /**
     \brief Конструктор по умолчанию */
    Number();

    /**
     \brief	Конструктор
     \param 	n	Переменная.
     */
    Number(float n);

    /**
     \brief	Оператор сложения
     \param [in,out]	other	The other.
     \returns	The result of the operation.
     */
    Number operator+(Number& other);

    /**
     \brief	Оператор деления
     \param [in,out]	other	The other.
     \returns	The result of the operation.
     */
    Number operator/(Number& other);

    /**
     \brief	Получает значение
     \returns	Возвращает значение.
     */
    float get_val();
}; 