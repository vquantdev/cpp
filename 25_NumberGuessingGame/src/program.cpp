#include <iostream>

int main() {

    std::string title = "Welcome to the Number Guessing Game!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    int number;
    int guess;
    int attempts = 0;

    // Change the seed for a random number algorithm
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % (100 - 1 + 1) + 1;

    do {

        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;

        attempts++;

        if (guess > number) {
            std::cout << "Too high\n";
        }
        else if (guess < number) {
            std::cout << "Too low\n";
        }
        else {
            std::cout << guess << " is a CORRECT number! You did in " << attempts << " attempts\n";
        }
    } while (guess != number);

    return 0;
}