
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#06>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/
 
/******************************************************
 * PizzaPi	 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * The Beach Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. 
 * Make sure the output of the program displays the number of slices in fixed point notation, rounded to one decimal place of precision. Use the built-in constant for pi (named M_PI)
 * Also: Your program should calculate and output the number of pizzas to buy for a party if each person attending is expected to eat an average of 2.5 slices.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * Get user input needed to set certain variables in formulas to cacluate the number of pizzas we need. plug these values into the formula.
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
#include <iomanip>


using namespace std;

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	const double SLICE_AREA = 14.125l;
	const double SLICES_PER_PERSON = 2.5;

	/***** DECLARATION SECTION *****/

	/***** INITIALIZATION SECTION *****/

	/***** INTRO SECTION *****/

	/***** INPUT SECTION *****/

	/***** PROCESSING SECTION *****/

	/***** OUTPUT SECTION *****/
	double diameter;
	int num_people;

	cout << fixed << setprecision(1);

	cout << "What is the diameter of the pizza in inches? ";
	cin >> diameter;

	double area = M_PI * pow((diameter/2), 2);
	double slices_per_pizza = area / SLICE_AREA;
	slices_per_pizza = (slices_per_pizza);

	cout << "How many people are coming to the party? ";
	cin >> num_people;

	double total_slices_needed = num_people * SLICES_PER_PERSON;
	int total_pizzas = ceil(total_slices_needed / slices_per_pizza);

	cout << "Each pizza has " << slices_per_pizza << " slices and you will need " << total_pizzas << " pizzas for your party." << endl;


	return 0;

}
