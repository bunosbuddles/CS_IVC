#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date()
{
    this->month = 0;
    this->year = 0;
    this->day = 0;
}

Date::Date(int m, int y, int d)
{
    this->month = m;
    this->year = y;
    this->day = d;
}

Date::~Date(){};

void Date::printDate()
{
    cout << "Month: " << this->month << endl;
    cout << "Day: " << this->day << endl;
    cout << "Year: " << this->year << endl;
}

