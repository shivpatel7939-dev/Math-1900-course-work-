#include <iostream>
using namespace std;

const double PI = 3.14159;

double cylinderVolume(double radius, double height)
{
    return PI * radius * radius * height;
}

int main()
{
    double radius, height;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    cout << "The volume is " << cylinderVolume(radius, height) << endl;

    return 0;
}
