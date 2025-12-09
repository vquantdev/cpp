#include <iostream>

// Declare classes

class Animal {
    public:
        bool alive = true;

    void eat() {
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal {
    public:

    void bark() {
        std::cout << "The dog goes woof-woof!\n";
    }
};

class Cat : public Animal {
    public:

    void meow() {
        std::cout << "The cat goes meow-meow!\n";
    }
};


class Shape {
    public:
        double area;
        double volume;
};

class Cube : public Shape {
    public:
        double side;

    Cube(double side) {
        this->side = side;

        this->area = 6 * pow(this->side, 2);
        this->volume = pow(this->side, 3);
    }
};

class Sphere : public Shape {
    public:
        double radius;

    Sphere(double radius) {
        this->radius = radius;

        this->area = 4 * 3.14159 * pow(this->radius, 2);
        this->volume = (4.0 / 3.0) * 3.14159 * pow(this->radius, 3);
    }
};

int main() {

    std::string title = "Welcome to the Inheritance Program!";
    std::string separator = std::string(title.length() , '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        inheritance = a class can receive attributes and methods from another class
                        Children classes inherit from a Parent class
                        Helps to reuse similar code found within multiple classes
    */

    // Create an object of a class 'Dog', inherited from 'Animal'
    std::cout << "1. Create an object of a class 'Dog', inherited from 'Animal'\n\n";
    
    Dog dog;

    std::cout << "Dog is alive: " << (dog.alive ? "YES" : "NO") << '\n';
    
    dog.eat();
    dog.bark();

    std::cout << '\n' << separator << "\n\n";

    // Create an object of a class 'Cat', inherited from 'Animal'
    std::cout << "2. Create an object of a class 'Cat', inherited from 'Animal'\n\n";

    Cat cat;

    std::cout << "Cat is alive: " << (cat.alive ? "YES" : "NO") << '\n';
    cat.eat();
    cat.meow();

    std::cout << '\n' << separator << "\n\n";

    // Create Cube and Sphere objects, inherited from Shape class
    std::cout << "3. Create 'Cube' and 'Sphere' objects, inherited from the 'Shape' class\n\n";

    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Cube side = " << cube.side << '\n';
    std::cout << "Cube area = " << cube.area << '\n';
    std::cout << "Cube volume = " << cube.volume << '\n';

    std::cout << '\n';

    std::cout << "Sphere radius = " << sphere.radius << '\n';
    std::cout << "Sphere area = " << sphere.area << '\n';
    std::cout << "Sphere volume = " << sphere.volume << '\n';

    return 0;
}