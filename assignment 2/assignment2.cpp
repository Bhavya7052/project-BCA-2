#include <iostream>
using  namespace std;
class GuessTheNumber {
private:
    int GeneratedNumber;
    int userGuessedNumber;

public:
    void generateRandomNumber() {
        GeneratedNumber = 67;
    }

    void startGame() {
        cout << "Welcome to Guessing The Number Game:)) !\n";
        cout << "Try to guess the number between 1 to 100.\n";

        do {
           cout << "Enter the number you guessed:)) ";
          cin >> userGuessedNumber;

            if (userGuessedNumber <GeneratedNumber ) {
               cout << "The number is too low . Guess again:(( !\n";
            } else if (userGuessedNumber >GeneratedNumber) {
               cout << "The number is too high .Guess again:(( !\n";
            } else {
               cout << "Congratulations! You guessed the number right:)) !\n";
            }
        } while (userGuessedNumber != GeneratedNumber);
    }
};

int main() {
    GuessTheNumber game;

    game.generateRandomNumber();

     game.startGame();

    return 0;
}