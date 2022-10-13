

/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#11>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * Funnel
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
he Funnel: Write a C++ program that produces the following output, which contains 6 lines of repeated characters \, !, and /.  Write a table that lists the number of each character on each line, then write the C++ code, using nested for loops, to produce the figure below.

 *
 * ****************************************************
 * ALGORITHM:
 * use nested loops to create funnel.  outer loop controls the amount of rows.  inner loops determine the characters on each line.
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
    const int LINES = 6;
    const int MAX_CHARACTERS = 40;

    //lines would be 6. length would be 40
    // lines would be 3. length would b 
    /***** DECLARATION SECTION *****/
    // no declarations needed

    /***** INITIALIZATION SECTION *****/
    // no initializations needed

    /***** INTRO SECTION *****/
    // no intro needed

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // no processing needed

    /***** OUTPUT SECTION *****/
    string t = "****************************************";
    string b = "****************";
    cout << "6 lines length is " << t.length() << endl;

    cout << "3 lines length is " << b.length() << endl;
    for (int l =0; l < LINES; l++) {
        // increase front fun
        // nel by 2 each iteration
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
