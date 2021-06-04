#include "DateDifference.h"
int main() {
	setlocale(LC_ALL, "Russian");

	try {
		Date Date1(2002, -3, 30);
		Date Date2(2021, 5, 28);
		cout << DateDifference1(Date1, Date2) << endl;
	}
	catch(...){
		cout << "Ошибка!Дата введена неправильно, без спецификатора throw" << endl;
	}

	try {
			Date Date1(2002, -3, 30);
			Date Date2(2021, 5, 28);
			cout << DateDifference2(Date1, Date2) << endl;
	}
	catch (int) {
		cout << "Ошибка!Дата введена неправильно, спецификатор throw" << endl;
	}

	try {
		try {
			Date Date1(2002, -3, 30);
			Date Date2(2021, 5, 28);
			cout << DateDifference3(Date1, Date2) << endl;
		}
		catch (int) { throw invalid_argument{ "Ошибка!Дата введена неправильно, стандартное исключение" }; }
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}

	try {
		try {
			Date Date1(2002, -3, 30);
			Date Date2(2021, 5, 28);
			cout << DateDifference4(Date1, Date2) << endl;
		}
		catch (int) { throw MyException(); }
	}
	catch (MyException) {
		cerr << "Ошибка!Дата введена неправильно, пустой класс" << endl;
	}

	try {
		try {
			Date Date1(2002, -3, 30);
			Date Date2(2021, 5, -28);
			cout << DateDifference5(Date1, Date2) << endl;
		}
		catch (int) { throw MyException2("Ошибка!Дата введена неправильно, независимый класс с полями-параметрами функции"); }
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}

	try {
		try {
			Date Date1(2002, 3, 30);
			Date Date2(2021, -5, 28);
			cout << DateDifference6(Date1, Date2) << endl;
		}
		catch (int) { throw MyException3("Ошибка!Дата введена неправильно, класс наследник"); }
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}