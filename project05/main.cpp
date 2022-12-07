#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;

int main() {
    // 1. Creates a Date m1 with "December" and 12 (use parameterized constructor)
    Date m1 = Date("December", 12);

    // 2. Creates a Date m2 with "January" and 1 (use default constructor)
    Date m2 = Date();

    // 3. Displays both Dates to the console
    cout << "m1: " << m1 << endl;
    cout << "m2: " << m2 << endl;

    // 4. Uses == to determine equality
    if (m1 == m2) {
        cout << "Date objects are equal" << endl;
    } else {
        cout << "Date objects are NOT equal" << endl;
    }

    if (m1 != m2) {
        cout << "Date objects are not equal" << endl;
    } else {
        cout << "Date objects are equal" << endl;
    }
    return 0;
}
