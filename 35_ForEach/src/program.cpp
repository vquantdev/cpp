#include <iostream>

int main() {

    std::string title = "Welcome to the ForEach Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        foreach loop = loop that eases traversal over an 
                        iterable data set
    */

    std::cout << "1. Print an array of strings\n\n";

    std::string students[] = {"James", "Mark", "Paul", "Johny"};

    for (std::string student : students) {
        std::cout << "Student '" << student << "'\n";
    }

    std::cout << '\n';
    std::cout << separator << "\n\n";

    std::cout << "2. Print an array of integers\n\n";

    int grades[] = {65, 75, 81, 91};

    for (int grade : grades) {
        std::cout << "Grade '" << grade << "'\n";
    }
    std::cout << '\n';

    return 0;
}