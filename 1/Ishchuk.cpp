#include "Rhombus.h"
#include <iostream>
using namespace std;

int main()
{
	Rhombus a(0, 0, 5, 10);
	cout << "[" << a.get_up_vertex_rhombus_x1() << ";" << a.get_down_vertex_rhombus_y2() << "]" << endl;
	cout << a.get_perimeter() << endl;
	cout << a.get_area() << endl;
	cout << "[" << a.get_inverted_rhombus_coordinate_x1() << ";" << a.get_inverted_rhombus_coordinate_y1() << "]" << endl;
}