#include <iostream>
#include <vector>

// Create alias "pairlist_t" for "std::vector<std::pair<std::string, int>>"
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// Create an alias "text_t" for "std::string"
typedef std::string text_t;

// Create an alias "number_t" for "int"
typedef int number_t;

// Create type aliases with "using"
// using <alias> = <data_type>;
// Create an alias "double_number_t" for "double"
using double_number_t = double;
// Create an alias "mytext_t" for "std::string"
using mytext_t = std::string;

int main() {

    std::cout << "Welcome to the Typedef and Type Aliases Program!" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;

    /*
        typedef = reserved keyword used to create an additional name 
                    (alias) for another data type. 
                    New identifier for an existing type
                    Helps with readability and reduces typos

                    Use type aliases when there is a clear benefit
                    typedef replaced with "using" - works better with templates
    */

    // Declare a variable "pairlist_one" without type aliases
    std::vector<std::pair<std::string, int>> pairlist_one;

    // Declare a variable "pairlist_two" using an alias for a datatype
    pairlist_t pairlist_two;

    // Declare a variable without using type aliases
    std::string firstName = "John";
    // Declare a variable using an alias "text_t" for "std::string"
    text_t lastName = "Doe";
    // Declare a variable using an alias "number_t" for "int"
    number_t age = 35;

    std::cout << "Name = " << firstName << " " << lastName << std::endl;
    std::cout << "Age = " << age << std::endl;
    
    // Declare a variable using an alias "mytext_t" for "std::string"
    mytext_t food = "Pizza";
    // Declare a variable using an alias "double_number_t" for "double"
    double_number_t foodPrice = 12.77;

    std::cout << "The price for " << food << " is equal to " << foodPrice << std::endl;

    return 0;
}