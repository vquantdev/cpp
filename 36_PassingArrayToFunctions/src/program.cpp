#include <iostream>

// Declare function
double getTotal(double prices[], int arrayLength);

int main() {

    std::string title = "Welcome to the Passing Arrays to Functions Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n"; 

    std::cout << "1. Print the sum of the prices\n\n";

    double prices[] = {34.21, 88.50, 120.43, 200.01, 999.999};
    int arrayLength = sizeof(prices) / sizeof(double);
    int lastIndex = arrayLength - 1;

    std::cout << "Prices = [";
    for (int i = 0; i < arrayLength; i++) {
        std::cout << prices[i];
        if (i < lastIndex) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "Array length = " << arrayLength << '\n';

    /*
        When we pass an array to a function, 
        the function receives the address (pointer) of where the array is located.

        Here, we pass the array length to the function because we haven't learned 
        how to work with pointers yet.
    */
    double total = getTotal(prices, arrayLength);

    std::cout << "Total of all prices (sum) = $" << total << "\n\n";

    return 0;
}

// Define function
double getTotal(double prices[], int arrayLength) {
    double total = 0;
    for (int i = 0; i < arrayLength; i++) {
        total += prices[i];
    }
    return total;
}