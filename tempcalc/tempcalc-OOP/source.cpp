#include <iostream>
#include <fstream>
#include <iomanip>
#include "oop_temp.cpp"

using namespace std;

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
                value = stoi(tracer); 
                s++;
            }
            else if(s==1)
            {
                Temp temp(tracer, value);
                dataFixed << temp.getC() << "C " << temp.getF() << "F " << temp.getK() << "K\n" << endl;
                s--;
            }
        }
    }
}