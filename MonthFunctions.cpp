#include <iostream>
#include "Month.h"

using namespace std;

//********************************************
void Month::simplifyName()
{
    if (monthNumber == 1)
        name = "January";
    else if(monthNumber==2)
        name = "February";
    else if(monthNumber == 3)
        name = "March";
    else if(monthNumber == 4)
        name = "April";
    else if(monthNumber == 5)
        name = "May";
    else if(monthNumber == 6)
        name = "June";
    else if(monthNumber == 7)
        name = "July";
    else if(monthNumber == 8)
        name = "August";
    else if (monthNumber == 9)
        name = "September";
    else if (monthNumber == 10)
        name ="October";
    else if (monthNumber == 11)
        name = "November";
    else if (monthNumber == 12)
        name = "December";
    else if(monthNumber == 13)
    {
        monthNumber = 1;
        name = "January";
    }
    else if(monthNumber == 0)
    {
        monthNumber = 12;
        name = "December";
    }

}

void Month::simplifyNum()
{
    if(name == "January")
        monthNumber = 1;
    else if(name == "February")
        monthNumber = 2;
    else if(name == "March")
        monthNumber = 3;
    else if(name == "April")
        monthNumber = 4;
    else if(name == "May")
        monthNumber = 5;
    else if(name =="June")
        monthNumber = 6;
    else if(name == "July")
        monthNumber = 7;
    else if(name == "August")
        monthNumber = 8;
    else if(name == "September")
        monthNumber = 9;
    else if(name == "October")
        monthNumber = 10;
    else if(name == "November")
        monthNumber = 11;
    else if(name == "December")
        monthNumber = 12;
    else
        cout << "Month number error!"<<endl;
}

Month Month::operator++()
{
    ++monthNumber;
    simplifyName();
    return *this;
}

Month Month::operator++(int)
{
    Month temp(monthNumber, name);
    monthNumber++;
    simplifyName();
    return temp;
}

Month Month::operator--()
{
    --monthNumber;
    simplifyName();
    return *this;
}

Month Month::operator--(int)
{
    Month temp(monthNumber, name);
    monthNumber--;
    simplifyName();
    return temp;
}

istream &operator >> (istream &strm, Month &obj)
{
    cout << "Month Name: ";
    strm >> obj.name;
    obj.simplifyNum();
    return strm;
}

ostream &operator<<(ostream &strm, const Month &obj)
{
    strm << "Month #"<< obj.monthNumber << ": "<< obj.name<<endl;
    return strm;
}
