#ifndef DATETIME_H
#define DATETIME_H
#include <string>
using namespace std;

class DateTime
{
    public: 
        DateTime();
        DateTime(int month, int year, int day, int hour, int minute, int second);
        ~DateTime();
        void printDateTime();
        void setHour(int hour);
        void setMinute(int minute);
        void setSecond(int second);
    private:
        int month, year, day, hour, minute, second; 
};

#endif