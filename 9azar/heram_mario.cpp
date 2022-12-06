#include <iostream>

using namespace std;

int main()
{
    // getting input
    unsigned int n;

    // error handling: number must be between 1 to 8
    do
    {
        cout<<"adad beyne 1 ta 8 vared konid \n";
        cin>>n;
    } while (!(n <= 8 && n >= 1));

    // first for loop: for iterating rows
    for(int i=1; i <= n; i++)
    {
        // second for loop: printing the required stars
        for(int a=i; a!=0; a--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}