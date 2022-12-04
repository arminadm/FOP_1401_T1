#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // getting inputs
    int a, b, c;
    cout << "a(x^2) + b(x) + c = 0\n";
    cout << "Please enter A:\n";
    cin >> a;
    cout << "Please enter B:\n";
    cin >> b;
    cout << "Please enter C:\n";
    cin >> c;
    
    // calculate delta
    int x, y;
    int delta = (b*b) - 4*a*c;
    if (delta > 0)
    {
        x = (-b + sqrt(delta)) / 2*a;
        y = (-b - sqrt(delta)) / 2*a;
        cout << "first answer: " << x << endl;
        cout << "second answer: " << y << endl;
    }
    else if (delta == 0)
    {
        x = -b / 2*a;
        cout << "answer is " << x << endl;
    }
    else if (delta < 0)
    {
        cout << "delta is negative so this equation has no answer\n";
    }
}