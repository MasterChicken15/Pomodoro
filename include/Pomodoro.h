#ifndef POMODORO_H
#define POMODORO_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
using namespace std;

struct clockMain
{
    int minute1;
    int minute2;
    int sec1;
    int sec2;
};

#endif

#pragma once
extern string numbers[60];
extern int cycleNum;
extern int menuNum;
extern int m1;
extern int m2;
extern char exi;
extern bool exibool;
extern bool term;

int menu();
int pomo1();
int pomo2();
int rep();
int countdown(int m1,int m2);
