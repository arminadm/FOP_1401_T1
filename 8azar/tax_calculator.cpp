#include <iostream>

using namespace std;

int main()
{
    // getting input
    unsigned int x, tax, left_over;
    cout << "Please enter your salary: \n";
    cin >> x;

    // checking range and calculate the tax
    if (x < 8000)
    {
        tax = x * 5 / 100;
        left_over = x - tax;
    }
    else if (x >= 8000 && x < 10000)
    {
        tax = x * 10 / 100;
        left_over = x - tax;
    }
    else
    {
        tax = x * 15 / 100;
        left_over = x - tax;
    }

    // output
    cout << "tax: " << tax << endl;
    cout << "left over: " << left_over << endl;
}