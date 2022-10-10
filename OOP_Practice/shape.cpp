#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

Shape::Shape()
{
    this->width = 0;
    this->height = 0;
}

Shape::Shape(int width, int height)
{
    this->width = width;
    this->height = height;
}

Shape::~Shape(){};

Triangle::Triangle(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Triangle::getArea()
{
    return 0.5 * width * height; 
}

Rectangle::Rectangle(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Rectangle::getArea()
{
    return width * height; 
}