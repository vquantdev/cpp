#include <iostream>

int main() {

    std::string title = "Welcome to the Break and Continue Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    /*
        break       = break out of a loop
        continue    = skip current iteration 
    */

    // Counting from 1 to 20
    std::cout << "Counting from 1 to 20" << std::endl;
    for (int i = 1; i <= 20; i++) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << separator << std::endl;

    // Counting from 1 to 10 and skip number 4 and 7
    std::cout << "Counting from 1 to 10 and skip numbers 4 and 7" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 4 || i == 7) {
            continue;
        }
        std::cout << "i = " << i << std::endl;
    }

    std::cout << separator << std::endl;

    // Counting from 1 to 20 and break (stop) when number = 13
    std::cout << "Counting from 1 to 20 and break (stop) when number = 13" << std::endl;
    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        std::cout << "i = " << i << std::endl;
    }
    
    std::cout << separator << std::endl;

    return 0;
}