/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#05>
 * LAST MODIFIED: 2022-09-12
 *****************************************************/
 
/******************************************************
 * Restaurant Bill 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that takes in 3 menu items and displays the total based on the formula from NC03_RestaurantBill.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * get user input regarding food prices. calculate the tax, tip, and total amount using formula for tax and tip. ask the user how much they paid to cover the cost.  return change to the user and what types of bills make that change.
 *
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	const double SALES_TAX = 0.0775;
	const double TIP_TAX = 0.2;

	/***** DECLARATION SECTION *****/
	double item1, item2, item3;
	double food_total;
	double total_amount;
	long double sub_total;
	long double tip_amount;
	long double tax_amount;
	double amount_paid;
	double change;
	double cents;
	int dollars;

	/***** INITIALIZATION SECTION *****/
	int twenty=0;
	int ten=0;
	int five=0;
	int one=0;
	int quarter=0;
	int dime=0;
	int nickel=0;
	int penny=0;
	
	/***** INTRO SECTION *****/
	// no intro needed for this program.
	
	/***** INPUT SECTION *****/
	cout << "Enter the cost of item 1: $";
	cin >> item1;
	cout << "Enter the cost of item 2: $";
	cin >> item2;
	cout << "Enter the cost of item 3: $";
	cin >> item3;


	/***** PROCESSING SECTION *****/
	cout << fixed << setprecision(0);
	food_total = item1 + item2 + item3;
	tax_amount = food_total * SALES_TAX;
	sub_total = food_total + tax_amount;
	tip_amount = sub_total * TIP_TAX;	
	total_amount = sub_total + tip_amount;


	/***** OUTPUT SECTION part 0 *****/

	cout << fixed << setprecision(2);
	cout << "\nWhat was the meal charge $" << food_total << "\n" << endl;
	std::cout << "Tax (7.75%): $" << tax_amount << std::endl;
	std::cout << "Subtotal: $" << sub_total << std::endl;
	std::cout << "Tip (20%): $" << tip_amount << std::endl;
	std::cout << "Total: $" << total_amount << "\n" << std::endl;
	cout << "What was your amount paid? $";
	cin >> amount_paid;
	change = amount_paid - total_amount;
	cout << "Change is $" << change << endl;

	dollars = change;
	cents = change - dollars;
	
	/***** PROCESSING SECTION *****/
	if (dollars >= 20)
	{
		twenty = (dollars/20);
		dollars = (dollars - (20*twenty));
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
	
	/***** OUTPUT SECTION part 1 ****/
	cout << "$10 - " << ten << endl;
	cout << "$5 - " << five << endl;
	cout << "$1 - " << one << endl;
	cout << "$0.25 - " << quarter << endl;
	cout << "$0.10 - " << dime << endl;		
	cout << "$0.05 - " << nickel << endl;
	cout << "$0.01 - " << penny << endl;

	return 0;

}
