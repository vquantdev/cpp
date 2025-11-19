#include <iostream>

int main() {

    std::cout << "Welcome to the User Input Program!" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    /*
        cout << (insertion operator)
        cin >> (extraction operator)
    */

    std::string name; // User name
    int age; // User age

    std::cout << "What's your name?: ";
    std::cin >> name;
    
    std::cout << "How old are you?: ";
    std::cin >> age;
    
    std::cout << "Hello, " << name << ", you are " << age << " years old." << std::endl;

    std::cout << "----------------------------------" << std::endl;

    // If user unput contains spaces
    std::string fullName;

    std::cout << "What's your full name?: ";
    // If we previously called std::cin >> variable, there is "\n" in a buffer
    // We should add ">> std::ws" to eliminate any whitespaces from the previous input, including "\n"
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Your full name is " << fullName << std::endl;

    return 0;
}