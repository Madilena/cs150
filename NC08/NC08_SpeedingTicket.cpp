
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#08>
 * LAST MODIFIED: 2022-09-21
 *****************************************************/
 
/******************************************************
 * Speeding Ticket 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that accepts a speed limit and a clocked speed and either prints a message indicating the speed was legal or prints the amount of the fine, if the speed is illegal. 
 *
 * ****************************************************
 * ALGORITHM:
 * Get user input for vehicle speed and speed limit. If vehicle speed was less than or equal to speed limit, exit program.  Else, calculate how far over the limit they were and multiply by 5 to get additional fees.  If vehicle speed is over penalty speed limit, add a penalty fee.
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
	const int PENALTY_FEE = 200;
	const int PENALTY_SPEED_MPH = 90;
	const int INITIAL_SPEED_FEE = 50;
	const int ADDITIONAL_SPEED_FEE = 5;

	/***** DECLARATION SECTION *****/
	int vehicle_speed;
	int speed_limit;
	int mph_speed_fee;
	int total_speed_ticket;
	int speed_diff;

	/***** INITIALIZATION SECTION *****/
	// no initializations for this program.

	/***** INTRO SECTION *****/
	cout << "This program will accept a clocked speed and a speed limit and will output a fine if the limit has been exceeded.\n" ;

	/***** INPUT SECTION *****/
	cout << "Please enter the clocked speed of the vehicle: ";
	cin >> vehicle_speed;
	cout << "Please enter a speed limit: ";
	cin >> speed_limit;

	/***** PROCESSING SECTION *****/
	if (vehicle_speed <= speed_limit){
		cout << "You drove within the legal speed limit.  No fine! " << endl;
		return 0;
	}
	speed_diff = vehicle_speed - speed_limit;
	mph_speed_fee = speed_diff * ADDITIONAL_SPEED_FEE;

	if (vehicle_speed > PENALTY_SPEED_MPH){
		total_speed_ticket = INITIAL_SPEED_FEE + mph_speed_fee + PENALTY_FEE;
	}else {
		total_speed_ticket = INITIAL_SPEED_FEE + mph_speed_fee; 
	}

	/***** OUTPUT SECTION *****/
	cout << "Your fine is $" << total_speed_ticket << endl;
	return 0;

}
