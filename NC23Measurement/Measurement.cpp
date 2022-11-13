#include "Measurement.h"
using namespace std;

Measurement::Measurement(Measurement &m) {
    feet = m.feet;
    inches = m.inches;
}
Measurement::Measurement() {}

Measurement::Measurement(unsigned int feet, unsigned int inches) {
    this->feet = feet;
    this->inches = inches;
}

unsigned int Measurement::getFeet() const {
    return feet;
}

unsigned int Measurement::getInches() const {
    return inches;
}

bool Measurement::setFeet(unsigned int feet) {
    this->feet = feet;
    return true;
}

bool Measurement::setInches(unsigned int inches) {
    if(inches > 12) {
        return false;
    }
    this->inches = inches;
    return true;
}

void Measurement::operator++(int) {
    bool incrementFeet = false;
    if(inches == 11) {
        setInches(0);
        incrementFeet = true;
    } else {
        setInches(getInches()+1);
    }
    if(incrementFeet) {
        setFeet(getFeet()+1);
    }
}

void Measurement::operator--(int) {
    bool decrementFeet = false;
    if(inches == 0) {
        setInches(11);
        decrementFeet = true;
    } else {
        setInches(getInches()+1);
    }
    if(decrementFeet) {
        setFeet(getFeet() - 1);
    }
}

Measurement Measurement::operator+(Measurement rhs) {
    return *this;
}

Measurement Measurement::operator-(Measurement rhs) {
    return *this;
}

ostream& operator<<(ostream& out, const Measurement& t) {
    return out;
}

bool operator==(Measurement a, Measurement b) {
    return false;
}

