#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    std::string title = "Welcome to the Banking Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    double balance = 0;
    int choice = 0;

    do {
        std::cout << "### Select operation: 1-Balance, 2-Deposit, 3-Withdraw, 4-Exit: \n";
        std::cin >> choice;
        
        // Clear the error flag on "cin"
        std::cin.clear();
        // Flush the stdin buffer
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                showBalance(balance);
                break;
            case 3:
                balance = balance - withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting our bank!\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "----------------------------\n";
    std::cout << "Current balance = " << std::setprecision(2) << std::fixed << "$" << balance << '\n';
    std::cout << "----------------------------\n";
}

double deposit() {

    double amount = 0;
    std::cout << "How much would you like to deposit: \n";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "That's not a valid amount to deposit!\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance) {

    double amount = 0;
    std::cout << "How much would you like to withdraw: \n";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "That's not a valid amount to withdraw!\n";
        return 0;
    }
    else if (amount > balance) {
        std::cout << "You don't have enough money in your account to withdraw this amount!\n";
        return 0;
    }

    return amount;
}