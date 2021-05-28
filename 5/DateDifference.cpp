#include "DateDifference.h"
int Difference(Date& Date1, Date& Date2) {
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = 0;
	int c[] = { 0,0 }, e[] = { 0,0 };
	for (int i = Date1.year + 1; i < Date2.year; i++) {
		if (i % 4 == 0)
			day += 366;
		else
			day += 365;
	}
	c[1] = Date2.day;
	for (int i = 0; i < Date2.month - 1; i++) {
		if (i == 1 and Date1.year % 4 == 0)
			c[0] += 1;
		c[0] += month[i];
	}
	e[1] = month[Date1.month - 1] - Date1.day;

	for (int i = Date1.month; i < 12; i++) {
		if (i == 1 && Date1.year % 4 == 0)
			e[0] += 1;
		e[0] += month[i];
	}
	day += e[0] + e[1] + c[0] + c[1];
	return day;
}

int DateDifference1(Date& Date1, Date& Date2) {
	return Difference(Date1, Date2);
}
int DateDifference2(Date& Date1, Date& Date2) {
	if (Date1.LessZero() || Date2.LessZero())
		throw 1;
	else
		return Difference(Date1, Date2);
}
int DateDifference3(Date& Date1, Date& Date2) {
	if (Date1.LessZero() || Date2.LessZero())
		throw invalid_argument{ "Ошибка!Дата введена неправильно, стандартное исключение" };
	else
		return Difference(Date1, Date2);
}
int DateDifference4(Date& Date1, Date& Date2) {
	if (Date1.LessZero() || Date2.LessZero())
		throw MyException();
	else
		return Difference(Date1, Date2);
}
int DateDifference5(Date& Date1, Date& Date2) {
	if (Date1.LessZero() || Date2.LessZero())
		throw MyException2("Ошибка!Дата введена неправильно, независимый класс с полями-параметрами функции");
	else
		return Difference(Date1, Date2);
}
int DateDifference6(Date& Date1, Date& Date2) {
	if (Date1.LessZero() || Date2.LessZero())
		throw MyException3("Ошибка!Дата введена неправильно, класс наследник");
	else
		return Difference(Date1, Date2);
}