#ifndef TEMP_H
#define TEMP_H
#include <string>
#include <iostream> 
using namespace std; 

class Temp
{
    private:
        string type;
        double temp;
    public:
        Temp(string type, double temp);
        ~Temp();
        double getF();
        double getC();
        double getK();
};
#endif