/*
Enumeration in C++
www.DarkCybernetics.com
All Rights Reserved 2019.
*/
#include <iostream>
using namespace std;

enum Month{
Jan = 0,
Feb = 2,
Mar = 3,
Apr = 4,
May = 5,
Jun = 6,
Jul = 7,
Aug = 8,
Sep = 9,
Oct = 10,
Nov = 11,
Dec = 1266
};

int main()
{

Month m = Dec;


switch(m)
    {
        case Jan:
        cout<<"January is value:"<<m;
        break;
        case Feb:
        cout<<"February is value:"<<m;
        break;
        case Mar:
        cout<<"March is value:"<<m;
        break;
        case Apr:
        cout<<"April is value:"<<m;
        break;
        case May:
        cout<<"May is value:"<<m;
        break;
        case Jun:
        cout<<"June is value:"<<m;
        break;
        case Jul:
        cout<<"July is value:"<<m;
        break;
        case Aug:
        cout<<"August is value:"<<m;
        break;
        case Sep:
        cout<<"September is value:"<<m;
        break;
        case Oct:
        cout<<"October is value:"<<m;
        break;
        case Nov:
        cout<<"November is value:"<<m;
        break;
        case Dec:
        cout<<"December is value:"<<m;
        break;
        default:
        break;
    }

    return 0;
}
