#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief Класс насследник от стандартного исключения, для возврата ошибки
*/
class MyException3 :public invalid_argument {
public:
	explicit MyException3(const string& message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~MyException3();
};
