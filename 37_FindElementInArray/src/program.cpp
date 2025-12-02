#include <iostream>

// Declare function

int searchArray(int numbers[], int size, int searchNumber);
int searchArray(std::string toppings[], int size, std::string topping);

int main() {

    std::string title = "Welcome to the Find an Element in an Array Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    std::cout << "1. Search an array of integers\n\n";

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numbers_size = sizeof(numbers) / sizeof(int);
    int numbers_last_index = numbers_size - 1;
    int numbers_index;
    int numbers_search;

    // Print array of integers
    std::cout << "int numbers[] = {";
    for (int i = 0; i < numbers_size; i++) {
        std::cout << numbers[i];
        if (i < numbers_last_index) {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";
    std::cout << "Array size = " << numbers_size << '\n';
    std::cout << '\n';

    std::cout << "Enter element (int number) to search for: ";
    std::cin >> numbers_search;

    numbers_index = searchArray(numbers, numbers_size, numbers_search);
    if (numbers_index < 0) {
        std::cout << "There is no element '" << numbers_search << "' in the array";
    }
    else {
        std::cout << "We found it! The element numbers[" << numbers_index << "] = " << numbers_search;
    }
    std::cout << "\n\n";

    std::cout << separator << "\n\n";

    // Search an array of strings
    std::cout << "2. Search an array of strings\n\n";

    std::string toppings[] = {"ham", "pineapple", "small bacon", "tomato", "chicken", "beef"};
    int toppings_size = sizeof(toppings) / sizeof(std::string);
    int toppings_last_index = toppings_size - 1;
    int toppings_index;
    std::string toppings_search;

    // Print an array of strings
    std::cout << "std::string toppings[] = {";
    for (int i = 0; i < toppings_size; i++) {
        std::cout << toppings[i];
        if (i < toppings_last_index) {
            std::cout << ", ";
        }
    }
    std::cout << "}\n";
    std::cout << "Array size = " << toppings_size << '\n';
    std::cout << '\n';

    std::cout << "Enter an element (std::string topping) to search for: ";
    std::getline(std::cin >> std::ws, toppings_search);

    toppings_index = searchArray(toppings, toppings_size, toppings_search);
    if (toppings_index < 0) {
        std::cout << "There is no element '" << toppings_search << "' in the array";
    }
    else {
        std::cout << "We found it! The element toppins[" << toppings_index << "] = '" << toppings_search << "'";
    }

    std::cout << "\n\n";

    return 0;
}

// Define function

int searchArray(int numbers[], int size, int searchNumber) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchNumber) {
            return i;
        }
    }
    return -1;
}

int searchArray(std::string toppings[], int size, std::string topping) {
    for (int i = 0; i < size; i++) {
        if (toppings[i] == topping) {
            return i;
        }
    }
    return -1;
}