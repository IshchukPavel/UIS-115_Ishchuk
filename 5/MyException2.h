#pragma once
#include<string>
using namespace std;
/**
* \brief ����������� ����� � ������, ��� �������� ������
*/
class MyException2 {
public:
	string message;
	explicit MyException2(const string &message);
	/**
	* \brief ���������� �� ���������
	*/
	~MyException2();
};
