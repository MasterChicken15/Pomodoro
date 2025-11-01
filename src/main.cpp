
#include "Pomodoro.h"
#include "pomo25.cpp"
#include "pomo50.cpp"
#include "menu.cpp"

int main()
{
    menu();
    switch(menuNum)
    {
        case 1:
        pomo1();
            break;

        case 2:
        pomo2();
            break;

        default:

            break;
    }
    system("pause");
}