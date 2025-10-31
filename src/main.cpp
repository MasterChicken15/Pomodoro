
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
using namespace std;

struct clockMain
{
    int minute;
    int sec;
};

int menuNum;
bool term = false;

int menu()
{
    for(int i = 0; i <= 100; i++)
    {
    cout<<"\rStarting Pomodoro "<<i<<"%"<<flush;
    this_thread::sleep_for(chrono::milliseconds(20));
    }
    cout<<endl<<endl;

    cout<<"<===========================================================================>"<<endl;
    cout<<"/ ######                        #####                                       /"<<endl;
    cout<<"/ #     #  ####  #    #  ####  #     # #    # #  ####  #    # ###### #    # /"<<endl;
    cout<<"/ #     # #    # ##  ## #    # #       #    # # #    # #   #  #      ##   # /"<<endl;
    cout<<"/ ######  #    # # ## # #    # #       ###### # #      ####   #####  # #  # /"<<endl;
    cout<<"/ #       #    # #    # #    # #       #    # # #      #  #   #      #  # # /"<<endl;
    cout<<"/ #       #    # #    # #    # #     # #    # # #    # #   #  #      #   ## /"<<endl;
    cout<<"/ #        ####  #    #  ####   #####  #    # #  ####  #    # ###### #    # /"<<endl;
    cout<<"<===========================================================================>"<<endl;                                                                   
    cout<<"\t1. 25 - 5"<<endl;
    cout<<"\t2. 50 - 10"<<endl;
    cout<<"\t3. Exit"<<endl;
    cout<<"<===========================================================================>"<<endl;
    cin>>menuNum;
    return 0;
}

int pomo1()
{
    struct clockMain clockTime1;
//Work
    clockTime1.minute = 0;
    clockTime1.sec = 15;
    while(term == false)
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
            term = true;
        }
    }
//Rest
    clockTime1.minute = 0;
    clockTime1.sec = 30;
    term = false;

    while(term == false)
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
            term = true;
        }
    }    

    return 0;
}

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