
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#01>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/

/******************************************************
 * PROJECT NAME
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
 *
 * ****************************************************
 * ALGORITHM:
 *
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

void mystery(string a, string& b) {
    a.erase(0, 1);
    b += a[0];
    b.insert(3, "FOO");
}
int main(int argc, char *argv[])
{
    string a = "marty";
    string b = "strepp";
    mystery(a, b);
    cout << a << " " << b << endl;
    return 0;

}
