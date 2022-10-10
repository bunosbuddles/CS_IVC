#ifndef STORE_H
#define STORE_H
#include <string>
#include "Menu.h"
using namespace std;

class Store
{
    public: 
        Store();
        Store(int storeNumber, string name, string address, double taxRate);
        ~Store();
        void setTaxRate();
        void getTaxRate();
        void printStoreInfo();
    private:
        int storeNumber;
        string name;
        string address;
        double taxRate;
        Menu *menu; 
};

#endif