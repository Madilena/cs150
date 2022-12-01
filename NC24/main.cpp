//point
#include <iostream>
#include "Point.h"
#include "Point.cpp"
using namespace std;


int main() {
    unsigned int x1 = 1;
    unsigned int y1 = 2;

    Point p1(x1, y1);

    unsigned int x2 = 1;
    unsigned int y2 = 2;

    Point p2(x2, y2);
    cout << p1 << endl;

    if (p1 == p2) {
        cout << "Point objects are equal" << endl;
    } else {
        cout << "Point objects are not equal" << endl;
    }

    return 0;
}
