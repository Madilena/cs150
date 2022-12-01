//point
#include <iostream>
#include "Point.h"
#include "Point.cpp"
#include "Line.h"
#include "Line.cpp"
using namespace std;


int main() {

    Line l1 = Line(1, 1, 4, 4);

    Point p1 = Point();
    unsigned int x2 = 0;
    unsigned int y2 = 4;

    Point p2(x2, y2);

    Line l2 = Line(p1, p2);

    cout << p1 << endl;
    cout << p2 << endl;

    cout << l1 << endl;
    cout << l2 << endl;

    if (p1 == p2) {
        cout << "Point objects are equal" << endl;
    } else {
        cout << "Point objects are not equal" << endl;
    }

    float d = p1.distanceTo(p2);
    cout << "distance between points p1 and p2: " << d << endl;

    return 0;
}
