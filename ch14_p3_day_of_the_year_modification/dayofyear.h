#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>

class DayOfYear {
private:
    std::string Month;
    int Dayz = 0; //day of the year is number of days in the month + the day number given
    //bool leap_year;

public:
    DayOfYear(std::string, int, int, bool);
    void print();
    static int MonthDays[];
};
#endif // DAYOFYEAR_H
