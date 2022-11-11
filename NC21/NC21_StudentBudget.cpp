/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#21>
 * LAST MODIFIED: 2022-11-06
 *****************************************************/

/******************************************************
 * Student Budget
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that creates a MonthlyBudget structure designed to hold each of these expense categories.
 *
 * ****************************************************
 * ALGORITHM:
 *  assign each user response to a variable in a struct. pass this struct as an argument to a function that compares expected budget to user budget.
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

const struct Budget {
    double housing = 500.0;
    double utilities = 150.0;
    double household_expenses = 65.0;
    double transportation = 50.0;
    double food = 250.0;
    double medical = 30.0;
    double insurance = 100.0;
    double entertainment = 150.0;
    double clothing = 75.0;
    double misc = 50.0;
};

void budgetDiffs (const Budget &eb, Budget &ab) {
    cout << "housing diff " << eb.housing - ab.housing <<  endl;
    cout << "utilities diff " << eb.utilities - ab.utilities << endl;
    cout << "household expenses diff " << eb.household_expenses - ab.household_expenses << endl;
    cout << "transportation diff " << eb.transportation - ab.transportation << endl;
    cout << "food diff " << eb.food - ab.food << endl;
    cout << "medical diff " << eb.medical - ab.medical<< endl;
    cout << "insurance diff " << eb.insurance - ab.insurance<< endl;
    cout << "entertainment diff " << eb.entertainment - ab.entertainment << endl;
    cout << "clothing diff " << eb.clothing - ab.clothing << endl;
    cout << "misc diff " << eb.misc - ab.misc << endl;
}

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    // no constants

    /***** DECLARATION SECTION *****/

    double rhousing;
    double rutilities;
    double rhousehold_expenses;
    double rtransportation;
    double rfood;
    double rmedical;
    double rinsurance;
    double rentertainment;
    double rclothing;
    double rmisc;

    /***** INITIALIZATION SECTION *****/
    // no initializations

    /***** INTRO SECTION *****/
    // no intros

    /***** INPUT SECTION *****/
    cout << "housing?" << endl;
    cin.clear();
    cin >> rhousing;

    cout << "utilities?" << endl;
    cin.clear();
    cin >> rutilities;

    cout << "household_expenses" << endl;
    cin.clear();
    cin >> rhousehold_expenses;

    cout << "transportation?" << endl;
    cin.clear();
    cin >> rtransportation;

    cout << "food?" << endl;
    cin.clear();
    cin >> rfood;

    cout << "medical?" << endl;
    cin.clear();
    cin >> rmedical;

    cout << "insurance?" << endl;
    cin.clear();
    cin >> rinsurance;

    cout << "entertainment?" << endl;
    cin.clear();
    cin >> rentertainment;

    cout << "clothing?" << endl;
    cin.clear();
    cin>> rclothing;

    cout << "miscellaneous?" << endl;
    cin.clear();
    cin >> rmisc;

    /***** PROCESSING SECTION *****/
    Budget *pbudget = nullptr;
    Budget b;
    pbudget = &b;

    (*pbudget).housing = rhousing;
    (*pbudget).utilities = rutilities;
    (*pbudget).household_expenses = rhousehold_expenses;
    (*pbudget).transportation = rtransportation;
    (*pbudget).food = rfood;
    (*pbudget).medical = rmedical;
    (*pbudget).insurance = rinsurance;
    (*pbudget).entertainment = rentertainment;
    (*pbudget).clothing = rclothing;
    (*pbudget).misc = rmisc;

    Budget *pbudgetExpected = nullptr;
    Budget be;
    pbudgetExpected = &be;

    /***** OUTPUT SECTION *****/
    budgetDiffs(be,b);

    return 0;
}
