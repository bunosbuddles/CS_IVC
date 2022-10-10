#ifndef CHICKEN_H
#define CHICKEN_H
#include <string>
#include <iostream>
#include "animal.h"
#include "edible.h"

using namespace std;

class Chicken: public Animal, public Edible
{
    public:
        Chicken(): Animal(), Edible(){};
        Chicken(string name, bool consumed, double calories): Animal(name), Edible(consumed, calories){};
        ~Chicken(){};
        void makeSound()
        {
            cout << "chicken sound chicken sound" << endl; 
        };
};
#endif