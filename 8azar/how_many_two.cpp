#include <iostream>
using namespace std;

int main()
{
    // initiate variables
    int number, counter = 0;

    // getting input
    cout << "Please enter your number: \n";
    cin >> number;

    while (number != 0)
    {
        int yekan = number % 10;
        number /= 10;

        // is this yekan == 2 or not
        if (yekan == 2)
        {
            counter ++;
        }
    }

    // output
    cout << "We have " << counter << " two in this number\n"; 
}