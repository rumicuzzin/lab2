#pragma once

#include "square.h"
#include "triangle.h"
#include <iostream>

class House : public Shape
{
    public:
        House();
        ~House();
        void draw() override;
        
        // Methods to handle orientation (House itself has orientation)
        void setOrientation(double degrees);
        double getOrientation() const;

        // Set the location of the house
        void setLocation(int x, int y);
        
    private:
        std::string shape = "House";
        double orientation; // House's own orientation
        
        // Component shapes - House contains a square and triangle
        Square* baseSquare;     // The house base
        Triangle* roofTriangle; // The house roof
};

