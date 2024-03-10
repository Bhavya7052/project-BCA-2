#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];

public:
    TicTacToe() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }
    }

    void printBoard() const {
       cout << "  0 1 2\n";
        for (int i = 0; i < 3; ++i) {
            cout << i << " ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " ";
            }
             cout << "\n";
        }
    }

    bool makeMove(int row, int col, char symbol) {
         if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
             cout << " The movie is invalid:(( Try again.\n";
            return false;
        }
        
        board[row][col] = symbol;
        return true;
    }

    bool checkWin(char symbol) const {
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
                (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)) {
                return true;
            }
        }
      
        if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
            (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)) {
            return true;
        }

        return false;
    }
};

int main() {
    TicTacToe game;
    char currentPlayer = '0';

    for (int turn = 0; turn < 9; ++turn) {
        game.printBoard();

        int row, col;
         cout<<"Enter row or column for row :)) then enter your move 0 or 1\n";
         cout << "Player 1 " << currentPlayer << ", enter your move (row and column): ";
         cin >> row >> col;

        if (game.makeMove(row, col, currentPlayer)) {
            if (game.checkWin(currentPlayer)) {
                cout << "Player 2 " << currentPlayer << " wins:))!\n";
                break;
            }

            currentPlayer = (currentPlayer == '0') ? 'X' : '0';
        } else {
           
            --turn;
        }
    }

    game.printBoard();
     cout << "It's a draw!:))\n";

    return 0;
}