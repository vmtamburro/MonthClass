#include <iostream>
#include "Month.h"

using namespace std;

int main()
{
    Month first;
    cout << "Enter a month name: \n";
    cin >> first;

    cout << "The month you entered is: "<<endl;
    cout << first;

    cout << "Now incrementing the month 12 times." <<endl;

    for(int i = 0; i < 12; i++)
    {
        first++;
        cout<<first;
    }

    cout << "Now decrementing the month 12 times. "<<endl;

    for(int i = 0; i < 12; i++)
    {
        first--;
        cout<<first;
    }
}
