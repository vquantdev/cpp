#include <iostream>

int main() {

    std::cout << "Welcome to the Arithmetic Operators Program!" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    /*
        Arithmetic operators = perform a specific arithmetic operation
                                +, -, *, /
    */

    // Number of students in a group
    int students = 20;
    std::cout << "Number of students in a group = " << students << std::endl;

    // === ADDITION operation ===

    // A new students joins the group
    students = students + 1;
    std::cout << "Number of students in a group (+1) = " << students << std::endl;

    // One more student joins the group
    students += 1;
    std::cout << "Number of students in a group (+1) = " << students << std::endl;

    // One more student joins the group
    students++;
    std::cout << "Number of students in a group (+1) = " << students << std::endl;

    // One more student joins the group
    ++students;
    std::cout << "Number of students in a group (+1) = " << students << std::endl;

    // === SUBTRACTION operation ===

    // One student leaves the group
    students = students - 1;
    std::cout << "Number of students in a group (-1) = " << students << std::endl;

    // One more student leaves the group
    students -= 1;
    std::cout << "Number of students in a group (-1) = " << students << std::endl;
    
    // One more student leaves the group
    students--;
    std::cout << "Number of students in a group (-1) = " << students << std::endl;

    // One more student leaves the group
    --students;
    std::cout << "Number of students in a group (-1) = " << students << std::endl;

    // === MULTIPLICATION operation ===

    // The number of students increased 2 times
    students = students * 2;
    std::cout << "Number of students in a group (*2) = " << students << std::endl;

    // The number of students increased 3 times
    students *= 3;
    std::cout << "Number of students in a group (*3) = " << students << std::endl;

    // === DIVISION operation ===

    // The number of students decreased 2 times
    students = students / 2;
    std::cout << "Number of students in a group (/2) = " << students << std::endl;

    // The number of students decreased 3 times
    students /= 3;
    std::cout << "Number of students in a group (/3) = " << students << std::endl;

    std::cout << "--------------------------------------------" << std::endl;

    // The number of players in a team
    int players = 20;
    std::cout << "The number of players in a team = " << players << std::endl;

    // The number of players decreased 3 times
    // The decimal part is truncated
    players = players / 3;
    std::cout << "The number of players in a team (/3) = " << players << std::endl;

    std::cout << "--------------------------------------------" << std::endl;
    
    // The stock price
    double price = 30;
    std::cout << "Stock price = " << price << std::endl;

    // Stock price decreased 7 times
    price = price / 7;
    std::cout << "Stock price (/7) = " << price << std::endl;

    std::cout << "--------------------------------------------" << std::endl;

    // === REMAINDER operation ===
    
    // The number of people
    int people = 20;
    std::cout << "The number of people = " << people << std::endl;
    
    // Create a number of teams, 3 persons in a team.
    // Check how many people left in a group less than 3 persons
    int remainder = people % 3;
    std::cout << "People in the last team less than 3 persons (remainder) = " << remainder << std::endl;

    return 0;
}