//inclusion of system libraries
#include <iostream>
#include <iomanip>
using namespace std;


//inclusion of user space libaries
#include "labInfo.h"



int main()
{
    labInfo lab;
    lab.name = "stephen";
    lab.labID = "Lab using classes";
    int valDay = lab.getDay();
    lab.setDate(20,02,2021);


    //Test Cases
    for(int day = -10;day<=40;++day){
        for(int month =-1;month<21;++month){
            //True test case
            if(lab.setDate(day,month,2021)){
             lab.printInfo();
            }
            else{
             //cout<<"Fail "<<"day "<<day<<"month "<<month<<endl;
            }

        }
    }
    //Test leap years
    cout<<endl;
    cout<<"!! Test leap years"<<endl;
    lab.setDate(29,02,2022);
    lab.printInfo();
    //2024 is a leap year
    lab.setDate(29,02,2024);
    lab.printInfo();


    return 0;
}
