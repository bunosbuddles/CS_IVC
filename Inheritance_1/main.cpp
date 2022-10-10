#include <iostream>
#include <string>
#include "base.cpp"
#include "base.h"
using namespace std;

void printClass(Base *base)
{
    base->print(); 
}

int main()
{
    Base base;
    Base *bptr; 
    bptr = &base; 

    Child child;
    Base *childptr;
    childptr = &child; 

    Grandchild grandchild;
    Base *grandchildptr;
    grandchildptr = &grandchild;

    printClass(bptr);
    printClass(childptr);
    printClass(grandchildptr);
}

