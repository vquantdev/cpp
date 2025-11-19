#include <iostream>

int main() {

    std::cout << "Welcome to the If Statement Program!" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    /*
        if statement = do something if a condition is true.
                        If it is not (a condition is false), don't do it (do something else)
    */

    int age;
    
    std::cout << "What's your age?: ";
    std::cin >> age;

    // The order of "if statements" matters.

    if (age <= 0) {
        std::cout << "You haven't been born yet!" << std::endl;
    }
    else if (age >= 100) {
        std::cout << "You are too old to enter the club!" << std::endl;
    }
    else if (age >= 18) {
        std::cout << "Welcome to the club!" << std::endl;
    } 
    else {
        std::cout << "Your are not allowed to enter the club!" << std::endl;
    }

    return 0;
}