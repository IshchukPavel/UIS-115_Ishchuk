#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief  ласс насследник от стандартного исключени¤, дл¤ возврата ошибки
*/
class MyException3 :public invalid_argument {
public:
	explicit MyException3(const string& message);

	/**
	* \brief ƒеструктор по умолчанию
	*/
	~MyException3();
};
