#include <iostream>
#include <string>
#include "shape.cpp"
using namespace std;

int main()
{
    Triangle triangle(4, 6);
    Rectangle rectangle(4, 6);
    int area = triangle.getArea();
    cout << "The area of the triangle is: " << area << endl;
    area = rectangle.getArea();
    cout << "The area of the rectangle is: " << area << endl;
}

// As you write this small example, think about reuse. 

// What is the advantage of having an area() function in shape? 
// The advantage of having an area() function in shape is that if the user wants to add another shape to the code later on, they will be able to implement an area function for the new shape.

// How does structuring the code into classes allow you to reuse the code in the future?
// Structuring the code into classes allows me to reuse the code in the future because other people will be able to add new shapes to the code if they wish later on and keep using this program.
