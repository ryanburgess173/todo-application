#pragma once
#include "MyDate.h"
#include <string>

class Todo
{
private:
    int id;
    std::string name;
    MyDate date;
    int urgency;

public:
    Todo(int id, std::string name, MyDate date, int urgency);
    int getId();
    void setId(int id);
};