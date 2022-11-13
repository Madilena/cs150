//time
#include <iostream>
#include "Time.h"
#include "Time.cpp"
using namespace std;


int main() {
    cout << "Hello World!\n";
    unsigned int hr1 = 11;
    unsigned int min1 = 59;
    Meridiem m1 = PM;

    cout << "Create a Time t1 at 11:59 PM (use parameterized constructor)" << endl;
    Time t1(hr1, min1, m1);
    cout << t1 << endl;
    cout << "Create a Time t2 at midnight (use default constructor)" << endl;
    Time t2 = Time();
    cout << t2 << endl;
    if (t1 == t2) {
        cout << "(Expected)Times objects are equal" << endl;
    } else {
        cout << "Times objects are NOT equal" << endl;
    }

    cout << "Postfix increment t1 and display to console" << endl;
    t1++;
    cout << t1 << endl;
    if (t1 == t2) {
        cout << "(Expected)Times objects are equal" << endl;
    } else {
        cout << "Times objects are NOT equal" << endl;
    }

    cout << "Postfix increment t2 and display to console" << endl;
    t2++;
    cout << t2 << endl;
    if (t1 == t2) {
        cout << "Times objects are equal" << endl;
    } else {
        cout << "(Expected)Times objects are NOT equal" << endl;
    }
    
   
    return 0;
}
