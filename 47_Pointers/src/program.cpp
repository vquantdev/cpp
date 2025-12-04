#include <iostream>

int main() {

    std::string title = "Welcome to the Pointers Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        pointers = variable that stores a memory address of another variable
                    sometimes it's easier to work with an address
                    
                    & = address-of operator
                    * = dereference operator
    */

    std::string name = "James Bond";
    int age = 35;

    // 1. Print original data
    std::cout << "1. Original variable\n\n";
    std::cout << "std::string name = \"" << name << "\"\n";
    std::cout << "int age = " << age << ";\n\n";

    std::cout << '\n' << separator << "\n\n";

    // 2. Create a pointer
    std::cout << "2. Creating a pointer to the address of a variable\n\n";

    std::cout << "std::string *pname = &name;" << "\n\n";
    
    std::cout << "int *page = &age;" << "\n\n";
    
    std::cout << '\n' << separator << "\n\n";

    // Create a pointer to the address where the variable is located
    // pointer = address of a variable
    std::string *pname = &name; 
    int *page = &age;

    std::cout << "Pointer to (the address of) a variable 'name' = " << pname << "\n\n";

    std::cout << "Pointer to (the address of) a variable 'age' = " << page << "\n\n";    

    std::cout << '\n' << separator << "\n\n";

    // 3. Access the value at the address

    std::cout << "3. Accessing the value stored at the address\n\n";
    
    std::cout << "Use dereference operator *pointer\n\n";
    
    std::cout << "The value of a variable 'name' (stored at the address " << pname << ") = " << *pname << "\n\n";

    std::cout << "The value of a variable 'age' (stored at the address " << page << ") = " << *page << "\n\n";

    std::cout << '\n' << separator << "\n\n";

    // 4. Working with arrays
    std::cout << "4. Working with arrays\n\n";

    std::string freePizzas[5] = {"pizza 1", "pizza 2", "pizza 3", "pizza 4", "pizza 5"};

    std::cout << "std::string freePizzas[5] = {\"pizza 1\", \"pizza 2\", \"pizza 3\", \"pizza 4\", \"pizza 5\"};" << "\n\n";

    std::cout << "freePizzas is the address (" << freePizzas << ") of where the array is stored\n\n";

    // Since the freePizzas is the address to where array is stored, we don't need to use reference operator
    
    std::cout << "Create a pointer to an array: std::string *pfreePizzas = freePizzas;" << "\n\n";
    
    std::string *pfreePizzas = freePizzas;

    std::cout << "Pointer to (the address of) an array 'freePizzas' = " << pfreePizzas << "\n\n";

    std::cout << "The FIRST value of an array (stored at the address " << pfreePizzas << ") = " << *pfreePizzas << "\n\n";

    std::cout << "Increment pointer = go to the next address: pFreePizzas++;\n\n";
    
    pfreePizzas++;
    std::cout << "The next value (2) the pointer pointing to (address " << pfreePizzas << ") is: " << *pfreePizzas << "\n\n";

    pfreePizzas++;
    std::cout << "The next value (3) the pointer pointing to (address " << pfreePizzas << ") is: " << *pfreePizzas << "\n\n";

    pfreePizzas++;
    std::cout << "The next value (4) the pointer pointing to (address " << pfreePizzas << ") is: " << *pfreePizzas << "\n\n";

    pfreePizzas++;
    std::cout << "The next value (5) the pointer pointing to (address " << pfreePizzas << ") is: " << *pfreePizzas << "\n\n";

    pfreePizzas++;
    std::cout << "Try to access the next value at the address " << pfreePizzas << ": " << *pfreePizzas << "\n\n";

    return 0;
}