#include "../headers/house.h"
#include <iostream>

// Constructor
House::House()
{
    orientation = 0.0; // Initialize house orientation to 0 degrees
    
    // Create component shapes using dynamic allocation
    baseSquare = new Square();
    roofTriangle = new Triangle();
    
    std::cout << "House constructor called" << std::endl;
}

// Destructor
House::~House()
{
    // Clean up dynamically allocated component shapes
    delete baseSquare;
    delete roofTriangle;
    
    std::cout << "House destructor called" << std::endl;
}

// Draw method implementation
void House::draw()
{
    // First draw the house itself
    std::cout << "House is drawing at location <" << location[0] << ", " 
              << location[1] << "> with orientation " << orientation 
              << " degrees" << std::endl;
    
    // Position component shapes relative to house location
    // Set square base position (same as house location)
    baseSquare->setLocation(location[0], location[1]);
    baseSquare->setOrientation(orientation);
    
    // Set triangle roof position (slightly above the square)
    roofTriangle->setLocation(location[0], location[1] + 10); // 10 units above
    roofTriangle->setOrientation(orientation);
    
    // Then draw the component shapes
    std::cout << "  Drawing house components:" << std::endl;
    baseSquare->draw();      // Draw the square base
    roofTriangle->draw();    // Draw the triangle roof
}

// Set orientation method
void House::setOrientation(double degrees)
{
    orientation = degrees;
}

// Get orientation method
double House::getOrientation() const
{
    return orientation;
}