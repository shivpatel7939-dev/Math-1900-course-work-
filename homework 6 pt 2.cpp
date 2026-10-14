#include <iostream>
using namespace std;

int main() {
    int secret, guess;
    int count = 0;

    cout << "Enter the secret number (1-10): ";
    cin >> secret;

    cout << "Guess the number: ";
    cin >> guess;
    count++;

    while (guess != secret) {
        cout << "Guess the number: ";
        cin >> guess;
        count++;
    }

    cout << "You got it in " << count << " guesses!" << endl;

    return 0;
}