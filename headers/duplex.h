#pragma once
#include "house.h"

// ----- Duplex Class  -----

class Duplex : public Shape
{
    public:
        Duplex();
        ~Duplex();
        void draw() override;

    private:
        House* house1; // First house
        House* house2; // Second house
        std::string shape = "Duplex";
};