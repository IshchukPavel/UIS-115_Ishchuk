#include "DateDifference.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Date Date1(2002, -3, 30);
	Date Date2(2021, 5, 28);

	if (Date1.LessZero() || Date2.LessZero())
		cout << "Дата введена неправильно!" << endl;
	else
		cout << DateDifference1(Date1, Date2) << endl;

	try {
		cout << DateDifference2(Date1, Date2) << endl;
	}
	catch (int) {
		cout << "Ошибка!Знаменатель равен 0, спецификатор throw" << endl;
	}

	try {
		cout << DateDifference3(Date1, Date2) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}

	try {
		cout << DateDifference4(Date1, Date2) << endl;
	}
	catch (MyException) {
		cerr << "Ошибка!Знаменатель равен 0, пустой класс" << endl;
	}

	try {
		cout << DateDifference5(Date1, Date2) << endl;
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}

	try {
		cout << DateDifference6(Date1, Date2) << endl;
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}