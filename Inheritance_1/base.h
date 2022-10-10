#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream> 
using namespace std;

class Base
{
    private:
        int num;
    public:
        Base();
        Base(int num);
        ~Base();
        virtual void print(); 
};

class Child : public Base
{
    public:
        Child();
        ~Child();
        void print();
};

class Grandchild : public Child
{   
    public:
        Grandchild();
        ~Grandchild();
        void print();
};
#endif

/*
Questions:

1: Even though the printClass function is called on a base object, then a child object, then a grandchild object, all 
three calls to the printClass function gives the same result, printing out only "Base". We can see here that
only the print function of the base class is called and not the print functions of the inherited classes

2: Even after changing the print() function to be virtual, the same result persists. This is because the printClass
function takes in a base object as the parameter so the parameters are copied as base objects and not objects of the
inherited classes.

3: After changing the printclass to take in the parameter by reference and storing the address of the children
inside a Base pointer, the output was correct. The print function is being successfully overiden and and the parameters
are of the correct inherited classes. 

4: The code will not compile because the child and grandchild classes need a constructor of the base class for their own 
constructors, but the integer variable under the base class is inaccessible to its child classes, and therefore the
constructors of the child classes will not compile. The best way to fix this solution is to have an empty constructor that
initializes this variable so that the child classes could still call on the function. 
*/