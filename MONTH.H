#ifndef MONTH_H_INCLUDED
#define MONTH_H_INCLUDED

#include <iostream>

using namespace std;

//class prototype
class Month;

//overloaded functions because they are friends of Month
ostream &operator << (ostream &, const Month &);
istream &operator >> (istream &, Month &);

class Month
{
private:
    string name;
    int monthNumber;
    bool simplifyName();
    bool simplifyNum();

public:
    //constructors
    Month()
    {
       monthNumber = 1;
       name = "January";
    }
    Month(int m)
    {
        monthNumber = m;
        simplifyName();
    }

    Month(string s)
    {
        name = s;
        simplifyNum();
    }

    Month(int m, string s)
    {
        monthNumber = m;
        name = s;
    }

    //set functions
    void setMonthNum(int m)
    {
        monthNumber = m;
        simplifyName();
    }
    void setName(string n)
    {
        name = n;
        simplifyNum();

    }

    //get functions
    int getMonthNum()
    {
        return monthNumber;
    }
    string getName()
    {
        return name;
    }

    //prototypes defined in MonthFunctions.cpp
    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);

    // Friends defined in MonthFunctions.cpp
   friend ostream &operator << (ostream &, const Month &);
   friend istream &operator >> (istream &, Month &);
};




#endif // MONTH_H_INCLUDED
