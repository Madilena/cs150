

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
void printTriangle() {
    const int LENGTH = 6;

    for (int i=0; i < LENGTH; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    /***** DECLARATION SECTION *****/
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    printTriangle();
    return 0;

}
