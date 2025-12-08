#include <iostream>

// Declare functions

void walk_iterative(int steps);
void walk_recursive(int steps);

int factorial_iterative(int number);
int factorial_recursive(int number);

int main() {

    std::string title = "Welcome to the Recursion Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        recursion = a programming technique where a function 
                    invokes itself from within
                    break a complex concept into a repeatable single step

        Advantages: 
                    less code and is cleaner 
                    useful for sorting and searching algorithms

        Disadvantages:
                    uses more memory
                    ! slower
    */

    // Iterative approach
    std::cout << "1. Iterative approach\n\n";

    walk_iterative(15);

    std::cout << '\n' << separator << "\n\n";

    // Recursive approach
    std::cout << "2. Recursive approach\n\n";

    walk_recursive(15);

    std::cout << '\n' << separator << "\n\n";

    // Calculate factorial using iterative approach
    std::cout << "3. Calculate factorial(n) using iterative approach\n\n";

    std::cout << "Factorial(6) = " << factorial_iterative(6) << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Calculate factorial using recursion
    std::cout << "4. Calculate factorial(n) using recursion\n\n";

    std::cout << "Factorial(6) = " << factorial_recursive(6) << "\n\n";

    return 0;
}

// Define functions

void walk_iterative(int steps) {
    for (int i = 0; i < steps; i++) {
        std::cout << "You take a step #" << (i + 1) << '\n';
    }
}

void walk_recursive(int steps) {
    if (steps > 0) {
        std::cout << "You take a step #" << steps << '\n';
        
        walk_recursive(steps - 1);
    }
}

int factorial_iterative(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

int factorial_recursive(int number) {
    return (number == 1) ? number : number * factorial_recursive(number - 1);
}