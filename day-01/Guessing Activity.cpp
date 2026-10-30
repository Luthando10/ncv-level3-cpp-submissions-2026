
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // The Guessing Game
    int secret = random(20);
    int guess = 0;
    int tries = 0;

    cout << "I am thinking of a number from 1 to 20." << endl;

    do {
        cout << "Guess a number from 1 to 20: ";
        cin >> guess;

        tries++;

        if (guess == secret) {
            cout << "Correct!" << endl;
        } else if (fabs(guess - secret) <= 3) {
            cout << "Hot!" << endl;
        } else {
            cout << "Cold." << endl;
        }

    } while (guess != secret);

    cout << "Number of tries: " << tries << endl;

    return 0;
}

