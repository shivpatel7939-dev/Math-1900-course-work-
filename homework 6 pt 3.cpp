
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string password, guess = "";
    int count = 0;

    cout << "Enter password: ";
    cin >> password;

    ofstream fout("attempts.txt");

    while (guess != password && count < 3) {
        cout << "Guess password: ";
        cin >> guess;
        count++;

        if (guess != password) {
            fout << guess << endl;
            cout << "Incorrect" << endl;
        }
    }

    if (guess == password)
        cout << "Correct!" << endl;
    else
        cout << "Out of attempts!" << endl;

    fout.close();

    return 0;
}
