#include <iostream>

// Declare a function
void printLocalNumber(int local_number);

// Declare a function
void printGlobalNumber();

// Declare a function
void printWhatNumber(bool printGlobal);

// Declare a global varialbe
int global_varialbe = 83;

int main() {

    std::string title = "Welcome to the Variable Scope Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    /*
        Local variables = declared inside a function of a block of code {}
        Global variables = declared outside of all functions
    */

    // Declare a local variable
    int main_function_number = 1;
    std::cout << "[1] main(): Local number \"main_function_number\": " << main_function_number << '\n';
    std::cout << separator << '\n';

    // Print a local number by invoking a function and passing a number as an argument
    std::cout << "[2] main(): Print a local number by invoking a function and passing a number as an argument\n";
    printLocalNumber(main_function_number);
    std::cout << separator << '\n';

    // Print a local variable "main_function_number"
    std::cout << "[3] main(): Local varialbe \"main_function_number\": " << main_function_number << "\n";
    std::cout << separator << '\n';

    // Print a global variable "global_varialbe"
    std::cout << "[4] main(): Global variable \"global_varialbe\": " << global_varialbe << "\n";
    std::cout << separator << '\n';

    // Print a global variable by invoking a function
    std::cout << "[5] main(): Print a global variable by invoking a function\n";
    printGlobalNumber();
    std::cout << separator << '\n'; 

    // Print a global variable "global_varialbe"
    std::cout << "[6] main(): Global variable \"global_varialbe\": " << global_varialbe << "\n";
    std::cout << separator << '\n';

    // Invoke a function and ask to print a global variable instead of a local one with the same name
    std::cout << "[7] main(): Invoke a function and ask to print a global variable instead of a local one\n"; 
    printWhatNumber(true);
    std::cout << separator << '\n';

    // Invoke a function and ask to print a local variable 
    std::cout << "[7] main(): Invoke a function and ask to print its local variable\n"; 
    printWhatNumber(false);
    std::cout << separator << '\n';

    return 0;
}

// Define a function
void printLocalNumber(int local_number) {

    // Declare a variable with the same name as in "main function"
    int main_function_number = 34;

    std::cout << "printLocalNumber(int local_number): Print number declared in \"main\" function: " << local_number << '\n';

    std::cout << "printLocalNumber(): Local variable \"main_function_number\": " << main_function_number << '\n';
}

// Define a function
void printGlobalNumber() {
    std::cout << "printGlobalNumber(): Global varialbe \"global_varialbe\": " << global_varialbe << '\n';

    std::cout << "printGlobalNumber(): Change the global varialbe \"global_varialbe\" by adding 77 to it\'";
    
    global_varialbe = global_varialbe + 77;

    std::cout << "printGlobalNumber(): Global varialbe \"global_varialbe\": " << global_varialbe << '\n';
}

// Define a function
void printWhatNumber(bool printGlobal) {
    // Declare a local variable with the same name as global
    int global_varialbe = 22;

    if (printGlobal) {
        // Use the scope resolution operator
        std::cout << "printWhatNumber(printGlobal=true): \"::global_varialbe\": " << ::global_varialbe << '\n';
    }
    else {
        // Print Local Variable
        std::cout << "printWhatNumber(printGlobal=false): \"global_varialbe\": " << global_varialbe << '\n';
    }
}