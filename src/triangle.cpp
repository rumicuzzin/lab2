#include "../headers/triangle.h"
#include <iostream>

Triangle::Triangle()
{
    orientation = 0.0; 
}

Triangle::~Triangle()
{
    std::cout << "Triangle destructor called" << std::endl;
}

// Draw method implementation
void Triangle::draw()
{
    std::cout << shape << " is drawing at location <" << location[0] << ", " 
              << location[1] << "> with orientation " << orientation 
              << " degrees" << std::endl;
}

// Set orientation method
void Triangle::setOrientation(double degrees)
{
    orientation = degrees;
}

// Get orientation method
double Triangle::getOrientation() const
{
    return orientation;
}

// Set location
void Triangle::setLocation(int x, int y)
{
    location[0] = x;
    location[1] = y;
}
