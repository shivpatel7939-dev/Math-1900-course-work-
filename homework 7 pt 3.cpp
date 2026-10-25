#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a, b, answer, correct;
    char again = 'y';

    srand(time(0));
    ofstream file("practice.txt");

    while (again == 'y' || again == 'Y')
    {
        correct = 0;

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

        cout << "Try again? Y or y for yes. N or n for no" << endl;
        cin >> again;
    }

    file.close();

    cout << "Thanks for practicing!" << endl;

    return 0;
}