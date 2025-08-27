#include <iostream>
#include "getInput.h"

// ---- Input Calss Methods ----
getInput::getInput()
{
    std::cout << "Please enter your choice: ";
    // Read 6 integers into the array
    for(int i = 0; i < 6; i++) {
        std::cin >> choices[i];
    }; 
}

int* getInput::getChoice()
{
    return choices;
};