#include <iostream>

int main() {

    std::string title = "Welcome to the Multidimensional Arrays Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        Multidimensional Array = an aray, elements of which are arrays

                                <datatype> <arrayname>[rows][columns];
    */

    std::string cars[3][3] = {
        {"Mustang", "Fiesta", "Focus"},
        {"Corvette", "Tahoe", "Camaro"},
        {"Challenger", "Stratus", "RAM"}
    };

    // Print element at row=0, column=0
    std::cout << "1. Print elements of 2-D array\n\n";

    std::cout << "cars[0][0] = " << cars[0][0] << '\n';
    std::cout << "cars[0][1] = " << cars[0][1] << '\n';
    std::cout << "cars[0][2] = " << cars[0][2] << "\n\n";

    std::cout << "cars[1][0] = " << cars[1][0] << '\n';
    std::cout << "cars[1][1] = " << cars[1][1] << '\n';
    std::cout << "cars[1][2] = " << cars[1][2] << "\n\n";

    std::cout << "cars[2][0] = " << cars[2][0] << '\n';
    std::cout << "cars[2][1] = " << cars[2][1] << '\n';
    std::cout << "cars[2][2] = " << cars[2][2] << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Iterate over a 2-D array
    std::cout << "2. Iterate over a 2-D array\n\n";

    int sizeof_cars = sizeof(cars);
    int sizeof_cars_element = sizeof(cars[0]);
    int sizeof_cars_element_lvl2 = sizeof(cars[0][0]); // or sizeof(std::string)
    int rows = sizeof_cars / sizeof_cars_element;
    int columns = sizeof_cars_element / sizeof_cars_element_lvl2;

    std::cout << "The total size of 2-D array = sizeof(cars) = " << sizeof_cars << '\n';
    std::cout << "The size of a row = sizeof(cars[0]) = " << sizeof_cars_element << '\n';
    std::cout << "The size of an element in a row = sizeof(cars[0][0]) = sizeof(std::string) = " << sizeof_cars_element_lvl2 << '\n';
    std::cout << "Rows = " << rows << '\n';
    std::cout << "Columns = " << columns << "\n\n";

    int lastColumnIndex = columns - 1;

    for (int i = 0; i < rows; i++) {
        
        std::cout << "ROW " << (i + 1) << ": ";

        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j];
            if (j < lastColumnIndex) {
                std::cout << ", ";
            }
        }
        
        std::cout << '\n';
    }
 
    return 0;
}