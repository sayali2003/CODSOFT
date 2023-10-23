#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
     // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    
    // Generate a random number between 1 and 100
    int random_number = rand() % 100;

    // Initialize a variable to keep track of the number of guesses
    int guess_no = 0;
    int user_guess;

    while (true) {
        // Ask the user to guess the number
        cout << "Guess the number between 1 and 100: ";
        cin >> user_guess;
        guess_no++;

        if (user_guess < random_number) {
            cout << "Too low! Try again." << endl;
        } else if (user_guess > random_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << random_number << " correctly in " << guess_no << " guesses." << endl;
            break;
        }
    }

    return 0;
}