#include <iostream>

int main() {

    std::string title = "Welcome to the Fill Function Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        fill() = Fills a range of elements with a specified value
                fill(begin, end, value)
    */

    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    int foods_size = sizeof(foods) / sizeof(std::string);

    for (int i = 0; i < foods_size; i++) {
        std::cout << "foods[" << i << "] = " << foods[i] << '\n'; 
    }

    std::cout << '\n' << separator << "\n\n";

    const int SIZE = 33;

    std::string my_foods[SIZE];

    fill(my_foods, my_foods + (SIZE / 3), "burger");
    fill(my_foods + (SIZE / 3), my_foods + 2 * (SIZE / 3), "hot dog");
    fill(my_foods + 2 * (SIZE / 3), my_foods + SIZE, "cake");

    for (int i = 0; i < SIZE; i++) {
        std::cout << "my_foods[" << i << "] = " << my_foods[i] << '\n';
    }



    return 0;
}