#include <iostream>
#include <fstream>
#include <iomanip>
#include "proc_temp.h"

using namespace std;

double CtoF(double num)
{
    return num * 9/5 + 32;
}

double CtoK(double num)
{
    return num + 273.15; 
}

double FtoK(double num)
{
    return ((num - 32) * 5/9) + 273.15;
}

double FtoC(double num)
{
    return ((num - 32) * 5/9);
}

double KtoC(double num)
{
    return num - 273.15;
}

double KtoF(double num)
{
    return 1.8 * (num - 273) + 32; 
}

int main()
{
    fstream data;
    fstream dataFixed;
    string tracer;

    int s = 0;
    double value;

    data.open("temps.txt", ios::in);
    dataFixed.open("final.txt", ios::out);
    if(data.fail())
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    else
    {
        while(data >> tracer)
        {
            if(s==0)
            {
                value = stod(tracer); 
                s++;
            }
            else if(s==1)
            {
                if(tracer == "F")
                    dataFixed << FtoC(value) << "C  " << value << "F  " << FtoK(value) << "K" << endl;
                if(tracer == "C")
                    dataFixed << value << "C  " << CtoF(value) << "F  " << CtoK(value) << "K" << endl;
                if(tracer == "K")
                    dataFixed << KtoC(value) << "C  " << KtoF(value) << "F  " << value << "K" << endl; 
                s--;
            }
        }
    }
}