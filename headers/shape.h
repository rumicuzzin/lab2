// Thids is the base class for all shapes
#pragma once
#include <vector>

// ----- Class declarations -----
class Shape 
{
    public:
        Shape();
        // Since decide doesn't rely on any member variables, it can be static
        // This allows it to be called without an instance of Shape
        static Shape* decide(int choice);
        virtual void draw() = 0;
        // Virtual destructor
        virtual ~Shape();

    protected:
        std::vector<int> location;

};