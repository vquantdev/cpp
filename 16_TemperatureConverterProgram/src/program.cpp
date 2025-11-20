#include <iostream>

int main() {

    std::string title = "Welcome to the Temperature Converter Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    double temp;
    char unit;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (temp * 9 / 5) + 32;

        std::cout << "The temperature is " << temp << " F";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) * 5 / 9;

        std::cout << "The temperature is " << temp << " C";
    }
    else {
        std::cout << "You entered incorrect temperature symbol, enter F or C!";
    }
    std::cout << std::endl;
    
    return 0;
}