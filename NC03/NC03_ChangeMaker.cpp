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
	cout << "What is your change amount?";
	cin >> dollars >> cents;
	cout << "Change:" << endl;
	
	/***** PROCESSING SECTION *****/
	// No processing needed in this program.
	
	/***** OUTPUT SECTION *****/
	if (dollars == 20)
	{
		twenty = (dollars/20);
		dollars = (dollars - (20*twenty));
		if (twenty > 0) 
		{
		cout << "$20 - " << twenty << endl;
		}
	}
	if (dollars >= 10)
	{
		ten = (dollars/10);
		dollars = (dollars - (10*ten));
		cout << "$10 - " << ten << endl;
	}
	if (dollars >= 5)
	{
		five = (dollars/5);
		dollars = (dollars - (5*five));
		cout << "$5 - " << five << endl;
	}
	if (dollars >= 1)
	{
		one = (dollars/1);
		dollars = (dollars - (1*one));
		cout << "$1 - " << one << endl;
	}

	cents = cents * 100;
	if (cents >= 25)
	{
		quarter = (cents/25);
		cents = (cents - (25*quarter));
		cout << "$0.25 - " << quarter << endl;
	}
	if (cents >= 10)
	{
		dime = (cents/10);
		cents = (cents - (10*dime));
		cout << "$0.10 - " << dime << endl;
	}
	if (cents >= 5)
	{
		nickel = (cents/5);
		cents = (cents - (5*nickel));
		cout << "$0.05 - " << nickel << endl;
	}
	if (cents >= 1)
	{
		penny = (cents/1);
		cents = (cents - (1*penny));
		cout << "$0.01 - " << penny << endl;
	}

	return 0;
}
