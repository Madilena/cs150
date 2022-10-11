
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#14>
 * LAST MODIFIED: 2022-10-10
 *****************************************************/

/******************************************************
 * CS Dashboard
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Create a cs success dashboard
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

int dashboardMenu() {
    int choice = 0;
    cout << "Please enter your following choice: " << endl;
    cout << "1 - Ethnicity Choice" << endl;
    cout << "2 - Gender Choice" << endl;
    cout << "3 - Age Input" << endl;
    cout << "4 - Success by Age Group" << endl;
    cout << "5 - Success by Ethnicity" << endl;
    cout << "6 - Success by Gender" << endl;
    cout << "7 - Quit" << endl;
    cin >> choice;
    if (choice == 7) {
        exit 0;
    }
    return choice;
}

int ethnicityMenu() {
    int choice = 0;
    cout << "Ethnicity:" << endl;
    cout << "1 - American Indian/Alaska Native" << endl;
    cout << "2 - Asian" << endl;
    cout << "3 - Black/African American" << endl;
    cout << "4 - Hispanic" << endl;
    cout << "5 - Pacific Islander" << endl;
    cout << "6 - Two or More Races" << endl;
    cout << "7 - White" << endl;
    cout << "8 - Unknown" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    return choice;
}

int genderMenu() {
    int choice = 0;
    cout << "Gender:" <<endl;
    cout << "1 - Male" << endl;
    cout << "2 - Female" << endl;
    cout << "3 - Unknwon" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    return choice;
}

int ageInputMenu() {
    int choice = 0;
    cout << "Age:" << endl;
    cout << "1) 17 and under" << endl;
    cout << "2) 18 - 20" << endl;
    cout << "3) 21 - 24" << endl;
    cout << "4) 25 - 29" << endl;
    cout << "5) 30 - 34" << endl;
    cout << "6) 35 - 39" << endl;
    cout << "7) 40 - 44" << endl;
    cout << "8) 45 - 54" << endl;
    cout << "9) 55 - 64" << endl;
    cout << "10) 65 and older" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    return choice;
}


int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed for this program

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    int dashChoice = 0;
    int genderChoice = 0;
    int ageChoice = 0;

    /***** INTRO SECTION *****/
    cout << "Welcome to the MiraCosta Data Dashboard and the CS Success Dashboard." << endl;

    /***** INPUT SECTION *****/

    /***** PROCESSING SECTION *****/

    /***** OUTPUT SECTION *****/

    dashChoice = dashboardMenu();

    return 0;

}
