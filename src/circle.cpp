#include "../headers/circle.h"
#include <iostream>

// Circle Draw method
void Circle::draw()
{
    // Output for user
    std::cout << shape << " is drawing at location: <" << location[0] << ", " << location[1] << ">" << std::endl;
};
