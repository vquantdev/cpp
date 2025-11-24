#include <iostream>

// Declare a function
void buildHouse();

// Declare a function
void buildHouse(std::string fruitTreeType);

// Declare a function
void buildHouse(std::string fruitTreeType, std::string poolColor);

int main() {

    std::string title = "Welcome to the Overloaded Functions Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    // Invoke a function "buildHouse"
    std::cout << "[1] Invoke function \"buildHouse()\"\n";
    buildHouse();
    std::cout << separator << '\n';

    // Invoke a function "buildHouse" with one argument
    std::cout << "[2] Invoke function \"buildHouse('apple')\"\n";
    buildHouse("apple");
    std::cout << separator << '\n';

    // Invoke a function "buildHouse" with two arguments
    std::cout << "[3] Invoke function \"buildHouse('cherry', 'skyblue')\"\n";
    buildHouse("cherry", "skyblue");
    std::cout << separator << '\n';

    return 0;
}

// Define a function
void buildHouse() {
    std::cout << "Here is your house!\n";
}

// Define a function
void buildHouse(std::string fruitTreeType) {
    std::cout << "Here is you house, surrounded by " << fruitTreeType << " trees!\n";
}

// Define a function
void buildHouse(std::string fruitTreeType, std::string poolColor) {
    std::cout << "Here is your house, surrounded by " << fruitTreeType << " trees and a " << poolColor << " pool in the garden!\n";
}