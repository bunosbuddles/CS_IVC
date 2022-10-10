#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>

using namespace std;

class Shape
{
    protected:
        int width;
        int height;
    public:
        Shape();
        Shape(int width, int height);
        int getArea();
        ~Shape();
};

class Rectangle: public Shape
{
    public:
        Rectangle(int width, int height);
        int getArea(); 
};

class Triangle: public Shape
{
    public:
        Triangle(int width, int height);
        int getArea();
};
#endif