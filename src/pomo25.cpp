
#include "Pomodoro.h"

int pomo1()
{
    struct clockMain clockTime1;
//Work
    clockTime1.minute1 = 2;
    clockTime1.minute2 = 5;
    clockTime1.sec1 = 0;
    clockTime1.sec2 = 0;

    cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
    while(term == false)
    {
        if(clockTime1.minute1 == 0 && clockTime1.minute2 == 0 && clockTime1.sec1 == 0 && clockTime1.sec2 == 0){
            this_thread::sleep_for(chrono::seconds(0));
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }if(clockTime1.minute1 != 0 && clockTime1.minute2 == 0 && clockTime1.sec1 == 0 && clockTime1.sec2 == 0){
            clockTime1.minute1--;
            clockTime1.minute2 = 9;
            clockTime1.sec1 = 5;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.minute1 != 0 && clockTime1.minute2 == 0){
            clockTime1.minute1--;
            clockTime1.minute2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec1 != 0 && clockTime1.sec2 == 0){
            clockTime1.sec1--;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec1 == 0 && clockTime1.sec2 == 0 && clockTime1.minute2 != 0){
            clockTime1.minute2--;
            clockTime1.sec1 = 5;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec2 > 0){
            clockTime1.sec2--;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }
    }
//Rest
    clockTime1.minute1 = 0;
    clockTime1.minute2 = 5;
    clockTime1.sec1 = 0;
    clockTime1.sec2 = 0;

    cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
    while(term == false)
    {
        if(clockTime1.minute1 == 0 && clockTime1.minute2 == 0 && clockTime1.sec1 == 0 && clockTime1.sec2 == 0){
            this_thread::sleep_for(chrono::seconds(0));
            cout<<"Tiempo Terminado"<<endl;
            term = true;
        }if(clockTime1.minute1 != 0 && clockTime1.minute2 == 0 && clockTime1.sec1 == 0 && clockTime1.sec2 == 0){
            clockTime1.minute1--;
            clockTime1.minute2 = 9;
            clockTime1.sec1 = 5;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.minute1 != 0 && clockTime1.minute2 == 0){
            clockTime1.minute1--;
            clockTime1.minute2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec1 != 0 && clockTime1.sec2 == 0){
            clockTime1.sec1--;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec1 == 0 && clockTime1.sec2 == 0 && clockTime1.minute2 != 0){
            clockTime1.minute2--;
            clockTime1.sec1 = 5;
            clockTime1.sec2 = 9;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }if(clockTime1.sec2 > 0){
            clockTime1.sec2--;
            this_thread::sleep_for(chrono::seconds(1));
            cout<<clockTime1.minute1<<clockTime1.minute2<<":"<<clockTime1.sec1<<clockTime1.sec2<<"\n";
        }
    }
    return 0;
}