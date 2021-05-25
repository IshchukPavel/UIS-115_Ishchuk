#include<iostream>
#include"Triangle.h"
#include"Square.h"
#include"Ellipse.h"
int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << "¬ыберите фигуру:\n1 - “реугольник\n2 -  вадрат\n3 - Ёллипс" << endl;
	int a;
	cin >> a;
	Triangle Triangle(6, 5, 5, 4);
	Square Square(4);
	Ellipse Ellipse(8, 6);
	switch (a)
	{
	case 1:
		cout << "ѕериметр треугольника равен: " << Triangle.Perimetr() << endl;
		cout << "ѕлощадь треугольника равна: " << Triangle.Area() << endl;
		break;
	case 2:
		cout << "ѕериметр квадрата равен: " << Square.Perimetr() << endl;
		cout << "ѕлощадь квадрата равна: " << Square.Area() << endl;
		break;
	case 3:
		cout << "ѕериметр эллипса равен: " << Ellipse.Perimetr() << endl;
		cout << "ѕлощадь эллипса равна: " << Ellipse.Area() << endl;
		break;
	default:
		cout << "‘игура выбрана неправильно." << endl;
		break;
	}
}