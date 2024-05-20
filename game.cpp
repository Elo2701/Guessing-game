#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 10
    int randomNumber = rand() % 10 + 1;

    int guess;

    cout << "Guess the number (between 1 and 10): ";
    while (true) {
         cin >> guess;

        if (guess > randomNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        } else if (guess < randomNumber) {
             cout << "Your guess is too low. Try again!" << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }

       cout << "Guess the number (between 1 and 10): ";
    }

    return 0;
}
