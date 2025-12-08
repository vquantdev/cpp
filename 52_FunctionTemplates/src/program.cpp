#include <iostream>

// Declare functions

int max(int x, int y);
double max(double x, double y);
char max(char x, char y);

// Declare template function
template <typename T, typename T2>
T max_template(T x, T2 y); // May change return type to 'auto' to return 'double' when calling max_template(int, double)

int main() {

    std::string title = "Welcome to the Function Templates Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        function template = describes what a function looks like.
                            Can be used to generate as many overloaded functions
                            as needed, each using different data types
    */

    // Determine the max int 
    std::cout << "1. Determine the max int number\n\n";

    int number_1;
    int number_2;

    std::cout << "Enter first int number: ";
    std::cin >> number_1;

    std::cout << "Enter second int number: ";
    std::cin >> number_2;

    std::cout << "The maximum of 2 int numbers (" << number_1 << ", " << number_2 << ") = " << max(number_1, number_2) << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Determine the max double number
    std::cout << "2. Determine the max double number\n\n";

    double dnumber_1;
    double dnumber_2;

    std::cout << "Enter first double number: ";
    std::cin >> dnumber_1;

    std::cout << "Enter second double number: ";
    std::cin >> dnumber_2;

    std::cout << "The maximum of 2 double numbers (" << dnumber_1 << ", " << dnumber_2 << ") = " << max(dnumber_1, dnumber_2) << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Determine the max char
    std::cout << "3. Determine the max character\n\n";
    
    char symbol_1;
    char symbol_2;

    std::cout << "Enter first character: ";
    std::cin >> symbol_1;

    std::cout << "Enter second character: ";
    std::cin >> symbol_2;

    std::cout << "The maximum of 2 char symbols ('" << symbol_1 << "', '" << symbol_2 << "') = '" << max(symbol_1, symbol_2) << "'" << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Determine the max element using template function
    std::cout << "4. Determine the max element using template function\n\n";

    std::cout << "max_template(10, 20) = " << max_template(10, 20) << "\n\n";
    std::cout << "max_template(1.99, 2.01) = " << max_template(1.99, 2.01) << "\n\n";
    std::cout << "max_template('A', 'a') = " << max_template('A', 'a') << "\n\n";
    std::cout << "max_template(10, 10.01) = " << max_template(10, 10.01) << " // 0.01 truncated because return type is 'T' (int in this case)\n\n";
    std::cout << "max_template(10.01, 10) = " << max_template(10.01, 10) << "\n\n";
    std::cout << "max_template(50, 'A') = " << max_template(10, 'A') << " // return type 'int'\n\n";
    std::cout << "max_template('A', 50) = " << max_template('A', 50) << " // return type 'char'\n\n";

    return 0;
}

// Define functions
int max(int x, int y) {
    return x >= y ? x : y;
}

double max(double x, double y) {
    return x >= y ? x : y;
}

char max(char x, char y) {
    return x >= y ? x : y;
}

// Define template function
template <typename T, typename T2> 
T max_template(T x, T2 y) {
    return x >= y ? x : y;
}