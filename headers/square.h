#pragma once
#include "shape.h"
#include <string>


class Square : public Shape
{
    public:
        Square();
        ~Square();
        void draw() override;

        // Methods to handle orientation
        void setOrientation(double degrees);
        double getOrientation() const;

        // Methods to set location
        void setLocation(int x, int y);

    private:
        std::string shape = "Square";
        double orientation; 
};

