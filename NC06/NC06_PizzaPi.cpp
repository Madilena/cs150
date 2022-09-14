
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#01>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/
 
/******************************************************
 * PROJECT NAME 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
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
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	const double SLICE_AREA = 14.125l;
	const double SLICES_PER_PERSON = 2.5;
	/***** DECLARATION SECTION *****/
	double diameter = 10.0;
	int num_people = 4;
	double total_slices_needed = num_people * SLICES_PER_PERSON;

	double area = M_PI * pow((diameter/2), 2);
	double slices_per_pizza = area / SLICE_AREA;

	cout << fixed << setprecision(1);
	slices_per_pizza = ceil(slices_per_pizza);
	cout << "Slices:: " << slices_per_pizza << endl;
	int total_pizzas = ceil(total_slices_needed / slices_per_pizza);
	cout << "Total pizzas: " << total_pizzas;
	/***** INITIALIZATION SECTION *****/
	/***** INTRO SECTION *****/
	/***** INPUT SECTION *****/
	/***** PROCESSING SECTION *****/
	/***** OUTPUT SECTION *****/
	return 0;

}
