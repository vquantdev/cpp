#include <iostream>

int main() {

    std::string title = "Welcome to the Arrays Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        array = a data structure that can hold multiple values 
                values are accessed by an index number
    */

    // Declare a variable car
    std::string car = "Ferrari";
    // Declare an array of cars
    std::string carsList[] = {"Ford", "BMW", "Lambo"};

    std::cout << "Car brand is: " << car << '\n';

    // Try to print an array
    std::cout << "Car list is: " << carsList << '\n';
    // Actually, when we try to print "carsList", we are printint the memory address where the array is located
    std::cout << "The address in memory, where an array \"carsList\" is located: " << carsList << '\n';

    std::cout << separator << "\n\n";
    std::cout << "Print cars in carsList: " << '\n';
    std::cout << "carsList[0] = " << carsList[0] << '\n';
    std::cout << "carsList[1] = " << carsList[1] << '\n';
    std::cout << "carsList[2] = " << carsList[2] << '\n';

    std::cout << separator << "\n\n";
    std::cout << "Change car with index 1 in carsList: " << '\n';
    std::cout << "carsList[1] = \"Toyota\"" << '\n';
    carsList[1] = "Toyota";

    std::cout << separator << "\n\n";
    std::cout << "Print cars in carsList: " << '\n';
    std::cout << "carsList[0] = " << carsList[0] << '\n';
    std::cout << "carsList[1] = " << carsList[1] << '\n';
    std::cout << "carsList[2] = " << carsList[2] << '\n';

    std::cout << separator << "\n\n";
    std::cout << "Declare an empty array (size=3) and assign values later" << '\n';
    std::cout << "std::string toppings[3];" << '\n';
    std::cout << "toppings[0] = \"Tomato\"" << '\n';
    std::cout << "toppings[1] = \"Cheese\"" << '\n';
    std::cout << "toppings[2] = \"Ham\"" << '\n';

    std::string toppings[3];
    toppings[0] = "Tomato";
    toppings[1] = "Cheese";
    toppings[2] = "Ham";

    std::cout << separator << "\n\n";
    std::cout << "Print elements in \"toppings\" array:" << '\n';
    std::cout << "toppings[0] = " << toppings[0] << '\n';
    std::cout << "toppings[1] = " << toppings[1] << '\n';
    std::cout << "toppings[2] = " << toppings[2] << '\n';

    return 0;
}