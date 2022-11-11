/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#21>
 * LAST MODIFIED: 2022-11-06
 *****************************************************/

/******************************************************
 * Weather Observations
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * In this assignment, we will be declaring a structure (struct) to record weather observations.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * set the struct and pass it as a parameter to a function that will cout struct fields
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

const struct WxObservation {
    string date = "1/25/2022";
    string time = "11:00 PDT";
    string zipcode  = "92056";
    int temperature = 75;
    int humidity = 51;
    double visibility = 7.0;
};

void displayWeatherObservation(const WxObservation &wo) {

    cout << "On " << wo.date <<  " at " << wo.time << ", zipcode " << wo.zipcode << " experienced a temperature of " << wo.temperature << ", humidity " << wo.humidity << " and visibility of " << wo.visibility << " miles " << endl;
}

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constnts

    /***** DECLARATION SECTION *****/
    // no declarations

    /***** INITIALIZATION SECTION *****/
    // no initializations

    /***** INTRO SECTION *****/
    // no intros

    /***** INPUT SECTION *****/
    //  no inputs

    /***** PROCESSING SECTION *****/
    WxObservation *pwo = nullptr;
    WxObservation w;
    pwo = &w;

    /***** OUTPUT SECTION *****/
    displayWeatherObservation(w);
    return 0;
}
