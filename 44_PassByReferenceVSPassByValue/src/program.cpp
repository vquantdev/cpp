#include <iostream>

// Declare a swap function (pass by value)
void swap_variables_pass_by_val(std::string a, std::string b);

// Declare a swap function (pass by reference)
void swap_variables_pass_by_ref(std::string &a, std::string &b);

int main() {

    std::string title = "Welcome to the Pass-by-Reference VS Pass-by-Value Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    std::string cup_a = "Coffee";
    std::string cup_b = "Green Tea";
    std::string cup_empty;

    // Swap content of cups
    std::cout << "1. Swap two varialbes (cups)\n\n";
    
    std::cout << "Before swap: cup_a = '" << cup_a << "', cup_b = '" << cup_b << "'\n";
    
    cup_empty = cup_a;
    cup_a = cup_b;
    cup_b = cup_empty;

    std::cout << "After swap: cup_a = '" << cup_a << "', cup_b = '" << cup_b << "'\n";

    std::cout << '\n' << separator << "\n\n";

    // Swap two variables by invoking a function (pass variables by value)
    std::cout << "2. Swap two variables by invoking a function (pass variables by value)\n\n";

    std::string car_mom = "Ford";
    std::string car_dad = "Ferrari";

    std::cout << "main(): Address car_mom = " << &car_mom << '\n';
    std::cout << "main(): Address car_dad = " << &car_dad << '\n';

    std::cout << '\n';

    std::cout << "Before swap: car_mom = '" << car_mom << "', car_dad = '" << car_dad << "'\n\n";
    std::cout << "Invoke swap_variables_pass_by_val(car_mom, car_dad);\n\n";
    
    swap_variables_pass_by_val(car_mom, car_dad);

    std::cout << '\n';

    std::cout << "After swap: car_mom = '" << car_mom << "', car_dad = '" << car_dad << "'\n";

    std::cout << '\n' << separator << "\n\n";

    // Swap two variables by invoking a function (pass variables by reference)
    std::cout << "3. Swap two variables by invoking a function (pass variables by reference)\n\n";

    std::string car_sis = "Toyota";
    std::string car_bro = "Mazda";

    std::cout << "main(): Address car_sis = " << &car_sis << '\n';
    std::cout << "main(): Address car_bro = " << &car_bro << '\n';

    std::cout << '\n';

    std::cout << "Before swap: car_sis = '" << car_sis << "', car_bro = '" << car_bro << "'\n\n";
    std::cout << "Invoke swap_variables_pass_by_ref(car_sis, car_bro);\n\n";

    swap_variables_pass_by_ref(car_sis, car_bro);

    std::cout << '\n';

    std::cout << "After swap: car_sis = '" << car_sis << "', car_bro = '" << car_bro << "'\n";

    std::cout << '\n';

    return 0;
}

// Declare a function to swap two variables (pass by value)
void swap_variables_pass_by_val(std::string a, std::string b) {
    
    std::cout << "swap_variables_pass_by_val(): Address car_mom = " << &a << '\n';
    std::cout << "swap_variables_pass_by_val(): Address car_dad = " << &b << '\n';
;
    std::string temp;
    temp = a;
    a = b;
    b = temp;
}

// Declare a function to swap two variables (pass by reference)
void swap_variables_pass_by_ref(std::string &a, std::string &b) {
    
    std::cout << "swap_variables_pass_by_ref(): Address car_sis = " << &a << '\n';
    std::cout << "swap_variables_pass_by_ref(): Address car_bro = " << &b << '\n';

    std::string temp;
    temp = a;
    a = b;
    b = temp;
}