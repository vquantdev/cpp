#include <iostream>

// Declare an ENUM

enum Day {
    monday = 1, 
    tuesday = 2, 
    wednesday = 3, 
    thursday = 4, 
    friday = 5, 
    saturday = 6, 
    sunday = 7
};

int main() {

    std::string title = "Welcome to the Enums Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        enum = a user defined data type that consists
                of paired named-integer constants.
                Useful when we have a set of potential options.
    */

    // Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday

    // std::string today = "sunday";

    Day today = Day::wednesday;

    std::cout << "Day today = Day::wednesday = " << today << '\n';

    switch (today) {
        case Day::monday:
            std::cout << "It's Sunday\n";
            break;
        case Day::tuesday:
            std::cout << "It's Tuesday\n";
            break;
        case Day::wednesday:
            std::cout << "It's Wednesday\n";
            break;
        case Day::thursday:
            std::cout << "It's Thursday\n";
            break;
        case Day::friday:
            std::cout << "It's Friday\n";
            break;
        case Day::saturday:
            std::cout << "It's Saturday\n";
            break;
        case Day::sunday:
            std::cout << "It's Sunday\n";
            break;
    }

    return 0;
}