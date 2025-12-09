#include <iostream>

// Declare a class

class Human {
    // Characteristics
    public:
        std::string name = "Default name";
        std::string occupation = "Default Occupation"; // Job
        int age = 18;

        void eat() {
            std::cout << "This person is eating\n";
        }

        void drink() {
            std::cout << "This person is drinking\n";
        }

        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "You step on the gas!\n";
        }

        void brake() {
            std::cout << "You step on the brakes!\n";
        }
};

int main() {

    std::string title = "Welcome to the Classes And Objects Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        Object = a collection of attributes and methods
                    They can have characteristics and can perform actions
                    Can be used to mimic real world items (e.g., Phone, Book, Car)
                    Created from a class which acts as a "blue-print"
    */

    // Create an instance of a class and print its attributes
    std::cout << "1. Create an instance of a 'Human' class and print its attributes\n\n";
    
    Human human_1;
    Human human_2;
    Human human_3;

    human_1.name = "James";
    human_1.occupation = "Researcher";
    human_1.age = 44;

    human_2.name = "Patrick";
    human_2.occupation = "Tennis Player";
    human_2.age = 37;

    std::cout << "Human 1 name = " << human_1.name << '\n';
    std::cout << "Human 1 occupation = " << human_1.occupation << '\n';
    std::cout << "Human 1 age = " << human_1.age << '\n';

    std::cout << '\n';

    std::cout << "Human 2 name = " << human_2.name << '\n';
    std::cout << "Human 2 occupation = " << human_2.occupation << '\n';
    std::cout << "Human 2 age = " << human_2.age << '\n';

    std::cout << '\n';
    
    std::cout << "Human 3 name = " << human_3.name << '\n';
    std::cout << "Human 3 occupation = " << human_3.occupation << '\n';
    std::cout << "Human 3 age = " << human_3.age << '\n';

    std::cout << '\n' << separator << "\n\n";

    // Invoke object methods
    std::cout << "2. Invoke 'Human' object's methods\n\n";

    human_1.eat();
    human_1.drink();
    human_1.sleep();

    std::cout << '\n';

    human_2.eat();
    human_2.drink();
    human_2.sleep();

    std::cout << '\n' << separator << "\n\n";

    // Create a car object

    std::cout << "3. Create an instance of a Car class\n\n";

    Car mustang;
    
    mustang.make = "Ford";
    mustang.model = "Mustang";
    mustang.year = 1969;
    mustang.color = "Black";

    std::cout << "Car make = " << mustang.make << '\n';
    std::cout << "Car model = " << mustang.model << '\n';
    std::cout << "Car year = " << mustang.year << '\n';
    std::cout << "Car color = " << mustang.color << '\n';

    std::cout << '\n';

    mustang.accelerate();
    mustang.accelerate();
    mustang.brake();

    return 0;
}