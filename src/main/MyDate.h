#pragma once
class MyDate
{
public:
    MyDate();
    ~MyDate();
    MyDate(int month, int day, int year);

private:
    int month, day, year;

public:
    int getMonth();
    void setMonth(int month);
    int getDay();
    void setDay(int day);
    int getYear();
    void setYear(int year);
};