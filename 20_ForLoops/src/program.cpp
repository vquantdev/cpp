#include <iostream>

int main() {

    std::string title = "Welcome to the For Loops Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    // Increase step by 1
    std::cout << "Print index from 1 to 10 with a step = 1" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << "index = " << i << std::endl;
    }

    std::cout << separator << std::endl;

    // Increase step by 2
    std::cout << "Print index from 1 to 10 with a step = 2" << std::endl;
    for (int i = 1; i <= 10; i += 2) {
        std::cout << "index = " << i << std::endl;
    }

    std::cout << separator << std::endl;

    // Counting down from 13 to 1
    std::cout << "Counting down from 13 to 1 and print if the index is even or odd" << std::endl;
    for (int i = 13; i >= 1; i--) {
        std::cout << i << " " << (i % 2 == 0 ? "(even)" : "(odd)") << std::endl;
    }

    std::cout << separator << std::endl;

    std::cout << "HAPPY NEW YEAR!" << std::endl;

    return 0;
}