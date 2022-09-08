
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#04>
 * LAST MODIFIED: 2022-09-07
 *****************************************************/
 
/******************************************************
 * Distance per tank of gas 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway.
 *
 * ****************************************************
 * ALGORITHM:
 *  The following formula can be used to calculate the distance:  Distance = Number of Gallons X Average Miles per Gallon
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
	// no constants needed in this program.
	
	/***** DECLARATION SECTION *****/
	double city_range;
	double city_mpg;
	double highway_mpg;
	double price_per_gallon;
	double gas_tank_capacity;
	double highway_range;
	double gas_tank_fill_cost;

	/***** INITIALIZATION SECTION *****/
	// no initializations needed for this program.
	
	/***** INTRO SECTION *****/
	cout << "Welcome to the Gasomatic fuel calculator." << endl;

	/***** INPUT SECTION *****/
	cout << "Gas tank capacity in gallons: ";
	cin >> gas_tank_capacity;
	cout << "City mpg:  ";
	cin >> city_mpg;
	cout << "Highway mpg: "; 
	cin >> highway_mpg;
	cout << "Price per gallon: $";
	cin >> price_per_gallon;

	/***** PROCESSING SECTION *****/
 	city_range = gas_tank_capacity * city_mpg;
	highway_range = gas_tank_capacity * highway_mpg;
	gas_tank_fill_cost = gas_tank_capacity * price_per_gallon;

	/***** OUTPUT SECTION *****/
	cout << "Gas tank capacity in gallons: " << gas_tank_capacity << endl;
	cout << "City mpg: " << city_mpg << endl;
	cout << "Highway mpg: " << highway_mpg << endl;
	cout << "Price per gallon: $" << price_per_gallon << "\n" << endl;
	cout << "Your city range is " << city_range << " miles and your highway range is " << highway_range << " miles." << endl;
	cout << "A tank of gas costs $" << gas_tank_fill_cost << endl;
	return 0;

}
