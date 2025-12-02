#include <iostream>

int main(){

    std::string title = "Welcome to the Sizeof Operator Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        sizeof() - determines the size in bytes of a:
                    variable, data type, class, objects, etc.
    */

    int age = 35;
    double gpa = 3.8;
    bool sunny = false;
    char symbol = 'X';
    std::string name = "James Bond";
    std::string pizza = "Pizza with tomato and ham";

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"John", "Margarita", "Paul"};

    std::cout << "sizeof(int) = sizeof(" << age << ") = " << sizeof(age) << " bytes\n";
    std::cout << "sizeof(double) = sizeof(" << gpa << ") = " << sizeof(gpa) << " bytes\n";
    std::cout << "sizeof(bool) = sizeof(" << (sunny ? "true" : "false") << ") = " << sizeof(sunny) << " bytes\n";
    std::cout << "sizeof(char) = sizeof('" << symbol << "') = " << sizeof(symbol) << " bytes\n";
    std::cout << "sizeof(string) => ADDRESS => sizeof(\"" << name << "\") = " << sizeof(name) << " bytes\n";
    std::cout << "sizeof(string) => ADDRESS => sizeof(\"" << pizza << "\") = " << sizeof(pizza) << " bytes\n";
    std::cout << "sizeof(char[5]) = " << sizeof(grades) << " bytes\n";
    std::cout << "sizeof(std::string[3]) = " << sizeof(students) << " bytes\n";

    return 0;
}