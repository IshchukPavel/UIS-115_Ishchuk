#include "Real.h"
#include <iostream>
using namespace std;

int main() {
	float n = 5;
	float m = 4.6;
	Number a(n);
	Number b(m);
	Real c(n);
	Real d(m);

	Number x = a + b;
	Number y = a / b;
	cout << "x =" << x.get_val() << endl;
	cout << "y =" << y.get_val() << endl;
	
	float logarifm = c.logarifm(2);
	float power = d.power(3);
	cout << "c =" << logarifm << endl;
	cout << "d =" << power << endl;
}