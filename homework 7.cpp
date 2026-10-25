#include <iostream>
using namespace std;

int main()
{
    int a, b, answer, correct = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter 2 numbers: ";
        cin >> a >> b;

        cout << "What is " << a << "*" << b << "?" << endl;
        cin >> answer;

        if (answer == a * b)
        {
            cout << "Correct!" << endl;
            correct++;
        }
        else
            cout << "Sorry :( Try again" << endl;
    }

    cout << "You answered correctly " << correct << " out of 5 times." << endl;

    return 0;
}