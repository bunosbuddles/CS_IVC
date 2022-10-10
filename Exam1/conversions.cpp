#include <iostream>
#include <string>
#include "conversions.h"
using namespace std; 

double CMtoIN(double temp)
{
    return temp/2.54;
}
double INtoCM(double temp)
{
    return temp*2.54;
}


//convert all metric units to cm 
//convert all american units to inches
//if switch is needed, make switch using cm to in or in to cm, then convert to desired unit 
double convert(double temp, string startUnit, string endUnit)
{
    double cmValue, inValue; 

    //convert all metric units to cm 
    if(startUnit == "cm")
    {
        cmValue = temp;
        inValue = CMtoIN(cmValue);
    }
    else if(startUnit == "m")
    {
        cmValue = temp * 100; 
        inValue = CMtoIN(cmValue);
    }
    else if(startUnit == "km")
    {
        cmValue = temp * 100000; 
        inValue = CMtoIN(cmValue);
    }
    //convert all american units to inches
    else if(startUnit == "in")
    {
        inValue = temp;
        cmValue = INtoCM(inValue);
    }
    else if(startUnit == "ft")
    {
        inValue = temp * 12;
        cmValue = INtoCM(inValue);
    }
    else if(startUnit == "yd")
    {
        inValue = temp * 3 * 12; 
        cmValue = INtoCM(inValue);
    }
    else if(startUnit == "mi")
    {
        inValue = temp * 5280 * 12;
        cmValue = INtoCM(inValue);
    }

    
    if(endUnit == "cm")
    {
        return cmValue;
    }
    else if(endUnit == "m")
    {
        return cmValue/100.0;
    }
    else if(endUnit == "km")
    {
        return cmValue/100.0/1000.0; 
    }
    else if(endUnit == "in")
    {
        return inValue;
    }
    else if(endUnit == "ft")
    {
        return inValue/12.0;
    }
    else if(endUnit == "yd")
    {
        return inValue/12.0/3.0;
    }
    else
    {
        return inValue/12/5280;
    }
}