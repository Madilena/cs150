#include "Date.h"
using namespace std;

Date::Date() : Date("January", 1) {}

Date::Date(string month, unsigned int day) {
    this->month = month;
    this->day = day;
}

string Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

bool Date::setMonth(string month) {
    this->month = month;
    return true;
}

bool Date::setDay(unsigned int day) {
    this->day= day;
    return true;
}

ostream& operator<<(ostream& out, const Date& m) {
    return out << m.getMonth() << "/" << m.getDay() ;
}

bool operator==(Date a, Date b) {
    return ((a.getMonth() == b.getMonth()) && (a.getDay() == b.getDay()));
}

bool operator!=(Date a, Date b) {
    return !((a.getMonth() == b.getMonth()) && (a.getDay() == b.getDay()));
}

