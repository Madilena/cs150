
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#08>
 * LAST MODIFIED: 2022-09-19
 *****************************************************/
 
/******************************************************
 * Height  Estimation
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Write a program that takes as input the gender of the child, the height of the mother in inches and the height of the father in inches. Output the estimated adult height of the child in inches.  Convert this to feet, and inches, ex. 63 inches = 5 feet 3 inches.
 *
 * ****************************************************
 * ALGORITHM:
 * Hmale-child = ((Hmother * 13/12) + Hfather ) / 2
 * Hfemale-child = ((Hfather * 12/13) + Hmother ) / 2
 * Take in user format, set those values to variables for above formula.  Convert the total inches into imperial units.
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
	//no constants needed for this program.
	
	/***** DECLARATION SECTION *****/

	int mother_height;
	int father_height;
	string child_gender;
	double height_ratio;
	int child_height_total_inches=0;
	int child_height_feet;
	int child_height_inches;

	double child_height_feet_tmp;
	
	/***** INITIALIZATION SECTION *****/
	/***** INTRO SECTION *****/
	cout << "This program will calculate the height of a child based on their biological sex and the height of both their mother and father" << endl;

	/***** INPUT SECTION *****/
	cout << "Please enter the biological sex of the child [Ex. m, f, male, female]: " << endl;
	cin >> child_gender;
	cout << "Please enter the height of the child's mother: " << endl;
	cin >> mother_height;
	cout << "Please enter the height of the child's father: " << endl;
	cin >> father_height;

	/***** PROCESSING SECTION *****/
	if (child_gender == "m" || child_gender == "male"){
		child_height_total_inches = ((mother_height * 13/12) + father_height) / 2;
			
	} else if (child_gender == "f" || child_gender == "female"){
		child_height_total_inches = ((father_height * 12/13) + mother_height) / 2;
	} 
	else {
		cout << "Please submit only male or female for child's gender\n";
		return 1;
	};
	
	child_height_feet_tmp = child_height_total_inches/12;
	child_height_feet = child_height_feet_tmp;
	child_height_inches = child_height_total_inches - (child_height_feet * 12);
	
	/***** OUTPUT SECTION *****/
	cout << "The calculated height of the child is " << child_height_feet << " feet " << " and " << child_height_inches << " inches" << endl;   
	return 0;

}
