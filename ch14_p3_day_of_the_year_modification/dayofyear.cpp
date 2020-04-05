#include "dayofyear.h"
#include <iostream>
DayOfYear::DayOfYear(std::string month, int day, int monthNum, bool leapYear)
{

    std::cout << "when entering day is " << Dayz << std::endl;
    /*
     * If leapYear == true, adds 1 day to February.
     * If the value for day exceeds the number of days,
     * in the selected month, program stops with exit(0).
     */
    if (leapYear) {
        MonthDays[1] = 29;
    } else {
        MonthDays[1] = 28;
    }
    if (day > MonthDays[monthNum]) {
        std::cout << "Error, value for day exceeds number of days in given month.\n";
        exit(0);
    }

    /*
     * initilizing the private member variables Month and Dayz
     * Month is simply given month, a argument passed to the constructor.
     * Dayz value is the sum of all the days in the months up to the chosen month
     * plus "day" which is the number of days in the chosen month.
    */

    Month = month;
    for (int count = 0; count < monthNum; count++) {
        //std::cout<<"at "<<count<<" day is "<<Dayz<<std::endl;
        Dayz += MonthDays[count];
    }
    Dayz += day;
    std::cout << Dayz << std::endl;
}

int DayOfYear::MonthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
