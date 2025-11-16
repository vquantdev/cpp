#include <iostream>

int main(){ 

    std::cout << "Welcome to the Basic Datatypes Program!" << std::endl;
    std::cout << "----------------" << std::endl;

    int x; // Declare a variable of type int
    x = 5; // Assign a value to a variable

    int y = 13; // Declaration and assignment

    int sum = x + y;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "x + y = " << sum << std::endl;

    // Integers (whole numbers)
    std::cout << "----------------" << std::endl;
    
    int age = 35;
    int year = 2025;
    
    std::cout << "Age = " << age << std::endl;
    std::cout << "Year = " << year << std::endl;

    // Assigning float to int variable. The fractional part will be truncated.
    int days = 7.99999; 
    std::cout << "Days = " << days << std::endl;

    // double (a number including decimal)
    std::cout << "----------------" << std::endl;

    double price = 5.99;
    double gpa = 3.88;
    double temperature = 26.3;

    std::cout << "Price = " << price << std::endl;
    std::cout << "GPA = " << gpa << std::endl;
    std::cout << "Temperature = " << temperature << std::endl;

    // char (single character)
    std::cout << "----------------" << std::endl;

    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    
    std::cout << "Grade = " << grade << std::endl;
    std::cout << "Initial = " << initial << std::endl;
    std::cout << "Currency = " << currency << std::endl;

    // Trying to store 2 characters in char. Only last character (D) will be stored
    char two_chars = 'CD'; 
    // Trying to store 3 characters in char. Only last character (G) will be stored
    char three_chars = 'EFG'; 

    std::cout << "Two Chars = " << two_chars << std::endl;
    std::cout << "Three Chars = " << three_chars << std::endl;
    
    // boolean (true or false)
    std::cout << "----------------" << std::endl;

    bool student = true;
    bool power = true;
    bool forSale = false;

    std::cout << "Student = " << student << std::endl;
    std::cout << "Power = " << power << std::endl;
    std::cout << "For sale = " << forSale << std::endl;

    // string (objects that represent a sequence of text)
    std::cout << "----------------" << std::endl;

    std::string name = "John";
    std::string day = "Monday";
    std::string food = "Pizza";
    std::string address = "12 Fake St.";

    std::cout << "Name = " << name << std::endl;
    std::cout << "Day = " << day << std::endl;
    std::cout << "Food = " << food << std::endl;
    std::cout << "Address = " << address << std::endl;
    
    std::cout << "----------------" << std::endl;
    std::cout << "Hello, " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}