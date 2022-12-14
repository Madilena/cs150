
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

double successByAgeGroup(int age) {
    double percent = 0;
    string ageRange = "";
    switch (age) {
    case 1:
        ageRange = "age <= 17";
        percent =  71.4;
        break;
    case 2:
        ageRange = "18 <= age <= 20";
        percent = 60.8;
        break;
    case 3:
        ageRange = "21 <= age <= 24";
        percent = 54.6;
        break;
    case 4:
        ageRange = "25 <= age && age <= 29";
        percent = 57.9;
        break;
    case 5:
        ageRange = "30 <= age <= 34";
        percent = 62.5;
        break;
    case 6:
        ageRange = "35<= age <= 39";
        percent = 61.7;
        break;
    case 7:
        ageRange = "40 <= age <= 44";
        percent = 47.1;
        break;
    case 8:
        ageRange = "45 <= age <= 54";
        percent = 65.9;
        break;
    case 9:
        ageRange = "55 <= age <= 64";
        percent = 60.7;
        break;
    case 10:
        ageRange = "65 <= age";
        percent = 33.3;
        break;
    default:
        ageRange = "not valid";
        percent = 0;
        break;

    }
    cout <<"The student success for " << ageRange << " age is " << percent << endl;
    return percent;
}

double successByEthnicity(int eth) {
    string ethnicity = "";
    double percent = 0;
    switch(eth) {
    case 1:
        ethnicity = "Native American / Native Alaskan";
        percent = 66.7;
        break;
    case 2:
        ethnicity = "Asian";
        percent = 67.2;
        break;
    case 3:
        ethnicity = "Black / African American";
        percent =  39.2;
        break;
    case 4:
        ethnicity = "Hispanic";
        percent = 48.5;
        break;
    case 5:
        ethnicity = "Pacific Islander";
        percent = 20.0;
        break;
    case 6:
        ethnicity = "2 or more races";
        percent = 58.7;
        break;
    case 7:
        ethnicity = "white";
        percent = 62.8;
        break;
    case 8:
        ethnicity = "unknown";
        percent = 53.0;
        break;
    default:
        percent =  0;
        break;
    }
    cout << "The student success for " << ethnicity << " ethnicity is " << percent <<endl;
    return percent;
}

double successByGender(int gender) {
    string gen = "";
    double percent = 0;
    switch (gender) {
    case 1:
        gen = "Male";
        percent= 58.4;
        break;
    case 2:
        gen = "Female";
        percent = 70.1;
        break;
    case 3:
        gen = "Unknown";
        percent = 60.6;
        break;
    default:
        percent =  0;
        break;
    }
    cout << "The student success for " << gen << " gender is " << percent << endl;
    return percent;
}


int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed for this program

    /***** DECLARATION SECTION *****/

    /***** INITIALIZATION SECTION *****/
    int dashChoice = 0;
    int ethnicChoice = 0;
    int genderChoice = 0;
    int ageChoice = 0;

    /***** INTRO SECTION *****/
    cout << "Welcome to the MiraCosta Data Dashboard and the CS Success Dashboard." << endl;

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // no processing needed

    /***** OUTPUT SECTION *****/
    while (dashChoice != 7) {
        dashChoice = dashboardMenu();
        if (dashChoice == 1) {
            ethnicChoice = ethnicityMenu();
            successByEthnicity(ethnicChoice);
        } else if(dashChoice == 2) {
            genderChoice = genderMenu();
            successByGender(genderChoice);
        } else if(dashChoice == 3) {
            ageChoice = ageInputMenu();
            successByAgeGroup(ageChoice);
        } else if(dashChoice == 4) {
            cout << "Age Not Entered" << endl;
        } else if(dashChoice == 5) {
            cout << "Ethnicity not entered" << endl;
        } else if(dashChoice == 6) {
            cout << "Gender not entered" << endl;
        }
    }
    return 0;
}
