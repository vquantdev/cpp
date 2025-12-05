#include <iostream>

int main() {

    std::string title = "Welcome to the Null Pointers Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        NULL value = a special value that means something has no value.
                     When a pointer is holding a NULL value,
                     that pointer is not pointing at anything (null pointer).
        
        nullptr = keyword represent a NULL pointer literal.

        nullptrs are helpful when determining if an address 
        was successfully assigned to a pointer
    */

    // Declare a pointer
    std::cout << "1. Declare a pointer, while not assigning anything to it\n\n";

    int *pointer;

    std::cout << "    int *pointer;" << "\n\n";
    
    std::cout << "Check if the 'pointer' points somewhere: " << pointer << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Declare a pointer and assign a nullptr value to it
    std::cout << "2. Declare a pointer and assign a nullptr to it\n\n";

    int *pointer_2 = nullptr;

    std::cout << "    int *pointer_2 = nullptr;" << "\n\n";

    std::cout << "Check if 'pointer_2' points somewhere: " << pointer_2 << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // Declare a variable and assign its address to a pointer
    std::cout << "3. Declare a variable and assign its address to a pointer\n\n";

    int grade = 75;
    pointer_2 = &grade;

    std::cout << "    int grade = 75;" << "\n\n";
    std::cout << "    pointer_2 = &grade;" << "\n\n";

    std::cout << "Check if 'pointer_2' points somewhere: " << pointer_2 << "\n\n";
    if (pointer_2 != nullptr) {
        std::cout << "Check the value stored at the 'pointer_2' address (" << pointer_2 << "): " << *pointer_2 << "\n\n";
    }
    else {
        std::cout << "Cannot use 'dereference' operator because the 'pointer_2' points to nowhere\n\n";
    }

    std::cout << '\n' << separator << "\n\n";

    return 0;
}