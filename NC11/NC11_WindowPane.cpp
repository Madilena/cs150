

/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#11>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * Window Pane
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Write a C++ program that produces the following figure as output.  Use nested for loops to print the repeated parts of the figure.  Once you get it to work, prompt the user to enter the size of the window, which will control how many panes are displayed.
 *
 * ****************************************************
 * ALGORITHM:
 * use nested loops to control the number of columns and rows of window panes. the number of rows will be the outer loop.  the number of columns will be the innter loop.
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
    const int VERTICAL_SIZE = 3;
    cout << "Welcome to the window designer" << endl;

    /***** DECLARATION SECTION *****/
    int size;
    int num_of_vertical_rows;

    /***** INITIALIZATION SECTION *****/
    // no initialization needed for program.

    /***** INTRO SECTION *****/
    // no intro needed for program.

    /***** INPUT SECTION *****/
    // no input needed for program.

    /***** PROCESSING SECTION *****/
    // no processing needed for program.

    /***** OUTPUT SECTION *****/
    cout << "Enter size of windows: " ;
    cin >> size;
    cout << "Enter how many vertical rows you want: ";
    cin >> num_of_vertical_rows;
    for (int r = 0; r < num_of_vertical_rows; r++) {
        for (int i = 0; i < size; i++) {
            cout << "+===";

        }
        cout << "+" << endl;
        for (int v = 0; v < VERTICAL_SIZE; v++) {
            for (int i = 0; i < size; i++) {

                cout << "|   ";
            }

            cout << "|" << endl;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << "+===";

    }
    return 0;

}
