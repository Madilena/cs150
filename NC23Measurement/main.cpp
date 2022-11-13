#include <iostream>
#include "Measurement.h"
#include "Measurement.cpp"


int main() {
    cout << "Create a measurement m1 with 5 feet and 18 inches" << endl;
    Measurement m1(5, 18);
    Measurement m2 = m1;
    cout << "m1: Feet=" << m1.getFeet() << " Inches=" << m1.getInches() << endl;
    cout << "m2: Feet=" << m2.getFeet() << " Inches=" << m2.getInches() << endl;

    if (m1 == m2) {
        cout << "Measurement objects are equal" << endl;
    } else {
        cout << "Measurement objects are NOT equal" << endl;
    }

    cout << "Postfix increment m1 and display to console" << endl;
    m1++;
    cout << "m1: Feet=" << m1.getFeet() << " Inches=" << m1.getInches() << endl;

    cout << "Instantiate m3 = m1 + m2" << endl;
    Measurement dupm1 = m1;
    dupm1+m2;
    Measurement m3 = m1;
    cout << "m3: Feet=" << m3.getFeet() << " Inches=" << m3.getInches() << endl;
}
