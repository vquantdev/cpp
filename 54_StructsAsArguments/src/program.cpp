#include <iostream>

struct Car {
    std::string name;
    int year;
    std::string color;
};

// Declare functions
void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main() {

    std::string title = "Welcome to the Structs As Arguments Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    Car car_1;
    Car car_2;

    car_1.name = "Toyota Land Cruiser";
    car_1.year = 1999;
    car_1.color = "Orange";

    car_2.name = "Ford Focus";
    car_2.year = 2010;
    car_2.color = "Green";

    std::cout << "1. Print car information\n\n";
    
    std::cout << "main(): Address of car_1 = " << &car_1 << '\n';
    printCar(car_1);

    std::cout << '\n';

    std::cout << "main(): Address of car_2 = " << &car_2 << '\n';
    printCar(car_2);

    std::cout << '\n' << separator << "\n\n";

    // Change value of a struct by invoking a function
    std::cout << "2. Change car color\n\n";

    paintCar(car_1, "Pink");

    printCar(car_1);

    std::cout << '\n';

    return 0;
}

void printCar(Car &car) {
    std::cout << "printCar(): Address of a car = " << &car << '\n';
    std::cout << "Car name = " << car.name << '\n';
    std::cout << "Car year = " << car.year << '\n';
    std::cout << "Car color = " << car.color << '\n';
}

void paintCar(Car &car, std::string color) {
    car.color = color;
}