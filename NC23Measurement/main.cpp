#include <iostream>
#include "Measurement.h"
#include "Measurement.cpp"

int main() {
    cout << "Create a measurement m1 with 5 feet and 18 inches" << endl;
    Measurement m1(5, 18);
    Measurement m2 = m1;
    cout << "m1: " << m1 << endl;
    cout << "m2: " << m2 << endl;

}
