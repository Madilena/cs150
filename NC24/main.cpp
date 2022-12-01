//point
#include <iostream>
#include "Point.h"
#include "Point.cpp"
#include "Line.h"
#include "Line.cpp"
using namespace std;


int main() {

    // 1. Creates a Line l1 with 4 parameterized inputs of 1, 1, 4, 4.
    Line l1 = Line(1, 1, 4, 4);

    // 2. Create Point p1 and p2.  p1 should be the default and p2 should be parameterized 0,4.

    Point p1 = Point();

    unsigned int x2 = 0;
    unsigned int y2 = 4;
    Point p2(x2, y2);

    // 3.  Creates a Line l2  with p1 and p2.
    Line l2 = Line(p1, p2);

    // 4. Display both points to console
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    // 5. Displays both lines to the console
    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;

    // 6. Uses == to determine equality
    if (p1 == p2) {
        cout << "Point objects are equal" << endl;
    } else {
        cout << "Point objects are not equal" << endl;
    }

    if (l1 == l2) {
        cout << "Line objects are equal" << endl;
    } else {
        cout << "Line objects are not equal" << endl;
    }

    // 7. Show the distance of p1 to p2.
    float d = p1.distanceTo(p2);
    cout << "distance between points p1 and p2: " << d << endl;

    // 8. Show the length of line2
    float len2 = l2.length();
    cout << "lenght of line2: " << len2 << endl;

    // 9. Assign l1 to l2 
    l2 = l1;

    // 10. Use == to determine equality
    if (l1 == l2) {
        cout << "Line objects are equal" << endl;
    } else {
        cout << "Line objects are not equal" << endl;
    }

    return 0;
}

