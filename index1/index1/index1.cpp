// index1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CLiuYing
{
private:
	int year;
	int month;
	int day;
public:
	CLiuYing();
	CLiuYing(int y, int m, int d);
	int setLiuYing(int y, int m, int d);
	void addOneDay();
	void printfLiuYing();
	int getYear();
	int getMonth();
	int getDay();

};
CLiuYing::CLiuYing()
{
	year = 2000;
	month = 10;
	day = 6;
}
CLiuYing::CLiuYing(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int CLiuYing::setLiuYing(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	return 0;
}
void CLiuYing::printfLiuYing()
{
	cout << year << "年" << month << "月" << day << "日" << endl;
}
int CLiuYing::getYear()
{
	return year;
}
int CLiuYing::getMonth()
{
	return month;
}
int CLiuYing::getDay()
{
	return day;
}
void CLiuYing::addOneDay()
{
	int flatYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	day++;
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		if (leapYearDays[month - 1] < day)
		{
			day = 1;
			month++;
		}
	}
	else
	{
		if (flatYearDays[month - 1] < day)
		{
			day = 1;
			month++;
		}
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
}
int main()
{
	CLiuYing od;
	int count = 1;
	od.setLiuYing(2000, 10, 6);
	od.printfLiuYing();
	for (count = 1; count<100; count++)
	{
		od.addOneDay();
		od.printfLiuYing();
	}

	return 0;
}
//	while (od.getYear()!=2019)((od.getYear() != 2019) || (od.getMonth() != 4) || (od.getDay() != 24))cout << count << endl;