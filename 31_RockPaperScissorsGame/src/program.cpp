#include <iostream>

// Declare functions
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    // Change the random number generation algorithm's seed
    srand(time(0));

    std::string title = "Welcome to the Rock-Paper-Scissors Game Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << title << '\n' << separator << '\n';

    char player;
    char computer;
    char playAgain;

    do {
        player = getUserChoice();
        computer = getComputerChoice();

        std::cout << "Your choice: ";
        showChoice(player);
        std::cout << '\n';

        std::cout << "Computer choice: ";
        showChoice(computer);
        std::cout << '\n';

        std::cout << "Game result: ";
        chooseWinner(player, computer);
        std::cout << '\n';
        std::cout << '\n';

        std::cout << "Enter 'y' to play again, or anything else to exit the game: ";
        std::cin >> playAgain;
        if (playAgain == 'y') {
            std::cout << separator << '\n';
        }
    } while(playAgain == 'y');

    return 0;
}

// Define functions
char getUserChoice(){
    char player;

    do {
        std::cout << "Enter 'r' for Rock, 'p' for Paper, or 's' for Scissors: ";
        std::cin >> player;
    } while (!(player == 'r' || player == 'p' || player == 's'));

    return player;
}

char getComputerChoice(){

    int randomChoice = rand() % (3 - 1 + 1) + 1;
    char computer;

    switch (randomChoice) {
        case 1:
            computer = 'r';
            break;
        case 2:
            computer = 'p';
            break;
        case 3:
            computer = 's';
            break;
    }

    return computer;
}

void showChoice(char choice){
    switch (choice) {
        case 'r':
            std::cout << "Rock";
            break;
        case 'p':
            std::cout << "Paper";
            break;
        case 's':
            std::cout << "Scissors";
            break;
    }
}

void chooseWinner(char player, char computer){
    if (player == computer) {
        std::cout << "It's a draw!";
    }
    else if (player == 'r' && computer == 's'){
        std::cout << "You win!";
    }
    else if (player == 'p' && computer == 'r'){
        std::cout << "You win!";
    }
    else if (player == 's' && computer == 'p'){
        std::cout << "You win!";
    }
    else {
        std::cout << "Computer wins!";
    }
}