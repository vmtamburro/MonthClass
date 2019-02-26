/* Design a class named Month. Should have the following
private members:
    - name String that holds the name of a month
    -monthNumber Int that holds the number of the month

Provide the following member functions:
    -A default constructor that sets monthNumber to 1 and
        name to January
    -A constructor that accepts the name of the month as an
        argument. It should set the monthNumber to the correct
        value
    -A constructor that accepts the number of the month. It
        should set monthNumber to the value passed, and set
        name to the correct name.
    -Prefix and postfix overloaded ++ functions.
    -Prefix and postfix overloaded -- functions
    -Overload cout << and cin>> operator to work with the
        Month class. Demonstrate this in a function. */

#include <iostream>
#include "Month.h"

using namespace std;

int main()
{
    Month first;
    cout << "Enter a month name. \n";
    cin >> first;

    cout << "\nThe month you entered is: "<<endl;
    cout << first;

    cout << "\nNow incrementing the month 12 times. (postfix)" <<endl;
    for(int i = 0; i < 12; i++)
    {
        cout << first++;

    }

    cout << "\nNow back at " << first <<endl;

    cout << "\nNow incrementing the month 12 times. (prefix)" <<endl;
    for(int i = 0; i < 12; i++)
    {
        cout<<++first;
    }

    cout << "\nNow decrementing the month 12 times. (postfix) "<<endl;

    for(int i = 0; i < 12; i++)
    {
        cout<<first--;
    }

    cout << "\nNow back at " << first << endl;

    cout << "\nNow decrementing the month 12 times. (prefix) "<<endl;

    for(int i = 0; i < 12; i++)
    {
        cout<<--first;
    }



}
