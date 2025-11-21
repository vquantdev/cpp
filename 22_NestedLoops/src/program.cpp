#include <iostream>

int main() {

    std::string title = "Welcome to the Nested Loops Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    /*
        loop () {
            loop () {
                ...
            }
        }
    */

    // Counting from 1 to 10, three times
    std::cout << "Counting from 1 to 10, three times" << std::endl;

    for (int i = 1; i <= 3; i++) {
        std::cout << "[" << i << "] ";

        for (int j = 1; j <= 10; j++) {
            std::cout << j << ' ';
        }

        std::cout << std::endl;
    }

    std::cout << separator << std::endl;

    // Print a rectangle of "n" rows and "m" columns using a symbol "c"
    std::cout << "Print a rectangle of 'n' rows and 'm' columns using a symbol 'c'" << std::endl;

    int rows;
    int columns;
    char symbol;

    do {
        std::cout << "Enter the number of rows (n): ";
        std::cin >> rows;
    } while (rows <= 0);

    do {
        std::cout << "Enter the number of columns (m): ";
        std::cin >> columns;
    } while (columns <= 0);

    do {
        std::cout << "Enter a symbol (c) to print a rectangle: ";
        std::cin >> symbol;
    } while (symbol == (char)0);

    std::cout << "The " << rows << "x" << columns << " rectangle with a symbol " << symbol << " can be seen below: " << std::endl;

    for (int n = 0; n < rows; n++) {
        for (int m = 0; m < columns; m++) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    std::cout << separator << std::endl;

    // Printing a rectangle (border only) of the same size
    std::cout << "Printing a rectangle (border only) of the same size" << std::endl;

    for (int n = 1; n <= rows; n++) {
        for (int m = 1; m <= columns; m++) {
            if (n == 1 || n == rows || m == 1 || m == columns) {
                std::cout << symbol;
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}