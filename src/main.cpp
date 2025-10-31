
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
    cout<<"1. 25 - 5"<<endl;
    cout<<"2. 50 - 10"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>menuNum;
    return 0;
}

int pomo1()
{
    struct clockMain clockTime1;
    clockTime1.minute = 1;
    clockTime1.sec = 0;

    while(term == false)
    {
        cout<<clockTime1.minute<<":"<<clockTime1.sec<<endl;
        if(clockTime1.sec == 0)
        {
            clockTime1.minute -= 1;
            clockTime1.sec = 59;
        }
        clockTime1.sec -= 1;
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
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
