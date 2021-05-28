#pragma once
struct Date {
	int year, month, day;
	Date(int year, int month, int day) :year{ year }, month{ month }, day{ day }{}
	bool LessZero() {
		return year < 0 || month < 0 || day < 0;
	}
};
