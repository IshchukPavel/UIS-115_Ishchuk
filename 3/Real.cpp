#include "Real.h"
#include <cmath>

Real::Real(float val) {
	this->val = val;
}
 float Real::power(int power) {
	val = pow(val, power);
	return val;
}
 float Real::logarifm(float base) {
	 val = log(val) / log(base);
	 return val;
 }

