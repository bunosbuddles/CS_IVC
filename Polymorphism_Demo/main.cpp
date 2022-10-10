#include <iostream>
#include <string>
#include "edible.h"
#include "chicken.h"
#include "animal.h"
#include "zebra.h"

using namespace std;

void Sound(Animal *animal)
{
    animal->makeSound();
}

int main()
{
    Chicken chicken("Joe", false, 1900.0);
    Chicken *cptr;
    cptr = &chicken;

    Zebra zebra("Bama");
    Zebra *zptr;
    zptr = &zebra;

    Sound(cptr);
    Sound(zptr);
}