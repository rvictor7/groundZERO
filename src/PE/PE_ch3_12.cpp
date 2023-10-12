// This file holds the implementation of the Date Class
#include <iostream>
#include "PE_ch3_12.h"

Date::Date(int aMonth, int aDay, int aYear)
{

}


// Sets object's month to what came through as a parameter
void Date::setMonth(int aMonth)
{
    if(aMonth <13 && aMonth >0)
    {
    } else
    month = 1;
}

int Date::getMonth()
{
    return month;
}

void Date::setDay(int aDay)
{
    day = aDay;
}

int Date::getDay()
{
    return day;
}
void Date::displayDate()
{
    std::cout << month << "/" << day << "/" << year << std::endl;
}