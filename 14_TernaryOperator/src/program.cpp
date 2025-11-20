#include <iostream>

int main() {

    std::string title = "Welcome to the Ternary Operator Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    /*
        ternary operator (?:) = replacement to an if/else statement
        condition ? expression1 : expression2
    */

    // Pass or fail
    int grade = 88;

    std::cout << (grade >= 60 ? "You pass" : "You fail") << std::endl;

    // Check if a number is even or odd
    int number = 44;

    std::cout << "The number " << number << " is " << (number % 2 == 0 ? "even" : "odd") << std::endl; 

    // Using boolean variables
    bool hungry = true;

    std::cout << "You are " << (hungry ? "hungry" : "full") << std::endl;

    return 0;
}