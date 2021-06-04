#include"Date.h"
Date::Date(int year, int month, int day) :year{ year }, month{ month }, day{ day }{
	if (LessZero())
		throw 1;
}
bool Date::LessZero() {
	return year < 0 || month < 0 || day < 0;
}