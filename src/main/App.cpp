#include <iostream>
#include "MyDate.h"
#include "Todo.h"
#include <string>

int main()
{
    MyDate d = MyDate(1, 17, 2020);
    Todo t = Todo(1, "Phone Interview 3pm", d, 5);
    std::cout << t.getId() << std::endl;
    return 0;
}