#include <iostream>

int main() {

    std::string title = "Welcome to the Random Number Generator Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    /*
        Pseudo-random = NOT truly random, but close
    */

    srand(time(NULL));

    int number;

    // Generate a random number 5 times
    std::cout << "Generate a random number five times\n"; 
    
    for (int i = 1; i <= 5; i++) {
        number = rand();
        std::cout << "[" << i << "] Random number = " << number << '\n';
    }

    std::cout << separator << '\n';

    // Generate a random number from 1 to 6
    std::cout << "Generate a pseudo random number from 1 to 6, ten times\n";
    for (int i = 1; i <= 10; i++) {
        number = (rand() % 6) + 1;
        std::cout << number << ' ';
    } 
    std::cout << '\n';

    std::cout << separator << '\n';

    // Generate a random number between min and max enetered by user, ten times

    int min_number;
    int max_number;
    int num;

    do {
        std::cout << "Enter the minimum number: ";
        std::cin >> min_number;

        std::cout << "Enter the maximum number: ";
        std::cin >> max_number;
    } while (min_number >= max_number);

    std::cout << "Generate a random number between " << min_number << " and " << max_number << ", ten times\n";

    for (int i = 1; i <= 10; i++) {
        num = rand() % (max_number - min_number + 1) + min_number;
        std::cout << num << ' ';
    }
    std::cout << '\n';

    return 0;
}