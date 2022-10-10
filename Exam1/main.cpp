#include <string>
#include <iostream>
#include "conversions.cpp"
using namespace std;

int main()
{
    //metric to metric
    cout << convert(1000.0, "cm", "m") << "m" << endl;
    cout << convert(1000.0, "cm", "km") << "km" << endl;
    cout << convert(1000.0, "m", "cm") << "cm" << endl;
    cout << convert(1000.0, "m", "km") << "km" << endl;
    cout << convert(1000.0, "km", "m") << "m" << endl;
    cout << convert(1000.0, "km", "cm") << "cm" << endl;

    //american to american
    cout << convert(1000.0, "in", "ft") << "ft" << endl;
    cout << convert(1000.0, "in", "yd") << "yd" << endl;
    cout << convert(1000.0, "in", "mi") << "mi" << endl;
    cout << convert(1000.0, "ft", "in") << "in" << endl;
    cout << convert(1000.0, "ft", "yd") << "yd" << endl;
    cout << convert(1000.0, "ft", "mi") << "mi" << endl;
    cout << convert(1000.0, "yd", "in") << "in" << endl;
    cout << convert(1000.0, "yd", "ft") << "ft" << endl;
    cout << convert(1000.0, "yd", "mi") << "mi" << endl;
    cout << convert(1000.0, "mi", "in") << "in" << endl;
    cout << convert(1000.0, "mi", "ft") << "ft" << endl;
    cout << convert(1000.0, "mi", "yd") << "yd" << endl;

    //metric to american
    cout << convert(1000.0, "cm", "in") << "in" << endl;
    cout << convert(1000.0, "cm", "ft") << "ft" << endl;
    cout << convert(1000.0, "cm", "yd") << "yd" << endl;
    cout << convert(1000.0, "cm", "mi") << "mi" << endl;
    cout << convert(1000.0, "m", "in") << "in" << endl;
    cout << convert(1000.0, "m", "ft") << "ft" << endl;
    cout << convert(1000.0, "m", "yd") << "yd" << endl;
    cout << convert(1000.0, "m", "mi") << "mi" << endl;
    cout << convert(1000.0, "km", "in") << "in" << endl;
    cout << convert(1000.0, "km", "ft") << "ft" << endl;
    cout << convert(1000.0, "km", "yd") << "yd" << endl;
    cout << convert(1000.0, "km", "mi") << "mi" << endl;

    //american to american
    cout << convert(1000.0, "in", "cm") << "cm" << endl;
    cout << convert(1000.0, "in", "m") << "m" << endl;
    cout << convert(1000.0, "in", "km") << "km" << endl;
    cout << convert(1000.0, "ft", "cm") << "cm" << endl;
    cout << convert(1000.0, "ft", "m") << "m" << endl;
    cout << convert(1000.0, "ft", "km") << "km" << endl;
    cout << convert(1000.0, "yd", "cm") << "cm" << endl;
    cout << convert(1000.0, "yd", "m") << "m" << endl;
    cout << convert(1000.0, "yd", "km") << "km" << endl;
    cout << convert(1000.0, "mi", "cm") << "cm" << endl;
    cout << convert(1000.0, "mi", "m") << "m" << endl;
    cout << convert(1000.0, "mi", "km") << "km" << endl;

}
