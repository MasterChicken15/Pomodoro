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
    string minute;
    string sec;
};

#endif

#pragma once
extern string numbers[60];
extern int menuNum;
extern bool term;

int menu();
int pomo1();
int pomo2();
