#include "MyDate.h"
#include <string>

MyDate::MyDate() {}
MyDate::~MyDate() {}
MyDate::MyDate(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}

int MyDate::getMonth()
{
    return this->month;
}
void MyDate::setMonth(int month)
{
    this->month = month;
}

int MyDate::getDay()
{
    return this->day;
}
void MyDate::setDay(int day)
{
    this->day = day;
}

int MyDate::getYear()
{
    return this->year;
}
void MyDate::setYear(int year)
{
    this->year = year;
}