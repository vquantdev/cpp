#include <iostream>

// Declare a class

class Stove {
    private:
        int temperature = 0; // Temperature can only be accessed from within the class

    public:
    
    // Constructor with no arguments
    Stove () {
        std::cout << "===> Call Stove::Stove() constructor\n";
    }

    // Constructor with 1 argument
    Stove (int stoveTemperature) {

        std::cout << "===> Call Stove::Stove(int stoveTemperature) constructor\n";

        this->setTemperature(stoveTemperature);
    }

    // Getter for temperature = READ
    int getTemperature() {
        return this->temperature;    
    }

    // Setter for temperature = WRITE
    void setTemperature(int stoveTemperature) {

        std::cout << "===> Call Stove::setTemperature(int stoveTemperature) Setter\n";

        if (stoveTemperature < 0) {
            this->temperature = 0;
        }
        else if (stoveTemperature >= 10) {
            this->temperature = 10;
        }
        else {
            this->temperature = stoveTemperature;
        }
    }
};

int main() {

    std::string title = "Welcome to the Class Getters and Setters Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        Abstraction = hiding unnecessary data from outside a class
        
        getter = function that makes a private attribute READABLE
        setter = function that makes a private attribute WRITABLE
    */

    // Using Getter and Setter
    std::cout << "1. Using Getter and Setter\n\n";
    
    Stove stove;
    
    stove.setTemperature(500);

    std::cout << "Stove temperature = " << stove.getTemperature() << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Using Setter in a constructor
    std::cout << "2. Using Setter in a constructor\n\n";

    Stove stove2(15);

    std::cout << "Stove 2 temperature = " << stove2.getTemperature() << "\n\n";

    return 0;
}