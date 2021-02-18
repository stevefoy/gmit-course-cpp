#include <iostream>
#include <iomanip>
using namespace std;

// lab information storage class
// Example:
//    labInfo lab;
//    lab.name = "stephen";
//    lab.labID = "Lab using classes";
//    lab.setdate(day,02,2021)
//    lab.printInfo();
//
class labInfo{

private:
    int day;
    int month;
    int year;
    bool setDay(int dayTemp);
    bool setMonth(int monthTemp);
    bool setYear(int yearTemp);
    bool leapYearAndMonthCheck();

public:
    string name;
    string labID;
    //setters
    bool setDate(int dayTemp,int monthTemp,int yearTemp);
     //getters
    int getDay();
    int getMonth();
    int getYear();

    //utility
    void printInfo();


};
