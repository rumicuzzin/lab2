#include "../headers/shape.h"
#include "../headers/circle.h"
#include "../headers/square.h"
#include "../headers/triangle.h"
#include "../headers/house.h"
#include "../headers/duplex.h"
#include <iostream>


// ---- Shape Class Methods ----
Shape::Shape() : location{0, 0}
{
    std::cout << "Shape constructor called." << std::endl;
};

Shape::~Shape()
{
    std::cout << "Shape destructor called." << std::endl;
}

Shape* Shape::decide(int choice)
{
    if (choice ==0)
    {
        return new Circle();
    }
   
    else if (choice == 1)
    {
        return new Square();
    }

    else if (choice == 2)
    {
        return new Triangle();
    }

    else if (choice == 3)
    {
        return new House();
    }

    else if (choice == 4)
    {
        return new Duplex();
    }

    else 
    {
        std::cout << "Shape not recognized." << std::endl;
        return nullptr;
    }
    
};