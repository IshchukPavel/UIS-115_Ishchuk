#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief ����� ���������� �� ������������ ����������, ��� �������� ������
*/
class MyException3 :public invalid_argument {
public:
	explicit MyException3(const string& message);

	/**
	* \brief ���������� �� ���������
	*/
	~MyException3();
};
