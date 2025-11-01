
#include "Pomodoro.h"

int pomo2()
{
    struct clockMain clockTime2;
//Work
    clockTime2.minute = 50;
    clockTime2.sec = 0;
    while(term == false)
    {
        cout<<clockTime2.minute<<":"<<clockTime2.sec<<flush;
        if(clockTime2.sec == 0)
        {
            clockTime2.minute -= 1;
            clockTime2.sec = 59;
        }
        clockTime2.sec -= 1;
        this_thread::sleep_for(chrono::seconds(1)); 
        cout<<"\b\b\b\b\b \b\b\b\b\b"; 
        if(clockTime2.sec == 0 && clockTime2.minute == 0)
        {
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }
    }
//Rest
    clockTime2.minute = 10;
    clockTime2.sec = 0;

    while(term == false)
    {
        cout<<clockTime2.minute<<":"<<clockTime2.sec<<flush;
        if(clockTime2.sec == 0)
        {
            clockTime2.minute -= 1;
            clockTime2.sec = 59;
        }
        clockTime2.sec -= 1;
        this_thread::sleep_for(chrono::seconds(1)); 
        cout<<"\b\b\b\b\b \b\b\b\b\b"; 
        if(clockTime2.sec == 0 && clockTime2.minute == 0)
        {
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }
    }
    return 0;
}