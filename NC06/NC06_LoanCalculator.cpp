/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#06>
 * LAST MODIFIED: 2022-09-13
 *****************************************************/
 
/******************************************************
 * Loan Calculator
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Given the monthly loan payment formula, Write a program that asks for these values (annual interest rate, number of payments, loan amount) and displays a report to the user
 *
 *
 * ****************************************************
 * ALGORITHM:
 * Ask the user to give us values regarding their loan.  Put these values in the loan payment formula
 *
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>


using namespace std;

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	//no constants needed in this program.
	
	/***** DECLARATION SECTION *****/
	double r; //monthly interest
	double loan_amount; //our loan amount
	double annual_interest_rate;
	int number_of_payments;

	double monthly_payment;
	double numerator;
	double denominator;
	double amount_paid_back;
	double total_interest_due;
	double interest_paid;

	/***** INITIALIZATION SECTION *****/
	double n = 36; //length of loan
	
	/***** INTRO SECTION *****/
	// no intro needed in this program.
	
	/***** INPUT SECTION *****/
	// no input needed in this program
	
	/***** PROCESSING SECTION *****/
	// some processing needs to happen after user input below
	
	/***** OUTPUT SECTION *****/
	cout << fixed << setprecision(2);

	cout << "Loan amount: $";
	cin >> loan_amount;

	cout << "Annual Interest Rate: ";
	cin >> annual_interest_rate;
	total_interest_due = annual_interest_rate * loan_amount;
	
	r = (annual_interest_rate/100)/12;
	cout << "Monthly Interest Rate: " << r << endl;

	cout << "Number of payments: ";
	cin >> number_of_payments;

	numerator = (pow((1 + r), n) - 1);
	denominator = (r * (pow((1+r), n)));
	monthly_payment = loan_amount / (numerator/denominator);
	
	cout << "Monthly payment $" << monthly_payment << endl; 

	amount_paid_back = number_of_payments * monthly_payment;
	cout << "Amount Paid Back: " << amount_paid_back << endl;

	interest_paid = amount_paid_back - loan_amount; 
	cout << "Interest Paid: " << interest_paid << endl;
	
	
	return 0;

}
