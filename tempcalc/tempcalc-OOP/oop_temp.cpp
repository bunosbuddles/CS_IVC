#include <iostream>
#include <string>
#include "oop_temp.h"
using namespace std;

Temp::Temp(string type, double temp)
{
    this->type = type;
    if(type == "F")
        this->temp = (temp-32)*5/9;
    else if(type == "K")
        this->temp = temp-273.15;
    else 
        this->temp = temp;
}

Temp::~Temp(){}

double Temp::getC()
{
    return this->temp;
}

double Temp::getF()
{
    return this->temp * 9/5 + 32;
}

double Temp::getK()
{
    return this->temp + 273.15;
}