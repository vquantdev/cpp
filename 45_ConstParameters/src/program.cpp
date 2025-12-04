#include <iostream>

// Declare a function to print info
void printInfo(std::string name, int age);

// Declare a function to print info that accepts const parameters
void printInfoConst(const std::string &name, const int &age);

int main() {

    std::string title = "Welcome to the Const Parameters Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        const parameter = parameter that is effectively read-only
                          code is more secure and conveys intent
                          useful for references and pointers
    */

    std::string name = "James Bond";
    int age = 25;

    // Print original data
    std::cout << "Original Name = " << name << '\n';
    std::cout << "Original Age = " << age << '\n';

    std::cout << '\n' << separator << "\n\n";

    // Invoke a function to print info
    std::cout << "1. Invoke a function to print info\n\n";

    printInfo(name, age);

    std::cout << '\n' << separator << "\n\n";

    // Invoke a function to print info (function accepts const parameters)
    std::cout << "2. Invoke a function that accepts const parameters to print info\n\n";

    printInfoConst(name, age);

    std::cout << '\n';

    return 0;
}

// Define a function to print info
void printInfo(std::string name, int age) {

    // Variables passed by value
    // We can change the values of variables' copies
    name = "Captain #1";
    age = 444;

    std::cout << "printInfo(): Name = " << name << '\n';
    std::cout << "printInfo(): Age = " << age << '\n';
}

// Define a function to print info (accepts const parameters)
void printInfoConst(const std::string &name, const int &age) {
    std::cout << "printInfoConst(): Name = " << name << '\n';
    std::cout << "printInfoConst(): Age = " << age << '\n';
}