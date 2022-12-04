#include <iostream>

using namespace std;

int summation_of_two_num(int x, int y);

// (data type khoroji) (esm tabe) (data type, tedad va esm vorodi ha + order)
// {
        // body function
        // agar data type khoroji void nabashad
        // bayad return dashte bashim
// }

int main()
{
    int x, y;
    cin>>x>>y;
    int sum = summation_of_two_num(x, y);
    cout<<sum<<endl;
}

int summation_of_two_num(int x, int y)
{
    return x + y;
}
