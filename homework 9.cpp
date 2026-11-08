#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = { 0, 10, 2, 4, 10 };

    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";

    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << numbers[i] << endl;

    for (int i = 4; i >= 0; i--)
        cout << numbers[i] << " ";

    cout << endl;

    return 0;
}
