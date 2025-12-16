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
