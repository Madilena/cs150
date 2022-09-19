
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#07>
 * LAST MODIFIED: 2022-09-19
 *****************************************************/
 
/******************************************************
 * Roman Numeral Converter 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Roman Numeral Converter  Write a program that asks the user to enter a number within the range of 1 through 10.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * Have a variable to store users integer.  Have a variable to store the roman numeral equivalent. Use a decision statement to convert the users input to the appropriate roman numeral. cout the resulting conversion or give error message.
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
	const string INVALID_INPUT_RESPONSE = "Invalid Input";
	
	/***** DECLARATION SECTION *****/
	int choice;
	string roman_numeral;

	/***** INITIALIZATION SECTION *****/
	cout << "Please enter a number between 1 and 10: ";
	cin >> choice;

	/***** INTRO SECTION *****/
	// no input needed for this program
	
	/***** INPUT SECTION *****/
	// no input needed for this program
	
	/***** PROCESSING SECTION *****/
	switch (choice)
	{
		case 1: roman_numeral = "I";
			break;
		case 2: roman_numeral = "II";
			break;
		case 3: roman_numeral = "III";
			break;
		case 4: roman_numeral = "IV";
			break;
		case 5: roman_numeral = "V";
			break;
		case 6: roman_numeral = "VI";
			break;
		case 7: roman_numeral = "VII";
			break;
		case 8: roman_numeral = "VIII";
			break;
		case 9: roman_numeral = "IV";
			break;
		case 10: roman_numeral = "X";
			break;
		default : roman_numeral = INVALID_INPUT_RESPONSE;
	}
	/***** OUTPUT SECTION *****/
	if (roman_numeral != INVALID_INPUT_RESPONSE){ 	
		cout << "Conversion: " << roman_numeral << endl;
	} else {
		cout << INVALID_INPUT_RESPONSE << endl;
	}
	return 0;
}
