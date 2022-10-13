/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#11>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * More Nested Loops Prime Numbers 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
he Funnel: Write a C++ program that produces the following output, which contains 6 lines of repeated characters \, !, and /.  Write a table that lists the number of each character on each line, then write the C++ code, using nested for loops, to produce the figure below.

 *
 * ****************************************************
 * ALGORITHM:
 * use nested loops. outer loop iterates through number of lines.  inner loops will add designs.  we need 3 inner loops.  2 of the loops will be adding the dashes to the top corners of the square.  one loop is creating the triangle in the middle.
 * 
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed

    /***** DECLARATION SECTION *****/
    int LINES = 5;
    int MAX_CHARACTERS = 5;

    /***** INITIALIZATION SECTION *****/
    // no initializations needed

    /***** INTRO SECTION *****/
    // no intro needed

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // no processing needed

    /***** OUTPUT SECTION *****/
    int val;
    for (int l =0; l < LINES; l++) {
        for (int i = 0; i < MAX_CHARACTERS - (l); i++) {
            cout << "-";
        }

        for (int i=0; i < (l*2)+1; i++) {
            if (l==0) {
                val = 1;
            } else if (l==1) {
                val = 3;
            } else if(l ==2) {
                val = 5;
            } else if(l==3) {
                val = 7;
            } else if(l==4) {
                val = 9;
            } else {
                break;
            }
            cout << val;
        }

        for (int i = 0; i < MAX_CHARACTERS - (l); i++) {
            cout << "-";
        }
        cout << endl;
    }
    return 0;

}
