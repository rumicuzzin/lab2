#pragma once
#include "shape.h"
#include <string>

//----- Circle Class Declaration -----

class Circle : public Shape
{
    public:
        Circle();
        ~Circle(); 
        void draw() override;
    private:
        std::string shape = "Circle";
};
