#include <iostream>
using namespace std;

int main()
{
    double numbers[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "You entered:" << endl;

    for (int i = 0; i < 3; i++)
        cout << numbers[i] << endl;

    return 0;
}