#include <iostream>
#include "Month.h"
#include "Month.cpp"
using namespace std;


int main() {
    // 1. Creates a Month m1 with "December" and 12 (use parameterized constructor)
    Month m1 = Month("December", 12);

    // 2. Creates a Month m2 with "January" and 1 (use default constructor)
    Month m2 = Month();

    // 3. Displays both months to the console
    cout << "m1: " << m1 << endl;
    cout << "m2: " << m2 << endl;

    // 4. Uses == to determine equality
    if (m1 == m2) {
        cout << "Month objects are equal" << endl;
    } else {
        cout << "Month objects are NOT equal" << endl;
    }

    // 5. Prefix increment m1 while displaying to console
    m1++;
    cout << "m1 incremented: " << m1 << endl;

    // 6. Prefix decrement m2 while displaying to console
    m2--;
    cout << "m2 decremented: " << m2 << endl;

    // 7. Uses == to determine equality
    if (m1 == m2) {
        cout << "Month objects are equal" << endl;
    } else {
        cout << "Month objects are NOT equal" << endl;
    }

    // 8. Assigns m1 = m2
    m1 = m2;

    // 9. Displays both months to the console
    cout << "m1 after assignment: " << m1 << endl;
    cout << "m2: " << m2 << endl;

    // 10. Uses == to determine equality
    if (m1 == m2) {
        cout << "Month objects are equal" << endl;
    } else {
        cout << "Month objects are NOT equal" << endl;
    }

    return 0;
}

