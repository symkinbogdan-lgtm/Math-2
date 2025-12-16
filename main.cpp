#include "io.h"

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y); // передаємо результат в функцію writeAnswer()
    return 0;
}
