#include <iostream>

const int SIZE = 16;
// The Ascii code of a digit '0'
const int ASCII_ZERO_CODE = 48;

// Declare functions
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int char2int(const char character);

int main() {

    std::string title = "Welcome to the Credit Card Validator Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    /*
        Luhn Algorithm

        1. Double every second digit from right to left
            If doubled number is 2 digits, split them

        2. Add all single digits from step 1

        3. Add all odd numbered digits from right to left

        4. Sum results from step 2 and step 3

        5. If step 4 is divisible by 10, the card number is valid

        Example:
            6011 0009 9013 9424

            1. 6_1_ 0_0_ 9_1_ 9_2_
               12_2_ 0_0_ 18_2_ 18_4_
               1_2_2_ 0_0_ 1_8_2_ 1_8_4_

            2. Sum = (1+2+2) + (0+0) + (1+8+2) + (1+8+4) = 29

            3. _0_1 _0_9 _0_3 _4_4
                Sum = (0+1) + (0+9) + (0+3) + (4+4) = 21

            4. Sum (step 2, step 3) = 29 + 21 = 50

            5. 50 % 10 = 0 
                Card number is valid
    */

    std::string cardNumber = "";

    do {
        std::cout << "Enter a credit card number to validate or 'q' to quit: ";
        std::getline(std::cin >> std::ws, cardNumber);
        
        if (cardNumber == "q") {
            break;
        }

        std::cout << '\n';
        std::cout << "CARD NUMBER: " << cardNumber << "\n\n";

        int sum_even = sumEvenDigits(cardNumber);
        int sum_odd = sumOddDigits(cardNumber);
        int sum = sum_even + sum_odd;

        std::cout << "The sum of even digits = " << sum_even << '\n';
        std::cout << "The sum of odd digits = " << sum_odd << '\n';
        std::cout << "The total sum = " << sum << '\n';
        std::cout << '\n';

        int div = sum % 10;
        if (div == 0) {
            std::cout << "The card number is VALID! (" << sum << " % 10 = 0)" << '\n';
        }
        else {
            std::cout << "The card number is not VALID because " << sum << " % 10 = " << div << " (must be 0)\n";
        }
        std::cout << separator << '\n';
    } while (cardNumber != "q");

    return 0;
}

// Define functions

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    std::cout << "sumOddDigits():\n";

    std::cout << "    Odd digits: ";
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 1) {
            std::cout << cardNumber.at(i);

            sum += char2int(cardNumber.at(i));
        }
        else {
            std::cout << "_";
        }
    }

    std::cout << '\n';
    std::cout << "    Sum = " << sum << '\n';
    std::cout << "\n\n";

    // Debug loop
    // for (int i = 0; i < SIZE; i++) {
    //     if (i % 2 == 1) {
            
    //         std::cout << "i = " << i << '\n';
    //         std::cout << "cardNumber.at(i) = " << cardNumber.at(i) << '\n';
    //         std::cout << "(int)cardNumber.at(i) = " << char2int(cardNumber.at(i)) << '\n';

    //         sum += char2int(cardNumber.at(i));
    //     }
    // }
    // std::cout << '\n';

    return sum;
}

int sumEvenDigits(const std::string cardNumber) {

    int sum = 0;

    std::cout << "sumEvenDigits():\n";

    std::cout << "    Even digits: ";
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            std::cout << cardNumber.at(i);

            int doubled_digit = 2 * char2int(cardNumber.at(i));
            if (doubled_digit > 9) {
                sum  = sum + 1 + (doubled_digit % 10);
            }
            else {
                sum += doubled_digit;
            }
        }
        else {
            std::cout << "_";
        }
    }
    std::cout << '\n';
    std::cout << "    Sum = " << sum << '\n';
    std::cout << "\n\n";

    return sum;
}

int char2int(const char character) {
    return (int)character - ASCII_ZERO_CODE;
}