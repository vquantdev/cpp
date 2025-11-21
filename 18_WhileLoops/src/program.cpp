#include <iostream>

int main() {

    std::string title = "Welcome to the While Loops Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    std::string name;
    
    /*
        while loop = Repeat some actions WHILE the condition is true

                    while (<condition>) {
                        <some actions>
                    }
    */

    // We are not using "std::ws" in "getline" because it will allow entering \n, \t, and so on
    while (name.empty()) {
        std::cout << "What's your name?: ";
        std::getline(std::cin, name);
    }

    std::cout << "You entered name: " << name << std::endl;

    return 0;
}