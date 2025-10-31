
#include <iostream>
#include <chrono>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    struct clock
    {
        std::chrono::_V2::system_clock;
    };
    cout<<std::chrono::system_clock;
}
