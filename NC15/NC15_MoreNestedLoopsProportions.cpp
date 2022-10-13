

/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#11>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * More Nested Loops Proportions
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
he Funnel: Write a C++ program that produces the following output, which contains 6 lines of repeated characters \, !, and /.  Write a table that lists the number of each character on each line, then write the C++ code, using nested for loops, to produce the figure below.

 * ****************************************************
 * ALGORITHM:
 * use nested loops to create the image.  have an outer loop to iterate through rows. have inner loops to iterate through designs.
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
    // no constants needed in this program.

    /***** DECLARATION SECTION *****/
    int LINES = 6;
    int MAX_CHARACTERS = 40;

    /***** INITIALIZATION SECTION *****/
    // no initializations needed

    /***** INTRO SECTION *****/
    // no intro needed

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // no processing needed

    /***** OUTPUT SECTION *****/
    cout << "How many lines do you want? ";
    cin >> LINES;

    if (LINES == 3) {
        MAX_CHARACTERS = 16;
    } else if(LINES == 6) {
        MAX_CHARACTERS = 40;
    }

    for (int l =0; l < LINES; l++) {
        for (int i = 0; i < (MAX_CHARACTERS/2 - ((l)*4)); i++) {
            cout << "/";
        }

        for (int i=0; i < (8)*l; i++) {
            cout << "*";
        }

        for (int i = 0; i < (MAX_CHARACTERS/2 - ((l)*4)); i++) {
            cout << "\\";
        }
        cout << endl;
    }
    return 0;

}
