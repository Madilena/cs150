#include <cstdlib>
#include <sstream>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string.h>
#include <string>

using namespace std;

class Date {
public:
    int day;
    int month;
    int daysInMon;

    Date(int m, int d)
    {
        month=m;
        day=d;
    }

    int daysInMonth();
    int getDay();
    int getMonth();
    int nextDay();
    string toString();
};

int Date::daysInMonth() {
    switch(month) {
    case 1 :
        daysInMon = 31;
        break;
    case 2 :
        daysInMon = 28;
        break;
    case 3 :
        daysInMon = 31;
        break;
    case 4 :
        daysInMon = 30;
        break;
    case 5 :
        daysInMon = 31;
        break;
    case 6 :
        daysInMon = 30;
        break;
    case 7 :
        daysInMon = 31;
        break;
    case 8 :
        daysInMon = 31;
        break;
    case 9 :
        daysInMon = 30;
        break;
    case 10 :
        daysInMon = 31;
        break;
    case 11 :
        daysInMon = 30;
        break;
    case 12 :
        daysInMon = 31;
        break;
    default:
        daysInMon = 31;
    }
    return daysInMon;
}
int Date::getDay() {
    return day;
}
int Date::getMonth() {
    return month;
}
int Date::nextDay() {
    daysInMonth();
    if(day+1 > daysInMon) {
        if(month == 12) {
            month = 1;
            day = 1;
        } else {
            month += 1;
            day = 1;
        }
        return day;
    } else {
        day += 1;
        return day;
    }
}
string Date::toString() {
    string d = std::to_string(day);
    string m = std::to_string(month);
    if (d.length() == 1) {
        d = "0" + d;
    }
    if (m.length() == 1) {
        m = "0" + m;
    }
    return m+"/"+d;
}

int main(int argc, char *argv[])
{

    return 0;

}

