#include "Month.h"
using namespace std;

Month::Month() : Month("January", 1) {}

Month::Month(string name, unsigned int number) {
    this->name = name;
    this->number = number;
}

string Month::getName() const {
    return name;
}

unsigned int Month::getNumber() const {
    return number;
}

bool Month::setName(string name) {
    this->name = name;
    return true;
}

bool Month::setNumber(unsigned int number) {
    this->number= number;
    return true;
}

void Month::operator++(int) {
    if(number == 12) {
        setNumber(1);
        setName("January");
    } else {
        int newNum = getNumber()+1;
        setNumber(newNum);
        setName(nameFromNumber(newNum));
    }
}

void Month::operator--(int) {
    if(number == 1) {
        setNumber(12);
        setName("December");
    } else {
        int newNum = getNumber()-1;
        setNumber(newNum);
        setName(nameFromNumber(newNum));
    }
}

string Month::nameFromNumber(int number) {
    string name;
    switch(number) {
    case 1:
        name = "January";
        break;
    case 2:
        name = "February";
        break;
    case 3:
        name = "March";
        break;
    case 4:
        name = "April";
        break;
    case 5:
        name = "May";
        break;
    case 6:
        name = "June";
        break;
    case 7:
        name = "July";
        break;
    case 8:
        name = "August";
        break;
    case 9:
        name = "September";
        break;
    case 10:
        name = "October";
        break;
    case 11:
        name = "November";
        break;
    case 12:
        name = "December";
        break;
    default:
        name = "January";
    }
    return name;
}

ostream& operator<<(ostream& out, const Month& m) {
    return out << "Month [" << m.name << "(" << m.number << ")]";
}

bool operator==(Month a, Month b) {
    return ((a.name == b.name) && (a.number == b.number));
}

void Month::operator=(const Month &m) {
    setName(m.getName());
    setNumber(m.getNumber());
}

