/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#13>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/

/******************************************************
 * Input Validation
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Create a set of functions that will handle input validation, so that we do not have to repetitively write the code to perform validation each time we ask the user for input from the console.  Once we have laid the groundwork for these functions, we will be able to reuse it in all future C++ projects going forward, which saves a great deal of time and code, while reducing defects (since code will have already been tested).  The functions you create should be able to handle the following user transactions with both whole number (int) and decimal values (double).
 *
 * ****************************************************
 * ALGORITHM:
 *
 * have a while loop to validate break when user selects option 4.  if user requests selection outside of range, prompt them to try again. if user selects one of the expected options, have them break out of while loop.
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

bool isNumberGreaterThanFive(int num) {
    return num >= 5;
}

bool isNumberLessThanTen(int num) {
    return num < 10;
}

bool isNumBetweenValues(int num, int greaterThan, int lessThan) {
    return num >= greaterThan && num <= lessThan;
}

bool isNumBetween1And4(int num) {
    return isNumBetweenValues(num, 1, 4);
}

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed

    /***** DECLARATION SECTION *****/
    int choice = 1;

    /***** INITIALIZATION SECTION *****/
    string menu = "********************************************************************\n";
    menu += "** **\n";
    menu += "** THE SUPER DUPER MENU **\n";
    menu += "** **\n";
    menu += "********************************************************************\n";
    menu += "** Please select from the following choices: **\n";
    menu += "** 1) Have some fun(ctions) **\n";
    menu += "** 2) Write some code **\n";
    menu += "** 3) Study for the midterm **\n";
    menu += "** 4) Exit **\n";
    menu += "********************************************************************\n";

    /***** INTRO SECTION *****/
    // no intro needed

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // get user input
    while (choice != 4) {
        cout << menu;
        cin >> choice;
        if(isNumberGreaterThanFive(choice)) {
            cout << "please try again" << endl;
        } else if(isNumBetween1And4(choice)) {
            cout << "test passes" <<endl;
            break;
        }
    }

    /***** OUTPUT SECTION *****/

    return 0;

}
