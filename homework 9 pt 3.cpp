#include <iostream>
using namespace std;

double orderTotal(double prices[], int quantities[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
        total += prices[i] * quantities[i];

    return total;
}

int main()
{
    double prices[3] = { 2.50, 4.00, 1.25 };
    int quantities[3] = { 4, 2, 8 };

    for (int i = 0; i < 3; i++)
    {
        cout << "Item " << i + 1 << ": "
            << quantities[i] << " x "
            << prices[i] << " = "
            << prices[i] * quantities[i] << endl;
    }

    cout << "Order total: "
        << orderTotal(prices, quantities, 3) << endl;

    return 0;
}