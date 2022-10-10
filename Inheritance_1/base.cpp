#include <string>
#include <iostream>  
#include "base.h"
using namespace std;

Base::Base()
{
    cout << "base constructor" << endl;
}

Base::Base(int num)
{
    this->num = num;
}

Base::~Base(){};

void Base::print()
{
    cout << "Base" << endl;
}

Child::Child()
: Base()
{
    cout << "child constructor" << endl;
}

Child::~Child(){};

void Child::print()
{
    cout << "Child" << endl;
}

Grandchild::Grandchild()
: Child()
{
    cout << "grandchild constructor" << endl;
}

Grandchild::~Grandchild(){};

void Grandchild::print()
{
    cout << "Grandchild" << endl;
}

