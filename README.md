#include <iostream>

// Прототипи функцій з io.cpp
int readNumber();
void writeAnswer(int x);

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y); // передаємо результат в функцію writeAnswer()
    return 0;
}





#ifndef IO_H
#define IO_H

int readNumber();
void writeAnswer(int x);

#endif // IO_H



#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is " << x << std::endl;
}



#include "io.h"

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y); // передаємо результат в функцію writeAnswer()
    return 0;
}
