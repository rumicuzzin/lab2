#include "../headers/circle.h"
#include <iostream>

Circle::Circle()
{
    std::cout << "Circle constructor called." << std::endl;
}

Circle::~Circle()
{
    std::cout << "Circle destructor called." << std::endl;
}

// Circle Draw method
void Circle::draw()
{
    // Output for user
    std::cout << shape << " is drawing at location: <" << location[0] << ", " << location[1] << ">" << std::endl;
};
