#include <iostream>

// Declare a struct to store information about a student
struct student {
    // Student name
    std::string name;
    // Student GPA score
    double gpa;
    // If a student is currently enrolled
    bool enrolled = true; // DEFAULT value
};

int main() {

    std::string title = "Welcome to the Structs Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        struct = A structure that groups related variables under one name 
                    structs can contain many different data types (string, int, double, bool, etc)
                    variables in a struct are known as "members"
                    members can be accessed with "." - Class member access operator 
    */

    student student_1;
    student_1.name = "James Bond";
    student_1.gpa = 3.77;
    student_1.enrolled = true;

    student student_2;
    student_2.name = "Captain America";
    student_2.gpa = 3.88;
    student_2.enrolled = false;

    student student_3;
    student_3.name = "Spyder Man";
    student_3.gpa = 3.11;
    student_3.enrolled = true;

    // Accessing struct's attributes
    std::cout << "1. Accessing struct's attributes\n\n";

    std::cout << "Student 1 name = " << student_1.name << " (" << sizeof(student_1.name) << " bytes)" << '\n';
    std::cout << "Student 1 GPA = " << student_1.gpa << " (" << sizeof(student_1.gpa) << " bytes)" << '\n';
    std::cout << "Student 1 is enrolled = " << (student_1.enrolled ? "YES" : "NO") << " (" << sizeof(student_1.enrolled) << " bytes)" << '\n';
    std::cout << "sizeof(student_1) = " << sizeof(student_1) << '\n';

    std::cout << '\n';

    std::cout << "Student 2 name = " << student_2.name << '\n';
    std::cout << "Student 2 GPA = " << student_2.gpa << '\n';
    std::cout << "Student 2 is enrolled = " << (student_2.enrolled ? "YES" : "NO") << '\n';

    std::cout << '\n';

    std::cout << "Student 3 name = " << student_3.name << '\n';
    std::cout << "Student 3 GPA = " << student_3.gpa << '\n';
    std::cout << "Student 3 is enrolled = " << (student_3.enrolled ? "YES" : "NO") << '\n';

    return 0;
}