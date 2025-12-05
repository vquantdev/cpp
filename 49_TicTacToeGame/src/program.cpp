#include <iostream>

// Declare constants
const int SIZE = 9; // 3 * 3 = 9
const int ASCII_ZERO_CODE = 48; // ASCII code of a character '0'

// Declare functions
int randomNumber(const int min, const int max);
char int2char(const int number);
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, const int combinations[8][3], char player, char computer);
bool checkTie(char *spaces);

int main() {

    // Change the seed of random number algorithm
    srand(time(0));

    std::string title = "Welcome to the Tic-Tac-Toe Game Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    // Game board
    // We can store ' ' in each cell
    // To make it simplier to pick the right cell number, we will put cell numbers in cells 
    // PS: Cell is empty, if its value = its number!
    char spaces[SIZE] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    // Winning combinations
    int combinations[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Horizontal
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Vertical
        {0, 4, 8}, {2, 4, 6} // Diagonal
    };

    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, combinations, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, combinations, player, computer)) {
            running = false;
            break;
        }
        else if(checkTie(spaces)) {
            running = false;
            break;
        }
    }

    return 0;
}

// Define functions

int randomNumber(const int min, const int max) {
    return rand() % (max - min + 1) + 1;
}

char int2char(const int number) {
    return number + ASCII_ZERO_CODE;
}

void drawBoard(char *spaces) {

    std::cout << '\n';
    std::cout << "__________________" << '\n';
    std::cout << "|     |     |     |" << '\n';
    std::cout << "|  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << "|     |     |     |" << '\n';
    std::cout << "|  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << "|     |     |     |" << '\n';
    std::cout << "|  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  |" << '\n';
    std::cout << "|_____|_____|_____|" << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;
    bool completed = false;
    
    do {
        std::cout << "Enter the number of a cell (1-9) where you would like to put your symbol: ";
        std::cin >> number;

        // std::cout << "You entered number: [" << number << "] (ASCII: " << int2char(number) << ")\n";
        // std::cout << "Element in grid at index " << number << " = " << spaces[number - 1] << '\n';

        if (number >= 1 && number <= 9 && spaces[number - 1] == int2char(number)) {
            spaces[number - 1] = player;
            completed = true;
        }
    } while (!completed);
}

void computerMove(char *spaces, char computer) {

    int number;
    bool completed = false;

    do {
        number = randomNumber(1, SIZE);
        if (spaces[number - 1] == int2char(number)) {
            spaces[number - 1] = computer;
            completed = true;
        }
    } while (!completed);

}

bool checkWinner(char *spaces, const int combinations[8][3], char player, char computer) {

    // Calculate the number of combinations
    int rows = sizeof(combinations);
    // Calculate the number of elements in one combination
    int cols = sizeof(combinations[0]) / sizeof(combinations[0][0]);
    
    // Debug
    // std::cout << "sizeof(combinations) = " << sizeof(combinations) << '\n';
    // std::cout << "sizeof(combinations[0]) = " << sizeof(combinations[0]) << '\n';
    // std::cout << "sizeof(combinations[0][0]) = " << sizeof(combinations[0][0]) << '\n';
    // std::cout << "COMBO: rows = " << rows << ", cols = " << cols << '\n';

    // Iterate over combinations (rows of an array)
    for (int i = 0; i < rows; i++) {
        bool match = true;
        
        // std::cout << "COMBO: " << combinations[i][0] << "-" << combinations[i][1] << "-" << combinations[i][2] << '\n';

        // Check if all elements of a combination are the same
        char symbol = spaces[ combinations[i][0] ];
        for (int j = 0; j < cols; j++) {
            // std::cout << combinations[i][j] << " ";
            if (spaces[ combinations[i][j] ] != symbol) {
                match = false;
                break;
            }
        }
        // std::cout << '\n';
        // std::cout << "MATCH: " << (match ? "YES" : "NO") << '\n';
        
        if (match) {
            if (symbol == player) {
                std::cout << "PLAYER WIN!" << '\n';
            }
            else {
                std::cout << "COMPUTER WIN!" << '\n';
            }

            // Exit function
            return true;
        }
    }

    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < SIZE; i++) {
        if (spaces[i] == int2char(i + 1)) {
            return false;
        }
    }

    std::cout << "It's a tie!" << '\n';

    return true;
}