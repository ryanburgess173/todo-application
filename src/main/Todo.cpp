#include "Todo.h"
#include "MyDate.h"
#include <string>

Todo::Todo(int id, std::string name, MyDate d, int urgency){
    this->id = id;
    this->name = name;
    this->date = d;
    this->urgency = urgency;
}

int Todo::getId(){
    return this->id;
}
void Todo::setId(int id){
    this->id = id;
}