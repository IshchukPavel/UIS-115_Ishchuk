#pragma once
struct Date {
	int year, month, day;
	Date(int year, int month, int day);
	bool LessZero();
};