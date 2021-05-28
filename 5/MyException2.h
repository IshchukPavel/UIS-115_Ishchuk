#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями, для возврата ошибки
*/
class MyException2 {
public:
	string message;
	explicit MyException2(string message);
	/**
	* \brief Деструктор по умолчанию
	*/
	~MyException2();
};
