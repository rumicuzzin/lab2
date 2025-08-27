#include "../headers/square.h"
#include <iostream>

Square::Square()
{
    orientation = 0.0; 
}

// Square Draw method
void Square::draw()
{
    // Output for user
    std::cout << shape << " is drawing at location: <" << location[0] << ", " << location[1] 
              << ">" <<  "> with orientation " << orientation << " degrees." <<  std::endl;
};

void Square::setOrientation(double degrees)
{
    orientation = degrees;
}

double Square::getOrientation() const
{
    return orientation;
}

void Square::setLocation(int x, int y)
{
    location[0] = x;
    location[1] = y;
}