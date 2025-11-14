
#include "Pomodoro.h"

int main()
{
    while(exibool == false){
        menu();
        switch(menuNum)
        {
            case 1:
            pomo1();
            rep();
                break;

            case 2:
            pomo2();
            rep();
                break;

            default:
            return 0;
                break;

        }
    }
    return 0;
}