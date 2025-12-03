#include <iostream>

int main() {

    std::string title = "Welcome to the Fill Array with User Input Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    std::string foods[5];
    int size = sizeof(foods) / sizeof(std::string);

    // Enter array elements
    std::cout << "1. Ask User to enter elements to store in an array\n\n";

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like or 'q' to quit #" << (i + 1) << ": ";
        std::string food_input;
        std::getline(std::cin >> std::ws, food_input);

        if (food_input == "q") {
            break;
        } 
        else {
            foods[i] = food_input;
        }
    }

    std::cout << '\n' << separator << "\n\n";
    
    // Print array elements
    std::cout << "2. Printing elements of an array\n\n";
    std::cout << "Use for loop: for (int i = 0; i < size; i++) {...}" << "\n\n";

    for (int i = 0; i < size; i++) {
        if (!foods[i].empty()) {
            std::cout << "foods[" << i << "] = " << foods[i] << '\n';
        }
    }

    std::cout << '\n' << separator << "\n\n";

    // Print array elements
    std::cout << "3. Print array elements\n\n";
    std::cout << "Use for loop: for (int i = 0; !foods[i].empty(); i++) {...}\n\n";

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << "foods[" << i << "] = " << foods[i] << '\n';
    }

    std::cout << '\n';

    return 0;
}