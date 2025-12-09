#include <iostream>

// Declare a class

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    // Constructor
    Student(std::string studentName, int studentAge, double studentGpa) {
        this->name = studentName;
        this->age = studentAge;
        this->gpa = studentGpa;
    }
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string carMake, std::string carModel, int carYear, std::string carColor) {
        this->make = carMake;
        this->model = carModel;
        this->year = carYear;
        this->color = carColor;
    }
};

int main() {

    std::string title = "Welcome to the Class Constructors Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        constructor = a special method that is automatically called when an object is instantiated
                        Useful for assigning values to attributes as arguments
    */    

    std::cout << "1. Create an instance of a 'Student' class using constructors\n\n";

    Student student_1("James Bond", 22, 2.45);
    Student student_2("Mark Oconnor", 33, 3.1);
    Student student_3("Master Yoda", 100, 3.99);

    std::cout << "Student name = " << student_1.name << '\n';
    std::cout << "Student age = " << student_1.age << '\n';
    std::cout << "Student GPA = " << student_1.gpa << '\n';

    std::cout << '\n';

    std::cout << "Student name = " << student_2.name << '\n';
    std::cout << "Student age = " << student_2.age << '\n';
    std::cout << "Student GPA = " << student_2.gpa << '\n';

    std::cout << '\n';

    std::cout << "Student name = " << student_3.name << '\n';
    std::cout << "Student age = " << student_3.age << '\n';
    std::cout << "Student GPA = " << student_3.gpa << '\n';

    std::cout << '\n' << separator << "\n\n";

    // Create an instance of a 'Car' class
    std::cout << "2. Create an instance of a 'Car' class\n\n";

    Car mustang("Ford", "Mustang", 1988, "Silver");
    Car fiesta("Ford", "Fiesta", 2008, "Red");

    std::cout << "Car make = " << mustang.make << '\n';
    std::cout << "Car model = " << mustang.model << '\n';
    std::cout << "Car year = " << mustang.year << '\n';
    std::cout << "Car color = " << mustang.color << '\n';

    std::cout << '\n';

    std::cout << "Car make = " << fiesta.make << '\n';
    std::cout << "Car model = " << fiesta.model << '\n';
    std::cout << "Car year = " << fiesta.year << '\n';
    std::cout << "Car color = " << fiesta.color << '\n';

    std::cout << '\n';

    return 0;
}