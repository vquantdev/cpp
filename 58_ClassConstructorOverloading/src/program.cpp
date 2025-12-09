#include <iostream>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

    Pizza() {
        std::cout << "===> Call a Pizza::Pizza() constructor\n";
    }

    Pizza (std::string pizzaTopping1) {
        std::cout << "===> Call a Pizza::Pizza(std::string pizzaTopping1) constructor\n";

        this->topping1 = pizzaTopping1;
    }

    Pizza (std::string pizzaTopping1, std::string pizzaTopping2) {
        std::cout << "===> Call a Pizza::Pizza(std::string pizzaToppting1, std::string pizzaTopping2) constructor\n";

        this->topping1 = pizzaTopping1;
        this->topping2 = pizzaTopping2;
    }
};

int main() {

    std::string title = "Welcome to the Class Constructor Overloading Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        Overloaded constructors = muptiple constructors with the same name but different parameters
                                    allows for varying arguments when instantiating an object
    */

    // Using a constructor with 1 argument
    std::cout << "1. Create an object using constructor with 1 parameter\n\n";

    Pizza pizza1("pepperoni");

    std::cout << "Pizza with " << pizza1.topping1 << '\n';

    std::cout << '\n' << separator << "\n\n";

    // Using a constructor with 2 arguments
    std::cout << "2. Create an object using contructor with 2 parameters\n\n";

    Pizza pizza2("ham", "mushrooms");

    std::cout << "Pizza with (1) " << pizza2.topping1 << " and (2) " << pizza2.topping2 << '\n';

    std::cout << '\n' << separator << "\n\n";

    // Using a constructor with no arguments
    std::cout << "3. Create an object using constructor with NO arguments\n\n";

    Pizza pizza3;


    return 0;
}