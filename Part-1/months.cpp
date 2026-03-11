#include <iostream>
using namespace std;
enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    int input;
    cout<<"Enter a valid month number 1-12: ";
    cin>> input;
    switch(input)
    {
    case JAN:
        cout<< "January";
        break;
    case FEB:
        cout<< "February";
        break;
    case MAR:
        cout<< "March";
        break;
    case APR:
        cout<< "April";
        break;
    case MAY:
        cout<< "May";
        break;
    case JUN:
        cout<< "June";
        break;
    case JUL:
        cout<< "July";
        break;
    case AUG:
        cout<< "August";
        break;
    case SEP:
        cout<< "September";
        break;
    case OCT:
        cout<< "October";
        break;
    case NOV:
        cout<< "November";
        break;
    case DEC:
        cout<< "December";
        break;
    default:
        cout<< "Invalid month number";
        break;
    }
}
