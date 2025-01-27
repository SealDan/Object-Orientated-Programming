#include <iostream>
using namespace std;

int main() {
    int guess = 0, tries = 0;

    while (tries < 5) {
        cout<<"Guess a number between 1 and 10!\n";
        cin >> guess;

        if (guess == 5) {
            cout<<"Congratulations! You guessed right!\n";
            break;
        }
        cout<<"You guessed wrong! Try again.\n";
        tries++;
    }

    if (tries == 5) {
        cout<<"You have exhausted your attempts!\n";
    }

    return 0;
}

