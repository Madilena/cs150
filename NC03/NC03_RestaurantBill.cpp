
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#03>
 * LAST MODIFIED: 2022-09-05
 *****************************************************/
 
/******************************************************
 * Restaurant Bill 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
 *
 * ****************************************************
 * ALGORITHM:
 * Use the cin operator to consume user input.  set the sales tax and tip percentage as a constant.  
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
	const float sales_tax = 0.0775;
	const float tip_tax = 0.20;

	/***** DECLARATION SECTION *****/
	float total_amount;
	float sub_total;
	float tip_amount;
	float meal_charge;	
	float tax_amount;

	/***** INITIALIZATION SECTION *****/
	// No initialization needed for this program.
	
	//***** INTRO SECTION ****/
	// No intro needed for this program.
	
	/***** INPUT SECTION *****/
	std::cout << "please enter the meal charge: " << std::endl;
	std::cin >> meal_charge;

	/***** PROCESSING SECTION *****/
	tax_amount = meal_charge * sales_tax;
	sub_total = meal_charge + tax_amount;
	tip_amount = sub_total * tip_tax;	
	total_amount = sub_total + tip_amount;

	/***** OUTPUT SECTION *****/
	std::cout << "Tax (7.75%): $" << tax_amount << std::endl;
	std::cout << "Subtotal: $" << sub_total << std::endl;
	std::cout << "Tip (20%): $" << tip_amount << std::endl;
	std::cout << "Total: $" << total_amount << std::endl;
	return 0;

}
