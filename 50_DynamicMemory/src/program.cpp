#include <iostream>

int main() {

    std::string title = "Welcome to the Dynamic Memory Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        dynamic memory = Memory that is allocated after the program 
                        is already compiled and running.

                        Use 'new' operator to allocate 
                        memory in the heap rather than in the stack

                        Useful when we don't know how much memory we will need.
                        Makes our program more flexible, especially when accepting user input.
    */

    // 1. Declare a pointer
    std::cout << "1. Declare a pointer\n\n";
    
    int *pNum = NULL;

    std::cout << "    int *pNum = NULL;" << "\n\n";

    std::cout << "Pointer 'pNum' points to the address: " << pNum << "\n\n";

    std::cout << "Check if pointer 'pNum' is equal to nullptr: " << (pNum == nullptr ? "YES" : "NO") << "\n\n";
 
    std::cout << '\n' << separator << "\n\n";

    // 2. Allocate memory in the heap for an 'int' variable
    std::cout << "2. Allocate memory in the heap to store an 'int' variable\n\n";

    pNum = new int; // new returns the address

    std::cout << "    pNum = new int; // new returns the address" << "\n\n";

    std::cout << "Pointer 'pNum' points to the address: " << pNum << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // 3. Assign a value
    std::cout << "3. Assign (store) a value to a variable that is stored at the pointer's address\n\n";

    *pNum = 35; // Assign a value

    std::cout << "    *pNum = 35; // Assign a value" << "\n\n";

    std::cout << "The value stored at the address " << pNum << ": " << *pNum << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // 4. Free up the memory - Delete our pointer
    std::cout << "4. Delete pointer when we don't need it anymore\n\n";

    delete pNum;

    std::cout << "    delete pNnum;" << "\n\n";

    std::cout << "Check if pointer 'pNum' points somewhere: " << pNum << "\n\n";

    std::cout << "Check if there any value stored at the pointer 'pNum' address " << pNum << ": " << *pNum << "\n\n";

    std::cout << "Check if pointer 'pNum' is equal to nullptr: " << (pNum == nullptr ? "YES" : "NO") << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // 5. Create a pointer to an array
    std::cout << "5. Working with arrays\n\n";

    char *pGrades = NULL;
    int size;

    std::cout << "    char *pGrades = NULL;" << "\n\n";
    std::cout << "    int size; // Ask user what is the size of an array to allocate" << "\n\n";

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    std::cout << "    pGrades = new char[size]; // Allocate memory for an array containing 'size' elements" << "\n\n";

    std::cout << "=> Enter " << size << " Grades\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << (i + 1) << ": ";
        std::cin >> pGrades[i];
    }
    std::cout << "\n\n";

    std::cout << "=> Display " << size << " Grades\n";
    for (int i = 0; i < size; i++) {
        std::cout << "grades[" << i << "] = " << pGrades[i] << '\n';
    }
    std::cout << "\n\n";

    std::cout << "Delete dynamically allocated array\n\n";
    
    delete[] pGrades;

    std::cout << "    delete[] pGrades;" << "\n\n";

    std::cout << "=> Try to print the array again (after deleting)\n";
    for (int i = 0; i < size; i++) {
        std::cout << "grades[" << i << "] = " << pGrades[i] << '\n';
    }

    std::cout << '\n';

    return 0;
}