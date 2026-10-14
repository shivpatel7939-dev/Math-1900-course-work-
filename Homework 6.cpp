#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int i = 0;

    cout << "Enter a 5 character password: ";
    cin >> password;

    while (i < 5) {
        cout << "Character " << i + 1 << ": " << password[i] << endl;
        i++;
    }

    return 0;
}

