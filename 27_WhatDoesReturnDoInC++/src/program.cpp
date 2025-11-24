#include <iostream>

double square(double sideLength) {
    double result = pow(sideLength, 2);
    return result;
}

double cube(double sideLength) {
    double result = pow(sideLength, 3);
    return result;
}

std::string userFullName(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}

int main() {

    std::string title = "Welcome to the What Does Return Do In C++ Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    /*
        return = return a value back to the spot
                where you called the encompassing function
    */

    // The length of a side of a square
    double squareSide = 5.0;
    // The area of a square
    double squareArea = square(squareSide);

    std::cout << "The area of a square (" << squareSide << "x" << squareSide << ") = " << squareArea << "cm^2\n";

    std::cout << separator << '\n';

    // The length of a side of a cube
    double cubeSide = 4.0;
    // The volume of a cube
    double cubeVolume = cube(cubeSide);

    std::cout << "The volume of a cube (" << cubeSide << "x" << cubeSide << "x" << cubeSide << ") = " << cubeVolume << "cm^3\n";

    std::cout << separator << '\n';

    // User first name
    std::string firstName = "James";
    // User last name
    std::string lastName = "Bond";
    // User full name
    std::string fullName = userFullName(firstName, lastName);

    std::cout << "User first name = " << firstName << ", last name = " << lastName << ", full name = " << fullName << '\n';

    std::cout << separator << '\n';
    
    return 0;
}