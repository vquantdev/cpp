#include <iostream>

int main() {

    std::string title = "Welcome to the Do While Loops Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    /*
        do while loops = do some block of code first,
                        THEN repeat again if the condition is true

                        do {
                            
                            <block of code>

                        } while (<condition>);
    */

    int number;

    // Asking to enter a positive number until user enters a positive number

    // Using While Lopp
    // std::cout << "Enter a positive number: ";
    // std::cin >> number;
    // while (number < 0) {
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> number;
    // }

    // Using Do While Loop
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "You entered a number: " << number << std::endl;

    return 0;
}