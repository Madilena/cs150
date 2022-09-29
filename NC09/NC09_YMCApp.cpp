
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#09>
 * LAST MODIFIED: 2022-09-26
 *****************************************************/

/******************************************************
 * YMCApp
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Write a C++ console application providing the functionality for a user to enroll in a membership at the Joe and Mary Mottino Family YMCA (Links to an external site.) in Oceanside, CA.
 *
 * ****************************************************
 * ALGORITHM:
 * define variables for monthly fees and membership plans. use a switch statement to set the variables for monthly fee and the membership plan. run calculation for total cost (monthly cost times how many months for membership + joiner fee, if there is one).
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
    const string FAMILY_I_PLAN = "Family I (1 adult and children 25 and under)";
    const string ADULT_PLAN = "Adult (ages 26 - 64)";
    const string DUAL_ADULT_PLAN = "Dual Adult (2 adults at the same address)";
    const string FAMILY_II_PLAN = "Adult (ages 26 - 64)";
    const string TEEN_PLAN = "Teen/Young Adult (ages 13 -25)";
    const string SENIOR_PLAN = "Senior (Agest 65+)";

    const double FAMILY_I_RATE = 75.00;
    const double ADULT_RATE = 54.00;
    const double DUAL_ADULT_RATE = 84.00;
    const double FAMILY_II_RATE = 95.00;
    const double TEEN_RATE = 37.00;
    const double SENIOR_RATE = 47.00;
    /***** DECLARATION SECTION *****/
    int choice;
    double joiner_fee;
    int num_of_months;
    double monthly_rate;
    string membership_plan;
    double total_cost;
    string new_member;

    /***** INITIALIZATION SECTION *****/
    string greeting = "Welcome new member!";

    /***** INTRO SECTION *****/
    cout << "Welcome to the YMCA Joe and Mary Mottino Family Center" << endl;
    cout << "Please choose your membership option:" << endl;
    cout << "1 - " << FAMILY_I_PLAN << endl;
    cout << "2 - " << ADULT_PLAN << endl;
    cout << "3 - " << DUAL_ADULT_PLAN << endl;
    cout << "4 - " << FAMILY_II_PLAN << endl;
    cout << "5 - " << TEEN_PLAN << endl;
    cout << "6 - " << SENIOR_PLAN << endl;

    /***** INPUT SECTION *****/
    cout << "Choose: ";
    cin >> choice;

    /***** PROCESSING SECTION *****/
    switch (choice)
    {
    case 1 :
        monthly_rate = FAMILY_I_RATE;
        joiner_fee = 60.00;
        membership_plan = FAMILY_I_PLAN;
        break;
    case 2 :
        monthly_rate = ADULT_RATE;
        joiner_fee = 60.00;
        membership_plan = ADULT_PLAN;
        break;
    case 3 :
        monthly_rate = DUAL_ADULT_RATE;
        joiner_fee = 60.00;
        membership_plan = DUAL_ADULT_PLAN;
        break;
    case 4 :
        monthly_rate = FAMILY_II_RATE;
        joiner_fee = 60.00;
        membership_plan = FAMILY_II_PLAN;
        break;
    case 5:
        monthly_rate = TEEN_RATE;
        joiner_fee = 30.00;
        membership_plan = TEEN_PLAN;
        break;
    case 6:
        monthly_rate = SENIOR_RATE;
        joiner_fee = 60.00;
        membership_plan = SENIOR_PLAN;
        break;

    default :
        cout << "Not a valid membership option.\n";
        break;
    }

    /***** OUTPUT SECTION *****/
    cout << "How many months would you like to purchase? ";
    cin >> num_of_months ;
    cout << "Are you a new member? (y/n) ";
    cin >> new_member ;

    if (new_member == "n" || new_member == "no") {
        joiner_fee=0;
        greeting = "\nYou are a returning member, welcome back.";
    }

    total_cost = num_of_months * monthly_rate + joiner_fee;
    cout << "You chose the " << membership_plan << " for " << num_of_months << " month(s).";
    cout << greeting << endl;
    cout << "Your total cost is $" << total_cost << endl;

    return 0;


}
