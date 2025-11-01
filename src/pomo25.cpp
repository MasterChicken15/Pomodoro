
#include "Pomodoro.h"
bool term1 = false;
int pomo1()
{
    struct clockMain clockTime1;
//Work
    clockTime1.minute = 0;
    clockTime1.sec = 15;
    while(term1 == false)
    {
        cout<<clockTime1.minute<<":"<<clockTime1.sec<<flush;
        if(clockTime1.sec == 0)
        {
            clockTime1.minute -= 1;
            clockTime1.sec = 59;
        }
        clockTime1.sec -= 1;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\b\b\b\b\b \b\b\b\b\b";
        if(clockTime1.sec == 0 && clockTime1.minute == 0)
        {
            cout<<"Tiempo Terminado"<<endl;
            term1 = true;
        }
    }
//Rest
    clockTime1.minute = 0;
    clockTime1.sec = 30;
    term1 = false;

    while(term1 == false)
    {
        cout<<clockTime1.minute<<":"<<clockTime1.sec<<flush;
        if(clockTime1.sec == 0)
        {
            clockTime1.minute -= 1;
            clockTime1.sec = 59;
        }
        clockTime1.sec -= 1;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\b\b\b\b\b \b\b\b\b\b"; 
        if(clockTime1.sec == 0 && clockTime1.minute == 0)
        {
            cout<<"Tiempo Terminado"<<endl;
            term1 = true;
        }
    }    

    return 0;
}