#include <iostream>

int main() {

    std::string title = "Welcome to the Logical Operators Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    /*
        Logical operators
            &&  - AND   - Check if two conditions are true
            ||  - OR    - Check if one of the conditions is true
            !   - NOT   - Reverses the logical state of its operand  
    */

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // Using && operator
    if (temp > 0 && temp < 30) {
        std::cout << "[1] The temperature is good!";
    } 
    else {
        std::cout << "[1] The temperature is bad!";
    }
    std::cout << std::endl;

    // Using || operator
    if (temp <= 0 || temp >= 30) {
        std::cout << "[2] The temperature is bad!";
    }
    else {
        std::cout << "[2] The temperature is good!";
    }
    std::cout << std::endl;

    // Using ! operator
    bool rainy = true;

    if (!rainy) {
        std::cout << "You don't need an umbrella today :)";
    }
    else {
        std::cout << "It will be rainy. Don't forget your umbrella!";
    }
    std::cout << std::endl;

    return 0;
}