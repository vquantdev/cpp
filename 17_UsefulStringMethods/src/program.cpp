#include <iostream>

int main() {

    std::string title = "Welcome to the Useful String Methods Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << "\n" << separator << std::endl;

    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "You entered name: " << name << std::endl;

    // The length of a string
    std::cout << "[1] - The length of a string" << std::endl;

    int nameLength = name.length();
    
    std::cout << "The length of the name: " << nameLength << " characters" << std::endl;

    if (nameLength > 12) {
        std::cout << "Your name can't be over 12 characters" << std::endl;
    }
    else {
        std::cout << "Welcome, " << name << std::endl;
    }

    std::cout << separator << std::endl;

    // Checking if a string is empty
    std::cout << "[2] Checking if a string is empty" << std::endl;

    bool nameIsEmpty = name.empty();
    if (nameIsEmpty) {
        std::cout << "You didn't enter your name" << std::endl;
    }
    else {
        std::cout << "Hello, " << name << std::endl;
    }

    std::string test = " ";
    std::cout << "String '" << test << "' is " << (test.empty() ? "empty" : "not empty") << std::endl;

    test = "\t";
    std::cout << "String '" << test << "' is " << (test.empty() ? "empty" : "not empty") << std::endl;

    test = "\n";
    std::cout << "String '" << test << "' is " << (test.empty() ? "empty" : "not empty") << std::endl;

    std::cout << separator << std::endl;

    // Using clear() method
    std::cout << "[3] Using clear() method of a string" << std::endl;

    std::string fullName = "John Jr. Doe";

    std::cout << "Original string: " << fullName << std::endl;
    std::cout << "The length of the string: " << fullName.length() << " characters" << std::endl;
    std::cout << "The string is " << (fullName.empty() ? "empty" : "not empty") << std::endl;

    fullName.clear();

    std::cout << "Clear the string: fullName.clear()" << std::endl;
    std::cout << "The length of the string after .clear(): " << fullName.length() << std::endl;
    std::cout << "The string is " << (fullName.empty() ? "empty" : "not empty") << " after .clear()" << std::endl;

    std::cout << separator << std::endl;

    // Using append() method
    std::cout << "[4] Using append() method of a string" << std::endl;

    std::string userName = "johnjrdoe";

    std::cout << "User name = " << userName << std::endl;

    std::cout << "Append '@gmail.com' to userName: username.append(...)" << std::endl;
    userName.append("@gmail.com");

    std::cout << "User name after .append() = " << userName << std::endl;

    std::cout << separator << std::endl;

    // Accessing a character of a string at a specific position
    std::cout << "[5] Accessing a character of a string at a specific position (index)" << std::endl;

    std::string car = "Toyota Mark II, 2.6L";

    std::cout << "Car: " << car << std::endl;
    std::cout << "The length of the string: " << car.length() << std::endl;
    std::cout << "car.at(0) = " << car.at(0) << std::endl;
    std::cout << "car.at(3) = " << car.at(3) << std::endl;
    std::cout << "car.at(7) = " << car.at(7) << std::endl;
    std::cout << "car.at(10) = " << car.at(10) << std::endl;
    std::cout << "car.at(18) = " << car.at(18) << std::endl;
    std::cout << "car.at(19) = " << car.at(19) << std::endl;

    std::cout << separator << std::endl;

    // Using insert() method of a string
    std::cout << "[6] Using insert() method of a string" << std::endl;

    std::string text = "0123456789";
    
    std::cout << "The original string is: " << text << std::endl;
    std::cout << "The length of a string: " << text.length() << std::endl;

    text.insert(0, "_");

    std::cout << "Inserting a new string: text.insert(0, '_')" << std::endl;
    std::cout << "The string now is: " << text << std::endl;
    std::cout << "The length of the string now is: " << text.length() << std::endl;

    text.insert(3, "***");

    std::cout << "Inserting a new string: text.insert(3, \"***\")" << std::endl;
    std::cout << "The string now is: " << text << std::endl;
    std::cout << "The length of the string now is: " << text.length() << std::endl;

    int textLength = text.length();
    text.insert(textLength, "+++");
    std::cout << "Inserting a new string: text.insert(" << textLength << ", \"+++\")" << std::endl;
    std::cout << "The string now is: " << text << std::endl;
    std::cout << "The length of the string now is: " << text.length() << std::endl;

    std::cout << separator << std::endl;

    // Using find() method
    std::cout << "[7] Using find() method of a string" << std::endl;
    
    std::string numbers = "000100020003000100020003";

    std::cout << "The original string is: " << numbers << std::endl;
    std::cout << "The length of the string is: " << numbers.length() << std::endl;

    int position = 0;

    position = numbers.find('1');
    std::cout << "numbers.find('1'): " << position << std::endl;

    position = numbers.find('2');
    std::cout << "numbers.find('2'): " << position << std::endl;

    position = numbers.find("30");
    std::cout << "numbers.find(\"30\"): " << position << std::endl;

    position = numbers.find("03");
    std::cout << "numbers.find(\"03\"): " << position << std::endl;

    position = numbers.find("020");
    std::cout << "numbers.find(\"020\"): " << position << std::endl;

    int previousPosition = 0;
    
    previousPosition = position;
    position = numbers.find("020", previousPosition + 1);
    std::cout << "numbers.find(\"020\", " << (previousPosition + 1) << "): " << position << std::endl;

    previousPosition = position;
    position = numbers.find("020", previousPosition + 1);
    std::cout << "numbers.find(\"020\", " << (previousPosition + 1) << "): " << position << std::endl; 

    position = numbers.find('x');
    std::cout << "numbers.find('x'): " << position << std::endl;

    position = numbers.find('0', 1000);
    std::cout << "numbers.find('0', 1000): " << position << std::endl;

    position = numbers.find('0', -1);
    std::cout << "numbers.find('0', -1): " << position << std::endl;

    position = numbers.find('Q');
    std::cout << "numbers.find('Q'): " << position << std::endl;

    // Using std::string::npos (not found position = -1)
    if (position == std::string::npos) {
        std::cout << "'Q' not found in \"" << numbers << "\"" << std::endl;
    } 
    else {
        std::cout << "'Q' found in \"" << numbers << "\" at position " << position << std::endl;
    }

    std::cout << separator << std::endl;

    // Using erase() method of a string
    std::cout << "[8] Using erase() method of a string" << std::endl;
    
    std::string digits;
    std::string result;

    digits = "01234567890";
    std::cout << "Original string: " << digits << std::endl;
    std::cout << "The length of the string: " << digits.length() << std::endl;

    result = digits;
    result.erase(0, 2);
    std::cout << "\"" << digits << "\".erase(0, 2): " << result << std::endl;

    result = digits;
    result.erase(3, 1);
    std::cout << "\"" << digits << "\".erase(3, 1): " << result << std::endl;

    result = digits;
    result.erase(3, 100);
    std::cout << "\""<< digits << "\".erase(3, 100): " << result << std::endl;

    return 0;
}