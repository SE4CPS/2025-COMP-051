#include <iostream>

void printBoard(char board[3][3]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            (j < 2) ? std::cout << board[i][j] << '|' : std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}

bool checkWin(char board[3][3], char player) {
    for (int i=0; i<3; i++) {
        if (board[i][0]==player && board[i][1]==player && board[i][2]==player) return true;
        if (board[0][i]==player && board[1][i]==player && board[2][i]==player) return true;
    }
    if (board[0][0]==player && board[1][1]==player && board[2][2]==player) return true;
    if (board[0][2]==player && board[1][1]==player && board[2][0]==player) return true;
    return false;
}

char switchPlayer(char currentPlayer) {
    return (currentPlayer == 'X') ? 'Y' : 'X';  // ternary operator,
}

int main()
{
    bool gameOver = false;
    int playerXWins, playerYWins, row, col = 0;
    char currentPlayer, answer = 'Y'; // Always the first player

    while (gameOver == false) {
    
        char board[3][3] = {
                {' ', ' ', ' ' },
                {' ', ' ', ' ' },
                {' ', ' ', ' ' }
            };
        
        for (int i = 0; i < 9; i++) {
            std::cout << "Enter row and column: ";
            std::cin >> row >> col;
            if (board[row][col]==' ') {
                board[row][col] = currentPlayer;
                printBoard(board);
                if (checkWin(board, currentPlayer)) {
                    std::cout << currentPlayer << " wins!\n";
                    playerXWins = (currentPlayer == 'X') ? playerXWins + 1: playerXWins;
                    playerYWins = (currentPlayer == 'Y') ? playerYWins + 1: playerYWins;
                    break;
                } else {
                    currentPlayer = switchPlayer(currentPlayer);
                }
            } else {
                std::cout << "Invalid move!\n";
            }
        }
        
        std::cout << "X = " << playerXWins << " ::  Y = " << playerYWins << std::endl; 
        std::cout << "Would like to play another round? Y or N" << std::endl;
        std::cin >> answer;
        
        if (answer == 'Y') {
            currentPlayer = switchPlayer(currentPlayer);
        } else {
            gameOver = true;
        }
    }
    return 0;
}
