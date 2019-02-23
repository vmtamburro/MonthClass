#ifndef MONTH_H_INCLUDED
#define MONTH_H_INCLUDED

#include <iostream>

using namespace std;

class Month;

ostream &operator << (ostream &, const Month &);
istream &operator >> (istream &, Month &);

class Month
{
private:
    string name;
    int monthNumber;
    void simplifyName();
    void simplifyNum();

public:
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

    void setMonthNum(int m)
    {
        monthNumber = m;
        simplifyName();
    }
    void setName(string n)
    {
        name = n;

    }
    int getMonthNum()
    {
        return monthNumber;
    }
    string getName()
    {
        return name;
    }

    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);

    // Friends
   friend ostream &operator << (ostream &, const Month &);
   friend istream &operator >> (istream &, Month &);
};




#endif // MONTH_H_INCLUDED
