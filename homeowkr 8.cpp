#include <iostream>
using namespace std;

double product(double a, double b)
{
    return a * b;
}

int main()
{
    double num1, num2;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "The product is " << product(num1, num2) << endl;
    }

    return 0;
}
