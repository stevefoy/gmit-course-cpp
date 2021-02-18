#include "labInfo.h"

bool labInfo::setDate(int dayTemp,int monthTemp,int yearTemp)
{
        //Set the date
        if(setDay(dayTemp)&&setMonth(monthTemp)&&setYear(yearTemp)){
            //final check
            bool  finalCheckDays = leapYearAndMonthCheck();

            if(finalCheckDays!=true){
                cout<<"Error Date does not exist"<<endl;
            }
            return finalCheckDays;
        }
        else{
            return false;
        }

    //Default return
    return false;
}

void labInfo::printInfo(){
    cout<<name<<endl;
    cout<<labID<<endl;
    cout<<std::setw(2)<<std::setfill('0')<<day<<":"<<setw(2)<<setfill('0')<<month<<":"<<setw(4)<<year<<endl;
}


bool labInfo::setDay(int dayTemp){
    if((dayTemp>0)&&(dayTemp<=31)){
        day = dayTemp;
        return true;
    }
    else{
        return false;
        day = -1;
    }
    //default case
    return false;
}

bool labInfo::setMonth(int monthTemp){

    if((monthTemp<1)||monthTemp>12){
        month = -1;
        return false;
    }
    else{

        month = monthTemp;
        return true;
    }
    //default case
    return false;
}

bool labInfo::setYear(int yearTemp){

    if((yearTemp<1900)||(yearTemp>2100)){
         year = -1;
         return false;
    }
    else{
        year = yearTemp;
        return true;
    }
    //default case
    return false;
}

bool labInfo::leapYearAndMonthCheck(){
    //Note array start from zero
    int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysPerMonthLeap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool checkAll =false;

     //ref code :https://www.tutorialspoint.com/cplusplus-program-to-check-leap-year
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        if(day<= daysPerMonthLeap[month-1]){
            checkAll = true;
        }

    }
    else{
        //Not a leap year
        if(day<= daysPerMonth[month-1]){
            checkAll = true;
        }
    }
    return checkAll;
}

int labInfo::getDay(){
        return day;
}
int labInfo::getMonth(){
        return month;
}
int labInfo::getYear(){
        return year;
}
