
#include "Pomodoro.h"

int pomo1()
{
//Work
    countdown(2,5);
//Rest
    countdown(0,5);
    cycleNum++;
    return 0;
}

int pomo2()
{
    countdown(5,0);
//Rest
    countdown(1,0);
    cycleNum++;
    return 0;
}

int countdown(int m1, int m2){
    struct clockMain clockTime;

    clockTime.minute1 = m1;
    clockTime.minute2 = m2;
    clockTime.sec1 = 0;
    clockTime.sec2 = 0;
    term = false;

    cout<<"\r"<<clockTime.minute1<<clockTime.minute2<<":"<<clockTime.sec1<<clockTime.sec2<<flush;
    while(term == false){
        if(clockTime.minute1 == 0 && clockTime.minute2 == 0 && clockTime.sec1 == 0 && clockTime.sec2 == 0){
            this_thread::sleep_for(chrono::seconds(0));
            cout<<"\nTiempo Terminado"<<endl;
            term = true;
            continue;
        }else if(clockTime.minute1 != 0 && clockTime.minute2 == 0 && clockTime.sec1 == 0 && clockTime.sec2 == 0){
            clockTime.minute1--;
            clockTime.minute2 = 9;
            clockTime.sec1 = 5;
            clockTime.sec2 = 9;
        }else if(clockTime.minute1 != 0 && clockTime.minute2 == 0){
            clockTime.minute1--;
            clockTime.minute2 = 9;
        }else if(clockTime.sec1 != 0 && clockTime.sec2 == 0){
            clockTime.sec1--;
            clockTime.sec2 = 9;
        }else if(clockTime.sec1 == 0 && clockTime.sec2 == 0 && clockTime.minute2 != 0){
            clockTime.minute2--;
            clockTime.sec1 = 5;
            clockTime.sec2 = 9;
        }else if(clockTime.sec2 > 0){
            clockTime.sec2--;
        }
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\r"<<clockTime.minute1<<clockTime.minute2<<":"<<clockTime.sec1<<clockTime.sec2<<flush;
    }
    return 0;
}