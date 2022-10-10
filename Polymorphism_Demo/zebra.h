#ifndef ZEBRA_H
#define ZEBRA_H

#include <string>
#include <iostream>
#include "animal.h"

using namespace std;

class Zebra: public Animal
{
    public:
        Zebra(): Animal(){};
        Zebra(string name): Animal(name){};
        ~Zebra(){};
        void makeSound()
        {
            cout << "zebra sound zebra sound" << endl;
        };
};
#endif