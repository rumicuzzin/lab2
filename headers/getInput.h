// ----- Class declarations -----

// Simple user input class
class getInput
{
    public:
        getInput();
        ~getInput();
        int* getChoice();
        
    private:
        int choices[6];
};