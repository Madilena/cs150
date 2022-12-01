//point
#include <iostream>
#include "Point.h"
#include "Point.cpp"
using namespace std;


int main() {

    Point p1 = Point();

    unsigned int x2 = 4;
    unsigned int y2 = 4;

    Point p2(x2, y2);
    cout << p1 << endl;

    if (p1 == p2) {
        cout << "Point objects are equal" << endl;
    } else {
        cout << "Point objects are not equal" << endl;
    }

    float d = p1.distanceTo(p2);
    cout << "distance between points p1 and p2: " << d << endl;

    return 0;
}
