#include <iostream>

// Declare and define a function
void happyBirthday() {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday to you!\n\n";
}

// Declare a function with parameters Name and Age
void happyBirthday2(std::string name, int age);

int main() {

    std::string title = "Welcome to the User Defined Functions Program";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    /*
        function = a block of reusable code
    */

    // The name of the person who celebrates his birthday
    std::string name = "James Bond";
    int age = 25;

    // Invoke a function 
    // Function is declared and defined before "main"
    happyBirthday();

    // Invoke a function with arguments "name" and "age"
    // Functions is declared before "main", defined after "main"
    happyBirthday2(name, age);

    return 0;
}

// Define a function after "main" function
// This function was declared before "main" function
void happyBirthday2(std::string personName, int personAge) {
    std::cout << "Happy Birthday to " << personName << "!\n";
    std::cout << "Happy Birthday to " << personName << "!\n";
    std::cout << "Happy Birthday dear " << personName << "!\n";
    std::cout << "Happy Birthday to " << personName << "!\n";
    std::cout << "You are " << personAge << " years old!\n\n";
}