#pragma once
#pragma once
#include<iostream>
#include<exception>
#include "Date.h"
#include "MyException.h"
#include "MyException2.h"
#include "MyException3.h"

bool IsLeapDate(unsigned int year);
/**
* \brief ������� ��������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int Difference(Date& Date1, Date& Date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int  DateDifference1(Date& Date1, Date& Date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int  DateDifference2(Date& Date1, Date& date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int  DateDifference3(Date& Date1, Date& Date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int DateDifference4(Date& Date1, Date& Date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int DateDifference5(Date& Date1, Date& date2);

/**
* \brief ������� ���������� ������� ����� ������ � ����, ������������ �� ��������
* \param Date1 ����
* \param Date2 ����
* \return ������� ����� ������ � ����
*/
int DateDifference6(Date& Date1, Date& Date2);