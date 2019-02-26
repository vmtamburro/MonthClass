#include <iostream>
#include "Month.h"

using namespace std;

//***********Member function to adjust name of month to month number*********************************
bool Month::simplifyName()
{
    bool ret = true;
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
    else
        ret = false;
    return ret;

}
//*************Member function to adjust Month Number to Name of Month**********************
bool Month::simplifyNum()
{
    bool ret = true;

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
    {
        cout << "Error! Check spelling and capitalization. Enter a month name."<<endl;
        ret = false;
    }
    return ret;
}

//*****************************Member Function that Overloads prefix ++***********************************
Month Month::operator++()
{
    ++monthNumber;
    simplifyName();
    return *this;
}

//****************************Member Function that overloads postfix++ ************************************
Month Month::operator++(int)
{
    Month temp(monthNumber, name);
    monthNumber++;
    simplifyName();
    return temp;
}

//******************************Member Function that overloads prefix -- **********************************
Month Month::operator--()
{
    --monthNumber;
    simplifyName();
    return *this;
}

//**************************Member Function that overloads postfix -- *************************************
Month Month::operator--(int)
{
    Month temp(monthNumber, name);
    monthNumber--;
    simplifyName();
    return temp;
}

//*************************Member Function that overloads >> operator **************************************
istream &operator >> (istream &strm, Month &obj)
{
    bool valid = true;

    do
    {
    cout << "Month Name: ";
    strm >> obj.name;
    valid = obj.simplifyNum();
    }while (valid == false);

    return strm;
}

//************************Member Function that overloads << operator***************************************
ostream &operator<<(ostream &strm, const Month &obj)
{
    strm << "Month #"<< obj.monthNumber << ": "<< obj.name<<endl;
    return strm;
}
