#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a, b, answer, correct = 0;

    srand(time(0));
    ofstream file("practice.txt");

    for (int i = 0; i < 5; i++)
    {
        a = rand() % 12 + 1;
        b = rand() % 12 + 1;

        cout << "What is " << a << "*" << b << "?" << endl;
        cin >> answer;

        if (answer == a * b)
        {
            cout << "Correct!" << endl;
            correct++;
        }
        else
        {
            cout << "Sorry :( Try again" << endl;
            file << a << "*" << b << " = ?" << endl;
        }
    }

    cout << "You answered correctly " << correct << " out of 5 times." << endl;

    file.close();

    return 0;
}