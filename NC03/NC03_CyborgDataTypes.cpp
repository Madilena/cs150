/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#03>
 * LAST MODIFIED: 2022-09-05
 *****************************************************/
 
/******************************************************
 * Cyborg Data Types 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a C++ program that will determine the amount of memory usted by differetn data types and disp;lay the information on the screen
 *
 * ****************************************************
 * ALGORITHM:
 * Use the sizeof operator to output the size in number of bytes of the different data types
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
	// No constants needed for this program.
	
	/***** DECLARATION SECTION *****/
	// No declarations needed for this program.
	
	/***** INITIALIZATION SECTION *****/
	// No initializations needed for this program.
	
	/***** INTRO SECTION *****/
	// No intro needed for this program.
	
	/***** INPUT SECTION *****/
	// No input needed for this program.
	
	/***** PROCESSING SECTION *****/
	// No processing needed for this program.
	
	/***** OUTPUT SECTION *****/
	std::cout << "		bool:               " << sizeof(bool) << " byte(s)" << std::endl;
	std::cout << "		char:               " << sizeof(char) << " byte(s)" << std::endl;
	std::cout << "		short:              " << sizeof(short) << " byte(s)" << std::endl;
	std::cout << "		int:                " << sizeof(int) << " byte(s)" << std::endl;
	std::cout << "		long:               " << sizeof(long) << " byte(s)" << std::endl;
	std::cout << "		long long:          " << sizeof(long long) << " byte(s)" << std::endl;
	std::cout << "		float:              " << sizeof(float) << " byte(s)" << std::endl;
	std::cout << "		double:             " << sizeof(double) << " byte(s)" << std::endl;
	std::cout << "		long double:        " << sizeof(long double) << " byte(s)" << std::endl;
	return 0;

}
