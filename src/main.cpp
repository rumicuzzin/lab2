/*
 THis file is a heirachy of shape calsses with drawings

 GOAL: Draw a circle, square & triangle

*/

// ----- Includes -----
#include <string> 
#include <iostream>
#include <vector>

#include "../headers/shape.h"
#include "../headers/circle.h"
#include "../headers/square.h"
#include "../headers/triangle.h"    
#include "../headers/house.h"
#include "../headers/getInput.h"



// ----- Main Function -----s
int main() 
{       
    Shape* shapes[6];  // Array to hold 6 shape pointers
    getInput input;           // Constructor reads the 6 inputs
    int* userChoices = input.getChoice();  // Get pointer to choices array
    
    // Loop through and create shapes
    for(int i = 0; i < 6; i++) {
        shapes[i] = Shape::decide(userChoices[i]);  // Access array with userChoices[i]
        
        if(shapes[i] == nullptr) {
            std::cout << "Invalid choice at position " << i << std::endl;
        }
    }

    // draw all shapes
    for(int i = 0; i < 6; i++) {
        shapes[i]->draw();  // Polymorphic call
    }

    // Clean up - this is where your destructors show their work!
    for(int i = 0; i < 6; i++) {
        delete shapes[i];   // Destructor called here
    }
};

