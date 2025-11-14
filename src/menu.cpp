
#include "Pomodoro.h"

int menu(){
    cout<<"<";
    for(int i = 0; i < 75; i++){
        cout<<"="<<flush;
        this_thread::sleep_for(chrono::milliseconds(20));
    }
    cout<<">"<<endl;

    cout<<"/ ######                        #####                                       /"<<endl;
    cout<<"/ #     #  ####  #    #  ####  #     # #    # #  ####  #    # ###### #    # /"<<endl;
    cout<<"/ #     # #    # ##  ## #    # #       #    # # #    # #   #  #      ##   # /"<<endl;
    cout<<"/ ######  #    # # ## # #    # #       ###### # #      ####   #####  # #  # /"<<endl;
    cout<<"/ #       #    # #    # #    # #       #    # # #      #  #   #      #  # # /"<<endl;
    cout<<"/ #       #    # #    # #    # #     # #    # # #    # #   #  #      #   ## /"<<endl;
    cout<<"/ #        ####  #    #  ####   #####  #    # #  ####  #    # ###### #    # /"<<endl;
    cout<<"<===========================================================================>"<<endl<<endl;                                                                   
    cout<<"Choose the cycle of today Mr Chicken"<<endl;
    cout<<"\t1. 25 - 5"<<endl;
    cout<<"\t2. 50 - 10"<<endl;
    cout<<"\tAny other number to Exit"<<endl<<endl;
    cout<<"<===========================================================================>"<<endl<<endl;
    cout<<"Today you have done "<<cycleNum<<" cycles"<<endl<<endl;
    cout<<"<===========================================================================>"<<endl;
    cin>>menuNum;
    return 0;
}

int rep(){
    cout<<"Do you want to do other cycle? S/n:  "; cin>>exi;
    if(exi == 'S' || exi == 's'){
        exibool = false;
    }else{
        exibool = true;
    }
    return 0;
}