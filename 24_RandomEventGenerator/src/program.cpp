#include <iostream>

int main() {

    std::string title = "Welcome to the Random Event Generator Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    // Changing the seed of a random numbers algorithm
    // To ensure different sequences of random numbers
    srand(time(0));

    int min_number = 1;
    int max_number = 5;
    int number = rand() % (max_number - min_number + 1) + min_number;
    
    switch (number) {
        case 1:
            std::cout << "Today we are going to a restaurant!";
            break;
        case 2:
            std::cout << "Today we are going to a museum!";
            break;
        case 3:
            std::cout << "Today we are staying at home!";
            break;
        case 4:
            std::cout << "Today we are going to a shop!";
            break;
        case 5:
            std::cout << "Today we are going to a park!";
            break;
    }

    std::cout << '\n';

    return 0;
}