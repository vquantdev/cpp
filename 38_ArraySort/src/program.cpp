#include <iostream>

// Declare functions
std::string printArray(int array[], int size);

int main() {

    std::string title = "Welcome to the Array Sort Program";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";


    int array[] = {9, 10, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(int);
    
    std::cout << "Original array = " << printArray(array, array_size) << "\n\n";

    int temp;
    for (int i = 0; i < array_size; i++) {

        int iter = i + 1;

        std::cout << separator << "\n";
        std::cout << "### ITERATION " << iter << " ###\n";
        std::cout << separator << "\n\n";
        std::cout << "Array at the beginning of iteration: " << printArray(array, array_size) << "\n\n";

        for (int j = i; j < array_size; j++) {
            if (array[j] < array[i]) {
                
                std::string array_before_swap = printArray(array, array_size);
                
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

                std::cout << "SWAP array[" << j << "] and array[" << i << "] because " << array[j] << " < " << array[i] << " #### ";
                std::cout << array_before_swap << " -> " << printArray(array, array_size) << '\n';
            }
        }

        std::cout << '\n';
        std::cout << "Array at the end of iteration: " << printArray(array, array_size) << "\n\n";
    }

    std::cout << '\n' << separator << '\n';
    std::cout << "Sorted array = " << printArray(array, array_size) << "\n\n";

    return 0;
}

// Define functions
std::string printArray(int array[], int size) {
    std::string result = "[";
    int lastIndex = size - 1;
    for (int i = 0; i < size; i++) {
        result += std::to_string(array[i]);
        if (i < lastIndex) {
            result += ", ";
        }
    }
    result += "]";
    return result;
}