
#include "Pomodoro.h"
int m1 = 34;
int s1 = 60;
int md1 = 6;
int sd1 = 0;

int pomo1()
{
    struct clockMain clockTime1;
//Work
    clockTime1.minute = numbers[m1];
    clockTime1.sec = numbers[s1];
    while(term == false)
    {
        cout<<numbers[m1]<<":"<<numbers[s1]<<"\n";
        if(numbers[s1] == "00")
        {
            m1-=1;
            clockTime1.minute = numbers[m1];
            s1 = 0;
            clockTime1.sec = numbers[s1];
        }
        s1+=1;
        clockTime1.sec = numbers[s1];
        this_thread::sleep_for(chrono::seconds(1));
        
        if(clockTime1.sec == "00" && clockTime1.minute == "00")
        {
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }
    }
//Rest
    clockTime1.minute = numbers[md1];
    clockTime1.sec = numbers[sd1];
    term = false;

    while(term == false)
    {
        cout<<clockTime1.minute<<":"<<clockTime1.sec<<flush;
        if(clockTime1.sec == "00")
        {
            clockTime1.minute = numbers[md1-1];
            sd1 = 60;
            clockTime1.sec = numbers[sd1];
        }
        clockTime1.sec = numbers[sd1-1];
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\b\b\b\b\b \b\b\b\b\b"; 
        if(clockTime1.sec == "00" && clockTime1.minute == "00")
        {
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }
    }    

    return 0;
}