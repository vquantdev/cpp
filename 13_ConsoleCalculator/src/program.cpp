#include <iostream>

int main() {

    std::cout << "Welcome to the Console Calculator Program!" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    char operation;
    double number_1;
    double number_2;
    double result;

    std::cout << "Enter a mathematical operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter first number: ";
    std::cin >> number_1;

    std::cout << "Enter second number: ";
    std::cin >> number_2;

    switch (operation) {
        case '+':
            result = number_1 + number_2;
            std::cout << number_1 << " " << operation << " " << number_2 << " = " << result;
            break;
        case '-':
            result = number_1 - number_2;
            std::cout << number_1 << " " << operation << " " << number_2 << " = " << result;
            break;
        case '*':
            result = number_1 * number_2;
            std::cout << number_1 << " " << operation << " " << number_2 << " = " << result;
            break;
        case '/':
            result = number_1 / number_2;
            std::cout << number_1 << " " << operation << " " << number_2 << " = " << result;
            break;
        default:
            std::cout << "You entered incorrect operation!";
    }
    std::cout << std::endl;

    return 0;
}