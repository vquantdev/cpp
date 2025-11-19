#include <iostream>

int main() {

    std::cout << "Welcome to the Hypotenuse Calculator Program!" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    std::cout << "Given a right angled triangle, find the hypotenuse 'C'. \n" << std::endl;
    std::cout << "|\\" << std::endl;
    std::cout << "| \\" << std::endl;
    std::cout << "|  \\" << std::endl;
    std::cout << "a   c" << std::endl;
    std::cout << "|    \\" << std::endl;
    std::cout << "|__b__\\" << std::endl;
    std::cout << std::endl;

    // The hypotenuse C can be calculated using the following formula:
    // C = sqrt(a * a + b * b)

    double a;
    double b;
    double c;

    std::cout << "Enter the length of side 'A': ";
    std::cin >> a;

    std::cout << "Enter the length of side 'B': ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse 'C' = " << c << std::endl;

    return 0;
}