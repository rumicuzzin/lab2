#include "../headers/duplex.h"
#include <iostream>

// ----- Duplex Class Implementation -----
Duplex::Duplex() : Shape() 
{
    std::cout << "Duplex constructor called." << std::endl;

    // Dynamically allocate the two House objects
    house1 = new House();
    house2 = new House();
}

Duplex::~Duplex() 
{
    std::cout << "Duplex destructor called." << std::endl;

    // Clean up the dynamically allocated House objects
    delete house1;
    delete house2;
}

void Duplex::draw() 
{
    std::cout << "Drawing a " << shape << " at location (" 
              << location[0] << ", " << location[1] << ")" << std::endl;

    // Position the first house at the duplex's location
    house1->setLocation(location[0], location[1]);
    house1->draw();

    // Position the second house next to the first one (assuming side by side)
    house2->setLocation(location[0] + 10, location[1]); // Offset by 10 units on x-axis
    house2->draw();
}