#pragma once

#include "shape.h"
#include <string>

class Triangle : public Shape
{
    public:
        Triangle();
        ~Triangle();
        void draw() override;

        // Methods to handle orientation
        void setOrientation(double degrees);
        double getOrientation() const;

        // Set the location
        void setLocation(int x, int y);

    private:
        std::string shape = "Triangle";
        double orientation; 
};

