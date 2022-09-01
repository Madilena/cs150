
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#02>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/
 
/******************************************************
 * Employee Pay 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Suppose an employee gets paid every two weeks and in one year gets paid 26 times.
 * Write a program that defines variables for:  
 * A variable to hold the amount of pay the employee earns each pay period.  
 * A constant to hold the number of pay periods in a year.  Initialize the variable with 26.  
 * A variable to hold the employee’s total annual pay, which will be calculated.  The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount by the number of pay periods in a year and store the result in the variable.
 * Display the total annual pay on the screen.
 * ****************************************************
 * ALGORITHM:
 * multiply the user submitted paycheck by the number of pay periods in a year
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
	const int num_of_pay_periods = 26;

	/***** DECLARATION SECTION *****/
	double pay_period;
	double annual_pay;

	/***** INITIALIZATION SECTION *****/
	// No initialization needed for this program
	
	/***** INTRO SECTION *****/
	std::cout << "\nhello welcome to the employee annual pay calculator\n" << std::endl;

	/***** INPUT SECTION *****/
	std::cout << "please enter your paycheck amount: " << std::endl;
	std::cin >> pay_period;

	/***** PROCESSING SECTION *****/
	annual_pay = pay_period * num_of_pay_periods;

	/***** OUTPUT SECTION *****/
	std::cout << "your annual pay is $" << annual_pay << std::endl;
	return 0;

}
