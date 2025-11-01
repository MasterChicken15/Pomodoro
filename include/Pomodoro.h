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
    int minute;
    int sec;
};

#endif

#pragma once
extern int menuNum;
extern bool term;

int menu();
int pomo1();
int pomo2();
