/*
 THis file is a heirachy of shape calsses with drawings

 GOAL: Draw a circle, square & triangle

*/

// ----- Includes -----
#include <string> 
#include <iostream>

//------ Global Variables -----
const int MAX_HEIGHT = 10;
const int MAX_WIDTH = 10;
const int RADIUS = 5;


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
        virtual ~Shape() = default;

    protected:
        std::vector<int> location;

};

class Circle : public Shape
{
    public:
        void draw() override;
    private:
        std::string shape = "Circle";
};

class Square : public Shape
{
    public:
        void draw() override;
    private:
        std::string shape = "Square";
};

class getInput
{
    public:
        getInput();
        int getChoice();
        
    private:
        int choice;
};

// ----- Main Function -----s
int main() 
{       
   while (true)
   {
        getInput input;
        Shape* shapePtr = Shape::decide(input.getChoice());

        if (shapePtr) shapePtr->draw();

        // Clean up dynamically allocated memory    
        delete shapePtr;
   }   
    return 0;
};

// ----- Class definitions -----

// ---- Shape Class Methods ----
Shape::Shape()
{
    location = {0, 0};
};

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
    else 
    {
        std::cout << "Shape not recognized." << std::endl;
        return nullptr;
    }
    
};

// Circle Draw method
void Circle::draw()
{
    // Output for user
    std::cout << shape << " is drawing at location: <" << location[0] << ", " << location[1] << ">" << std::endl;
    
    // Print function
    for(int y = -RADIUS; y <= RADIUS; y++) 
    {
        for(int x = -RADIUS; x <= RADIUS; x++) 
        {
            int distance = x*x + y*y;
            if(distance <= RADIUS*RADIUS && distance > (RADIUS-1)*(RADIUS-1)) 
                std::cout << "*";
            else 
                std::cout << " ";
        }
        std::cout << "\n";
    }
};

// Square Draw method
void Square::draw()
{
    // Output for user
    std::cout << shape << " is drawing at location: <" << location[0] << ", " << location[1] << ">" << std::endl;
    
    // Print function
   for(int i = 0; i < MAX_HEIGHT; i++) 
   {
       for(int j = 0; j < MAX_WIDTH; j++) 
       {
           if(i == 0 || i == MAX_HEIGHT-1 || j == 0 || j == MAX_WIDTH-1)
               std::cout << "*";
           else
               std::cout << " ";
       }
       std::cout << "\n";
   }
};

// ---- Input Calss Methods ----
getInput::getInput()
{
    std::cout << "Please enter your choice: ";
    std::cin >> choice; 
}

int getInput::getChoice()
{
    return choice;
};