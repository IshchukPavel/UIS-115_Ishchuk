#include "Number.h"
#include <cmath>

Number::Number() {
	val = 0;
}
Number::Number(float n) : val(n) { }
Number Number::operator+(Number& other) {
    return this->val + other.val;
}
Number Number:: operator/(Number& other) {
    Number temp;
    if (other.val != 0) {
        temp.val = val / other.val;
        return temp;
    }
    else
    {
        throw invalid_argument("ƒеление на ноль");

    }
    
}
float Number::get_val() {
    return val;
}