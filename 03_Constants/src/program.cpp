#include <iostream>

int main() {

    std::cout << "Welcome to the Constants Program!" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    /*
        The const keyword specifies that a variable's value is constant
        Tells the compiler to prevent anything from modifying it.
        (read-only)
    */

    // Constant's name is upper-case
    const double PI = 3.14159;

    // This will generate an error: 
    // Error: Cannot assign to variable 'pi' with const-qualified type 'const double'
    // PI = 3.99;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "Circumference of a circle = " << circumference << "cm" << std::endl;

    // More constants examples
    std::cout << "---------------------------------" << std::endl;

    const int LIGHT_SPEED = 299792458; // The spped of light
    const int WIDTH = 1920; // Screen's width
    const int HEIGHT = 1080; // Screen's height

    std::cout << "Light speed = " << LIGHT_SPEED << std::endl;
    std::cout << "Screen resolution = " << WIDTH << "x" << HEIGHT << std::endl;

    return 0;
}