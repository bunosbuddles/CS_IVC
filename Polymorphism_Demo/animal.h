#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std; 

class Animal
{
    private:
        string name;
    public:
        Animal(): name(""){};
        Animal(string name): name(name){};
        ~Animal(){};
        virtual void print()
        {
            cout << "This animal's name is " << name << "." << endl;
        };
        virtual void makeSound(){}; 

};
#endif