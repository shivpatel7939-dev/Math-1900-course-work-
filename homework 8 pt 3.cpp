#include <iostream>
#include <string>
using namespace std;

string checkPassphrase(string attempt)
{
    string secret = "purple circuits hum";

    if (attempt == secret)
        return "correct";
    else
        return "incorrect";
}

int main()
{
    string attempt;

    cout << "Enter the passphrase: ";
    getline(cin, attempt);

    cout << checkPassphrase(attempt) << endl;

    return 0;
}
