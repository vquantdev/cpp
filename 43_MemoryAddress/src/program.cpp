#include <iostream>

int main() {

    std::string title = "Welcome to the Memory Address Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        memory address = a location in memory where data is stored
        a memory address can be accessed with & (address-of operator)
    */

    std::string name = "James Bond";
    int age = 25;
    bool student = true;

    // Access addresses of variables
    std::cout << "1. Access variables' addresses\n\n";
    
    std::cout << "Address of std::string variable = " << &name << '\n';
    std::cout << "Address of int variable = " << &age << '\n';
    std::cout << "Address of bool variable = " << &student << '\n';

    std::cout << '\n';

    return 0;
}