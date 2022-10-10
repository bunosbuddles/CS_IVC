#ifndef EDIBLE_H
#define EDIBLE_H
#include <string>
#include <iostream>
using namespace std;

class Edible
{
    private:
        bool consumed;
        double calories;
    public:
        Edible():consumed(false), calories(0.0){};
        Edible(bool consumed, double calories): consumed(consumed), calories(calories){};
        ~Edible(){};
        virtual void consume()
        {
            if(!consumed)
            {
                cout << "You have consumed " << calories << " calories!" << endl;
                consumed = !consumed; 
            }
            else
            {
                cout << "You've already consumed this food.";
            }
        };
};
#endif