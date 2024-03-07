#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator for a fresh experience each time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100 (inclusive)
    int secretNumber = rand() % 100 + 1;

    int guessCount = 7;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    while (guessCount > 0) {
        cout << "You have " << guessCount << " guesses remaining." << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number between 1 and 100." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (guess < 1 || guess > 100) {
            cout << "Your guess must be between 1 and 100." << endl;
        } else {
            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the number in " << (7 - guessCount) << " guesses!" << endl;
                break;
            } else if (guess < secretNumber) {
                cout << "Too low. Try again." << endl;
            } else {
                cout << "Too high. Try again." << endl;
            }
            guessCount--;
        }
    }

    if (guessCount == 0) {
        cout << "Sorry, you ran out of guesses. The number was " << secretNumber << "." << endl;
    }

    return 0;
}
