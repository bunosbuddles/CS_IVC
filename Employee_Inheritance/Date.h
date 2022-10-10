#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream> 
using namespace std; 

class Date
{
    private:
        int month;
        int year;
        int day;
    public:
        Date();
        Date(int m, int y, int d);
        ~Date(); 
        void printDate();
};
#endif