/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#11>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * Average Rainfall
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that uses nested loops and input validation loops to collect data and calculate the average rainfall over a period of years.
 * ****************************************************
 * ALGORITHM:
 * loop through each month and get user to submit value for the months rainfall.  use while loops to handle when the user does not submit valid data, and have the while loops break when the data is valid.  with each month iteration add to the total rainfall, like this: total_rainfall += month_val;
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
    const string JANUARY = "January";
    const string FEBRUARY = "February";
    const string MARCH = "March";
    const string APRIL = "April";
    const string MAY = "May";
    const string JUNE = "June";
    const string JULY = "July";
    const string AUGUST = "August";
    const string SEPTEMBER = "September";
    const string OCTOBER = "October";
    const string NOVEMBER = "November";
    const string DECEMBER = "December";

    /***** DECLARATION SECTION *****/
    double total_rainfall;
    int month_num;
    int num_of_years = 1;
    int total_num_of_months;
    double avg_rainfall;
    string month;

    /***** INITIALIZATION SECTION *****/
    string greeting = "Welcome new member!";

    /***** INTRO SECTION *****/
    cout << "Welcome to the average rainfall calculator." << endl;
    cout << "How many years would you like to calculate your average rainfall for? ";
    cin >> num_of_years;
    while (num_of_years < 1) {
        cout << "Invalid entry, enter a number greater than 1" << endl ;
        cout << "How many years would you like to calculate your average rainfall for? ";
        cin >> num_of_years;
    }
    total_num_of_months = num_of_years * 12;

    /***** INPUT SECTION *****/
    // no input required for this program.

    /***** PROCESSING SECTION *****/
    for (int i = 0; i < num_of_years; i++) {
        for (int i = 1; i <= 12 ; i++) {

            switch (i)
            {
            case 1 :
                month = JANUARY;
                break;
            case 2 :
                month = FEBRUARY;
                break;
            case 3 :
                month = MARCH;
                break;
            case 4 :
                month = APRIL;
                break;
            case 5 :
                month = MAY;
                break;
            case 6 :
                month = JUNE;
                break;
            case 7 :
                month = JULY;
                break;
            case 8 :
                month = AUGUST;
                break;
            case 9 :
                month = SEPTEMBER;
                break;
            case 10 :
                month = OCTOBER;
                break;
            case 11 :
                month = NOVEMBER;
                break;
            case 12 :
                month = DECEMBER;
                break;
            default :
                cout << "Not a valid month.\n";
                break;
            }

            double month_val = 0;
            cout << "Enter rainfall in inches for " << month << "? ";
            cin >> month_val;
            while (month_val < 0) {
                cout << "Invalid entry, you must enter a value greater than or equal to 0." << endl;
                cout << "Enter rainfall in inches for " << month << "? ";
                cin >> month_val;
            }
            total_rainfall += month_val;
        }
    }
    avg_rainfall = total_rainfall / total_num_of_months;

    /***** OUTPUT SECTION *****/
    cout << "Your average rainfall is " << avg_rainfall << " inches for " << total_num_of_months << " months for a total of " << total_rainfall << " inches of rain.";

    return 0;
}
