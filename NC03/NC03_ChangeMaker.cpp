/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#03>
 * LAST MODIFIED: 2022-09-07
 *****************************************************/
 
/******************************************************
 * ChangeMaker
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *  Write a C++ console application that determines the dollars and change to be dispensed from the register at a grocery store (think of the change machines at Vons or Albertsons).  Your program should output how many $10, $5 and $1 bills -AND- quarters, dimes, nickels and pennies should be given for an amount between 1 to 99 cents.  Use the cin operator to get the change for a value under 20 dollars. 
 *
 *
 * ****************************************************
 * ALGORITHM:
 * Injest the users' input and then split the change amount into whole dollars and cents.
 * keep resetting the dollars or cents with this logic
 *              bill_type = (dollars/10);
 *              dollars = (dollars - (10*bill_type));
 *              cout << "$currency - " << bill_type << endl;
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

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	// No constants needed in this program.
		
	/***** DECLARATION SECTION *****/	
	int dollars;
	double cents;
	int twenty, ten, five, one, quarter, dime, nickel, penny;

	/***** INITIALIZATION SECTION *****/
	// No initializations needed in this program.
	
	/***** INTRO SECTION *****/
	// No intro needed in this program.
	
	/***** INPUT SECTION *****/
	cout << "What is your change amount? $";
	cin >> dollars >> cents;
	cout << "Change:" << endl;
	
	/***** PROCESSING SECTION *****/
	if (dollars >= 20)
	{
	cout << "Try Again! We only give change for amounts less than $20!" << endl;
	return 0;	
	}
	if (dollars >= 10)
	{
		ten = (dollars/10);
		dollars = (dollars - (10*ten));
	}
	if (dollars >= 5)
	{
		five = (dollars/5);
		dollars = (dollars - (5*five));
	}
	if (dollars >= 1)
	{
		one = (dollars/1);
		dollars = (dollars - (1*one));
	}

	cents = cents * 100;
	if (cents >= 25)
	{
		quarter = (cents/25);
		cents = (cents - (25*quarter));
	}
	if (cents >= 10)
	{
		dime = (cents/10);
		cents = (cents - (10*dime));
	}
	if (cents >= 5)
	{
		nickel = (cents/5);
		cents = (cents - (5*nickel));
	}
	if (cents >= 1)
	{
		penny = (cents/1);
		cents = (cents - (1*penny));
	}
	
	/***** OUTPUT SECTION *****/
	cout << "$10 - " << ten << endl;
	cout << "$5 - " << five << endl;
	cout << "$1 - " << one << endl;
	cout << "$0.25 - " << quarter << endl;
	cout << "$0.10 - " << dime << endl;		
	cout << "$0.05 - " << nickel << endl;
	cout << "$0.01 - " << penny << endl;

	return 0;
}
