#include <iostream>

int main() {

    std::string title = "Welcome to the Array Iteration Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";
    std::cout << "1. Print an array of strings\n\n";

    std::string students[] = {"James", "Mark", "Paul"};
    int sizeof_students = sizeof(students);
    int sizeof_std_string = sizeof(std::string);
    int arrayLength = sizeof_students / sizeof_std_string; 

    std::cout << "std::string students[] = {\"James\", \"Mark\", \"Paul\"};\n";
    std::cout << "sizeof(students) = " << sizeof_students << '\n';
    std::cout << "sizeof(std::string) = " << sizeof_std_string << '\n';
    std::cout << "Number of elements in array 'students' = sizeof(students) / sizeof(std::string) = " 
              << sizeof_students << " / " << sizeof_std_string << " = " << arrayLength << "\n\n";
    
    for (int i = 0; i < arrayLength; i++) {
        std::cout << "students[" << i << "] = \"" << students[i] << "\"\n";
    }

    std::cout << '\n' << separator << "\n\n";
    std::cout << "2. Print an array of chars\n\n";

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int sizeof_grades = sizeof(grades);
    int sizeof_char = sizeof(char);
    int gradesLength =  sizeof_grades / sizeof_char;

    std::cout << "char grades[] = {'A', 'B', 'C', 'D', 'F'};\n";
    std::cout << "sizeof(grades) = " << sizeof_grades << '\n';
    std::cout << "sizeof(char) = " << sizeof_char << '\n';
    std::cout << "Number of elements in array 'grades' = sizeof(grades) / sizeof(char) = " 
              << sizeof_grades << " / " << sizeof_char << " = " << gradesLength << "\n\n";

    for (int i = 0; i < gradesLength; i++) {
        std::cout << "grades[" << i << "] = " << grades[i] << '\n';
    }

    std::cout << '\n';

    return 0;
}