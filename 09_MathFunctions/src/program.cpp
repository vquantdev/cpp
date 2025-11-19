#include <iostream>

int main() {

    std::cout << "Welcome to the Math Functions Program!" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    double x = 3;
    double y = 4;
    double z;

    // Finding the maximum value
    z = std::max(x, y);
    std::cout << "[1] Find the maximum value" << std::endl;
    std::cout << "std::max(" << x << ", " << y << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Finding the minimum number
    z = std::min(x, y);

    std::cout << "[2] Find the minimum number" << std::endl;
    std::cout << "std::min(" << x << ", " << y << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Raising a number to a power of another number
    z = pow(x, y);

    std::cout << "[3] Raise a number 'A' to a power of 'B'" << std::endl;
    std::cout << "pow(" << x << ", " << y << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Finding a square root of a number
    z = sqrt(x);

    std::cout << "[4] Find a square root of a number" << std::endl;
    std::cout << "sqrt(" << x << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Finding an absolute value of a number
    z = abs(-y);

    std::cout << "[5] Find an absolute value of a number" << std::endl;
    std::cout << "abs(-" << y << ") = " << z << std::endl;
    
    std::cout << "--------------------------------------" << std::endl;

    // Rounding a number
    double d_1 = 3.4999;
    double d_2 = 3.5001;
    double d_3 = 3.5999;

    std::cout << "[6] Round a number" << std::endl;
    
    z = round(d_1);
    std::cout << "round(" << d_1 << ") = " << z << std::endl;

    z = round(d_2);
    std::cout << "round(" << d_2 << ") = " << z << std::endl;

    z = round(d_3);
    std::cout << "round(" << d_3 << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Rounding up a number
    double e_1 = 3.0001;
    double e_2 = 3.5001;
    double e_3 = 3.5999;

    std::cout << "[7] Round up a number" << std::endl;

    z = ceil(e_1);
    std::cout << "ceil(" << e_1 << ") = " << z << std::endl;

    z = ceil(e_2);
    std::cout << "ceil(" << e_2 << ") = " << z << std::endl;

    z = ceil(e_3);
    std::cout << "ceil(" << e_3 << ") = " << z << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Rounding down a number

    double f_1 = 7.0001;
    double f_2 = 7.5555;
    double f_3 = 7.9999;

    std::cout << "[8] Round down a number" << std::endl;

    z = floor(f_1);
    std::cout << "floor(" << f_1 << ") = " << z << std::endl;

    z = floor(f_2);
    std::cout << "floor(" << f_2 << ") = " << z << std::endl;

    z = floor(f_3);
    std::cout << "floor(" << f_3 << ") = " << z << std::endl;

    return 0;
}